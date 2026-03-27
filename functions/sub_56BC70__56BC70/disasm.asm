0x56BC70: fld     [esp+arg_0]
0x56BC74: fadd    dword ptr [ecx+10h]
0x56BC77: fstp    [esp+arg_0]
0x56BC7B: fld     [esp+arg_0]
0x56BC7F: fst     dword ptr [ecx+10h]
0x56BC82: fld     dword ptr [ecx+8]
0x56BC85: fcompp
0x56BC87: fnstsw  ax
0x56BC89: test    ah, 5
0x56BC8C: jp      short loc_56BC93
0x56BC8E: xor     al, al
0x56BC90: retn    4
0x56BC93: mov     al, 1
0x56BC95: retn    4
