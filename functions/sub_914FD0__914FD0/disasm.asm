0x914FD0: push    ebp
0x914FD1: mov     ebp, esp
0x914FD3: and     esp, 0FFFFFFF0h
0x914FD6: sub     esp, 10h
0x914FD9: mov     edx, [ebp+arg_4]
0x914FDC: mov     eax, ecx
0x914FDE: mov     ecx, [ebp+arg_0]
0x914FE1: mov     word ptr [eax+6], 1
0x914FE7: mov     dword ptr [eax+8], 0
0x914FEE: mov     dword ptr [eax], offset off_A9CF48
0x914FF4: movaps  xmm0, xmmword ptr [ecx]
0x914FF7: movaps  xmmword ptr [eax+10h], xmm0
0x914FFB: movaps  xmm1, xmmword ptr [edx]
0x914FFE: movaps  xmm0, xmmword ptr [ecx]
0x915001: mulps   xmm0, xmm1
0x915004: movaps  xmm1, xmm0
0x915007: shufps  xmm1, xmm0, 55h ; 'U'
0x91500B: movaps  xmm2, xmm0
0x91500E: addss   xmm1, xmm0
0x915012: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x915016: lea     ecx, [esp+10h+var_4]
0x91501A: addss   xmm2, xmm1
0x91501E: movss   dword ptr [ecx], xmm2
0x915022: fld     [esp+10h+var_4]
0x915026: fchs
0x915028: fstp    dword ptr [eax+1Ch]
0x91502B: movaps  xmm0, xmmword ptr [edx]
0x91502E: mov     edx, [ebp+arg_8]
0x915031: movaps  xmmword ptr [eax+20h], xmm0
0x915035: movaps  xmm0, xmmword ptr [edx]
0x915038: movaps  xmmword ptr [eax+30h], xmm0
0x91503C: mov     esp, ebp
0x91503E: pop     ebp
0x91503F: retn    0Ch
