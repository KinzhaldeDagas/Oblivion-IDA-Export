0x4A71D0: push    ecx
0x4A71D1: fld     dword ptr ds:0A32048h
0x4A71D7: fstp    [esp+4+var_4]
0x4A71DA: fld     dword ptr [ecx+14h]
0x4A71DD: fcomp   qword ptr ds:0A3A5B0h
0x4A71E3: fnstsw  ax
0x4A71E5: test    ah, 5
0x4A71E8: jp      short loc_4A71F0
0x4A71EA: fld     dword ptr [ecx+14h]
0x4A71ED: pop     ecx
0x4A71EE: retn
0x4A71EF: align 10h
0x4A71F0: mov     edx, [ecx]
0x4A71F2: test    edx, edx
0x4A71F4: jz      short loc_4A7212
0x4A71F6: fld     dword ptr [edx+4]
0x4A71F9: fld     [esp+4+var_4]
0x4A71FC: fcompp
0x4A71FE: fnstsw  ax
0x4A7200: test    ah, 41h
0x4A7203: jnz     short loc_4A720B
0x4A7205: fld     dword ptr [edx+4]
0x4A7208: fstp    [esp+4+var_4]
0x4A720B: mov     ecx, [ecx+4]
0x4A720E: test    ecx, ecx
0x4A7210: jnz     short loc_4A71F0
0x4A7212: fld     [esp+4+var_4]
0x4A7215: pop     ecx
0x4A7216: retn
