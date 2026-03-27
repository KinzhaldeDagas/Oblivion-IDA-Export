0x91F3A0: push    ecx
0x91F3A1: push    ebp
0x91F3A2: push    edi
0x91F3A3: mov     ebp, ecx
0x91F3A5: call    sub_91F300
0x91F3AA: mov     ecx, [ebp+0]
0x91F3AD: mov     eax, [ecx+4]
0x91F3B0: xor     edi, edi
0x91F3B2: cmp     eax, edi
0x91F3B4: mov     [esp+0Ch+var_4], edi
0x91F3B8: jle     short loc_91F41F
0x91F3BA: push    ebx
0x91F3BB: push    esi
0x91F3BC: mov     esi, [esp+14h+arg_0]
0x91F3C0: mov     eax, [ecx]
0x91F3C2: mov     eax, [eax+edi*4]
0x91F3C5: test    eax, eax
0x91F3C7: jge     short loc_91F40A
0x91F3C9: mov     ecx, [esi+8]
0x91F3CC: neg     eax
0x91F3CE: mov     ebx, eax
0x91F3D0: mov     eax, [esi+4]
0x91F3D3: and     ecx, 3FFFFFFFh
0x91F3D9: cmp     eax, ecx
0x91F3DB: jnz     short loc_91F3E8
0x91F3DD: push    4
0x91F3DF: push    esi
0x91F3E0: call    sub_8A6EE0
0x91F3E5: add     esp, 8
0x91F3E8: mov     edx, [esi+4]
0x91F3EB: mov     eax, [esi]
0x91F3ED: mov     [eax+edx*4], ebx
0x91F3F0: mov     edx, [esi+4]
0x91F3F3: mov     eax, [esp+14h+var_4]
0x91F3F7: inc     edx
0x91F3F8: mov     [esi+4], edx
0x91F3FB: mov     ecx, [ebp+0]
0x91F3FE: mov     edx, [ecx]
0x91F400: mov     [edx+edi*4], eax
0x91F403: inc     eax
0x91F404: mov     [esp+14h+var_4], eax
0x91F408: jmp     short loc_91F412
0x91F40A: mov     ecx, [ecx]
0x91F40C: mov     eax, [ecx+eax*4]
0x91F40F: mov     [ecx+edi*4], eax
0x91F412: mov     ecx, [ebp+0]
0x91F415: mov     eax, [ecx+4]
0x91F418: inc     edi
0x91F419: cmp     edi, eax
0x91F41B: jl      short loc_91F3C0
0x91F41D: pop     esi
0x91F41E: pop     ebx
0x91F41F: pop     edi
0x91F420: pop     ebp
0x91F421: pop     ecx
0x91F422: retn    4
