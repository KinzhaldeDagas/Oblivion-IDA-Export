0x77DDC0: push    esi
0x77DDC1: mov     esi, ecx
0x77DDC3: mov     dword ptr [esi], offset ??_7NiUnsharedGeometryGroup@@6B@; const NiUnsharedGeometryGroup::`vftable'
0x77DDC9: cmp     esi, ds:0B428A0h
0x77DDCF: jnz     short loc_77DDDB
0x77DDD1: mov     dword ptr ds:0B428A0h, 0
0x77DDDB: call    sub_7828F0
0x77DDE0: test    [esp+4+arg_0], 1
0x77DDE5: jz      short loc_77DDF0
0x77DDE7: push    esi
0x77DDE8: call    FormHeapFree
0x77DDED: add     esp, 4
0x77DDF0: mov     eax, esi
0x77DDF2: pop     esi
0x77DDF3: retn    4
