0x7146F0: push    esi
0x7146F1: mov     esi, ecx
0x7146F3: call    ??1?$NiTStringPointerMap@G@@UAE@XZ; NiTStringPointerMap<ushort>::~NiTStringPointerMap<ushort>(void)
0x7146F8: test    [esp+4+arg_0], 1
0x7146FD: jz      short loc_714708
0x7146FF: push    esi
0x714700: call    FormHeapFree
0x714705: add     esp, 4
0x714708: mov     eax, esi
0x71470A: pop     esi
0x71470B: retn    4
