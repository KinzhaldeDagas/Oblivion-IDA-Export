0x94CCB0: push    ebp
0x94CCB1: mov     ebp, esp
0x94CCB3: mov     eax, ecx
0x94CCB5: mov     word ptr [eax+6], 1
0x94CCBB: mov     dword ptr [eax+54h], 6
0x94CCC2: xorps   xmm0, xmm0
0x94CCC5: movaps  xmmword ptr [eax+10h], xmm0
0x94CCC9: movaps  xmmword ptr [eax+20h], xmm0
0x94CCCD: movaps  xmmword ptr [eax+30h], xmm0
0x94CCD1: mov     ecx, 3F800000h
0x94CCD6: mov     [eax+10h], ecx
0x94CCD9: mov     [eax+24h], ecx
0x94CCDC: mov     [eax+38h], ecx
0x94CCDF: mov     ecx, [ebp+arg_0]
0x94CCE2: movaps  xmmword ptr [eax+40h], xmm0
0x94CCE6: and     esp, 0FFFFFFF0h
0x94CCE9: mov     dword ptr [eax], offset off_AA2BEC
0x94CCEF: mov     [eax+50h], ecx
0x94CCF2: mov     esp, ebp
0x94CCF4: pop     ebp
0x94CCF5: retn    4
