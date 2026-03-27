0x7AA4A0: mov     eax, [ecx+2230h]
0x7AA4A6: test    eax, eax
0x7AA4A8: jz      short loc_7AA4C4
0x7AA4AA: mov     edx, [esp+arg_0]
0x7AA4AE: mov     edi, edi
0x7AA4B0: lea     ecx, [eax+8]
0x7AA4B3: mov     ecx, [ecx]
0x7AA4B5: test    ecx, ecx
0x7AA4B7: mov     eax, [eax]
0x7AA4B9: jz      short loc_7AA4C0
0x7AA4BB: cmp     [ecx+10h], edx
0x7AA4BE: jz      short loc_7AA4C9
0x7AA4C0: test    eax, eax
0x7AA4C2: jnz     short loc_7AA4B0
0x7AA4C4: xor     eax, eax
0x7AA4C6: retn    4
0x7AA4C9: mov     eax, [ecx+1Ch]
0x7AA4CC: retn    4
