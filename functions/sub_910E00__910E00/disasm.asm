0x910E00: mov     eax, ecx
0x910E02: xorps   xmm0, xmm0
0x910E05: mov     word ptr [eax+6], 1
0x910E0B: mov     dword ptr [eax], offset off_A9CC6C
0x910E11: mov     dword ptr [eax+0Ch], 0
0x910E18: movaps  xmmword ptr [eax+10h], xmm0
0x910E1C: movaps  xmmword ptr [eax+20h], xmm0
0x910E20: retn
