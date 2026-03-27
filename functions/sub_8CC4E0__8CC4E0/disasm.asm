0x8CC4E0: push    esi
0x8CC4E1: mov     esi, [esp+4+arg_0]
0x8CC4E5: mov     eax, [esi+18h]
0x8CC4E8: push    edi
0x8CC4E9: xor     edi, edi
0x8CC4EB: test    eax, eax
0x8CC4ED: jle     short loc_8CC565
0x8CC4EF: push    ebx
0x8CC4F0: mov     ebx, [esp+0Ch+arg_4]
0x8CC4F4: push    ebp
0x8CC4F5: xor     eax, eax
0x8CC4F7: mov     ecx, [esi+14h]
0x8CC4FA: cmp     [eax+ecx+4], ebx
0x8CC4FE: jz      short loc_8CC506
0x8CC500: cmp     [eax+ecx+8], ebx
0x8CC504: jnz     short loc_8CC558
0x8CC506: mov     edx, [esi+18h]
0x8CC509: dec     edx
0x8CC50A: mov     [esi+18h], edx
0x8CC50D: shl     edx, 6
0x8CC510: mov     ebp, [edx+ecx]
0x8CC513: add     edx, ecx
0x8CC515: mov     [eax+ecx], ebp
0x8CC518: mov     ebp, [edx+4]
0x8CC51B: mov     [eax+ecx+4], ebp
0x8CC51F: mov     ebp, [edx+8]
0x8CC522: mov     [eax+ecx+8], ebp
0x8CC526: mov     ebp, [edx+0Ch]
0x8CC529: mov     [eax+ecx+0Ch], ebp
0x8CC52D: mov     ebp, [edx+10h]
0x8CC530: mov     [eax+ecx+10h], ebp
0x8CC534: mov     ebp, [edx+14h]
0x8CC537: mov     [eax+ecx+14h], ebp
0x8CC53B: mov     ebp, [edx+18h]
0x8CC53E: mov     [eax+ecx+18h], ebp
0x8CC542: movaps  xmm0, xmmword ptr [edx+20h]
0x8CC546: movaps  xmmword ptr [eax+ecx+20h], xmm0
0x8CC54B: movaps  xmm0, xmmword ptr [edx+30h]
0x8CC54F: movaps  xmmword ptr [eax+ecx+30h], xmm0
0x8CC554: dec     edi
0x8CC555: sub     eax, 40h ; '@'
0x8CC558: mov     ecx, [esi+18h]
0x8CC55B: inc     edi
0x8CC55C: add     eax, 40h ; '@'
0x8CC55F: cmp     edi, ecx
0x8CC561: jl      short loc_8CC4F7
0x8CC563: pop     ebp
0x8CC564: pop     ebx
0x8CC565: pop     edi
0x8CC566: pop     esi
0x8CC567: retn
