0x72C4A0: movzx   edx, word ptr [ecx+22h]
0x72C4A4: xor     eax, eax
0x72C4A6: test    edx, edx
0x72C4A8: jbe     short locret_72C4BE
0x72C4AA: mov     ecx, [ecx+18h]
0x72C4AD: push    esi
0x72C4AE: mov     edi, edi
0x72C4B0: movzx   esi, word ptr [ecx]
0x72C4B3: add     eax, esi
0x72C4B5: add     ecx, 2
0x72C4B8: sub     edx, 1
0x72C4BB: jnz     short loc_72C4B0
0x72C4BD: pop     esi
0x72C4BE: retn
