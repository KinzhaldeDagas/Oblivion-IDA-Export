0x8EA1A0: push    ebp
0x8EA1A1: mov     ebp, esp
0x8EA1A3: mov     eax, [ebp+arg_4]
0x8EA1A6: mov     byte ptr [eax], 1
0x8EA1A9: xorps   xmm0, xmm0
0x8EA1AC: movaps  xmmword ptr [eax+30h], xmm0
0x8EA1B0: movaps  xmm1, xmmword ptr [ecx+60h]
0x8EA1B4: movaps  xmmword ptr [eax+40h], xmm1
0x8EA1B8: movaps  xmm1, xmmword ptr [ecx+0E0h]
0x8EA1BF: movaps  xmmword ptr [eax+20h], xmm1
0x8EA1C3: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x8EA1CA: movaps  xmmword ptr [eax+10h], xmm1
0x8EA1CE: movaps  xmmword ptr [eax+50h], xmm0
0x8EA1D2: movaps  xmmword ptr [eax+60h], xmm0
0x8EA1D6: movaps  xmmword ptr [eax+70h], xmm0
0x8EA1DA: mov     ecx, 3F800000h
0x8EA1DF: mov     [eax+50h], ecx
0x8EA1E2: mov     [eax+64h], ecx
0x8EA1E5: mov     [eax+78h], ecx
0x8EA1E8: and     esp, 0FFFFFFF0h
0x8EA1EB: mov     byte ptr [eax+0Ch], 1
0x8EA1EF: add     eax, 80h ; '€'
0x8EA1F4: mov     esp, ebp
0x8EA1F6: pop     ebp
0x8EA1F7: retn    8
