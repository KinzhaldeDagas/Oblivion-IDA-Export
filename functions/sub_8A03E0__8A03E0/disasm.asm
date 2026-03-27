0x8A03E0: push    ecx
0x8A03E1: mov     eax, [ecx]
0x8A03E3: mov     eax, [eax+74h]
0x8A03E6: lea     edx, [esp+4+var_1]
0x8A03EA: push    edx
0x8A03EB: call    eax
0x8A03ED: test    eax, eax
0x8A03EF: jz      short loc_8A0405
0x8A03F1: mov     edx, [eax-4]
0x8A03F4: mov     edx, [edx+8]
0x8A03F7: lea     ecx, [eax-4]
0x8A03FA: mov     eax, [esp+arg_4]
0x8A03FE: push    eax
0x8A03FF: call    edx
0x8A0401: pop     ecx
0x8A0402: retn    4
0x8A0405: mov     eax, [esp+arg_4]
0x8A0409: xor     ecx, ecx
0x8A040B: mov     edx, [ecx]
0x8A040D: mov     edx, [edx+8]
0x8A0410: push    eax
0x8A0411: call    edx
0x8A0413: pop     ecx
0x8A0414: retn    4
