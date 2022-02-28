#ifndef TASKS_HPP
#define TASKS_HPP

/**
 * Guckt, ob der String mit dem Praefix anfaengt
 * @param word zu ueberpruefender String
 * @param prefix Praefix mit dem das Wort anfangen soll
 * @return true: Wort beginnt mit Praefix, sonst false
*/

bool isPrefix(std::string word, std::string prefix);

/**
 * Guckt, ob der String mit dem Suffix afhoert
 * @param word zu ueberpruefender String
 * @param prefix Suffix mit dem das Wort aufhören soll
 * @return true: Wort endet mit Praefix, sonst false
*/

bool isSuffix(std::string word, std::string suffix);


#endif
