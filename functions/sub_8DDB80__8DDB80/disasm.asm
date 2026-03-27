0x8DDB80: mov     eax, [esp+arg_4]
0x8DDB84: mov     edx, [eax+4]
0x8DDB87: push    esi
0x8DDB88: sub     [ecx+0Ch], edx
0x8DDB8B: mov     edx, [eax+8]
0x8DDB8E: mov     esi, [ecx+10h]
0x8DDB91: sub     esi, edx
0x8DDB93: mov     edx, [ecx+18h]
0x8DDB96: mov     [ecx+10h], esi
0x8DDB99: mov     eax, [eax+0Ch]
0x8DDB9C: sub     edx, eax
0x8DDB9E: mov     [ecx+18h], edx
0x8DDBA1: pop     esi
0x8DDBA2: retn    8
