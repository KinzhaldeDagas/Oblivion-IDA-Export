0x6CC490: push    esi
0x6CC491: mov     esi, [esp+4+arg_0]
0x6CC495: push    edi
0x6CC496: push    esi
0x6CC497: call    sub_6CDDB0
0x6CC49C: mov     eax, ds:0B3CBF8h
0x6CC4A1: push    eax; ArgList
0x6CC4A2: call    TESOutput_PrintString
0x6CC4A7: movzx   edi, word ptr [esi+0Ah]
0x6CC4AB: movzx   ecx, word ptr [esi+8]
0x6CC4AF: add     esp, 4
0x6CC4B2: cmp     edi, ecx
0x6CC4B4: mov     [esp+8+arg_0], eax
0x6CC4B8: jb      short loc_6CC4C8
0x6CC4BA: movzx   edx, word ptr [esi+0Eh]
0x6CC4BE: add     edx, edi
0x6CC4C0: push    edx
0x6CC4C1: mov     ecx, esi
0x6CC4C3: call    NiTArray_SetSize
0x6CC4C8: lea     eax, [esp+8+arg_0]
0x6CC4CC: push    eax
0x6CC4CD: push    edi
0x6CC4CE: mov     ecx, esi
0x6CC4D0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CC4D5: pop     edi
0x6CC4D6: pop     esi
0x6CC4D7: retn    4
