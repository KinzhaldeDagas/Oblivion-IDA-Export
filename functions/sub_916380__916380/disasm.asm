0x916380: push    ebp
0x916381: mov     ebp, esp
0x916383: mov     edx, [ebp+arg_10]
0x916386: mov     eax, ecx
0x916388: mov     word ptr [eax+6], 1
0x91638E: mov     dword ptr [eax+50h], 0
0x916395: mov     dword ptr [eax+54h], 9
0x91639C: xorps   xmm0, xmm0
0x91639F: movaps  xmmword ptr [eax+10h], xmm0
0x9163A3: movaps  xmmword ptr [eax+20h], xmm0
0x9163A7: movaps  xmmword ptr [eax+30h], xmm0
0x9163AB: mov     ecx, 3F800000h
0x9163B0: mov     [eax+10h], ecx
0x9163B3: mov     [eax+24h], ecx
0x9163B6: mov     [eax+38h], ecx
0x9163B9: mov     ecx, [ebp+arg_C]
0x9163BC: movaps  xmmword ptr [eax+40h], xmm0
0x9163C0: mov     [eax+84h], ecx
0x9163C6: mov     ecx, [ebp+arg_0]
0x9163C9: mov     [eax+88h], edx
0x9163CF: mov     edx, [ebp+arg_4]
0x9163D2: mov     dword ptr [eax], offset off_A9D044
0x9163D8: movaps  xmm0, xmmword ptr [ecx]
0x9163DB: mov     ecx, [ebp+arg_8]
0x9163DE: movaps  xmmword ptr [eax+60h], xmm0
0x9163E2: movaps  xmm0, xmmword ptr [edx]
0x9163E5: and     esp, 0FFFFFFF0h
0x9163E8: movaps  xmmword ptr [eax+70h], xmm0
0x9163EC: mov     [eax+80h], ecx
0x9163F2: mov     esp, ebp
0x9163F4: pop     ebp
0x9163F5: retn    14h
