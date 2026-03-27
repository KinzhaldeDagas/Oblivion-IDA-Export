0x7579A0: push    esi
0x7579A1: mov     esi, [esp+4+arg_0]
0x7579A5: push    edi
0x7579A6: push    esi
0x7579A7: call    sub_75F730
0x7579AC: mov     eax, ds:0B413D0h
0x7579B1: push    eax; ArgList
0x7579B2: call    TESOutput_PrintString
0x7579B7: movzx   edi, word ptr [esi+0Ah]
0x7579BB: movzx   ecx, word ptr [esi+8]
0x7579BF: add     esp, 4
0x7579C2: cmp     edi, ecx
0x7579C4: mov     [esp+8+arg_0], eax
0x7579C8: jb      short loc_7579D8
0x7579CA: movzx   edx, word ptr [esi+0Eh]
0x7579CE: add     edx, edi
0x7579D0: push    edx
0x7579D1: mov     ecx, esi
0x7579D3: call    NiTArray_SetSize
0x7579D8: lea     eax, [esp+8+arg_0]
0x7579DC: push    eax
0x7579DD: push    edi
0x7579DE: mov     ecx, esi
0x7579E0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7579E5: pop     edi
0x7579E6: pop     esi
0x7579E7: retn    4
