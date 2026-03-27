0x4BB070: push    ebx
0x4BB071: push    esi
0x4BB072: push    edi
0x4BB073: mov     edi, [esp+0Ch+arg_0]
0x4BB077: push    edi
0x4BB078: mov     esi, ecx
0x4BB07A: call    TESForm_ModifiedFormSize
0x4BB07F: push    edi
0x4BB080: lea     ecx, [esi+70h]
0x4BB083: movzx   ebx, ax
0x4BB086: call    TESValueForm_ModifiedSize
0x4BB08B: pop     edi
0x4BB08C: pop     esi
0x4BB08D: add     ax, bx
0x4BB090: pop     ebx
0x4BB091: retn    4
