0x57A440: push    1; arg1
0x57A442: push    0; canCreate
0x57A444: call    InterfaceManager_GetSingleton
0x57A449: add     esp, 8
0x57A44C: test    eax, eax
0x57A44E: jz      short loc_57A479
0x57A450: push    1; arg1
0x57A452: push    0; canCreate
0x57A454: call    InterfaceManager_GetSingleton
0x57A459: add     esp, 8
0x57A45C: cmp     dword ptr [eax+1Ch], 0
0x57A460: jz      short loc_57A479
0x57A462: push    1; arg1
0x57A464: push    0; canCreate
0x57A466: call    InterfaceManager_GetSingleton
0x57A46B: add     esp, 8
0x57A46E: cmp     dword ptr [eax+60h], 0
0x57A472: jz      short loc_57A479
0x57A474: jmp     sub_5DCB70
0x57A479: xor     eax, eax
0x57A47B: retn
