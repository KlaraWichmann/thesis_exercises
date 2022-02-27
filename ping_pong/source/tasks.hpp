#ifndef TASKS_HPP
#define TASKS_HPP

/**
 * Gibt ein vollständiges PingPong Spiel an
 * @param arr Array von "Ping!" - gibt an wie oft der ball gespielt wird
 * @param win gibt an, ob Spieler2 gewinnnt oder nicht - true: Spiel endet mit "Pong!", false: Spiel endet mit "Ping!"
 * @return Array mit wechselnden "Ping!" und "Pong!"
*/

std::vector<std::string> pingPong(std::vector<std::string> arr, bool win);


#endif


