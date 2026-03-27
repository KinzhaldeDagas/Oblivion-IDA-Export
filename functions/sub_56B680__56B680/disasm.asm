0x56B680: push    esi
0x56B681: mov     esi, ecx
0x56B683: call    sub_56B6A0
0x56B688: test    [esp+4+arg_0], 1
0x56B68D: jz      short loc_56B698
0x56B68F: push    esi
0x56B690: call    FormHeapFree
0x56B695: add     esp, 4
0x56B698: mov     eax, esi
0x56B69A: pop     esi
0x56B69B: retn    4
