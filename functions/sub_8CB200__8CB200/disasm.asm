0x8CB200: push    esi
0x8CB201: mov     esi, ecx
0x8CB203: call    sub_8CB180
0x8CB208: test    [esp+4+arg_0], 1
0x8CB20D: jz      short loc_8CB218
0x8CB20F: push    esi
0x8CB210: call    FormHeapFree
0x8CB215: add     esp, 4
0x8CB218: mov     eax, esi
0x8CB21A: pop     esi
0x8CB21B: retn    4
