0x9117E0: mov     eax, ecx
0x9117E2: xorps   xmm0, xmm0
0x9117E5: mov     word ptr [eax+6], 1
0x9117EB: mov     dword ptr [eax], offset off_A9CCFC
0x9117F1: mov     dword ptr [eax+90h], 0FF7FFFFFh
0x9117FB: mov     dword ptr [eax+94h], 7F7FFFFFh
0x911805: movaps  xmmword ptr [eax+10h], xmm0
0x911809: movaps  xmmword ptr [eax+60h], xmm0
0x91180D: movaps  xmmword ptr [eax+20h], xmm0
0x911811: movaps  xmmword ptr [eax+70h], xmm0
0x911815: movaps  xmmword ptr [eax+80h], xmm0
0x91181C: xor     edx, edx
0x91181E: mov     [eax+98h], edx
0x911824: movaps  xmmword ptr [eax+30h], xmm0
0x911828: movaps  xmmword ptr [eax+40h], xmm0
0x91182C: movaps  xmmword ptr [eax+50h], xmm0
0x911830: mov     ecx, 3F800000h
0x911835: mov     [eax+30h], ecx
0x911838: mov     [eax+44h], ecx
0x91183B: mov     [eax+58h], ecx
0x91183E: mov     [eax+9Ch], edx
0x911844: mov     [eax+0Ch], edx
0x911847: retn
