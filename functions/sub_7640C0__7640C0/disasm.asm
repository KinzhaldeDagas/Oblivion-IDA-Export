0x7640C0: xor     edx, edx
0x7640C2: push    esi
0x7640C3: xor     eax, eax
0x7640C5: cmp     [ecx+0AA2h], dx
0x7640CC: push    edi
0x7640CD: jbe     short loc_7640E8
0x7640CF: nop
0x7640D0: mov     edi, [ecx+0A9Ch]
0x7640D6: movzx   esi, ax
0x7640D9: add     eax, 1
0x7640DC: mov     [edi+esi*4], edx
0x7640DF: cmp     ax, [ecx+0AA2h]
0x7640E6: jb      short loc_7640D0
0x7640E8: mov     [ecx+0AA2h], dx
0x7640EF: mov     [ecx+0AA4h], dx
0x7640F6: xor     eax, eax
0x7640F8: cmp     [ecx+0AB2h], dx
0x7640FF: jbe     short loc_764119
0x764101: mov     edi, [ecx+0AACh]
0x764107: movzx   esi, ax
0x76410A: add     eax, 1
0x76410D: mov     [edi+esi*4], edx
0x764110: cmp     ax, [ecx+0AB2h]
0x764117: jb      short loc_764101
0x764119: pop     edi
0x76411A: mov     [ecx+0AB4h], dx
0x764121: mov     [ecx+0AB2h], dx
0x764128: pop     esi
0x764129: retn
