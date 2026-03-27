0x44FD90: cmp     dword ptr [ecx+3E0h], 0
0x44FD97: lea     eax, [ecx+3E0h]
0x44FD9D: jnz     short loc_44FDA4
0x44FD9F: xor     eax, eax
0x44FDA1: retn    4
0x44FDA4: mov     edx, [esp+arg_0]
0x44FDA8: mov     ecx, 1
0x44FDAD: cmp     edx, ecx
0x44FDAF: jbe     short loc_44FDBF
0x44FDB1: mov     eax, [eax+4]
0x44FDB4: test    eax, eax
0x44FDB6: jz      short loc_44FD9F
0x44FDB8: add     ecx, 1
0x44FDBB: cmp     ecx, edx
0x44FDBD: jb      short loc_44FDB1
0x44FDBF: mov     eax, [eax]
0x44FDC1: retn    4
