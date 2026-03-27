0x790460: mov     eax, [esp+arg_0]
0x790464: mov     edx, [esp+arg_4]
0x790468: cmp     eax, edx
0x79046A: jz      short locret_790489
0x79046C: mov     ecx, [esp+arg_8]
0x790470: push    esi
0x790471: mov     esi, [ecx]
0x790473: mov     [eax], esi
0x790475: mov     esi, [ecx+4]
0x790478: mov     [eax+4], esi
0x79047B: mov     esi, [ecx+8]
0x79047E: mov     [eax+8], esi
0x790481: add     eax, 0Ch
0x790484: cmp     eax, edx
0x790486: jnz     short loc_790471
0x790488: pop     esi
0x790489: retn
