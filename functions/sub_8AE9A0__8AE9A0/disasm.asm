0x8AE9A0: push    esi
0x8AE9A1: mov     esi, [esp+4+arg_0]
0x8AE9A5: push    edi
0x8AE9A6: push    esi
0x8AE9A7: call    sub_8A2A50
0x8AE9AC: mov     eax, ds:0BA7F48h
0x8AE9B1: push    eax; ArgList
0x8AE9B2: call    TESOutput_PrintString
0x8AE9B7: movzx   edi, word ptr [esi+0Ah]
0x8AE9BB: movzx   ecx, word ptr [esi+8]
0x8AE9BF: add     esp, 4
0x8AE9C2: cmp     edi, ecx
0x8AE9C4: mov     [esp+8+arg_0], eax
0x8AE9C8: jb      short loc_8AE9D8
0x8AE9CA: movzx   edx, word ptr [esi+0Eh]
0x8AE9CE: add     edx, edi
0x8AE9D0: push    edx
0x8AE9D1: mov     ecx, esi
0x8AE9D3: call    NiTArray_SetSize
0x8AE9D8: lea     eax, [esp+8+arg_0]
0x8AE9DC: push    eax
0x8AE9DD: push    edi
0x8AE9DE: mov     ecx, esi
0x8AE9E0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AE9E5: pop     edi
0x8AE9E6: pop     esi
0x8AE9E7: retn    4
