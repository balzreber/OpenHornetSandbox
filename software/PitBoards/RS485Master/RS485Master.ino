/**************************************************************************************
 *        ____                   _    _                       _
 *       / __ \                 | |  | |                     | |
 *      | |  | |_ __   ___ _ __ | |__| | ___  _ __ _ __   ___| |_
 *      | |  | | '_ \ / _ \ '_ \|  __  |/ _ \| '__| '_ \ / _ \ __|
 *      | |__| | |_) |  __/ | | | |  | | (_) | |  | | | |  __/ |_
 *       \____/| .__/ \___|_| |_|_|  |_|\___/|_|  |_| |_|\___|\__|
 *             | |
 *             |_|
 *
 *
 *   Project OpenHornet
 *
 *   This Project is released under the Creative Commons 
 *   Atribution - Non Comercal - Share Alike License.
 *   
 *   CC BY-NC-SA 3.0
 *   
 *   You are free to:
 *   - Share — copy and redistribute the material in any medium or format
 *   - Adapt — remix, transform, and build upon the material
 *   The licensor cannot revoke these freedoms as long as you follow the license terms.
 *   
 *   Under the following terms:
 *   - Attribution — You must give appropriate credit, provide a link to the license, 
 *     and indicate if changes were made. You may do so in any reasonable manner, 
 *     but not in any way that suggests the licensor endorses you or your use.
 *   - NonCommercial — You may not use the material for commercial purposes.
 *   - ShareAlike — If you remix, transform, or build upon the material, 
 *     you must distribute your contributions under the same license as the original.
 *     
 *   No additional restrictions — You may not apply legal terms or technological 
 *   measures that legally restrict others from doing anything the license permits.
 *   
 *   More Information about the license can be found under:
 *   https://creativecommons.org/licenses/by-nc-sa/3.0/
 *   
 *   The OpenHornet Project uses DSC-bios to connect all the PCB's to DCS.
 *   You can find more about the DCS-bios Project here:
 *   https://github.com/dcs-bios
 *   
 *   This Project uses Doxygen as a documentation generator.
 *   Please use Doxigen capable comments.
 *   
 **************************************************************************************/

/**
 * @file RS485Master.ino
 * @author Balz Reber
 * @date 11.12.2019
 * @brief RS485 Bus Master Board
 *
 * @details This Sketch runs the RS485 Bus Master Board. This board is the first in line of the RS485 Bus.
 * It communicates with DCS-bios via USB. You can see the whole RS485 chain in the Systems Architecture document in our git wiki.
 * This Sketch has to run on a Arduino Mega 2560. And it is not possible to connect anything else to the RS485 Master Board.
 * 
 */

/**
 * Tells DCS Bios that this is the RS485 Master board
 */
#define DCSBIOS_RS485_MASTER

/**
 * Define witch pin is connected to TX_ENABLE of the RS485 chip
 */
#define UART1_TXENABLE_PIN 2


/**
 * Include the DCS Bios library
 */
#include "DcsBios.h"


/**
* Arduino Setup Function
* 
* Arduino standard Setup Function. 
* This must only includes a call to the DCS Bios own seutup function.
*/
void setup() {

  // Run DCS Bios setup function
  DcsBios::setup();

}

/**
* Arduino Loop Function
* 
* Arduino standard Loop Function. 
* This must only includes a call to the DCS Bios own loop function.
*/
void loop() {

  //Run DCS Bios loop function
  DcsBios::loop();
  
}
