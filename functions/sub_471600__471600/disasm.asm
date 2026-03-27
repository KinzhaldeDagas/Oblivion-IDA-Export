0x471600: cmp     byte ptr [ecx+6Ch], 0
0x471604: push    esi
0x471605: jz      short loc_471625
0x471607: movzx   edx, word ptr [ecx+46h]
0x47160B: xor     eax, eax
0x47160D: test    edx, edx
0x47160F: jbe     short loc_471625
0x471611: mov     esi, [ecx+40h]
0x471614: mov     ecx, esi
0x471616: cmp     dword ptr [ecx], 0
0x471619: jnz     short loc_471629
0x47161B: add     eax, 1
0x47161E: add     ecx, 4
0x471621: cmp     eax, edx
0x471623: jb      short loc_471616
0x471625: xor     eax, eax
0x471627: pop     esi
0x471628: retn
0x471629: mov     eax, [esi+eax*4]
0x47162C: mov     eax, [eax+60h]
0x47162F: pop     esi
0x471630: retn
