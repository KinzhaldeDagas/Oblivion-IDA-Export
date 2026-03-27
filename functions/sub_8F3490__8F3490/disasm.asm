0x8F3490: mov     edx, [esp+arg_0]
0x8F3494: mov     eax, ecx
0x8F3496: mov     ecx, [esp+arg_8]
0x8F349A: mov     [eax+0Ch], ecx
0x8F349D: mov     ecx, [esp+arg_4]
0x8F34A1: mov     word ptr [eax+6], 1
0x8F34A7: mov     dword ptr [eax+8], 0
0x8F34AE: mov     dword ptr [eax], offset off_A9B2A0
0x8F34B4: movaps  xmm0, xmmword ptr [edx]
0x8F34B7: mov     edx, [esp+arg_8]
0x8F34BB: movaps  xmmword ptr [eax+10h], xmm0
0x8F34BF: movaps  xmm0, xmmword ptr [ecx]
0x8F34C2: movaps  xmmword ptr [eax+20h], xmm0
0x8F34C6: mov     ecx, edx
0x8F34C8: mov     [eax+1Ch], edx
0x8F34CB: mov     [eax+2Ch], ecx
0x8F34CE: retn    0Ch
