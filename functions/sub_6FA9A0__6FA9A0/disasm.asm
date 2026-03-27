0x6FA9A0: push    ebx
0x6FA9A1: push    esi
0x6FA9A2: mov     esi, dword ptr [esp+8+arg_0]
0x6FA9A6: push    edi
0x6FA9A7: push    esi
0x6FA9A8: mov     edi, ecx
0x6FA9AA: call    sub_730AD0
0x6FA9AF: mov     eax, ds:0B3F484h
0x6FA9B4: push    eax; ArgList
0x6FA9B5: call    TESOutput_PrintString
0x6FA9BA: movzx   ebx, word ptr [esi+0Ah]
0x6FA9BE: movzx   ecx, word ptr [esi+8]
0x6FA9C2: add     esp, 4
0x6FA9C5: cmp     ebx, ecx
0x6FA9C7: mov     dword ptr [esp+0Ch+arg_0], eax
0x6FA9CB: jb      short loc_6FA9DB
0x6FA9CD: movzx   edx, word ptr [esi+0Eh]
0x6FA9D1: add     edx, ebx
0x6FA9D3: push    edx
0x6FA9D4: mov     ecx, esi
0x6FA9D6: call    NiTArray_SetSize
0x6FA9DB: lea     eax, [esp+0Ch+arg_0]
0x6FA9DF: push    eax
0x6FA9E0: push    ebx
0x6FA9E1: mov     ecx, esi
0x6FA9E3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FA9E8: mov     cl, [edi+0Ch]
0x6FA9EB: and     cl, 1
0x6FA9EE: mov     [esp+0Ch+arg_0], cl
0x6FA9F2: mov     edx, dword ptr [esp+0Ch+arg_0]
0x6FA9F6: push    edx; char
0x6FA9F7: push    offset aBanimated; "bAnimated"
0x6FA9FC: call    TESOutput_PrintLabeledBool
0x6FAA01: movzx   ebx, word ptr [esi+0Ah]
0x6FAA05: mov     dword ptr [esp+14h+arg_0], eax
0x6FAA09: movzx   eax, word ptr [esi+8]
0x6FAA0D: add     esp, 8
0x6FAA10: cmp     ebx, eax
0x6FAA12: jb      short loc_6FAA22
0x6FAA14: movzx   ecx, word ptr [esi+0Eh]
0x6FAA18: add     ecx, ebx
0x6FAA1A: push    ecx
0x6FAA1B: mov     ecx, esi
0x6FAA1D: call    NiTArray_SetSize
0x6FAA22: lea     edx, [esp+0Ch+arg_0]
0x6FAA26: push    edx
0x6FAA27: push    ebx
0x6FAA28: mov     ecx, esi
0x6FAA2A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FAA2F: mov     eax, [edi+0Ch]
0x6FAA32: shr     eax, 1
0x6FAA34: and     al, 1
0x6FAA36: mov     [esp+0Ch+arg_0], al
0x6FAA3A: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6FAA3E: push    ecx; char
0x6FAA3F: push    offset aBhavok; "bHavok"
0x6FAA44: call    TESOutput_PrintLabeledBool
0x6FAA49: movzx   ebx, word ptr [esi+0Ah]
0x6FAA4D: movzx   edx, word ptr [esi+8]
0x6FAA51: add     esp, 8
0x6FAA54: cmp     ebx, edx
0x6FAA56: mov     dword ptr [esp+0Ch+arg_0], eax
0x6FAA5A: jb      short loc_6FAA6A
0x6FAA5C: movzx   eax, word ptr [esi+0Eh]
0x6FAA60: add     eax, ebx
0x6FAA62: push    eax
0x6FAA63: mov     ecx, esi
0x6FAA65: call    NiTArray_SetSize
0x6FAA6A: lea     ecx, [esp+0Ch+arg_0]
0x6FAA6E: push    ecx
0x6FAA6F: push    ebx
0x6FAA70: mov     ecx, esi
0x6FAA72: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FAA77: mov     edx, [edi+0Ch]
0x6FAA7A: shr     edx, 2
0x6FAA7D: and     dl, 1
0x6FAA80: mov     [esp+0Ch+arg_0], dl
0x6FAA84: mov     eax, dword ptr [esp+0Ch+arg_0]
0x6FAA88: push    eax; char
0x6FAA89: push    offset aBragdoll; "bRagDoll"
0x6FAA8E: call    TESOutput_PrintLabeledBool
0x6FAA93: movzx   ebx, word ptr [esi+0Ah]
0x6FAA97: movzx   ecx, word ptr [esi+8]
0x6FAA9B: add     esp, 8
0x6FAA9E: cmp     ebx, ecx
0x6FAAA0: mov     dword ptr [esp+0Ch+arg_0], eax
0x6FAAA4: jb      short loc_6FAAB4
0x6FAAA6: movzx   edx, word ptr [esi+0Eh]
0x6FAAAA: add     edx, ebx
0x6FAAAC: push    edx
0x6FAAAD: mov     ecx, esi
0x6FAAAF: call    NiTArray_SetSize
0x6FAAB4: lea     eax, [esp+0Ch+arg_0]
0x6FAAB8: push    eax
0x6FAAB9: push    ebx
0x6FAABA: mov     ecx, esi
0x6FAABC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FAAC1: mov     ecx, [edi+0Ch]
0x6FAAC4: shr     ecx, 3
0x6FAAC7: and     cl, 1
0x6FAACA: mov     [esp+0Ch+arg_0], cl
0x6FAACE: mov     edx, dword ptr [esp+0Ch+arg_0]
0x6FAAD2: push    edx; char
0x6FAAD3: push    offset aBcomplex; "bComplex"
0x6FAAD8: call    TESOutput_PrintLabeledBool
0x6FAADD: movzx   ebx, word ptr [esi+0Ah]
0x6FAAE1: mov     dword ptr [esp+14h+arg_0], eax
0x6FAAE5: movzx   eax, word ptr [esi+8]
0x6FAAE9: add     esp, 8
0x6FAAEC: cmp     ebx, eax
0x6FAAEE: jb      short loc_6FAAFE
0x6FAAF0: movzx   ecx, word ptr [esi+0Eh]
0x6FAAF4: add     ecx, ebx
0x6FAAF6: push    ecx
0x6FAAF7: mov     ecx, esi
0x6FAAF9: call    NiTArray_SetSize
0x6FAAFE: lea     edx, [esp+0Ch+arg_0]
0x6FAB02: push    edx
0x6FAB03: push    ebx
0x6FAB04: mov     ecx, esi
0x6FAB06: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FAB0B: mov     eax, [edi+0Ch]
0x6FAB0E: shr     eax, 4
0x6FAB11: and     al, 1
0x6FAB13: mov     [esp+0Ch+arg_0], al
0x6FAB17: mov     ecx, dword ptr [esp+0Ch+arg_0]
0x6FAB1B: push    ecx; char
0x6FAB1C: push    offset aBflame; "bFlame"
0x6FAB21: call    TESOutput_PrintLabeledBool
0x6FAB26: movzx   edi, word ptr [esi+0Ah]
0x6FAB2A: movzx   edx, word ptr [esi+8]
0x6FAB2E: add     esp, 8
0x6FAB31: cmp     edi, edx
0x6FAB33: mov     dword ptr [esp+0Ch+arg_0], eax
0x6FAB37: jb      short loc_6FAB47
0x6FAB39: movzx   eax, word ptr [esi+0Eh]
0x6FAB3D: add     eax, edi
0x6FAB3F: push    eax
0x6FAB40: mov     ecx, esi
0x6FAB42: call    NiTArray_SetSize
0x6FAB47: lea     ecx, [esp+0Ch+arg_0]
0x6FAB4B: push    ecx
0x6FAB4C: push    edi
0x6FAB4D: mov     ecx, esi
0x6FAB4F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FAB54: pop     edi
0x6FAB55: pop     esi
0x6FAB56: pop     ebx
0x6FAB57: retn    4
