0x4B0B40: push    ebx
0x4B0B41: push    esi
0x4B0B42: push    edi
0x4B0B43: mov     edi, [esp+0Ch+arg_0]
0x4B0B47: push    edi
0x4B0B48: mov     esi, ecx
0x4B0B4A: call    TESForm_ModifiedFormSize
0x4B0B4F: push    edi
0x4B0B50: lea     ecx, [esi+68h]
0x4B0B53: movzx   ebx, ax
0x4B0B56: call    TESValueForm_ModifiedSize
0x4B0B5B: pop     edi
0x4B0B5C: pop     esi
0x4B0B5D: add     ax, bx
0x4B0B60: pop     ebx
0x4B0B61: retn    4
