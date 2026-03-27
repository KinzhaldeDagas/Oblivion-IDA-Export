0x8BC520: push    esi
0x8BC521: mov     esi, ecx
0x8BC523: call    sub_8BC370
0x8BC528: test    [esp+4+arg_0], 1
0x8BC52D: jz      short loc_8BC538
0x8BC52F: push    esi
0x8BC530: call    FormHeapFree
0x8BC535: add     esp, 4
0x8BC538: mov     eax, esi
0x8BC53A: pop     esi
0x8BC53B: retn    4
