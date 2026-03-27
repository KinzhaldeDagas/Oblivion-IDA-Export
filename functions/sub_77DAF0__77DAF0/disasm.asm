0x77DAF0: push    esi
0x77DAF1: push    edi
0x77DAF2: mov     edi, [esp+8+arg_0]
0x77DAF6: mov     esi, [edi+38h]
0x77DAF9: test    esi, esi
0x77DAFB: jz      short loc_77DB1A
0x77DAFD: push    esi
0x77DAFE: call    sub_782930
0x77DB03: mov     ecx, esi
0x77DB05: call    sub_778110
0x77DB0A: push    esi
0x77DB0B: call    FormHeapFree
0x77DB10: add     esp, 4
0x77DB13: mov     dword ptr [edi+38h], 0
0x77DB1A: pop     edi
0x77DB1B: pop     esi
0x77DB1C: retn    4
