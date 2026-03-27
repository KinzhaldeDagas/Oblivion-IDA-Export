0x694F20: push    esi
0x694F21: mov     esi, ecx
0x694F23: mov     eax, [esi]
0x694F25: mov     edx, [eax+148h]
0x694F2B: call    edx
0x694F2D: mov     eax, [esp+4+a1.vtbl]
0x694F31: mov     ecx, [esp+4+arg_0]
0x694F35: push    eax
0x694F36: push    ecx
0x694F37: mov     ecx, esi
0x694F39: call    sub_69F800
0x694F3E: push    4; a2
0x694F40: lea     edx, [esi+7Ch]
0x694F43: push    edx; a1
0x694F44: mov     ecx, esi
0x694F46: call    TESForm_LoadDataFromCurrentSaveGame
0x694F4B: push    4; a2
0x694F4D: lea     eax, [esi+5Ch]
0x694F50: push    eax; a1
0x694F51: mov     ecx, esi
0x694F53: call    TESForm_LoadDataFromCurrentSaveGame
0x694F58: mov     ecx, ds:0B33B00h
0x694F5E: cmp     byte ptr [ecx+7Ch], 64h ; 'd'
0x694F62: jnb     short loc_694F71
0x694F64: push    4; a2
0x694F66: lea     edx, [esi+60h]
0x694F69: push    edx; a1
0x694F6A: mov     ecx, esi
0x694F6C: call    TESForm_LoadDataFromCurrentSaveGame
0x694F71: mov     ecx, ds:0B33B00h
0x694F77: push    edi
0x694F78: push    4; Size
0x694F7A: lea     edi, [esi+80h]
0x694F80: push    edi; Dst
0x694F81: call    SaveLoad_LoadData
0x694F86: push    4; a2
0x694F88: lea     eax, [esi+84h]
0x694F8E: push    eax; a1
0x694F8F: mov     ecx, esi
0x694F91: call    TESForm_LoadDataFromCurrentSaveGame
0x694F96: cmp     dword ptr [edi], 2
0x694F99: pop     edi
0x694F9A: jnz     short loc_694FB4
0x694F9C: push    4; a2
0x694F9E: lea     ecx, [esp+8+a1]
0x694FA2: push    ecx; a1
0x694FA3: mov     ecx, esi
0x694FA5: call    TESForm_LoadDataFromCurrentSaveGame
0x694FAA: mov     edx, [esp+4+a1.vtbl]
0x694FAE: mov     [esi+8Ch], edx
0x694FB4: pop     esi
0x694FB5: retn    8
