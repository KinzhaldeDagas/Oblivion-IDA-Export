0x8E79A0: push    ebp
0x8E79A1: mov     ebp, esp
0x8E79A3: mov     eax, [ebp+arg_0]
0x8E79A6: movaps  xmm0, xmmword ptr [eax]
0x8E79A9: movaps  xmmword ptr [ecx], xmm0
0x8E79AC: movaps  xmm0, xmmword ptr [eax]
0x8E79AF: movaps  xmmword ptr [ecx+10h], xmm0
0x8E79B3: and     esp, 0FFFFFFF0h
0x8E79B6: xor     eax, eax
0x8E79B8: mov     [ecx+0Ch], eax
0x8E79BB: mov     [ecx+1Ch], eax
0x8E79BE: mov     eax, [ebp+arg_4]
0x8E79C1: movaps  xmm0, xmmword ptr [eax]
0x8E79C4: movaps  xmmword ptr [ecx+20h], xmm0
0x8E79C8: movaps  xmm0, xmmword ptr [eax]
0x8E79CB: movaps  xmmword ptr [ecx+30h], xmm0
0x8E79CF: xorps   xmm0, xmm0
0x8E79D2: movaps  xmmword ptr [ecx+40h], xmm0
0x8E79D6: mov     esp, ebp
0x8E79D8: pop     ebp
0x8E79D9: retn    8
