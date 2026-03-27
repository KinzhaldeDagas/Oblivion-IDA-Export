0x6C5240: mov     eax, [esp+arg_0]
0x6C5244: mov     eax, [eax]
0x6C5246: test    eax, eax
0x6C5248: setz    al
0x6C524B: test    al, al
0x6C524D: push    edi
0x6C524E: mov     edi, ecx
0x6C5250: jz      short loc_6C5259
0x6C5252: or      eax, 0FFFFFFFFh
0x6C5255: pop     edi
0x6C5256: retn    4
0x6C5259: movzx   edx, word ptr [edi+0Ah]
0x6C525D: cmp     [edi+0Ch], dx
0x6C5261: push    ebx
0x6C5262: push    ebp
0x6C5263: push    esi
0x6C5264: jnb     loc_6C5305
0x6C526A: lea     ecx, [edx-1]
0x6C526D: movzx   eax, cx
0x6C5270: test    ax, ax
0x6C5273: movzx   esi, dx
0x6C5276: jl      short loc_6C52A6
0x6C5278: mov     ebp, [edi+4]
0x6C527B: jmp     short loc_6C5280
0x6C527D: align 10h
0x6C5280: movsx   ecx, ax
0x6C5283: cmp     dword ptr [ebp+ecx*4+0], 0
0x6C5288: setz    cl
0x6C528B: test    cl, cl
0x6C528D: jz      short loc_6C5294
0x6C528F: movzx   esi, ax
0x6C5292: jmp     short loc_6C529E
0x6C5294: movzx   ecx, dx
0x6C5297: movsx   ebx, si
0x6C529A: cmp     ebx, ecx
0x6C529C: jnz     short loc_6C52A6
0x6C529E: sub     eax, 1
0x6C52A1: test    ax, ax
0x6C52A4: jge     short loc_6C5280
0x6C52A6: movsx   ebp, si
0x6C52A9: movzx   eax, dx
0x6C52AC: cmp     ebp, eax
0x6C52AE: jz      short loc_6C5305
0x6C52B0: mov     ecx, [edi+4]
0x6C52B3: mov     esi, [ecx+ebp*4]
0x6C52B6: mov     edx, [esp+10h+arg_0]
0x6C52BA: cmp     esi, [edx]
0x6C52BC: lea     ebx, [ecx+ebp*4]
0x6C52BF: jz      short loc_6C52F7
0x6C52C1: test    esi, esi
0x6C52C3: jz      short loc_6C52E1
0x6C52C5: lea     eax, [esi+4]
0x6C52C8: push    eax; lpAddend
0x6C52C9: call    dword ptr ds:0A2807Ch
0x6C52CF: test    eax, eax
0x6C52D1: jnz     short loc_6C52E1
0x6C52D3: test    esi, esi
0x6C52D5: jz      short loc_6C52E1
0x6C52D7: mov     edx, [esi]
0x6C52D9: mov     eax, [edx]
0x6C52DB: push    1
0x6C52DD: mov     ecx, esi
0x6C52DF: call    eax
0x6C52E1: mov     ecx, [esp+10h+arg_0]
0x6C52E5: mov     eax, [ecx]
0x6C52E7: test    eax, eax
0x6C52E9: mov     [ebx], eax
0x6C52EB: jz      short loc_6C52F7
0x6C52ED: add     eax, 4
0x6C52F0: push    eax; lpAddend
0x6C52F1: call    dword ptr ds:0A28078h
0x6C52F7: add     word ptr [edi+0Ch], 1
0x6C52FC: pop     esi
0x6C52FD: mov     eax, ebp
0x6C52FF: pop     ebp
0x6C5300: pop     ebx
0x6C5301: pop     edi
0x6C5302: retn    4
0x6C5305: movzx   esi, dx
0x6C5308: movzx   edx, word ptr [edi+8]
0x6C530C: cmp     esi, edx
0x6C530E: jb      short loc_6C531E
0x6C5310: movzx   eax, word ptr [edi+0Eh]
0x6C5314: add     eax, esi
0x6C5316: push    eax
0x6C5317: mov     ecx, edi
0x6C5319: call    sub_6C4510
0x6C531E: mov     ecx, [esp+10h+arg_0]
0x6C5322: push    ecx
0x6C5323: push    esi
0x6C5324: mov     ecx, edi
0x6C5326: call    sub_6C4940
0x6C532B: mov     eax, esi
0x6C532D: pop     esi
0x6C532E: pop     ebp
0x6C532F: pop     ebx
0x6C5330: pop     edi
0x6C5331: retn    4
