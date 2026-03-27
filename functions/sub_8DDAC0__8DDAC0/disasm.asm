0x8DDAC0: push    ebp
0x8DDAC1: mov     ebp, esp
0x8DDAC3: and     esp, 0FFFFFFF0h
0x8DDAC6: mov     eax, [ebp+arg_4]
0x8DDAC9: mov     ecx, [ebp+arg_0]
0x8DDACC: xorps   xmm0, xmm0
0x8DDACF: movaps  xmmword ptr [eax+90h], xmm0
0x8DDAD6: movaps  xmm0, xmmword ptr [ecx]
0x8DDAD9: movaps  xmmword ptr [eax+30h], xmm0
0x8DDADD: fld     dword ptr [eax+4Ch]
0x8DDAE0: movaps  xmm0, xmmword ptr [eax+80h]
0x8DDAE7: movaps  xmm2, xmmword ptr [eax+20h]
0x8DDAEB: movaps  xmm3, xmmword ptr [eax+10h]
0x8DDAEF: movaps  xmm1, xmm0
0x8DDAF2: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DDAF6: mulps   xmm2, xmm1
0x8DDAF9: movaps  xmm1, xmm0
0x8DDAFC: shufps  xmm1, xmm0, 55h ; 'U'
0x8DDB00: mulps   xmm3, xmm1
0x8DDB03: movaps  xmm1, xmm0
0x8DDB06: shufps  xmm1, xmm0, 0
0x8DDB0A: movaps  xmm0, xmmword ptr [eax]
0x8DDB0D: mulps   xmm0, xmm1
0x8DDB10: addps   xmm0, xmm3
0x8DDB13: addps   xmm0, xmm2
0x8DDB16: movaps  xmm1, xmm0
0x8DDB19: movaps  xmm0, xmmword ptr [ecx]
0x8DDB1C: addps   xmm0, xmm1
0x8DDB1F: movaps  xmmword ptr [eax+40h], xmm0
0x8DDB23: fstp    dword ptr [eax+4Ch]
0x8DDB26: movaps  xmmword ptr [eax+50h], xmm0
0x8DDB2A: movaps  xmm0, xmmword ptr [eax+70h]
0x8DDB2E: movaps  xmmword ptr [eax+60h], xmm0
0x8DDB32: mov     dword ptr [eax+5Ch], 0
0x8DDB39: mov     esp, ebp
0x8DDB3B: pop     ebp
0x8DDB3C: retn
