0x991BAB: mov     ax, [esp+0]
0x991BAF: cmp     ax, 27Fh
0x991BB3: jz      short CW_is_restored_0
0x991BB5: and     ax, 20h
0x991BB9: jz      short restore_CW
0x991BBB: fstsw   ax
0x991BBE: and     ax, 20h
0x991BC2: jz      short restore_CW
0x991BC4: mov     eax, 8
0x991BC9: call    unknown_libname_156
0x991BCE: pop     edx
0x991BCF: retn
0x991BD0: fldcw   word ptr [esp+0]
0x991BD3: pop     edx
0x991BD4: retn
