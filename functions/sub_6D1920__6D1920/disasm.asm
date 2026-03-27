0x6D1920: mov     eax, [ecx+2Ch]
0x6D1923: test    eax, eax
0x6D1925: jz      short loc_6D193C
0x6D1927: movzx   edx, word ptr [eax+0Ah]
0x6D192B: mov     ecx, [esp+arg_0]
0x6D192F: cmp     ecx, edx
0x6D1931: jnb     short loc_6D193C
0x6D1933: mov     eax, [eax+4]
0x6D1936: mov     eax, [eax+ecx*4]
0x6D1939: retn    4
0x6D193C: xor     eax, eax
0x6D193E: retn    4
