0x8AA350: fld     dword ptr [ecx]
0x8AA352: mov     edx, [esp+arg_0]
0x8AA356: fld     dword ptr [edx]
0x8AA358: fucompp
0x8AA35A: fnstsw  ax
0x8AA35C: test    ah, 44h
0x8AA35F: jp      short loc_8AA387
0x8AA361: fld     dword ptr [ecx+4]
0x8AA364: fld     dword ptr [edx+4]
0x8AA367: fucompp
0x8AA369: fnstsw  ax
0x8AA36B: test    ah, 44h
0x8AA36E: jp      short loc_8AA387
0x8AA370: fld     dword ptr [ecx+8]
0x8AA373: fld     dword ptr [edx+8]
0x8AA376: fucompp
0x8AA378: fnstsw  ax
0x8AA37A: test    ah, 44h
0x8AA37D: jp      short loc_8AA387
0x8AA37F: mov     eax, 1
0x8AA384: retn    4
0x8AA387: xor     eax, eax
0x8AA389: retn    4
