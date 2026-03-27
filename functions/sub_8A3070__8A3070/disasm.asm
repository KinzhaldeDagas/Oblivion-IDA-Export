0x8A3070: push    ebp
0x8A3071: mov     ebp, esp
0x8A3073: and     esp, 0FFFFFFF0h
0x8A3076: test    ecx, ecx
0x8A3078: mov     eax, [ebp+arg_0]
0x8A307B: jz      short loc_8A30AF
0x8A307D: mov     ecx, [ecx+8]
0x8A3080: test    ecx, ecx
0x8A3082: jz      short loc_8A30AF
0x8A3084: mov     ecx, [ecx+50h]
0x8A3087: movaps  xmm0, xmmword ptr [ecx+10h]
0x8A308B: add     ecx, 10h
0x8A308E: movaps  xmmword ptr [eax], xmm0
0x8A3091: movaps  xmm0, xmmword ptr [ecx+10h]
0x8A3095: movaps  xmmword ptr [eax+10h], xmm0
0x8A3099: movaps  xmm0, xmmword ptr [ecx+20h]
0x8A309D: movaps  xmmword ptr [eax+20h], xmm0
0x8A30A1: movaps  xmm0, xmmword ptr [ecx+30h]
0x8A30A5: movaps  xmmword ptr [eax+30h], xmm0
0x8A30A9: mov     esp, ebp
0x8A30AB: pop     ebp
0x8A30AC: retn    4
0x8A30AF: fld1
0x8A30B1: xorps   xmm0, xmm0
0x8A30B4: movaps  xmmword ptr [eax], xmm0
0x8A30B7: movaps  xmmword ptr [eax+10h], xmm0
0x8A30BB: movaps  xmmword ptr [eax+20h], xmm0
0x8A30BF: fst     dword ptr [eax]
0x8A30C1: fst     dword ptr [eax+14h]
0x8A30C4: fstp    dword ptr [eax+28h]
0x8A30C7: movaps  xmmword ptr [eax+30h], xmm0
0x8A30CB: mov     esp, ebp
0x8A30CD: pop     ebp
0x8A30CE: retn    4
