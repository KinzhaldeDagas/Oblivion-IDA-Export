0x4C9760: push    esi
0x4C9761: mov     esi, ecx
0x4C9763: call    sub_4C9490
0x4C9768: test    [esp+4+arg_0], 1
0x4C976D: jz      short loc_4C9778
0x4C976F: push    esi
0x4C9770: call    FormHeapFree
0x4C9775: add     esp, 4
0x4C9778: mov     eax, esi
0x4C977A: pop     esi
0x4C977B: retn    4
