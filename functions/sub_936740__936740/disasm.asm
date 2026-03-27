0x936740: push    ebp
0x936741: mov     ebp, esp
0x936743: mov     eax, [ebp+arg_C]
0x936746: movaps  xmm0, xmmword ptr [eax]
0x936749: mov     ecx, [ebp+arg_8]
0x93674C: mov     eax, [ebp+arg_0]
0x93674F: movaps  xmm2, xmmword ptr [eax]
0x936752: mov     edx, [ebp+arg_4]
0x936755: movaps  xmm1, xmm0
0x936758: shufps  xmm1, xmm0, 0
0x93675C: movaps  xmm0, xmm1
0x93675F: movaps  xmm1, xmmword ptr [ecx]
0x936762: cmpltps xmm0, xmm1
0x936766: movaps  xmm1, xmmword ptr [edx]
0x936769: movaps  xmm3, xmm0
0x93676C: andnps  xmm3, xmm2
0x93676F: movaps  xmm2, xmm1
0x936772: shufps  xmm2, xmm1, 0
0x936776: andps   xmm0, xmm2
0x936779: orps    xmm0, xmm3
0x93677C: and     esp, 0FFFFFFF0h
0x93677F: movaps  xmmword ptr [eax], xmm0
0x936782: mov     esp, ebp
0x936784: pop     ebp
0x936785: retn
