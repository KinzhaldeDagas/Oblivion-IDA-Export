0x557180: push    esi
0x557181: mov     esi, [esp+4+arg_0]
0x557185: mov     eax, [esi+8]
0x557188: test    eax, eax
0x55718A: jz      short loc_557195
0x55718C: push    eax
0x55718D: call    FormHeapFree
0x557192: add     esp, 4
0x557195: mov     dword ptr [esi+8], 0
0x55719C: mov     dword ptr [esi+0Ch], 0
0x5571A3: mov     dword ptr [esi+10h], 0
0x5571AA: pop     esi
0x5571AB: retn    4
