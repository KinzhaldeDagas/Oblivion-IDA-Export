0x6DA0C0: push    ebx
0x6DA0C1: push    esi
0x6DA0C2: mov     esi, [esp+8+a2]
0x6DA0C6: push    edi
0x6DA0C7: push    esi; a2
0x6DA0C8: mov     ebx, ecx
0x6DA0CA: call    sub_7009A0
0x6DA0CF: mov     eax, ds:0B3DC80h
0x6DA0D4: push    eax; ArgList
0x6DA0D5: call    TESOutput_PrintString
0x6DA0DA: movzx   edi, word ptr [esi+0Ah]
0x6DA0DE: movzx   ecx, word ptr [esi+8]
0x6DA0E2: add     esp, 4
0x6DA0E5: cmp     edi, ecx
0x6DA0E7: mov     [esp+0Ch+a2], eax
0x6DA0EB: jb      short loc_6DA0FB
0x6DA0ED: movzx   edx, word ptr [esi+0Eh]
0x6DA0F1: add     edx, edi
0x6DA0F3: push    edx
0x6DA0F4: mov     ecx, esi
0x6DA0F6: call    NiTArray_SetSize
0x6DA0FB: lea     eax, [esp+0Ch+a2]
0x6DA0FF: push    eax
0x6DA100: push    edi
0x6DA101: mov     ecx, esi
0x6DA103: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DA108: mov     ecx, [ebx+8]
0x6DA10B: push    ecx; int
0x6DA10C: push    offset aM_uinumkeys; "m_uiNumKeys"
0x6DA111: call    TESOutput_PrintLabeledUnsignedInt
0x6DA116: movzx   edi, word ptr [esi+0Ah]
0x6DA11A: movzx   edx, word ptr [esi+8]
0x6DA11E: add     esp, 8
0x6DA121: cmp     edi, edx
0x6DA123: mov     [esp+0Ch+a2], eax
0x6DA127: jb      short loc_6DA137
0x6DA129: movzx   eax, word ptr [esi+0Eh]
0x6DA12D: add     eax, edi
0x6DA12F: push    eax
0x6DA130: mov     ecx, esi
0x6DA132: call    NiTArray_SetSize
0x6DA137: lea     ecx, [esp+0Ch+a2]
0x6DA13B: push    ecx
0x6DA13C: push    edi
0x6DA13D: mov     ecx, esi
0x6DA13F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6DA144: pop     edi
0x6DA145: pop     esi
0x6DA146: pop     ebx
0x6DA147: retn    4
