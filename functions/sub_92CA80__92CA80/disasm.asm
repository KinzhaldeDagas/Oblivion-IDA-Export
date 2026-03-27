0x92CA80: mov     eax, [esp+arg_4]
0x92CA84: fld     dword ptr [eax+10h]
0x92CA87: mov     ecx, [esp+arg_8]
0x92CA8B: fcomp   dword ptr [ecx+10h]
0x92CA8E: fnstsw  ax
0x92CA90: test    ah, 5
0x92CA93: mov     eax, [esp+arg_0]
0x92CA97: jp      short loc_92CA9E
0x92CA99: mov     cl, 1
0x92CA9B: mov     [eax], cl
0x92CA9D: retn
0x92CA9E: xor     cl, cl
0x92CAA0: mov     [eax], cl
0x92CAA2: retn
