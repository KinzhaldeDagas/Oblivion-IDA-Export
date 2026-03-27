0x64ACF0: push    esi
0x64ACF1: mov     esi, ecx
0x64ACF3: call    sub_64AC60
0x64ACF8: test    [esp+4+arg_0], 1
0x64ACFD: jz      short loc_64AD08
0x64ACFF: push    esi
0x64AD00: call    FormHeapFree
0x64AD05: add     esp, 4
0x64AD08: mov     eax, esi
0x64AD0A: pop     esi
0x64AD0B: retn    4
