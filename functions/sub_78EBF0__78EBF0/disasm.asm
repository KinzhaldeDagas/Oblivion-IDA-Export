0x78EBF0: push    esi
0x78EBF1: mov     esi, ecx
0x78EBF3: mov     ecx, [esi+8]
0x78EBF6: test    ecx, ecx
0x78EBF8: push    edi
0x78EBF9: mov     edi, [esi]
0x78EBFB: jz      short loc_78EC06
0x78EBFD: mov     eax, [esi+0Ch]
0x78EC00: sub     eax, ecx
0x78EC02: cmp     edi, eax
0x78EC04: jb      short loc_78EC14
0x78EC06: call    __invalid_parameter_noinfo
0x78EC0B: mov     eax, [esi+8]
0x78EC0E: mov     eax, [edi+eax]
0x78EC11: pop     edi
0x78EC12: pop     esi
0x78EC13: retn
0x78EC14: mov     eax, [edi+ecx]
0x78EC17: pop     edi
0x78EC18: pop     esi
0x78EC19: retn
