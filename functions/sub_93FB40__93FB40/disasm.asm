0x93FB40: mov     eax, ecx
0x93FB42: mov     ecx, [esp+arg_0]
0x93FB46: movaps  xmm0, xmmword ptr [ecx]
0x93FB49: movaps  xmmword ptr [eax], xmm0
0x93FB4C: movaps  xmm0, xmmword ptr [ecx+10h]
0x93FB50: movaps  xmmword ptr [eax+10h], xmm0
0x93FB54: mov     edx, [ecx+20h]
0x93FB57: mov     [eax+20h], edx
0x93FB5A: mov     edx, [ecx+24h]
0x93FB5D: mov     [eax+24h], edx
0x93FB60: mov     edx, [ecx+28h]
0x93FB63: mov     [eax+28h], edx
0x93FB66: mov     edx, [ecx+2Ch]
0x93FB69: mov     [eax+2Ch], edx
0x93FB6C: mov     ecx, [ecx+30h]
0x93FB6F: mov     [eax+30h], ecx
0x93FB72: retn    4
