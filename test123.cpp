#include <ctime>
#include <cstdlib>
#include <iostream>
#include <array>

enum CardSuit
{
	SUIT_CLUB,
	SUIT_HEART,
	SUIT_SPADE,
	SUIT_DIAMOND,
	MAX_SUITS
};

enum CardRank
{
	RANK_ACE,
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	MAX_RANK
};

struct Card
{
	CardRank rank;
	CardSuit suit;
};


void printCard(const Card &card)
{
	switch(card.rank)
	{
		case RANK_ACE:	std::cout << "A";	break;
		case RANK_2:	std::cout << "2";	break;
		case RANK_3:	std::cout << "3";	break;
		case RANK_4:	std::cout << "4";	break;
		case RANK_5:	std::cout << "5";	break;
		case RANK_6:	std::cout << "6";	break;
		case RANK_7:	std::cout << "7";	break;
		case RANK_8:	std::cout << "8";	break;
		case RANK_9:	std::cout << "9";	break;
		case RANK_10:	std::cout << "10";break;
		case RANK_JACK:	std::cout << "J";	break;
		case RANK_QUEEN:	std::cout << "Q";	break;
		case RANK_KING:	std::cout << "K";	break;
	}

	switch (card.suit) {
		case SUIT_CLUB:	std::cout << "C";	break;
		case SUIT_HEART:	std::cout << "H";	break;
		case SUIT_SPADE:	std::cout << "S";	break;
		case SUIT_DIAMOND:std::cout << "D";	break;
	}
}

void printDeck(const std::array<Card, 52> &deck)
{
	for(const auto &card : deck)
		{
			printCard(card);
			std::cout << '\t';
		}
	std::cout << '\n' << '\n';
}

int getCardValue(const Card &card)
{
	switch(card.rank)
	{
		case RANK_ACE:	return 11;
		case RANK_2:	return 2;
		case RANK_3:	return 3;
		case RANK_4:	return 4;
		case RANK_5:	return 5;
		case RANK_6:	return 6;
		case RANK_7:	return 7;
		case RANK_8:	return 8;
		case RANK_9:	return 9;
		case RANK_10:
		case RANK_JACK:
		case RANK_QUEEN:
		case RANK_KING:	return 10;

	}

	return 0;
}

void swapCard(Card &a, Card &b)
{
	Card temp = a;
	a = b;
	b = temp;
}

int generateRandomNumber(int min, int max)
{
	static const double fraction = 1.0/(static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
void shuffleDeck(std::array<Card, 52> &deck)
{
	using index_t = std::array<Card, 52>::size_type;
	for(index_t index= 0; index < 52; ++index)
	{
		index_t swapIndex = generateRandomNumber(0,51);
		swapCard(deck[index], deck[swapIndex]);
	}
}

char getPlayerChoice()
{
	std::cout << "(h) to hit, or (s) to stand: ";
	char choice;
	do
	{
		std::cin >> choice;
	} while (choice != 'h' && choice != 's');

	return choice;
}

bool playBlackJack(const std::array<Card, 52> &deck)
{
	const Card *cardPtr = &deck[0];

	int playerTotal {};
	int dealerTotal {};

	dealerTotal += getCardValue(*cardPtr++);
	std::cout << "The dealer is showing: " << dealerTotal << '\n';

	playerTotal += getCardValue(*cardPtr++);
	playerTotal += getCardValue(*cardPtr++);

	while(1)
	{
		std::cout << "You have: " << playerTotal <<'\n';
		if(playerTotal>21)
			return false;
		char choice {getPlayerChoice()};
		if(choice=='s')
			break;
		playerTotal += getCardValue(*cardPtr++);

	}
	while(dealerTotal<17)
	{
		dealerTotal += getCardValue(*cardPtr++);
		std::cout << "The dealer now has: " << dealerTotal << '\n';

	}
	if (dealerTotal>21)
		return true;

	return (playerTotal>dealerTotal);
}

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();

	std::array<Card, 52> deck;
	using index_t = std::array<Card, 52>::size_type;
	index_t card = 0;

	for(int suit=0; suit<MAX_SUITS; ++suit)
		for(int rank=0; rank<MAX_RANK; ++rank)
		{
			deck[card].rank = static_cast<CardRank>(rank);
			deck[card].suit = static_cast<CardSuit>(suit);

			++card;
		}
	printDeck(deck);
	shuffleDeck(deck);
	printDeck(deck);

	if (playBlackJack(deck))
		std::cout << "You win" << '\n';
	else
		std::cout << "You lose" << '\n';


	return 0;
}
