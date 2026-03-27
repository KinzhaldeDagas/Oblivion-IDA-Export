0x8BA8D0: push    esi
0x8BA8D1: mov     esi, [esp+4+arg_0]
0x8BA8D5: push    edi
0x8BA8D6: push    esi
0x8BA8D7: call    sub_8AED00
0x8BA8DC: mov     eax, ds:0BA8030h
0x8BA8E1: push    eax; ArgList
0x8BA8E2: call    TESOutput_PrintString
0x8BA8E7: movzx   edi, word ptr [esi+0Ah]
0x8BA8EB: movzx   ecx, word ptr [esi+8]
0x8BA8EF: add     esp, 4
0x8BA8F2: cmp     edi, ecx
0x8BA8F4: mov     [esp+8+arg_0], eax
0x8BA8F8: jb      short loc_8BA908
0x8BA8FA: movzx   edx, word ptr [esi+0Eh]
0x8BA8FE: add     edx, edi
0x8BA900: push    edx
0x8BA901: mov     ecx, esi
0x8BA903: call    NiTArray_SetSize
0x8BA908: lea     eax, [esp+8+arg_0]
0x8BA90C: push    eax
0x8BA90D: push    edi
0x8BA90E: mov     ecx, esi
0x8BA910: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BA915: pop     edi
0x8BA916: pop     esi
0x8BA917: retn    4
