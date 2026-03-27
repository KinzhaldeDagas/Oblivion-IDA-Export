0x9107C0: mov     eax, ecx
0x9107C2: xorps   xmm0, xmm0
0x9107C5: xor     ecx, ecx
0x9107C7: mov     word ptr [eax+6], 1
0x9107CD: mov     dword ptr [eax], offset off_A9CC30
0x9107D3: mov     dword ptr [eax+90h], 0BF000000h
0x9107DD: mov     dword ptr [eax+94h], 3F000000h
0x9107E7: mov     [eax+98h], ecx
0x9107ED: mov     [eax+9Ch], ecx
0x9107F3: movaps  xmmword ptr [eax+10h], xmm0
0x9107F7: movaps  xmmword ptr [eax+30h], xmm0
0x9107FB: movaps  xmmword ptr [eax+40h], xmm0
0x9107FF: movaps  xmmword ptr [eax+50h], xmm0
0x910803: movaps  xmmword ptr [eax+20h], xmm0
0x910807: movaps  xmmword ptr [eax+80h], xmm0
0x91080E: movaps  xmmword ptr [eax+60h], xmm0
0x910812: movaps  xmmword ptr [eax+70h], xmm0
0x910816: retn
