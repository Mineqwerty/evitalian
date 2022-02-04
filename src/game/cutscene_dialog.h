#include "src/s2d_engine/init.h"
#include "src/s2d_engine/s2d_draw.h"
#include "src/s2d_engine/s2d_print.h"
#include "src/s2d_engine/config.h"

char *dialogs[] = {
    " ",
    "A hack by CowQuack",
    "Made with hackersm64",
    COLOR "30 180 30 0" SCALE "25" "Wait for me, Bro! You sure are fast!",
    COLOR "30 180 30 0" SCALE "25" "Hey, why is it so dark in here?",
    COLOR "30 180 30 0" SCALE "25" "WHAT ON EARTH IS THAT???",
    COLOR "199 124 12 0" SCALE "25" "I see you have finally arrived.\nWelcome to S.T.A.R headquarters.",
    COLOR "199 124 12 0" SCALE "25" "What you see in front of you is\nthe Evitalian unit 01.\nIt is mankind's last hope.",
    COLOR "30 180 30 0" SCALE "25" "Mankind's last hope? What are you saying!?",
    COLOR "199 124 12 0" SCALE "25" "I will allow Captain Peasato to explain.",
    COLOR "191 75 222 0" SCALE "25" "Of course, Professor E. Genddo.",
    COLOR "191 75 222 0" SCALE "25" "Mario, Luiji, we need your assistance.\nOur worst fears have been met; the Angels \nhave returned. Even now, one \nrampages in the city above us.",
    COLOR "191 75 222 0" SCALE "25" "That is what the EVI is for. It is the\nultimate weapon against the Angels.\nAnd we need you both to pilot it.",
    COLOR "191 75 222 0" SCALE "25" "If an angel were to reach the basement\nof S.T.A.R, it could spell out the\nend of us all.\nMario! Luiji! Please, pilot the Evitalian!",
    COLOR "30 180 30 0" SCALE "25" "Oh... I see... But after all this time,\nwhy would you want to see us now Professor?\nWhy have you ignored Mario and I?",
    COLOR "199 124 12 0" SCALE "25" "Because I have a USE for you now.\nIt is that simple.",
    COLOR "199 124 12 0" SCALE "25" "Daisuka has not arrived from Sarasaland yet,\nand Reisalina is still recovering.\nYou are our only pilots.",
    COLOR "199 124 12 0" SCALE "25" "So I won't ask you again. Pilot the EVI or \nleave.",
    COLOR "30 180 30 0" SCALE "25" "Mario, wait! I... I can't do this...\nBut I can't let you do it on your own...\nI...",
    COLOR "30 180 30 0" SCALE "25" "Alright... I'll pilot it.\nI'll pilot the EVI!",
    COLOR "199 124 12 0" SCALE "25" "Very well. Enter the Evitalian through\nthe entry plug in the back at once.",
    COLOR "191 75 222 0" SCALE "25" "Amazing work! On behalf of S.T.A.R\nI must commend you!",
    COLOR "199 124 12 0" SCALE "25" "Your work is far from over though.\nAnother Angel can attack at any moment.",
    COLOR "199 124 12 0" SCALE "25" "Anything could happen. Which is why\nI would like to introduce you to our\nother pilots.",
    COLOR "199 124 12 0" SCALE "25" "This is Daisuka of Sarasaland.",
    COLOR "252 80 0 0" SCALE "25" "Yo! I'm ready to pilot this thing!",
    COLOR "199 124 12 0" SCALE "25" "And this is Reisalina. She was\nhere before even you.",
    COLOR "82 201 222 0" SCALE "25" "Hello...",
    COLOR "199 124 12 0" SCALE "25" "They will pilot the EVI in the \ncase that you two are unable to. They are\nyour backups.",
    COLOR "252 80 0 0" SCALE "25" "Hold the phone there old man!\nBACKUPS?! You're telling me that we're\nonly backups?!",
    COLOR "199 124 12 0" SCALE "25" "That is correct. Since the Marios\nperformed adequately, I see no\nreason to have you take over.",
    COLOR "252 80 0 0" SCALE "25" "This sucks! I'm out of here!",
    COLOR "191 75 222 0" SCALE "25" "Daisuka wait! We need you on\nstandby! Oh dear...",
    COLOR "199 124 12 0" SCALE "25" "Reisalina, come with me.\nK.O.O.P.A is holding another meeting soon.",
    COLOR "199 124 12 0" SCALE "15" "We must prepare for the Human Inshroomentality project.",
    COLOR "30 180 30 0" SCALE "25" "Miss Peasato, what's K.O.O.P.A?",
    COLOR "191 75 222 0" SCALE "25" "One of S.T.A.R's higher-up organizations.\nI don't like their secrecy though...",
    COLOR "191 75 222 0" SCALE "25" "Anyways, do you think you could\nfind Daisuka for me? The EVI needs\nmaitinence so you're off the hook for now.",
    COLOR "191 75 222 0" SCALE "25" "There you are! We have an\nemergency!",
    COLOR "191 75 222 0" SCALE "25" "Another Angel is attacking!\nHurry, get in the EVI!\nLuiji is already in there waiting.",

    COLOR "30 180 30 0" SCALE "25" "Ugh... what happened?\nI must've passed out or something...\nBut you were able to beat it, even\nwithout me...",
    COLOR "30 180 30 0" SCALE "25" "Huh?!",
    COLOR "30 180 30 0" SCALE "25" "Daisuka?! What happened?",
    COLOR "191 75 222 0" SCALE "25" "She got hit by debris that\nfell when Mario defeated that Angel.\nI need help getting her to the\nhospital wing.",
    COLOR "191 75 222 0" SCALE "25" "E. Genddo and Reisalina are\nnowhere to be found, so this\nleaves us with no backup pilots...",
    COLOR "191 75 222 0" SCALE "25" "We're really in trouble now...",
    COLOR "99 84 84 0" SCALE "25" "Bwahaha! Did you say you\nneeded another backup pilot?",
    COLOR "99 84 84 0" SCALE "25" "Lucky for you, K.O.O.P.A\nsent me over here!\nThe name's Boworu.",
    COLOR "191 75 222 0" SCALE "25" "K.O.O.P.A sent you? You'll have to\nspeak with E. Genddo in that case.\nI'm not familiar with K.O.O.P.A's affairs.",
    COLOR "99 84 84 0" SCALE "25" "Where might I find him?",
    COLOR "191 75 222 0" SCALE "25" "Last I knew, he was in\nTerminal Dogma. But that's off limits.",
    COLOR "99 84 84 0" SCALE "25" "Ah, the place where you\nkeep Buppith, the key to ending\nhumanity, right?",
    COLOR "191 75 222 0" SCALE "25" "Yeah, tha- wait what?\nHow did you know that?",
    COLOR "99 84 84 0" SCALE "25" "Bwahaha, thanks! Oh yeah,\nI may have forgotten to mention\na teensy detail...",
    COLOR "99 84 84 0" SCALE "25" "I'm one of the angels.\nSee ya later, suckers!",
    COLOR "191 75 222 0" SCALE "25" "NO!!! This is trouble!\nMario, you have to stop him!",
    COLOR "30 180 30 0" SCALE "25" "And me too, right?",
    COLOR "191 75 222 0" SCALE "25" "No. Mario can do it on his\nown. Luiji, I need you to help me take\nDaisuka to the hospital.",
    COLOR "30 180 30 0" SCALE "25" "Oh... I guess that makes sense...",
    COLOR "191 75 222 0" SCALE "25" "Hurry Mario! Get into the EVI!",
    COLOR "30 180 30 0" SCALE "25" "Ahh... ahh...",
    COLOR "30 180 30 0" SCALE "25" "ACHOO!!!",
    COLOR "30 180 30 0" SCALE "25" "Eugh... \nI'm so stuffed up...",
    COLOR "30 180 30 0" SCALE "25" "It always seems to end up like this...",
    COLOR "30 180 30 0" SCALE "25" "Mario goes and saves the day while\nI sit around on the sidelines...",
    COLOR "30 180 30 0" SCALE "25" "Maybe if I hadn't passed out during\nthat fight, Daisuka wouldn't be in this\nstate...",
    COLOR "30 180 30 0" SCALE "25" "I'm so useless! I just...\nI just wish I could disappear..."
};

char *battleDialogs[] = {
    " ",
    COLOR "191 75 222 0" SCALE "20" "You've arrived in the central \ncity. The angel is roaming \naround here somewhere...",
    COLOR "191 75 222 0" SCALE "20" "Before you engage it, let me \nexplain how to pilot the \nEvitalian.",
    COLOR "191 75 222 0" SCALE "20" "Use the Joystick to move. \nYou can go faster if \nyou tilt it more.",
    COLOR "191 75 222 0" SCALE "20" "Press A to attack with \nyour Progressive Plumber.",
    COLOR "191 75 222 0" SCALE "20" "Press B to shoot bullets. \nYou can repeat fire, and \nyou press A to stop.",
    COLOR "191 75 222 0" SCALE "20" "Press Z to guard. While \nguarding, press A or B to\ndeploy an AT Field.",
    COLOR "191 75 222 0" SCALE "20" "Uh oh... the Angel found \nyou. I'll explain more as \nyou pilot.",
    " "
};

char *tipDialogs[] = {
    " ",
    COLOR "191 75 222 0" SCALE "20" "Rotate your shot with the \nJoystick. Hold Z to sidestep. \nPress A to stop shooting.",
    COLOR "191 75 222 0" SCALE "20" "Guard to reduce the damage \nfrom attacks! Your AT Field \ncan even block some attacks!",
    COLOR "191 75 222 0" SCALE "20" "It put up an AT Field! \nGo in for a melee attack, \nyour bullets won't work.",
    COLOR "191 75 222 0" SCALE "20" "Huh?! It's trying to drill \ninto S.T.A.R HQ! Hurry, \nbreak the drill by shooting it!",
    COLOR "252 80 0 0" SCALE "20" "Woah it's down! Quick, go \nattack it with your knife!",
    COLOR "191 75 222 0" SCALE "20" "It's going to strike back! \nQuick, get out of its range!",
    COLOR "252 80 0 0" SCALE "20" "RUN!!!",
    COLOR "30 180 30 0" SCALE "20" "I don't feel so good... ohh...",
    COLOR "252 80 0 0" SCALE "20" "Looks like Luiji fainted. \nYou can handle it though, \nright Mario?"
};

int dialogSpeakerColors[12] = {
    //white
    255, 255, 255,
    //luiji
    30, 180, 30,
    //genddo
    199, 124, 12,
    //peasato
    191, 75, 222
};