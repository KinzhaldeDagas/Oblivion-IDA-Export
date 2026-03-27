0x8D3200: sub     esp, 10h
0x8D3203: mov     edx, [esp+10h+arg_0]
0x8D3207: mov     eax, [edx+4]
0x8D320A: push    ebx
0x8D320B: push    edi
0x8D320C: mov     edi, [esp+18h+arg_4]
0x8D3210: mov     ebx, [edi]
0x8D3212: cmp     ebx, eax
0x8D3214: mov     [esp+18h+var_10], ebx
0x8D3218: jge     loc_8D32B6
0x8D321E: push    ebp
0x8D321F: push    esi
0x8D3220: lea     esi, [ebx+ebx*2]
0x8D3223: shl     esi, 2
0x8D3226: mov     eax, [edx]
0x8D3228: mov     ecx, [eax+esi]
0x8D322B: mov     eax, [ecx+24h]
0x8D322E: mov     ebp, [eax+4]
0x8D3231: mov     ecx, [esp+20h+arg_8]
0x8D3235: movzx   ebp, word ptr [ebp+8Ch]
0x8D323C: mov     ecx, [ecx]
0x8D323E: add     eax, 4
0x8D3241: cmp     byte ptr [ecx+ebp], 8
0x8D3245: jnz     short loc_8D32A1
0x8D3247: mov     eax, [eax+4]
0x8D324A: movzx   eax, word ptr [eax+8Ch]
0x8D3251: cmp     byte ptr [eax+ecx], 8
0x8D3255: jnz     short loc_8D32A1
0x8D3257: mov     ecx, [edi]
0x8D3259: lea     eax, [ecx+1]
0x8D325C: mov     [edi], eax
0x8D325E: mov     edx, [edx]
0x8D3260: lea     eax, [esi+edx]
0x8D3263: lea     ecx, [ecx+ecx*2]
0x8D3266: lea     ecx, [edx+ecx*4]
0x8D3269: mov     ebx, ecx
0x8D326B: mov     edx, [ebx]
0x8D326D: mov     edi, [ebx+4]
0x8D3270: mov     ebx, [ebx+8]
0x8D3273: mov     [esp+20h+var_4], ebx
0x8D3277: mov     ebx, eax
0x8D3279: mov     ebp, [ebx]
0x8D327B: mov     [ecx], ebp
0x8D327D: mov     ebp, [ebx+4]
0x8D3280: mov     [ecx+4], ebp
0x8D3283: mov     ebx, [ebx+8]
0x8D3286: mov     [ecx+8], ebx
0x8D3289: mov     ebx, [esp+20h+var_10]
0x8D328D: mov     [eax], edx
0x8D328F: mov     edx, [esp+20h+var_4]
0x8D3293: mov     [eax+4], edi
0x8D3296: mov     edi, [esp+20h+arg_4]
0x8D329A: mov     [eax+8], edx
0x8D329D: mov     edx, [esp+20h+arg_0]
0x8D32A1: mov     eax, [edx+4]
0x8D32A4: inc     ebx
0x8D32A5: add     esi, 0Ch
0x8D32A8: cmp     ebx, eax
0x8D32AA: mov     [esp+20h+var_10], ebx
0x8D32AE: jl      loc_8D3226
0x8D32B4: pop     esi
0x8D32B5: pop     ebp
0x8D32B6: pop     edi
0x8D32B7: pop     ebx
0x8D32B8: add     esp, 10h
0x8D32BB: retn
