0x4B5BE0: push    ebx
0x4B5BE1: push    esi
0x4B5BE2: push    edi
0x4B5BE3: mov     edi, [esp+0Ch+arg_0]
0x4B5BE7: push    edi
0x4B5BE8: mov     esi, ecx
0x4B5BEA: call    TESForm_ModifiedFormSize
0x4B5BEF: push    edi
0x4B5BF0: lea     ecx, [esi+4Ch]
0x4B5BF3: movzx   ebx, ax
0x4B5BF6: call    TESValueForm_ModifiedSize
0x4B5BFB: pop     edi
0x4B5BFC: pop     esi
0x4B5BFD: add     ax, bx
0x4B5C00: pop     ebx
0x4B5C01: retn    4
