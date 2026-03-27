0x756960: push    esi
0x756961: mov     esi, [esp+4+arg_0]
0x756965: push    edi
0x756966: push    esi
0x756967: call    sub_75F730
0x75696C: mov     eax, ds:0B41108h
0x756971: push    eax; ArgList
0x756972: call    TESOutput_PrintString
0x756977: movzx   edi, word ptr [esi+0Ah]
0x75697B: movzx   ecx, word ptr [esi+8]
0x75697F: add     esp, 4
0x756982: cmp     edi, ecx
0x756984: mov     [esp+8+arg_0], eax
0x756988: jb      short loc_756998
0x75698A: movzx   edx, word ptr [esi+0Eh]
0x75698E: add     edx, edi
0x756990: push    edx
0x756991: mov     ecx, esi
0x756993: call    NiTArray_SetSize
0x756998: lea     eax, [esp+8+arg_0]
0x75699C: push    eax
0x75699D: push    edi
0x75699E: mov     ecx, esi
0x7569A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7569A5: pop     edi
0x7569A6: pop     esi
0x7569A7: retn    4
