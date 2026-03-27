0x7E5970: push    esi
0x7E5971: mov     esi, [esp+4+arg_0]
0x7E5975: push    edi
0x7E5976: push    esi
0x7E5977: call    sub_7E28E0
0x7E597C: mov     eax, ds:0B46058h
0x7E5981: push    eax; ArgList
0x7E5982: call    TESOutput_PrintString
0x7E5987: movzx   edi, word ptr [esi+0Ah]
0x7E598B: movzx   ecx, word ptr [esi+8]
0x7E598F: add     esp, 4
0x7E5992: cmp     edi, ecx
0x7E5994: mov     [esp+8+arg_0], eax
0x7E5998: jb      short loc_7E59A8
0x7E599A: movzx   edx, word ptr [esi+0Eh]
0x7E599E: add     edx, edi
0x7E59A0: push    edx
0x7E59A1: mov     ecx, esi
0x7E59A3: call    NiTArray_SetSize
0x7E59A8: lea     eax, [esp+8+arg_0]
0x7E59AC: push    eax
0x7E59AD: push    edi
0x7E59AE: mov     ecx, esi
0x7E59B0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7E59B5: pop     edi
0x7E59B6: pop     esi
0x7E59B7: retn    4
