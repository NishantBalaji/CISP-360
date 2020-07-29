
// B2Dl.cpp 
// 7/19/2020	*Assignment Date*
// Nishant Balaji

#include <iostream>		// Any other libraries, too
#include <iomanip>
using namespace std;


// Global Variables

// Function Prototypes
void ProgramGreeting();		// All programs will have this method
int validInput(int, int);
void A1();
void A100();
void A167();
void A232();
void A13();
void A290();
void A159();
void A161();
void A173();
void A212();
void done();


int main(){

	bool cont = true;
	bool intimidator, diplomat, dirty_chair, grateful_haiken;
	int choice;
	string path[6] = {};

	// Specification A3- Game loop
	while(cont){
		
		cont = true;
		intimidator = false; 
		diplomat = false; 
		dirty_chair = false; 
		grateful_haiken = false;
		choice = 0;

		system("clear");

		ProgramGreeting();		// Should go somewhere around here
		
		// Specification C3- Room Header
		cout << "Section: A1" << endl; 
		cout << "This is the starting point.\n" << endl;
		A1();
		choice = validInput(1, 2);
		path[0] = "A1";
		int i = 0;
		// Specification C2- Simple menu
		//Intimidator choice
		if(choice == 1){

			system("clear");
			cout << "Section: A100" << endl; 
			cout << "Came from section A1.\n" << endl;
			A100();
			intimidator = true;
			cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
			choice = validInput(1,1);
			path[1] = "A100";
			
			if(choice == 1){
				system("clear");
				cout << "Section: A232" << endl;
				cout << "Came from section A100\n" << endl;
				A232();
				cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
				choice = validInput(1,2);
				path[2] = "A232";
				
				if(choice == 1){
					system("clear");
					cout << "Section: A13" << endl;
					cout << "Came from section A232\n" << endl;
					A13();
					cout << "1. D you simply inform hiim which is the proper rat-head-eating-fork?" << endl;
					cout << "2. Or do you let him flounder?" << endl;
					cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
					choice = validInput(1,2);
					path[3] = "A13";
					
					if(choice == 1){
						system("clear");
						cout << "Section: A159" << endl;
						cout << "Came from section A13\n" << endl;
						A159();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						choice = validInput(1,1);
						path[4] = "A159";

						system("clear");
						cout << "Section: Game Over" << endl;
						cout << "Came from section A159\n" << endl;
						done();
						// Specification B1- Booleans
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						// Specification A2- Path
						cout << "\nChoice Path: " << endl;
						while(path[i].compare("")){
							cout << path[i] << endl;
							i++;
						}
						i = 0;
						choice = validInput(1,2);
					
						if(choice == 2){
							cont = false;
							break;
						}
					}
					
					else if(choice == 2){
						system("clear");
						cout << "Section: A173" << endl;
						cout << "Came from section A13\n" << endl;
						A173();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						choice = validInput(1,2);
						path[4] = "A173";

						system("clear");
						cout << "Section: Game Over" << endl;
						cout << "Came from section A173\n" << endl;
						done();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						
						cout << "\nChoice Path: " << endl;
						while(path[i].compare("")){
							cout << path[i] << endl;
							i++;
						}
						i = 0;

						choice = validInput(1,2);
					
						if(choice == 2){
							cont = false;
							break;
						}
					}
				}

				else if(choice == 2){
					system("clear");
					cout << "Section: A290" << endl;
					cout << "Came from section A232\n" << endl;
					A290();
					cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
					choice = validInput(1,1);
					path[3] = "A290";

					if(choice == 1){
						system("clear");
						cout << "Section: A161" << endl;
						cout << "Came from section A290\n" << endl;
						A161();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						choice = validInput(1,1);
						path[4] = "A161";

						system("clear");
						cout << "Section: Game Over" << endl;
						cout << "Came from section A161\n" << endl;
						done();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						
						cout << "\nChoice Path: " << endl;
						while(path[i].compare("")){
							cout << path[i] << endl;
							i++;
						}
						i = 0;

						choice = validInput(1,2);
					
						if(choice == 2){
							cont = false;
							break;
						}
					}
				}

			}
		}

		//Diplomat Choice
		else if(choice == 2){
			system("clear");
			cout << "Section: A167" << endl; 
			cout << "Came from section A1.\n" << endl;
			A167();
			diplomat = true;
			cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
			choice = validInput(1,1);
			path[1] = "A167";

			if(choice == 1){
				system("clear");
				cout << "Section: A232" << endl;
				cout << "Came from section A100\n" << endl;
				A232();
				cout << "DIPLOMATl: " << boolalpha << (diplomat) << endl;
				choice = validInput(1,2);
				path[2] = "A232";
				
				if(choice == 1){
					system("clear");
					cout << "Section: A13" << endl;
					cout << "Came from section A232\n" << endl;
					A13();
					//Specification B3- Valid choices only
					cout << "1. Are you a DIPLOMAT?" << endl;
					cout << "2. If not, do you simply inform hiim which is the proper rat-head-eating-fork?" << endl;					
					cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
					choice = validInput(1,1);
					path[3] = "A13";
					
					if(choice == 1){
						system("clear");
						cout << "Section: A212" << endl;
						cout << "Came from section A13\n" << endl;
						A212();
						grateful_haiken = true;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						choice = validInput(1,1);
						path[4] = "A212";

						system("clear");
						cout << "Section: A173" << endl;
						cout << "Came from section A212\n" << endl;
						A173();
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl;
						validInput(1,1);
						path[5] = "A173";

						system("clear");
						cout << "Section: Game Over" << endl;
						cout << "Came from section A212\n" << endl;
						done();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						
						cout << "\nChoice Path: " << endl;
						while(path[i].compare("")){
							cout << path[i] << endl;
							i++;
						}
						i = 0;

						choice = validInput(1,2);
					
						if(choice == 2){
							cont = false;
							break;
						}

					}	
					
				}

				else if(choice == 2){
					system("clear");
					cout << "Section: A290" << endl;
					cout << "Came from section A232\n" << endl;
					A290();
					cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
					choice = validInput(1,1);
					path[3] = "A290";

					if(choice == 1){
						system("clear");
						cout << "Section: A161" << endl;
						cout << "Came from section A290\n" << endl;
						A161();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						choice = validInput(1,1);
						path[4] = "A161";

						system("clear");
						cout << "Section: Game Over" << endl;
						cout << "Came from section A173\n" << endl;
						done();
						cout << "INTIMIDATOR: " << boolalpha << (intimidator) << endl;
						cout << "DIPLOMAT: " << boolalpha << (diplomat) << endl;
						cout << "CHAIR IS DIRTY: " << boolalpha << (dirty_chair) << endl;
						cout << "HAIKEN IS GRATEFUL: " << boolalpha << (grateful_haiken) << endl; 
						
						cout << "\nChoice Path: " << endl;
						while(path[i].compare("")){
							cout << path[i] << endl;
							i++;
						}
						i = 0;

						choice = validInput(1,2);
					
						if(choice == 2){
							cont = false;
							break;
						}
					}
				}

			}
		}
 	}

}




// Specification C1- A function
void ProgramGreeting() {
// Code goes here
	cout << "This program will present you with a \"find your path\" game. Read the passage and choose an option.\n" << endl;
}

// Specification A1- Input Validation
int validInput(int low, int high){
	int choice = 0;
	cin >> choice;
	while(choice < low || choice > high){
		cout << "Invalid input. Please select a corresponding number. \n" << endl;
		cin >> choice;
	}
	return choice;
}

// Specification B2- Individual Functions
void A1(){
	cout << "Well, Mr Artanon, look at you. Who would have thought that theson of a lowly spider farmer could rise to such esteemed heights? Yethere you are, standing in the kitchens of Cayfax Castle, dressed inthe finest livery onyx can buy. For you, sir, are butler to Malacandros,Dark Lord of all Nocturnia. The flames of fireplaces tickle suspendedpots, which thicken the air with competing scents. Workers alongstone benches busily chop and kill ingredients - nothing but thebest for his lordship, of course. In the centre of the chamber a greatoven blazes, its cracked chimney oozing smoke. ’Ah, Mr Artanon,’simpers Repugnis, the head cook. He’s a fat goblin who samples too many of his own creations, as evidenced by his bulging belly and thedelta of stains down his apron. ’I’m roasting his Horrendousness aprime briar beast basted in snake oil. Mmm-mmm! The intestines arestuffed with rotten apple and breadcrumb, and I’ve shoved a carrotup its arse.’ You arch an eyebrow, for Mal is already situated upstairsin the dining hall. With midday waning, he will be growing hungry.’And just how long,’ you ask, ’do you intend to keep his lordshipstaring at an empty plate?’ Repugnis titters nervously, and glancestowards the oven. ’Good sir, a roast takes as long as a roast takes. IfI stoke the flames any hotter the skin will crisp to charcoal. At best I could aim for a rare cut?’\n\n" << endl;
	cout << "What is your reply?" << endl;
	cout << "1. ’It’s you who’ll get a rare cut across that corpulent neck of yours if you don’t speed things along, you feckless blob of festering lard.’" << endl;
	cout << "2. ’Surely in such an industrious kitchen, there must be a starter or two ready to send along and sate His Abhorentness’s appetite?’" << endl;
}

void A100(){
	cout << "Repugnis turns a paler shade of green, and gulps. \"I beg you, MrArtanon, stay your hand. I’m sure that something must be ready.\"The cook glances around and spots a bench at which several trays arebeing assembled. \"Ah!\" he says. \"How about some pickled rat headsand carpaccio of slug?\" You scowl, long enough to make Repugnisquiver, then turn and snap at some lurking footmen. \"Get those trays up to his lordship without delay!\" The footmen spring into action,seizing the trays and heading for the door. \"Thank you, sir,\" says Repugnis. \"The roast will not be far behind, I promise.\" \"See that it isn’t,\" you reply, \"or the next item on the menu might be goblin stew.\"It seems you are an INTIMIDATOR. \n\n" << endl;
	cout << "1. Onwards, Mr. Artanon." << endl;
}

void A167(){
	cout << "Repugnis nods eagerly, which ripples his many chins. ’Yes sir, of course! Let me see now...’ He glances around and spots a benchwhere several platters are being assembled. ’Ah! How about somepickled rat heads and delectable carpaccio of slug?’ ’Very good,’ yousay. ’I am told that Captain Haiken is particularly partial to rat. Butsee that you hurry along now, Repugnis. I don’t need to remind youthat his lordship’s patience is virtually non-existent.’ ’Of course, sir,of course.’ You click your fingers at some waiting footmen and they leap to action, seizing the platters and heading for the door. It seemsyou are a DIPLOMAT. \n\n" << endl;
	cout << "1. Onwards, Mr. Artanon." << endl;
}

void A232(){
	cout << "You overtake the footmen along a corridor lit by stuttering candles, and lead them through a wide archway into the airy dining hall.Great windows stand open along one wall, looking out upon a pleas-ant view of circling lizard-birds cannibalizing their young. Downthe length of the hall runs an immense marble table, at the head of which the Dark Lord Malacandros reclines in a chair of elaboratelycarved dragon bone. He is a gaunt man with darting eyes and sharpfeatures, currently dressed in a very tasteful grey robe (which youhelped him get into this morning), his black hair clasped in a pony-tail down his back. To his right sits Captain Haiken, one of his favored brutes, a well muscled orc in polished steel. \"Ah, Mr Artanon,\"says Mal, \"I was beginning to worry we’d been forgotten.\" He gives you a thin smile, which warns you he is very close to becoming irked. You bow deeply. \"My humble apologies, oh Intolerant One. Repugnis is putting the final touches on today’s main course, and you know what a perfectionist he is. In the meantime,\" you whisk a platter from one of the footmen, \"here are some starters to whet your appetites.\"As you move toward the head of the table, Haiken licks his lips. \"Ratheads!\" he exclaims. \"My favorite.\" \n\n" << endl;
	cout << "Who will you serve first?" << endl;
	cout << "1. The enthusiastic Captain Haiken?" << endl;
	cout << "2. Or your master, Malacandros?" << endl;
}

void A13(){
	cout << "Feeling dangerous, Mr Artanon? You move past Mal to CaptainHaiken and, using a pair of tongs fashioned to look like crow’s claws,start placing rat heads onto his plate. As you do, you glance surrep-titiously at Mal, wondering if you have irritated him by serving hisguest first - he is not exactly known for his good manners - but hedoes not seem to have noticed. At any rate, your first footman, Kalag- a young man who shows much promise - hops to action, to lay sliv-ers of slug meat on Mal’s plate. \"Er...\" says Haiken, his meaty handskimming the tableware. You realize he is uncertain about what,amongst the array of cutlery laid out on either side of his plate, is the correct implement to use for rat heads. \n\n" << endl;
}

void A290 (){
	cout << "As is only fitting, you serve your master first. As you place the largest and juiciest rat heads before him, your first footman Kalag- a young fellow who shows much promise - moves to Haiken and starts laying slug meat on his plate. \"Er,\" says Haiken, \"not too much slug for me, thank you - I have an allergy.\" Mal, who is in mid-chew, scoffs, and shoots a shard of half-chewed rat skull out of his nostril to ping off a wine glass. \"Rut me, Haiken,\" he says. \"I’ve seen you rip the throat from a charging horse, yet you can’t stomach a little slug?\" Haiken seems embarrassed. \"They give me hives, my lord.\"\"Ha! Well, better get over there with some of his precious rat heads, Mr Artanon.\" You do as you are bid, and place the remaining rat heads on Haiken’s plate. They are a little on the smaller side, and you notice a wistful look in Haiken’s eye as Mal lifts another plump one to his mouth. With your lords served, you move back from the table to remain in waiting. \n\n" << endl;
	cout << "1. Excellent posture, Mr Artanon." << endl;
}

void A159(){
	cout << "You clear your throat and speak softly. \"That little one there is your rat-head-eating-fork, my lord.\" Despite your attempt to be subtle, Mal registers the exchange and chortles. Haiken, embarrassed to be found ignorant, frowns. \"I know what fork to use, you stupid butler! Begone before I stab you in the eye with it.\" With your lords served, you move back from the table to remain in waiting. Somehow you doubt Haiken’s bedclothes will be properly turned. \n\n" << endl;
	cout << "1. Done" << endl;
}

void A161(){
	cout << "You move away from Haiken, whose hand still hovers uncertainly over the cutlery, to serve Mal rat heads. Finally Haiken makes a decision and picks up a carapace-cracking-spork. Mal chuckles a this ignorance. \"By Stygias, Captain - have you been in the field solong that you’ve forgotten the basic functions of tableware?\" Haiken grimaces. \"Pardon me, your Pettiness. I may have had a noble birth,yet life as a soldier puts me out of touch with certain niceties. We tend to eat with our hands.\" Mal laughs. \"Well, let us not stand on ceremony, Captain! I am happy to do it your way!\" Mal picks up a rat head with his hand and shovels it into his mouth. Haiken happily follows suit, munching and cracking skulls with his teeth. Inwardly,you give a sigh. No doubt with such messy fingers, Mal will stain the dragon bone. Why, you have often wondered, would anyone fashion a dining chair out of such easily blemished material as bleached porous bone? Just as you fear, Mal leans back to rest his grubby mitt supon the armrests. The CHAIR IS DIRTY. You move back to the wall while your lords eat, to remain in waiting. A butler’s work is never \n\n" << endl;
	cout << "1. Done" << endl;
}

void A173(){
	cout << "As they gnash away, Mal and Haiken discuss the Captain’s recent raid on the town of Greenflower. \"Honestly,\" says Haiken, \"those wretched Brightlanders are so easily slaughtered, sometimes I almost feel bad for them.\" Mal laughs at this hilarious joke. \"Ha! That’s a good one, Captain. But tell me, what of your primary objective?\" \"I am pleased to report success, my lord.\" \"You have brought me a virgin?\" \"She languishes in your dungeon even now - lovely, virtu-ous and ripe for sacrifice.\" \"Excellent. My skywatchers predict a full moon in three nights time - perfect conditions for the ceremony.\"Footsteps sound at the dining hall entrance, and a goblin messenger, whom you recognize as Peedy, enters wearing a feathered hat and carrying a scroll. Mal’s gaze slides to him. \"What is it?\" Peedyclears his throat. \"Apologies for the interruption, Your Atrociousness. I bring you word from Vorganis Castle.\" \"Oh?\" Mal’s tone is soinstantly cold that the very temperature of the room seems to drop.\"Er... yes, my lord. Lord Nefarian accepts your kind invitation toattend the Stygias Ceremony, and intends to arrive tomorrow morning.\" Mal’s eyes narrow. You know he does not care for his cousin Nefarian, not least because the man is next in line to the throne. Nefarian’s presence at the ceremony, however, must be tolerated, for he is a powerful lord in his own right, with many allies amongst Noc-turnia’s nobility - a fact which Mal does not enjoy being reminded of. \"Why bring me such news at lunch?\" he growls. \"It has put a foultaste in my mouth and sullied my food.\" He drums his fingers on the dragon bone armrest, and fiery sparks flare at his fingertips. Peedy quails, for he knows that Mal is prone to taking out his anger on the bearers of bad news. It would be a shame, however (and a staffing issue), to lose a competent messenger to a moment of ill temper oversomething that really isn’t his fault. \n\n" << endl;
	cout << "1. Do you attempt to intercede on Peedy’s behalf?" << endl;
	cout << "2. Or abandon him to his miserable fate?" << endl;
}

void A212(){
	cout << "You clear your throat very slightly, and Haiken glances up at you.As you move your hand back from his plate, you let your finger restmomentarily on the appropriate rat-head-eating fork. Haiken under-stands, and gives you a relieved look. Mal is too busy shoveling slugmeat into his gullet to notice the exchange, so HAIKEN IS GRATE-FUL. You add some rat heads to Mal’s plate and move back from thetable to take a place in waiting.\n\n" << endl;
	cout << "1. Nicely done, Mr Artanon." << endl;
}

void done(){
	cout << "The game is finished.\n\n" << endl;
	cout << "Would you like to play again?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
}