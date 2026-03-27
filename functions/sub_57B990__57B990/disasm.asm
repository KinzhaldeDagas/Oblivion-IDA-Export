0x57B990: push    1; arg1
0x57B992: push    0; canCreate
0x57B994: call    InterfaceManager_GetSingleton
0x57B999: add     esp, 8
0x57B99C: test    eax, eax
0x57B99E: jz      locret_57BAB3
0x57B9A4: push    1; arg1
0x57B9A6: push    0; canCreate
0x57B9A8: call    InterfaceManager_GetSingleton
0x57B9AD: add     esp, 8
0x57B9B0: cmp     dword ptr [eax+1Ch], 0
0x57B9B4: jz      locret_57BAB3
0x57B9BA: mov     al, [esp+arg_0]
0x57B9BE: cmp     al, 1
0x57B9C0: jl      short loc_57B9D1
0x57B9C2: movsx   eax, al
0x57B9C5: cmp     eax, 5
0x57B9C8: jle     short loc_57B9D6
0x57B9CA: mov     eax, 5
0x57B9CF: jmp     short loc_57B9D6
0x57B9D1: mov     eax, 1
0x57B9D6: push    eax
0x57B9D7: push    1; arg1
0x57B9D9: push    0; canCreate
0x57B9DB: call    InterfaceManager_GetSingleton
0x57B9E0: add     esp, 8
0x57B9E3: mov     ecx, eax
0x57B9E5: call    sub_57CDE0
0x57B9EA: mov     al, [esp+arg_4]
0x57B9EE: cmp     al, 1
0x57B9F0: jl      short loc_57BA01
0x57B9F2: movsx   eax, al
0x57B9F5: cmp     eax, 5
0x57B9F8: jle     short loc_57BA06
0x57B9FA: mov     eax, 5
0x57B9FF: jmp     short loc_57BA06
0x57BA01: mov     eax, 1
0x57BA06: push    eax
0x57BA07: push    1; arg1
0x57BA09: push    0; canCreate
0x57BA0B: call    InterfaceManager_GetSingleton
0x57BA10: add     esp, 8
0x57BA13: mov     ecx, eax
0x57BA15: call    sub_57CE20
0x57BA1A: mov     al, [esp+arg_8]
0x57BA1E: cmp     al, 1
0x57BA20: jl      short loc_57BA31
0x57BA22: movsx   eax, al
0x57BA25: cmp     eax, 5
0x57BA28: jle     short loc_57BA36
0x57BA2A: mov     eax, 5
0x57BA2F: jmp     short loc_57BA36
0x57BA31: mov     eax, 1
0x57BA36: push    eax
0x57BA37: push    1; arg1
0x57BA39: push    0; canCreate
0x57BA3B: call    InterfaceManager_GetSingleton
0x57BA40: add     esp, 8
0x57BA43: mov     ecx, eax
0x57BA45: call    sub_57CE60
0x57BA4A: mov     al, [esp+arg_C]
0x57BA4E: cmp     al, 1
0x57BA50: jl      short loc_57BA61
0x57BA52: movsx   eax, al
0x57BA55: cmp     eax, 5
0x57BA58: jle     short loc_57BA66
0x57BA5A: mov     eax, 5
0x57BA5F: jmp     short loc_57BA66
0x57BA61: mov     eax, 1
0x57BA66: push    eax
0x57BA67: push    1; arg1
0x57BA69: push    0; canCreate
0x57BA6B: call    InterfaceManager_GetSingleton
0x57BA70: add     esp, 8
0x57BA73: mov     ecx, eax
0x57BA75: call    sub_57CEA0
0x57BA7A: mov     eax, [esp+arg_10]
0x57BA7E: cmp     eax, 3EBh
0x57BA83: jz      short loc_57BA9F
0x57BA85: cmp     eax, 3EAh
0x57BA8A: jz      short loc_57BA9F
0x57BA8C: cmp     eax, 3FEh
0x57BA91: jz      short loc_57BA9F
0x57BA93: cmp     eax, 3FFh
0x57BA98: jz      short loc_57BA9F
0x57BA9A: mov     eax, 3EBh
0x57BA9F: push    eax
0x57BAA0: push    1; arg1
0x57BAA2: push    0; canCreate
0x57BAA4: call    InterfaceManager_GetSingleton
0x57BAA9: add     esp, 8
0x57BAAC: mov     ecx, eax
0x57BAAE: call    sub_57D530
0x57BAB3: retn
