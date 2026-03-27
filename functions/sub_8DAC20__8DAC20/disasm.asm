0x8DAC20: mov     eax, [esp+arg_0]
0x8DAC24: push    ebx
0x8DAC25: push    esi
0x8DAC26: mov     esi, ecx
0x8DAC28: mov     edx, 1
0x8DAC2D: mov     [esi+8], eax
0x8DAC30: push    edi
0x8DAC31: mov     [esi+6], dx
0x8DAC35: mov     dword ptr [esi], offset off_A9A3B8
0x8DAC3B: lea     eax, [esi+9A1h]
0x8DAC41: mov     ecx, 40h ; '@'
0x8DAC46: xor     ebx, ebx
0x8DAC48: mov     [eax-1], bl
0x8DAC4B: mov     [eax], bl
0x8DAC4D: add     eax, 14h
0x8DAC50: dec     ecx
0x8DAC51: jnz     short loc_8DAC48
0x8DAC53: lea     eax, [esi+16B0h]
0x8DAC59: mov     ecx, 10h
0x8DAC5E: mov     edi, edi
0x8DAC60: mov     [eax-4], ebx
0x8DAC63: mov     [eax], ebx
0x8DAC65: mov     [eax+4], ebx
0x8DAC68: mov     [eax+8], ebx
0x8DAC6B: mov     [eax+10h], bl
0x8DAC6E: mov     [eax+11h], bl
0x8DAC71: add     eax, 34h ; '4'
0x8DAC74: dec     ecx
0x8DAC75: jnz     short loc_8DAC60
0x8DAC77: mov     ecx, [esp+0Ch+arg_4]
0x8DAC7B: mov     [esi+1C04h], ebx
0x8DAC81: mov     [esi+1C08h], ebx
0x8DAC87: mov     dword ptr [esi+1C0Ch], 80000000h
0x8DAC91: mov     [esi+1C10h], ebx
0x8DAC97: mov     [esi+1C14h], ebx
0x8DAC9D: mov     [esi+1C18h], ebx
0x8DACA3: mov     [esi+1C1Ch], ebx
0x8DACA9: mov     [esi+1BF4h], bl
0x8DACAF: push    ebp
0x8DACB0: mov     [esi+1C00h], dl
0x8DACB6: mov     [esi+0E90h], ebx
0x8DACBC: lea     eax, [esi+0Ch]
0x8DACBF: mov     ebp, 8
0x8DACC4: mov     edi, 8
0x8DACC9: lea     esp, [esp+0]
0x8DACD0: cmp     ecx, ebx
0x8DACD2: mov     [eax], ecx
0x8DACD4: jz      short loc_8DACE0
0x8DACD6: cmp     [ecx+4], bx
0x8DACDA: jz      short loc_8DACE0
0x8DACDC: inc     word ptr [ecx+6]
0x8DACE0: add     eax, 4
0x8DACE3: dec     edi
0x8DACE4: jnz     short loc_8DACD0
0x8DACE6: dec     ebp
0x8DACE7: jnz     short loc_8DACC4
0x8DACE9: xor     ecx, ecx
0x8DACEB: lea     eax, [esi+10Ch]
0x8DACF1: pop     ebp
0x8DACF2: mov     edi, edx
0x8DACF4: shl     edi, cl
0x8DACF6: inc     ecx
0x8DACF7: add     eax, 4
0x8DACFA: cmp     ecx, 20h ; ' '
0x8DACFD: mov     [eax-4], edi
0x8DAD00: jl      short loc_8DACF2
0x8DAD02: mov     ecx, esi
0x8DAD04: call    sub_8DA280
0x8DAD09: mov     dword ptr [esi+1BFCh], 80h ; '€'
0x8DAD13: mov     dword ptr [esi+1BF8h], 200h
0x8DAD1D: pop     edi
0x8DAD1E: mov     [esi+1BF5h], bl
0x8DAD24: mov     eax, esi
0x8DAD26: pop     esi
0x8DAD27: pop     ebx
0x8DAD28: retn    8
