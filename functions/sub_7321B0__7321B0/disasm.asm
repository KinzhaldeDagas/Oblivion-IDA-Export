0x7321B0: push    esi
0x7321B1: mov     esi, [esp+4+a2]
0x7321B5: push    edi
0x7321B6: push    esi; a2
0x7321B7: call    sub_7009A0
0x7321BC: mov     eax, ds:0B3FFC0h
0x7321C1: push    eax; ArgList
0x7321C2: call    TESOutput_PrintString
0x7321C7: movzx   edi, word ptr [esi+0Ah]
0x7321CB: movzx   ecx, word ptr [esi+8]
0x7321CF: add     esp, 4
0x7321D2: cmp     edi, ecx
0x7321D4: mov     [esp+8+a2], eax
0x7321D8: jb      short loc_7321E8
0x7321DA: movzx   edx, word ptr [esi+0Eh]
0x7321DE: add     edx, edi
0x7321E0: push    edx
0x7321E1: mov     ecx, esi
0x7321E3: call    NiTArray_SetSize
0x7321E8: lea     eax, [esp+8+a2]
0x7321EC: push    eax
0x7321ED: push    edi
0x7321EE: mov     ecx, esi
0x7321F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7321F5: pop     edi
0x7321F6: pop     esi
0x7321F7: retn    4
