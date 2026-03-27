0x8AF760: push    ebp
0x8AF761: mov     ebp, esp
0x8AF763: and     esp, 0FFFFFFF0h
0x8AF766: sub     esp, 64h
0x8AF769: push    ebx
0x8AF76A: mov     ebx, [ebp+arg_0]
0x8AF76D: push    esi
0x8AF76E: push    edi
0x8AF76F: mov     edi, [ebp+arg_4]
0x8AF772: mov     edx, [ebp+arg_8]
0x8AF775: lea     eax, [edi+edx]
0x8AF778: sar     eax, 1
0x8AF77A: lea     eax, [eax+eax*2]
0x8AF77D: shl     eax, 4
0x8AF780: movaps  xmm0, xmmword ptr [eax+ebx+10h]
0x8AF785: mov     esi, edi
0x8AF787: movaps  [esp+70h+var_20], xmm0
0x8AF78C: lea     esp, [esp+0]
0x8AF790: lea     ecx, [esi+esi*2]
0x8AF793: shl     ecx, 4
0x8AF796: lea     ecx, [ecx+ebx+1Ch]
0x8AF79A: lea     ebx, [ebx+0]
0x8AF7A0: fld     dword ptr [ecx]
0x8AF7A2: fcomp   dword ptr [esp+70h+var_20+0Ch]
0x8AF7A6: fnstsw  ax
0x8AF7A8: test    ah, 5
0x8AF7AB: jp      short loc_8AF7B3
0x8AF7AD: inc     esi
0x8AF7AE: add     ecx, 30h ; '0'
0x8AF7B1: jmp     short loc_8AF7A0
0x8AF7B3: lea     eax, [edx+edx*2]
0x8AF7B6: shl     eax, 4
0x8AF7B9: lea     ecx, [eax+ebx+1Ch]
0x8AF7BD: lea     ecx, [ecx+0]
0x8AF7C0: fld     dword ptr [esp+70h+var_20+0Ch]
0x8AF7C4: fcomp   dword ptr [ecx]
0x8AF7C6: fnstsw  ax
0x8AF7C8: test    ah, 5
0x8AF7CB: jp      short loc_8AF7D3
0x8AF7CD: dec     edx
0x8AF7CE: sub     ecx, 30h ; '0'
0x8AF7D1: jmp     short loc_8AF7C0
0x8AF7D3: cmp     edx, esi
0x8AF7D5: jl      loc_8AF866
0x8AF7DB: jz      short loc_8AF85C
0x8AF7DD: lea     ecx, [edx+edx*2]
0x8AF7E0: shl     ecx, 4
0x8AF7E3: mov     edi, [ecx+ebx+20h]
0x8AF7E7: movaps  xmm0, xmmword ptr [ecx+ebx]
0x8AF7EB: movaps  xmm1, xmmword ptr [ecx+ebx+10h]
0x8AF7F0: lea     eax, [ecx+ebx]
0x8AF7F3: mov     ecx, [eax+24h]
0x8AF7F6: mov     [esp+70h+var_3C], ecx
0x8AF7FA: mov     ecx, [eax+28h]
0x8AF7FD: mov     [esp+70h+var_38], ecx
0x8AF801: mov     ecx, [eax+2Ch]
0x8AF804: mov     [esp+70h+var_34], ecx
0x8AF808: lea     ecx, [esi+esi*2]
0x8AF80B: shl     ecx, 4
0x8AF80E: movaps  xmm2, xmmword ptr [ecx+ebx]
0x8AF812: add     ecx, ebx
0x8AF814: movaps  xmmword ptr [eax], xmm2
0x8AF817: movaps  xmm2, xmmword ptr [ecx+10h]
0x8AF81B: movaps  xmmword ptr [eax+10h], xmm2
0x8AF81F: mov     ebx, [ecx+20h]
0x8AF822: mov     [eax+20h], ebx
0x8AF825: mov     ebx, [ecx+24h]
0x8AF828: mov     [eax+24h], ebx
0x8AF82B: mov     ebx, [ecx+28h]
0x8AF82E: mov     [eax+28h], ebx
0x8AF831: mov     ebx, [ecx+2Ch]
0x8AF834: mov     [eax+2Ch], ebx
0x8AF837: mov     eax, [esp+70h+var_3C]
0x8AF83B: mov     ebx, [ebp+arg_0]
0x8AF83E: mov     [ecx+24h], eax
0x8AF841: mov     eax, [esp+70h+var_38]
0x8AF845: mov     [ecx+28h], eax
0x8AF848: mov     eax, [esp+70h+var_34]
0x8AF84C: mov     [ecx+20h], edi
0x8AF84F: mov     edi, [ebp+arg_4]
0x8AF852: movaps  xmmword ptr [ecx], xmm0
0x8AF855: movaps  xmmword ptr [ecx+10h], xmm1
0x8AF859: mov     [ecx+2Ch], eax
0x8AF85C: dec     edx
0x8AF85D: inc     esi
0x8AF85E: cmp     esi, edx
0x8AF860: jle     loc_8AF790
0x8AF866: cmp     edi, edx
0x8AF868: jge     short loc_8AF879
0x8AF86A: mov     ecx, [ebp+arg_C]
0x8AF86D: push    ecx
0x8AF86E: push    edx
0x8AF86F: push    edi
0x8AF870: push    ebx
0x8AF871: call    sub_8AF760
0x8AF876: add     esp, 10h
0x8AF879: cmp     esi, [ebp+arg_8]
0x8AF87C: jge     short loc_8AF888
0x8AF87E: mov     edi, esi
0x8AF880: mov     [ebp+arg_4], edi
0x8AF883: jmp     loc_8AF772
0x8AF888: pop     edi
0x8AF889: pop     esi
0x8AF88A: pop     ebx
0x8AF88B: mov     esp, ebp
0x8AF88D: pop     ebp
0x8AF88E: retn
