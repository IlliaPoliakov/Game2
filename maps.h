#pragma once
#include<iostream>
#include<vector>
#include<string>

class Maps {
public:
	Maps() {	}
	std::vector<std::vector<std::string>>& GetMap(size_t i);

protected:
	std::vector<std::vector<std::string>> Floor1Map =
	{
			{"             ******************************************************            "},
			{"  hp         *                                                    *  score:    "},
			{"  power      *                                                    *            "},
			{"             *                                                    *            "},
			{"**************                                                    *************"},
			{"*||||||                                                                 ||||||*"},
			{"*||||||                                                                 ||||||*"},
			{"*******                                                                 *******"},
			{"*LAZY-|                                                                 |LAZY-*"},
			{"*VATOR|                                                                 |VATOR*"},
			{"*******                                                                 *******"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"****************                                                              *"},
			{"* *bufet*      *                                                              *"},
			{"*    HERE      *                                                              *"},
			{"*    YOU CAN   *                ***       ***                                 *"},
			{"*    HEAL      ****             *    EXIT   *                                 *"},
			{"*                               *    HERE   *                                 *"},
			{"*********************************           ***********************************"},
	};
	std::vector<std::vector<std::string>> Floor2Map =
	{
			{"             ******************************************************            "},
			{"  hp         * *bibliateka*    HERE YOU CAN ENCREASE              *  score:    "},
			{"  power      *                      YOUR POWER                    *            "},
			{"             ***************************   ************************            "},
			{"**************                         *   *                      *************"},
			{"*||||||                                                                 ||||||*"},
			{"*||||||                                                                 ||||||*"},
			{"*******                                                                 *******"},
			{"*LAZY-|                                                                 |LAZY-*"},
			{"*VATOR|                                                                 |VATOR*"},
			{"*******                                                                 *******"},
			{"*                *  * <--ENTRENCE                              *  * <--OUTPUT *"},
			{"*                *  *                                          *  *           *"},
			{"******************  ********************************************  *************"},
			{"*                   *           ****            *                             *"},
			{"*  *  ***************    *****  ****   ******   ****************************  *"},
			{"*  *              *      *   *  ****   *                  *                *  *"},
			{"*  *  **********  ********   *         *****************  *  *******       *  *"},
			{"*  *  *        *             ********  *               *  *  *             *  *"},
			{"*  *  *  ****  *  ********          *  *  *******  *****     *  ************  *"},
			{"*  *  *     *  *         *   *         *        *  *         *       *        *"},
			{"*  *  *******  *******   *   ***********  *******  ***********  ******   ***  *"},
			{"*  *                     *                *                                   *"},
			{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> Floor3Map =
	{
			{"             ******************************************************            "},
			{"  hp:        *                                                    *  score:    "},
			{"  power:     *                                                    *            "},
			{"             *                                                    *            "},
			{"**************                                                    *************"},
			{"*||||||                                                                 ||||||*"},
			{"*||||||                                                                 ||||||*"},
			{"*******                                                                 *******"},
			{"*LAZY-|                                                                 |LAZY-*"},
			{"*VATOR|                                                                 |VATOR*"},
			{"*******                                                                 *******"},
			{"*                *  * <--ENTRENCE                              *  * <--OUTPUT *"},
			{"*                *  *                                          *  *           *"},
			{"******************  ********************************************  *************"},
			{"*                   *           ****            *                             *"},
			{"*  *  ***************    *****  ****   ******   ****************************  *"},
			{"*  *              *      *   *  ****   *                  *                *  *"},
			{"*  *  **********  ********   *         *****************  *  *******       *  *"},
			{"*  *  *        *             ********  *               *  *  *             *  *"},
			{"*  *  *  ****  *  ********          *  *  *******  *****     *  ************  *"},
			{"*  *  *     *  *         *   *         *        *  *         *       *        *"},
			{"*  *  *******  *******   *   ***********  *******  ***********  ******   ***  *"},
			{"*  *                     *                *                                   *"},
			{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> Floor5Map1 =
	{
			{"             ******************************************************            "},
			{"  hp         *                                                    *  score:    "},
			{"  power      *                                                    *            "},
			{"             *                                                    *            "},
			{"**************                                                    *************"},
			{"*||||||                                                                 ||||||*"},
			{"*||||||                                                                 ||||||*"},
			{"*******                                                                 *******"},
			{"*LAZY-|                                                                 |LAZY-*"},
			{"*VATOR|                                                                 |VATOR*"},
			{"*******                                                                 *******"},
			{"*                *  * <--ENTRENCE                              *  * <--OUTPUT *"},
			{"*                *  *                                          *  *           *"},
			{"******************  ********************************************  *************"},
			{"*                   *           ****            *                             *"},
			{"*  *  ***************    *****  ****   ******   ****************************  *"},
			{"*  *              *      *   *  ****   *                  *                *  *"},
			{"*  *  **********  ********   *         *****************  *  *******       *  *"},
			{"*  *  *        *             ********  *               *  *  *             *  *"},
			{"*  *  *  ****  *  ********          *  *  *******  *****     *  ************  *"},
			{"*  *  *     *  *         *   *         *        *  *         *       *        *"},
			{"*  *  *******  *******   *   ***********  *******  ***********  ******   ***  *"},
			{"*  *                     *                *                                   *"},
			{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> Floor5Map2 =
	{
			{"             ******************************************************            "},
			{"  hp         *                                                    *  SCORE:    "},
			{"  power      *                                                    *            "},
			{"             *                                                    *            "},
			{"**************                                                    *************"},
			{"*||||||                                                                 ||||||*"},
			{"*||||||                                                                 ||||||*"},
			{"*******                                                                 *******"},
			{"*LAZY-|                                                                 |LAZY-*"},
			{"*VATOR|                                                                 |VATOR*"},
			{"*******                                                                 *******"},
			{"*                *  * <--ENTRENCE                              *  * <--OUTPUT *"},
			{"*                *  *                                          *  *           *"},
			{"******************  ********************************************  *************"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*       ******                                                                *"},
			{"*       ******                                                                *"},
			{"*       ******                                             ******             *"},
			{"*                                                          ******             *"},
			{"*                                                          ******             *"},
			{"*                                                                             *"},
			{"*                                                                             *"},
			{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> HelloScrean =
	{
		{"*******************************************************************************"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"* ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ *"},
		{"*                                                                             *"},
		{"*    **         **  ************  **            **            ************    *"},
		{"*    **         **  ************  **            **            ************    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    *************  ************  **            **            **        **    *"},
		{"*    *************  ************  **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  **            **            **            **        **    *"},
		{"*    **         **  ************  ************  ************  ************    *"},
		{"*    **         **  ************  ************  ************  ************    *"},
		{"*                                                                             *"},
		{"* ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ ^_^ *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> BuyScrean =
	{
		{"*******************************************************************************"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"* -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- *"},
		{"*                                                                             *"},
		{"*                 ***********   **          **  ************                  *"},
		{"*                 *************  **        **   ************                  *"},
		{"*                 **         **   **      **    **                            *"},
		{"*                 **         **    **    **     **                            *"},
		{"*                 **         **     **  **      **                            *"},
		{"*                 ***********        ****       ************                  *"},
		{"*                 ***********         **        ************                  *"},
		{"*                 **         **      **         **                            *"},
		{"*                 **         **     **          **                            *"},
		{"*                 **         **    **           **                            *"},
		{"*                 **         **   **            **                            *"},
		{"*                 **         **  **             ************                  *"},
		{"*                 ***********    *              ************                  *"},
		{"*                                                                             *"},
		{"* -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- -_- *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> MenuScrean =
	{
		{"*******************************************************************************"},
		{"*  *****     ****   *    *                 *     *                            *"},
		{"*  *    *   *    *  *    *                 **   **                            *"},
		{"*  *    *   *       *    *  ****           * * * *                            *"},
		{"*  *****     ****   *    *  *   *  ******  *  *  *     *     ****             *"},
		{"*  *     *       *  *    *  ****           *     *    * *    *   *            *"},
		{"*  *     *  *    *  *    *  *              *     *   *****   *   *            *"},
		{"*  ******    ****    ****   *              *     *  *     *  *   *            *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*    1 PLAY A NEW GAME                                                        *"},
		{"*    2 CONTINUE                                                               *"},
		{"*    3 MY RECORDS                                                             *"},
		{"*    4 EXIT THE GAME                                                          *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> EmptyScrean =
	{
		{"*******************************************************************************"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*******************************************************************************"},
	};
	std::vector<std::vector<std::string>> ChoseStScrean =
	{
		{"*******************************************************************************"},
		{"*                      ...........And nooow..........                         *"},
		{"*                                                                             *"},
		{"*                             CHOSE YOUR FIGHTER!                             *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*              1                      2                      3                *"},
		{"*      'VERY GOOD STUDENT'    'STILL SCHOOL-BOY'       'DRUNK STUDENT'        *"},
		{"*            hp 20                  hp 20                  hp 40              *"},
		{"*          power 15               power 20               power 40             *"},
		{"*     'Not the best, but       'In perspective        'A lot of pour,         *"},
		{"*      with interesting           number 4'          a lot of hp, but...      *"},
		{"*          skill...'                                also with interesting     *"},
		{"*                                                          skill'             *"},
		{"*                                                                             *"},
		{"*                          4                      5                           *"},
		{"*                  'STANDART STUDENT'     'AMBITIOUS STUDENT'                 *"},
		{"*                        hp 30                  hp 25                         *"},
		{"*                      power 30               power 25                        *"},
		{"*                     'No skils.          'Beter ptotipe of                   *"},
		{"*                  Mb it's good boy'          number 1'                       *"},
		{"*                                                                             *"},
		{"*                                                                             *"},
		{"*******************************************************************************"},
	};
};