0x579260: push    1; arg1
0x579262: push    0; canCreate
0x579264: call    InterfaceManager_GetSingleton
0x579269: add     esp, 8
0x57926C: test    eax, eax
0x57926E: jz      short locret_5792A3
0x579270: push    1; arg1
0x579272: push    0; canCreate
0x579274: call    InterfaceManager_GetSingleton
0x579279: add     esp, 8
0x57927C: cmp     dword ptr [eax+1Ch], 0
0x579280: jz      short locret_5792A3
0x579282: call    sub_40FDA0
0x579287: test    al, al
0x579289: jnz     short locret_5792A3
0x57928B: mov     eax, [esp+arg_0]
0x57928F: push    eax
0x579290: push    1; arg1
0x579292: push    0; canCreate
0x579294: call    InterfaceManager_GetSingleton
0x579299: add     esp, 8
0x57929C: mov     ecx, eax
0x57929E: call    MiscPass
0x5792A3: retn
