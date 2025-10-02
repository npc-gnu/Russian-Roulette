/* PiGames/Çınar Kuzey KUMANLI 02.10.2025
 * Shitdows root checker
 * Root check code for worlds worst os (especially you 11, son of a bitch!), it is bad as shit,
 * AND you can even turn shit to a fertilizer, i dont know how can we make windows a useful thing.
 */
#include <windows.h>
#include <stdio.h>
BOOL shitdowsrootchech(){
    BOOL isMember = FALSE;
    BYTE sidBuffer[SECURITY_MAX_SID_SIZE];
    PSID administratorsSid = (PSID)&sidBuffer;
    if(!CreateWellKnownSid(WinBuiltinAdministratorsSid, NULL, administratorsSid, &(DWORD){SECURITY_MAX_SID_SIZE})){
        // This line is empty i guess. I vibe coded this file. It wont worth it for doing research about windows file.
    }if (!CheckTokenMembership(NULL, administratorsSid, &isMember)) {
        return FALSE;
    }return isMember;
}
