0x9F26C0: push    offset aContainerIsLoc; "Container is locked.  You need the key "...
0x9F26C5: push    offset aSlockedcontain; "sLockedContainer"
0x9F26CA: mov     ecx, offset unk_B38C38
0x9F26CF: call    GameSetting_ConstrAndReg
0x9F26D4: push    offset sub_A21F90; void (__cdecl *)()
0x9F26D9: call    _atexit
0x9F26DE: pop     ecx
0x9F26DF: retn
