0x94D1F0: mov     eax, [esp+arg_10]
0x94D1F4: movaps  xmm0, xmmword ptr [eax]
0x94D1F7: mov     edx, [esp+arg_14]
0x94D1FB: mov     eax, [esp+arg_18]
0x94D1FF: movaps  xmmword ptr [ecx+80h], xmm0
0x94D206: movaps  xmm0, xmmword ptr [edx]
0x94D209: mov     edx, [esp+arg_4]
0x94D20D: movaps  xmmword ptr [ecx+60h], xmm0
0x94D211: movaps  xmm0, xmmword ptr [eax]
0x94D214: mov     eax, [esp+arg_8]
0x94D218: mov     [ecx+90h], edx
0x94D21E: mov     edx, [esp+arg_0]
0x94D222: mov     [ecx+94h], eax
0x94D228: mov     eax, [esp+arg_C]
0x94D22C: movaps  xmmword ptr [ecx+70h], xmm0
0x94D230: mov     [ecx+98h], edx
0x94D236: mov     [ecx+9Ch], eax
0x94D23C: retn    1Ch
