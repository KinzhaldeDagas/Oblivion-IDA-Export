0x89D8E0: test    ecx, ecx
0x89D8E2: jz      short loc_89D8F7
0x89D8E4: mov     eax, [ecx+8]
0x89D8E7: test    eax, eax
0x89D8E9: jz      short loc_89D8F7
0x89D8EB: mov     eax, [eax+10h]
0x89D8EE: mov     ecx, [esp+arg_0]
0x89D8F2: mov     [ecx], eax
0x89D8F4: retn    4
0x89D8F7: mov     edx, [esp+arg_0]
0x89D8FB: xor     eax, eax
0x89D8FD: mov     [edx], eax
0x89D8FF: retn    4
