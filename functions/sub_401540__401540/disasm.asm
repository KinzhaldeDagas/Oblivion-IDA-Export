0x401540: mov     edx, [esp+arg_0]
0x401544: add     [ecx+4Ch], edx
0x401547: test    edx, edx
0x401549: mov     eax, [ecx+4Ch]
0x40154C: jbe     short loc_401570
0x40154E: add     dword ptr [ecx+48h], 1
0x401552: cmp     eax, [ecx+50h]
0x401555: jle     short loc_40155A
0x401557: mov     [ecx+50h], eax
0x40155A: mov     eax, dword_B02184
0x40155F: test    eax, eax
0x401561: jz      short locret_401574
0x401563: push    0
0x401565: push    edx
0x401566: push    1
0x401568: call    eax ; dword_B02184
0x40156A: add     esp, 0Ch
0x40156D: retn    4
0x401570: add     dword ptr [ecx+48h], 0FFFFFFFFh
0x401574: retn    4
