0x9179B0: mov     eax, ecx
0x9179B2: mov     ecx, [esp+arg_0]
0x9179B6: fld     dword ptr [ecx+0Ch]
0x9179B9: mov     [eax+10h], ecx
0x9179BC: mov     ecx, [esp+arg_4]
0x9179C0: fstp    dword ptr [eax+0Ch]
0x9179C3: mov     word ptr [eax+6], 1
0x9179C9: mov     dword ptr [eax+8], 0
0x9179D0: mov     dword ptr [eax], offset off_A9D0E8
0x9179D6: movaps  xmm0, xmmword ptr [ecx]
0x9179D9: movaps  xmmword ptr [eax+20h], xmm0
0x9179DD: movaps  xmm0, xmmword ptr [ecx+10h]
0x9179E1: movaps  xmmword ptr [eax+30h], xmm0
0x9179E5: movaps  xmm0, xmmword ptr [ecx+20h]
0x9179E9: movaps  xmmword ptr [eax+40h], xmm0
0x9179ED: movaps  xmm0, xmmword ptr [ecx+30h]
0x9179F1: movaps  xmmword ptr [eax+50h], xmm0
0x9179F5: mov     ecx, [eax+10h]
0x9179F8: cmp     word ptr [ecx+4], 0
0x9179FD: jz      short locret_917A03
0x9179FF: inc     word ptr [ecx+6]
0x917A03: retn    8
