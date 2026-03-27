0x6F10E0: push    esi
0x6F10E1: mov     esi, ecx
0x6F10E3: mov     ecx, [esi+4]
0x6F10E6: test    ecx, ecx
0x6F10E8: push    edi
0x6F10E9: mov     edi, [esp+8+arg_0]
0x6F10ED: jz      short loc_6F10FB
0x6F10EF: mov     eax, [esi+8]
0x6F10F2: sub     eax, ecx
0x6F10F4: sar     eax, 4
0x6F10F7: cmp     edi, eax
0x6F10F9: jb      short loc_6F1100
0x6F10FB: call    __invalid_parameter_noinfo
0x6F1100: mov     eax, edi
0x6F1102: shl     eax, 4
0x6F1105: add     eax, [esi+4]
0x6F1108: pop     edi
0x6F1109: pop     esi
0x6F110A: retn    4
