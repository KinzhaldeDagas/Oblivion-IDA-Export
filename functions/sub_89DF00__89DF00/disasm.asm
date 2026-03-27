0x89DF00: mov     eax, ecx
0x89DF02: mov     ecx, [esp+arg_0]
0x89DF06: movaps  xmm0, xmmword ptr [ecx]
0x89DF09: movaps  xmmword ptr [eax], xmm0
0x89DF0C: movaps  xmm0, xmmword ptr [ecx+10h]
0x89DF10: movaps  xmmword ptr [eax+10h], xmm0
0x89DF14: movaps  xmm0, xmmword ptr [ecx+20h]
0x89DF18: movaps  xmmword ptr [eax+20h], xmm0
0x89DF1C: movaps  xmm0, xmmword ptr [ecx+30h]
0x89DF20: movaps  xmmword ptr [eax+30h], xmm0
0x89DF24: movaps  xmm0, xmmword ptr [ecx+40h]
0x89DF28: movaps  xmmword ptr [eax+40h], xmm0
0x89DF2C: movaps  xmm0, xmmword ptr [ecx+50h]
0x89DF30: movaps  xmmword ptr [eax+50h], xmm0
0x89DF34: movaps  xmm0, xmmword ptr [ecx+60h]
0x89DF38: movaps  xmmword ptr [eax+60h], xmm0
0x89DF3C: movaps  xmm0, xmmword ptr [ecx+70h]
0x89DF40: movaps  xmmword ptr [eax+70h], xmm0
0x89DF44: movaps  xmm0, xmmword ptr [ecx+80h]
0x89DF4B: movaps  xmmword ptr [eax+80h], xmm0
0x89DF52: movaps  xmm0, xmmword ptr [ecx+90h]
0x89DF59: movaps  xmmword ptr [eax+90h], xmm0
0x89DF60: mov     edx, [ecx+0A0h]
0x89DF66: mov     [eax+0A0h], edx
0x89DF6C: mov     edx, [ecx+0A4h]
0x89DF72: mov     [eax+0A4h], edx
0x89DF78: mov     edx, [ecx+0A8h]
0x89DF7E: mov     [eax+0A8h], edx
0x89DF84: mov     dx, [ecx+0ACh]
0x89DF8B: mov     [eax+0ACh], dx
0x89DF92: mov     cx, [ecx+0AEh]
0x89DF99: mov     [eax+0AEh], cx
0x89DFA0: retn    4
