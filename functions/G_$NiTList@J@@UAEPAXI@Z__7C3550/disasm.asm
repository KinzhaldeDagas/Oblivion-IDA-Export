0x7C3550: push    esi
0x7C3551: mov     esi, ecx
0x7C3553: call    ??1?$NiTList@J@@UAE@XZ; NiTList<long>::~NiTList<long>(void)
0x7C3558: test    [esp+4+arg_0], 1
0x7C355D: jz      short loc_7C3568
0x7C355F: push    esi
0x7C3560: call    FormHeapFree
0x7C3565: add     esp, 4
0x7C3568: mov     eax, esi
0x7C356A: pop     esi
0x7C356B: retn    4
