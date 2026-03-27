0x757DA0: push    esi
0x757DA1: mov     esi, [esp+4+arg_0]
0x757DA5: push    edi
0x757DA6: push    esi
0x757DA7: call    sub_75F730
0x757DAC: mov     eax, ds:0B41528h
0x757DB1: push    eax; ArgList
0x757DB2: call    TESOutput_PrintString
0x757DB7: movzx   edi, word ptr [esi+0Ah]
0x757DBB: movzx   ecx, word ptr [esi+8]
0x757DBF: add     esp, 4
0x757DC2: cmp     edi, ecx
0x757DC4: mov     [esp+8+arg_0], eax
0x757DC8: jb      short loc_757DD8
0x757DCA: movzx   edx, word ptr [esi+0Eh]
0x757DCE: add     edx, edi
0x757DD0: push    edx
0x757DD1: mov     ecx, esi
0x757DD3: call    NiTArray_SetSize
0x757DD8: lea     eax, [esp+8+arg_0]
0x757DDC: push    eax
0x757DDD: push    edi
0x757DDE: mov     ecx, esi
0x757DE0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757DE5: pop     edi
0x757DE6: pop     esi
0x757DE7: retn    4
