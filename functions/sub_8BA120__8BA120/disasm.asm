0x8BA120: push    ebx
0x8BA121: mov     ebx, [esp+4+arg_0]
0x8BA125: cmp     word ptr [ebx+4], 0
0x8BA12A: push    esi
0x8BA12B: push    edi
0x8BA12C: mov     esi, ecx
0x8BA12E: jz      short loc_8BA134
0x8BA130: inc     word ptr [ebx+6]
0x8BA134: mov     edi, [esp+0Ch+arg_4]
0x8BA138: mov     ecx, [esi+edi*4+8]
0x8BA13C: test    ecx, ecx
0x8BA13E: jz      short loc_8BA158
0x8BA140: cmp     word ptr [ecx+4], 0
0x8BA145: jz      short loc_8BA158
0x8BA147: dec     word ptr [ecx+6]
0x8BA14B: cmp     word ptr [ecx+6], 0
0x8BA150: jnz     short loc_8BA158
0x8BA152: mov     eax, [ecx]
0x8BA154: push    1
0x8BA156: call    dword ptr [eax]
0x8BA158: mov     [esi+edi*4+8], ebx
0x8BA15C: pop     edi
0x8BA15D: pop     esi
0x8BA15E: pop     ebx
0x8BA15F: retn    8
