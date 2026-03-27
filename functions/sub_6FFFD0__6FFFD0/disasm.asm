0x6FFFD0: push    esi
0x6FFFD1: push    edi
0x6FFFD2: mov     edi, ecx
0x6FFFD4: mov     esi, [edi+0Ch]
0x6FFFD7: test    esi, esi
0x6FFFD9: jz      short loc_6FFFFE
0x6FFFDB: lea     eax, [esi+4]
0x6FFFDE: push    eax; lpAddend
0x6FFFDF: call    dword ptr ds:0A2807Ch
0x6FFFE5: test    eax, eax
0x6FFFE7: jnz     short loc_6FFFF7
0x6FFFE9: test    esi, esi
0x6FFFEB: jz      short loc_6FFFF7
0x6FFFED: mov     edx, [esi]
0x6FFFEF: mov     eax, [edx]
0x6FFFF1: push    1
0x6FFFF3: mov     ecx, esi
0x6FFFF5: call    eax
0x6FFFF7: mov     dword ptr [edi+0Ch], 0
0x6FFFFE: pop     edi
0x6FFFFF: pop     esi
0x700000: retn
