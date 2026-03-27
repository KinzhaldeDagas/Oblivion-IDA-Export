0x92CA50: mov     eax, [esp+arg_4]
0x92CA54: fld     dword ptr [eax+4]
0x92CA57: mov     ecx, [esp+arg_8]
0x92CA5B: fcomp   dword ptr [ecx+4]
0x92CA5E: fnstsw  ax
0x92CA60: test    ah, 5
0x92CA63: mov     eax, [esp+arg_0]
0x92CA67: jp      short loc_92CA6E
0x92CA69: mov     cl, 1
0x92CA6B: mov     [eax], cl
0x92CA6D: retn
0x92CA6E: xor     cl, cl
0x92CA70: mov     [eax], cl
0x92CA72: retn
