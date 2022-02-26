#ifndef TASKS_HPP
#define TASKS_HPP

/**
 * Guckt, ob Wasser oder ein Schiff in der Matrix getroffen wurde
 * @param matrix  Geschachteltes Array, wo eine Koordinate Wasser (.) oder ein Schiff enthaelt (*)
 * @param coordinates Koordinate die ueberprueft werden soll
 * @return "splash" bei Wasser, "BOOM" beim Schiff
*/

std::string fire (std::vector<std::vector<char>> matrix, std::string coordinates);


#endif
