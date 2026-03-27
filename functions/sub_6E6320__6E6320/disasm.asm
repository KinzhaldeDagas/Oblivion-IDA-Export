0x6E6320: push    esi
0x6E6321: mov     esi, [esp+4+arg_0]
0x6E6325: push    edi
0x6E6326: push    esi
0x6E6327: call    sub_6E5800
0x6E632C: mov     eax, ds:0B3E5B4h
0x6E6331: push    eax; ArgList
0x6E6332: call    TESOutput_PrintString
0x6E6337: movzx   edi, word ptr [esi+0Ah]
0x6E633B: movzx   ecx, word ptr [esi+8]
0x6E633F: add     esp, 4
0x6E6342: cmp     edi, ecx
0x6E6344: mov     [esp+8+arg_0], eax
0x6E6348: jb      short loc_6E6358
0x6E634A: movzx   edx, word ptr [esi+0Eh]
0x6E634E: add     edx, edi
0x6E6350: push    edx
0x6E6351: mov     ecx, esi
0x6E6353: call    NiTArray_SetSize
0x6E6358: lea     eax, [esp+8+arg_0]
0x6E635C: push    eax
0x6E635D: push    edi
0x6E635E: mov     ecx, esi
0x6E6360: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E6365: pop     edi
0x6E6366: pop     esi
0x6E6367: retn    4
