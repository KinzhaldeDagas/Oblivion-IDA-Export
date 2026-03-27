0x4A8F60: push    ebx
0x4A8F61: push    esi
0x4A8F62: push    edi
0x4A8F63: mov     edi, [esp+0Ch+arg_0]
0x4A8F67: push    edi
0x4A8F68: mov     esi, ecx
0x4A8F6A: call    TESForm_ModifiedFormSize
0x4A8F6F: push    edi
0x4A8F70: lea     ecx, [esi+64h]
0x4A8F73: movzx   ebx, ax
0x4A8F76: call    TESValueForm_ModifiedSize
0x4A8F7B: pop     edi
0x4A8F7C: pop     esi
0x4A8F7D: add     ax, bx
0x4A8F80: pop     ebx
0x4A8F81: retn    4
