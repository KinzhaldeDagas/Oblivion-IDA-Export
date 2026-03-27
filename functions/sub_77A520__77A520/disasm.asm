0x77A520: movzx   edx, word ptr [ecx+4Ah]
0x77A524: xor     eax, eax
0x77A526: test    edx, edx
0x77A528: push    esi
0x77A529: jbe     short loc_77A542
0x77A52B: mov     ecx, [ecx+44h]
0x77A52E: mov     edi, edi
0x77A530: mov     esi, [ecx]
0x77A532: cmp     dword ptr [esi+58h], 0
0x77A536: jnz     short loc_77A546
0x77A538: add     eax, 1
0x77A53B: add     ecx, 4
0x77A53E: cmp     eax, edx
0x77A540: jb      short loc_77A530
0x77A542: xor     al, al
0x77A544: pop     esi
0x77A545: retn
0x77A546: mov     al, 1
0x77A548: pop     esi
0x77A549: retn
