/* PiGames/Çınar Kuzey KUMANLI 02.10.2025
 * Shitdows root checker
 * Root check code for worlds worst os (especially you 11, son of a bitch!), it is bad as shit,
 * AND you can even turn shit to a fertilizer, i dont know how can we make windows a useful thing.
 */
#ifdef _WIN32
#include "shitdowsfuncts.h"
#include <windows.h>
BOOL shitdowsrootcheck(void) {
    BOOL isMember = FALSE;
    PSID administratorsSid = NULL;
    SID_IDENTIFIER_AUTHORITY ntAuthority = SECURITY_NT_AUTHORITY;
    if(!AllocateAndInitializeSid(&ntAuthority, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0,0,0,0,0,0, &administratorsSid)){
        return FALSE;
    }if (!CheckTokenMembership(NULL, administratorsSid, &isMember)) {
            isMember = FALSE;
        }if (administratorsSid)
            FreeSid(administratorsSid);
    return isMember;
}
#endif
