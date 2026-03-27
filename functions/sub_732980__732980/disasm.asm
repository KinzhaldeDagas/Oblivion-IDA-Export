0x732980: push    esi
0x732981: mov     esi, [esp+4+a2]
0x732985: push    edi
0x732986: push    esi; a2
0x732987: call    sub_7009A0
0x73298C: mov     eax, ds:0B40008h
0x732991: push    eax; ArgList
0x732992: call    TESOutput_PrintString
0x732997: movzx   edi, word ptr [esi+0Ah]
0x73299B: movzx   ecx, word ptr [esi+8]
0x73299F: add     esp, 4
0x7329A2: cmp     edi, ecx
0x7329A4: mov     [esp+8+a2], eax
0x7329A8: jb      short loc_7329B8
0x7329AA: movzx   edx, word ptr [esi+0Eh]
0x7329AE: add     edx, edi
0x7329B0: push    edx
0x7329B1: mov     ecx, esi
0x7329B3: call    NiTArray_SetSize
0x7329B8: lea     eax, [esp+8+a2]
0x7329BC: push    eax
0x7329BD: push    edi
0x7329BE: mov     ecx, esi
0x7329C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7329C5: pop     edi
0x7329C6: pop     esi
0x7329C7: retn    4
