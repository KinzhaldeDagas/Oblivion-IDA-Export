0x574FB0: push    edi
0x574FB1: mov     edi, [ecx+4]
0x574FB4: xor     eax, eax
0x574FB6: test    edi, edi
0x574FB8: jz      short loc_574FFA
0x574FBA: push    ebx
0x574FBB: mov     ebx, [esp+8+arg_0]
0x574FBF: push    esi
0x574FC0: lea     ecx, [edi+8]
0x574FC3: mov     ecx, [ecx]
0x574FC5: test    ecx, ecx
0x574FC7: mov     edi, [edi]
0x574FC9: jz      short loc_574FF4
0x574FCB: mov     ecx, [ecx+4]
0x574FCE: test    ecx, ecx
0x574FD0: jz      short loc_574FF4
0x574FD2: lea     edx, [ecx+8]
0x574FD5: mov     edx, [edx]
0x574FD7: test    edx, edx
0x574FD9: mov     ecx, [ecx]
0x574FDB: jz      short loc_574FF0
0x574FDD: mov     esi, [edx+1Ch]
0x574FE0: test    esi, esi
0x574FE2: jz      short loc_574FE9
0x574FE4: cmp     byte ptr [esi], 0
0x574FE7: jnz     short loc_574FF0
0x574FE9: cmp     [edx], ebx
0x574FEB: jnz     short loc_574FF0
0x574FED: add     eax, 1
0x574FF0: test    ecx, ecx
0x574FF2: jnz     short loc_574FD2
0x574FF4: test    edi, edi
0x574FF6: jnz     short loc_574FC0
0x574FF8: pop     esi
0x574FF9: pop     ebx
0x574FFA: pop     edi
0x574FFB: retn    4
