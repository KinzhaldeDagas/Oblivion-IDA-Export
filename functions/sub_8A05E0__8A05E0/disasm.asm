0x8A05E0: push    esi
0x8A05E1: xor     esi, esi
0x8A05E3: test    ecx, ecx
0x8A05E5: jz      short loc_8A0606
0x8A05E7: mov     eax, [ecx+8]
0x8A05EA: test    eax, eax
0x8A05EC: jz      short loc_8A0606
0x8A05EE: cmp     [eax+8], esi
0x8A05F1: jz      short loc_8A0606
0x8A05F3: mov     eax, [ecx]
0x8A05F5: mov     edx, [eax+88h]
0x8A05FB: call    edx
0x8A05FD: test    eax, eax
0x8A05FF: jz      short loc_8A0606
0x8A0601: mov     eax, [eax+8]
0x8A0604: pop     esi
0x8A0605: retn
0x8A0606: mov     eax, esi
0x8A0608: pop     esi
0x8A0609: retn
