0x69D950: mov     dword ptr [ecx+1Ch], 0; Verified base MagicHitEffect detach clears its targetReference pointer at +0x1C. ActiveEffect::~ActiveEffect also clears ownerActiveEffect (+0x18) and sets bFinished (+0x24) before freeing its association-list nodes.
0x69D957: retn
