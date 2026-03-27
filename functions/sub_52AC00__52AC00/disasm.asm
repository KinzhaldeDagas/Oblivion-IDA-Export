0x52AC00: push    esi
0x52AC01: mov     esi, ecx
0x52AC03: call    sub_52AB00
0x52AC08: test    [esp+4+arg_0], 1
0x52AC0D: jz      short loc_52AC18
0x52AC0F: push    esi
0x52AC10: call    FormHeapFree
0x52AC15: add     esp, 4
0x52AC18: mov     eax, esi
0x52AC1A: pop     esi
0x52AC1B: retn    4
