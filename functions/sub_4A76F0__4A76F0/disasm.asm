0x4A76F0: push    esi
0x4A76F1: mov     esi, ecx
0x4A76F3: call    sub_4A70B0
0x4A76F8: mov     esi, [esi+8]
0x4A76FB: test    esi, esi
0x4A76FD: jz      short loc_4A7708
0x4A76FF: push    esi
0x4A7700: call    FormHeapFree
0x4A7705: add     esp, 4
0x4A7708: pop     esi
0x4A7709: retn
