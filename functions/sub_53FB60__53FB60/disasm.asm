0x53FB60: cmp     [esp+arg_0], 0
0x53FB65: jz      short loc_53FB94
0x53FB67: mov     edx, [ecx+14h]
0x53FB6A: test    edx, edx
0x53FB6C: jz      short loc_53FB94
0x53FB6E: mov     eax, [ecx+0FCh]
0x53FB74: test    al, 8
0x53FB76: jnz     short loc_53FB90
0x53FB78: fld     dword ptr [ecx+0D8h]
0x53FB7E: or      eax, 8
0x53FB81: fstp    dword ptr [ecx+0F4h]
0x53FB87: mov     [ecx+0FCh], eax
0x53FB8D: retn    4
0x53FB90: test    edx, edx
0x53FB92: jnz     short locret_53FBA3
0x53FB94: fldz
0x53FB96: and     dword ptr [ecx+0FCh], 0FFFFFFF7h
0x53FB9D: fstp    dword ptr [ecx+0F4h]
0x53FBA3: retn    4
