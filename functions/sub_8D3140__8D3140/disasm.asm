0x8D3140: sub     esp, 0Ch
0x8D3143: push    esi
0x8D3144: mov     esi, [esp+10h+arg_8]
0x8D3148: push    edi
0x8D3149: mov     edi, [esp+14h+arg_0]
0x8D314D: mov     eax, [edi+4]
0x8D3150: mov     ecx, eax
0x8D3152: sub     ecx, esi
0x8D3154: cmp     ecx, eax
0x8D3156: mov     [esp+14h+arg_8], ecx
0x8D315A: jge     loc_8D31EF
0x8D3160: mov     edx, [esp+14h+arg_4]
0x8D3164: lea     esi, [ecx+ecx*2]
0x8D3167: push    ebx
0x8D3168: shl     esi, 2
0x8D316B: push    ebp
0x8D316C: lea     esp, [esp+0]
0x8D3170: mov     eax, [edi]
0x8D3172: mov     eax, [eax+esi]
0x8D3175: mov     eax, [eax+24h]
0x8D3178: mov     ebx, [eax+4]
0x8D317B: add     eax, 4
0x8D317E: cmp     byte ptr [ebx+92h], 0
0x8D3185: jnz     short loc_8D3194
0x8D3187: mov     eax, [eax+4]
0x8D318A: mov     bl, [eax+92h]
0x8D3190: test    bl, bl
0x8D3192: jz      short loc_8D31DE
0x8D3194: mov     ecx, [edx]
0x8D3196: lea     eax, [ecx+1]
0x8D3199: mov     [edx], eax
0x8D319B: mov     edx, [edi]
0x8D319D: lea     eax, [esi+edx]
0x8D31A0: lea     ecx, [ecx+ecx*2]
0x8D31A3: lea     ecx, [edx+ecx*4]
0x8D31A6: mov     ebx, ecx
0x8D31A8: mov     edx, [ebx]
0x8D31AA: mov     edi, [ebx+4]
0x8D31AD: mov     ebx, [ebx+8]
0x8D31B0: mov     [esp+1Ch+var_4], ebx
0x8D31B4: mov     ebx, eax
0x8D31B6: mov     ebp, [ebx]
0x8D31B8: mov     [ecx], ebp
0x8D31BA: mov     ebp, [ebx+4]
0x8D31BD: mov     [ecx+4], ebp
0x8D31C0: mov     ebx, [ebx+8]
0x8D31C3: mov     [ecx+8], ebx
0x8D31C6: mov     ecx, [esp+1Ch+arg_8]
0x8D31CA: mov     [eax], edx
0x8D31CC: mov     edx, [esp+1Ch+var_4]
0x8D31D0: mov     [eax+4], edi
0x8D31D3: mov     edi, [esp+1Ch+arg_0]
0x8D31D7: mov     [eax+8], edx
0x8D31DA: mov     edx, [esp+1Ch+arg_4]
0x8D31DE: mov     eax, [edi+4]
0x8D31E1: inc     ecx
0x8D31E2: add     esi, 0Ch
0x8D31E5: cmp     ecx, eax
0x8D31E7: mov     [esp+1Ch+arg_8], ecx
0x8D31EB: jl      short loc_8D3170
0x8D31ED: pop     ebp
0x8D31EE: pop     ebx
0x8D31EF: pop     edi
0x8D31F0: pop     esi
0x8D31F1: add     esp, 0Ch
0x8D31F4: retn
