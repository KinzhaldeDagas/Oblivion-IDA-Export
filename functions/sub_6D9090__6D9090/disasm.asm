0x6D9090: push    ebx
0x6D9091: push    esi
0x6D9092: mov     esi, [esp+8+a2]
0x6D9096: push    edi
0x6D9097: push    esi; a2
0x6D9098: mov     ebx, ecx
0x6D909A: call    sub_7009A0
0x6D909F: mov     eax, ds:0B3DB70h
0x6D90A4: push    eax; ArgList
0x6D90A5: call    TESOutput_PrintString
0x6D90AA: movzx   edi, word ptr [esi+0Ah]
0x6D90AE: movzx   ecx, word ptr [esi+8]
0x6D90B2: add     esp, 4
0x6D90B5: cmp     edi, ecx
0x6D90B7: mov     [esp+0Ch+a2], eax
0x6D90BB: jb      short loc_6D90CB
0x6D90BD: movzx   edx, word ptr [esi+0Eh]
0x6D90C1: add     edx, edi
0x6D90C3: push    edx
0x6D90C4: mov     ecx, esi
0x6D90C6: call    NiTArray_SetSize
0x6D90CB: lea     eax, [esp+0Ch+a2]
0x6D90CF: push    eax
0x6D90D0: push    edi
0x6D90D1: mov     ecx, esi
0x6D90D3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D90D8: mov     ecx, [ebx+8]
0x6D90DB: push    ecx; int
0x6D90DC: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6D90E1: call    TESOutput_PrintLabeledUnsignedInt
0x6D90E6: movzx   edi, word ptr [esi+0Ah]
0x6D90EA: movzx   edx, word ptr [esi+8]
0x6D90EE: add     esp, 8
0x6D90F1: cmp     edi, edx
0x6D90F3: mov     [esp+0Ch+a2], eax
0x6D90F7: jb      short loc_6D9107
0x6D90F9: movzx   eax, word ptr [esi+0Eh]
0x6D90FD: add     eax, edi
0x6D90FF: push    eax
0x6D9100: mov     ecx, esi
0x6D9102: call    NiTArray_SetSize
0x6D9107: lea     ecx, [esp+0Ch+a2]
0x6D910B: push    ecx
0x6D910C: push    edi
0x6D910D: mov     ecx, esi
0x6D910F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6D9114: pop     edi
0x6D9115: pop     esi
0x6D9116: pop     ebx
0x6D9117: retn    4
