0x934050: mov     edx, [esp+arg_0]
0x934054: movaps  xmm0, xmmword ptr [edx]
0x934057: mov     eax, ecx
0x934059: movaps  xmmword ptr [eax], xmm0
0x93405C: movaps  xmm0, xmmword ptr [edx+10h]
0x934060: push    esi
0x934061: movaps  xmmword ptr [eax+10h], xmm0
0x934065: mov     cx, [edx+20h]
0x934069: mov     esi, edx
0x93406B: push    edi
0x93406C: mov     [eax+20h], cx
0x934070: lea     ecx, [eax+22h]
0x934073: sub     esi, eax
0x934075: mov     edi, 0Eh
0x93407A: lea     ebx, [ebx+0]
0x934080: mov     dl, [esi+ecx]
0x934083: mov     [ecx], dl
0x934085: inc     ecx
0x934086: dec     edi
0x934087: jnz     short loc_934080
0x934089: pop     edi
0x93408A: pop     esi
0x93408B: retn    4
