0x73D030: push    ecx
0x73D031: push    ebx
0x73D032: push    ebp
0x73D033: push    esi
0x73D034: mov     esi, [esp+10h+arg_0]
0x73D038: push    edi
0x73D039: mov     edi, ecx
0x73D03B: push    esi
0x73D03C: mov     [esp+18h+var_4], edi
0x73D040: call    sub_721730
0x73D045: mov     eax, ds:0B40188h
0x73D04A: push    eax; ArgList
0x73D04B: call    TESOutput_PrintString
0x73D050: movzx   ebx, word ptr [esi+0Ah]
0x73D054: movzx   ecx, word ptr [esi+8]
0x73D058: add     esp, 4
0x73D05B: cmp     ebx, ecx
0x73D05D: mov     [esp+14h+arg_0], eax
0x73D061: jb      short loc_73D071
0x73D063: movzx   edx, word ptr [esi+0Eh]
0x73D067: add     edx, ebx
0x73D069: push    edx
0x73D06A: mov     ecx, esi
0x73D06C: call    NiTArray_SetSize
0x73D071: lea     eax, [esp+14h+arg_0]
0x73D075: push    eax
0x73D076: push    ebx
0x73D077: mov     ecx, esi
0x73D079: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D07E: mov     ecx, [edi+0Ch]
0x73D081: push    ecx; int
0x73D082: push    offset aM_uisize; "m_uiSize"
0x73D087: call    TESOutput_PrintLabeledUnsignedInt
0x73D08C: movzx   ebx, word ptr [esi+0Ah]
0x73D090: movzx   edx, word ptr [esi+8]
0x73D094: add     esp, 8
0x73D097: cmp     ebx, edx
0x73D099: mov     [esp+14h+arg_0], eax
0x73D09D: jb      short loc_73D0AD
0x73D09F: movzx   eax, word ptr [esi+0Eh]
0x73D0A3: add     eax, ebx
0x73D0A5: push    eax
0x73D0A6: mov     ecx, esi
0x73D0A8: call    NiTArray_SetSize
0x73D0AD: lea     ecx, [esp+14h+arg_0]
0x73D0B1: push    ecx
0x73D0B2: push    ebx
0x73D0B3: mov     ecx, esi
0x73D0B5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x73D0BA: xor     ebp, ebp
0x73D0BC: cmp     [edi+0Ch], ebp
0x73D0BF: jbe     loc_73D14C
0x73D0C5: jmp     short loc_73D0C9
0x73D0C7: mov     edi, edx
0x73D0C9: mov     edx, [edi+10h]
0x73D0CC: mov     eax, [edx+ebp*4]
0x73D0CF: push    eax; int
0x73D0D0: push    offset aM_ppcvalueI; "m_ppcValue[i]"
0x73D0D5: call    TESOutput_PrintLabeledString
0x73D0DA: movzx   edi, word ptr [esi+0Ah]
0x73D0DE: movzx   ecx, word ptr [esi+8]
0x73D0E2: add     esp, 8
0x73D0E5: cmp     edi, ecx
0x73D0E7: mov     ebx, eax
0x73D0E9: jb      short loc_73D0F9
0x73D0EB: movzx   edx, word ptr [esi+0Eh]
0x73D0EF: add     edx, edi
0x73D0F1: push    edx
0x73D0F2: mov     ecx, esi
0x73D0F4: call    NiTArray_SetSize
0x73D0F9: movzx   eax, word ptr [esi+0Ah]
0x73D0FD: cmp     edi, eax
0x73D0FF: jb      short loc_73D113
0x73D101: test    ebx, ebx
0x73D103: lea     ecx, [edi+1]
0x73D106: mov     [esi+0Ah], cx
0x73D10A: jz      short loc_73D136
0x73D10C: add     word ptr [esi+0Ch], 1
0x73D111: jmp     short loc_73D136
0x73D113: test    ebx, ebx
0x73D115: jz      short loc_73D127
0x73D117: mov     edx, [esi+4]
0x73D11A: cmp     dword ptr [edx+edi*4], 0
0x73D11E: jnz     short loc_73D136
0x73D120: add     word ptr [esi+0Ch], 1
0x73D125: jmp     short loc_73D136
0x73D127: mov     eax, [esi+4]
0x73D12A: cmp     dword ptr [eax+edi*4], 0
0x73D12E: jz      short loc_73D136
0x73D130: add     word ptr [esi+0Ch], 0FFFFh
0x73D136: mov     ecx, [esi+4]
0x73D139: mov     edx, [esp+14h+var_4]
0x73D13D: add     ebp, 1
0x73D140: mov     [ecx+edi*4], ebx
0x73D143: cmp     ebp, [edx+0Ch]
0x73D146: jb      loc_73D0C7
0x73D14C: pop     edi
0x73D14D: pop     esi
0x73D14E: pop     ebp
0x73D14F: pop     ebx
0x73D150: pop     ecx
0x73D151: retn    4
