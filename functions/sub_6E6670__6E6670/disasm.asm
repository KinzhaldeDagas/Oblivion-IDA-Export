0x6E6670: push    esi
0x6E6671: mov     esi, [esp+4+arg_0]
0x6E6675: push    edi
0x6E6676: push    esi
0x6E6677: call    sub_6E6AC0
0x6E667C: mov     eax, ds:0B3E5F0h
0x6E6681: push    eax; ArgList
0x6E6682: call    TESOutput_PrintString
0x6E6687: movzx   edi, word ptr [esi+0Ah]
0x6E668B: movzx   ecx, word ptr [esi+8]
0x6E668F: add     esp, 4
0x6E6692: cmp     edi, ecx
0x6E6694: mov     [esp+8+arg_0], eax
0x6E6698: jb      short loc_6E66A8
0x6E669A: movzx   edx, word ptr [esi+0Eh]
0x6E669E: add     edx, edi
0x6E66A0: push    edx
0x6E66A1: mov     ecx, esi
0x6E66A3: call    NiTArray_SetSize
0x6E66A8: lea     eax, [esp+8+arg_0]
0x6E66AC: push    eax
0x6E66AD: push    edi
0x6E66AE: mov     ecx, esi
0x6E66B0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E66B5: pop     edi
0x6E66B6: pop     esi
0x6E66B7: retn    4
