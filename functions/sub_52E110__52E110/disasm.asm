0x52E110: mov     eax, [esp+arg_0]
0x52E114: mov     edx, [eax]
0x52E116: mov     [ecx], edx
0x52E118: mov     edx, [eax+4]
0x52E11B: mov     [ecx+4], edx
0x52E11E: mov     edx, [eax+8]
0x52E121: mov     [ecx+8], edx
0x52E124: mov     edx, [eax+0Ch]
0x52E127: mov     [ecx+0Ch], edx
0x52E12A: mov     eax, [eax+10h]
0x52E12D: test    eax, eax
0x52E12F: jnz     short loc_52E136
0x52E131: mov     eax, offset EmptyString
0x52E136: push    0; a3
0x52E138: push    eax; a2
0x52E139: add     ecx, 10h; this
0x52E13C: call    BSStringT_Set
0x52E141: retn    4
