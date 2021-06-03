#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])

{

	ofstream  fos("songpart1.txt", ofstream::app);
	fos << "All the mistakes" "\n"
		"The rough breaks" "\n"
		"The bad taste" "\n"
		"The heart aches" "\n"
		"And getting nowhere" "\n"

		"All the pitfalls" "\n"
		"The brick walls" "\n"
		"The fuck it alls" "\n"
		"The bad calls" "\n"
		"And all the despair" "\n"

		"When I go another round" "\n"
		"I can't help but fight myself" "\n"
		"But you're blind to all the scars" "\n"
		"That I can see so well" "\n"

		"All I ever did was get it wrong" "\n"
		"All I ever had was a sad song" "\n"
		"But I can see the proof looking in your eyes" "\n"
		"Yeah I must have done something right" "\n"

		"Cause if I'm really such a fool" "\n"
		"How come I'm the one who's lying next to you" "\n"
		"It's in your touch when you hold me tight" "\n"

		"Yeah I must have done something right" "\n"
		"Must have done something right" "\n"
		"Must have done something right" "\n"

		"When you hold me" "\n"
		"And pull me" "\n"
		"From my knees" "\n"
		"To my feet" "\n"
		"I keep on rising" "\n"
		"Rising" "\n"

		"Nothing else fits" "\n"
		"But your kiss" "\n"
		"On my lips" "\n"
		"I know that this" "\n"
		"Is the only real thing" "\n"
		"Real thing" "\n";
	fos.close();

	ofstream fos2("songpart2.txt", ofstream::app);
	fos2 << "You're the water in my well" "\n"
		"That I've been so long without" "\n"
		"You put your heart in to my hands" "\n"
		"Like you never had a doubt" "\n"

		"All I ever did was get it wrong" "\n"
		"All I ever had was a sad song" "\n"
		"But I can see the proof looking in your eyes" "\n"
		"Yeah I must have done something right" "\n"
		"Cause if I'm really such a fool" "\n"
		"How come I'm the one who’s lying next to you" "\n"
		"It's in your touch when you hold me tight" "\n"

		"Yeah I must have done something right" "\n"
		"Something right" "\n"
		"Something right" "\n"
		"Yeah I must have done something right" "\n"
		"I know I did something right" "\n"

		"I feel it's my only gift" "\n"
		"I know I was made for this" "\n"
		"There's nothing else I'm sure of" "\n"
		"But I'm certain of your love" "\n"
		"I'm a thousand miles away from yesterday" "\n"

		"All I ever did was get it wrong" "\n"
		"All I ever had was a sad song" "\n"
		"But I can see the proof looking in your eyes" "\n"
		"That I must have done something right" "\n"

		"Cause if I'm really such a fool" "\n"
		"How come I'm the one who’s lying next to you" "\n"
		"It's in your touch when you hold me tight" "\n"

		"I must have done something right" "\n"
		"Something right" "\n"
		"Something right" "\n"
		"Yeah I must have done something right" "\n"
		"Right, right, right, right, right" "\n"
		"I know I did something right" "\n"
		"Something right" "\n"
		"I know I did something right" "\n"

		"For the first time in my life" "\n"
		"I know I did something right;" "\n";

	fos2.close();
}
