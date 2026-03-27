0x930FC0: sub     esp, 14h
0x930FC3: push    ebp
0x930FC4: mov     ebp, [esp+18h+arg_0]
0x930FC8: mov     ecx, [ebp+8]
0x930FCB: push    esi
0x930FCC: xor     eax, eax
0x930FCE: test    ecx, ecx
0x930FD0: push    edi
0x930FD1: mov     edi, [esp+20h+arg_4]
0x930FD5: jle     short loc_930FF3
0x930FD7: mov     ecx, [ebp+4]
0x930FDA: movzx   edx, word ptr [ecx+eax*8]
0x930FDE: mov     ecx, [edi]
0x930FE0: shl     edx, 4
0x930FE3: mov     dword ptr [edx+ecx+0Ch], 40000000h
0x930FEB: mov     ecx, [ebp+8]
0x930FEE: inc     eax
0x930FEF: cmp     eax, ecx
0x930FF1: jl      short loc_930FD7
0x930FF3: mov     edx, ds:0BA9DE4h
0x930FF9: mov     eax, large fs:2Ch
0x930FFF: mov     eax, [eax+edx*4]
0x931002: mov     ecx, [eax+19Ch]
0x931008: mov     esi, [edi+4]
0x93100B: mov     [esp+20h+var_14], eax
0x93100F: lea     eax, ds:10h[esi*4]
0x931016: push    ebx
0x931017: mov     ebx, [ecx+20h]
0x93101A: and     eax, 0FFFFFFF0h
0x93101D: lea     edx, [ebx+eax]
0x931020: cmp     edx, [ecx+2Ch]
0x931023: ja      short loc_93102A
0x931025: mov     [ecx+20h], edx
0x931028: jmp     short loc_931032
0x93102A: mov     edx, [ecx]
0x93102C: push    eax
0x93102D: call    dword ptr [edx+0Ch]
0x931030: mov     ebx, eax
0x931032: mov     eax, [edi+4]
0x931035: or      esi, 80000000h
0x93103B: mov     [esp+24h+var_8], esi
0x93103F: xor     edx, edx
0x931041: xor     esi, esi
0x931043: xor     ecx, ecx
0x931045: cmp     eax, edx
0x931047: jle     short loc_93108B
0x931049: mov     [esp+24h+arg_4], edx
0x93104D: lea     ecx, [ecx+0]
0x931050: mov     eax, [edi]
0x931052: cmp     dword ptr [edx+eax+0Ch], 40000000h
0x93105A: jnz     short loc_931079
0x93105C: mov     ebp, [esp+24h+arg_4]
0x931060: movaps  xmm0, xmmword ptr [edx+eax]
0x931064: movaps  xmmword ptr [eax+ebp], xmm0
0x931068: mov     [ebx+ecx*4], esi
0x93106B: inc     esi
0x93106C: add     ebp, 10h
0x93106F: mov     [esp+24h+arg_4], ebp
0x931073: mov     ebp, [esp+24h+arg_0]
0x931077: jmp     short loc_931080
0x931079: mov     dword ptr [ebx+ecx*4], 0FFFFFFFFh
0x931080: mov     eax, [edi+4]
0x931083: inc     ecx
0x931084: add     edx, 10h
0x931087: cmp     ecx, eax
0x931089: jl      short loc_931050
0x93108B: mov     eax, [edi+8]
0x93108E: and     eax, 3FFFFFFFh
0x931093: cmp     eax, esi
0x931095: jge     short loc_9310AB
0x931097: add     eax, eax
0x931099: cmp     esi, eax
0x93109B: jl      short loc_93109F
0x93109D: mov     eax, esi
0x93109F: push    10h
0x9310A1: push    eax
0x9310A2: push    edi
0x9310A3: call    sub_8A6E40
0x9310A8: add     esp, 0Ch
0x9310AB: mov     [edi+4], esi
0x9310AE: mov     ecx, [ebp+8]
0x9310B1: xor     eax, eax
0x9310B3: test    ecx, ecx
0x9310B5: jle     short loc_9310D9
0x9310B7: jmp     short loc_9310C0
0x9310B9: align 10h
0x9310C0: mov     ecx, [ebp+4]
0x9310C3: movzx   edx, word ptr [ecx+eax*8]
0x9310C7: mov     dx, [ebx+edx*4]
0x9310CB: lea     ecx, [ecx+eax*8]
0x9310CE: mov     [ecx], dx
0x9310D1: mov     ecx, [ebp+8]
0x9310D4: inc     eax
0x9310D5: cmp     eax, ecx
0x9310D7: jl      short loc_9310C0
0x9310D9: mov     eax, [esp+24h+var_14]
0x9310DD: mov     ecx, [eax+19Ch]
0x9310E3: cmp     ebx, [ecx+28h]
0x9310E6: mov     [ecx+20h], ebx
0x9310E9: jnz     short loc_9310F1
0x9310EB: mov     edx, [ecx]
0x9310ED: push    ebx
0x9310EE: call    dword ptr [edx+10h]
0x9310F1: mov     eax, [esp+24h+var_8]
0x9310F5: test    eax, eax
0x9310F7: js      short loc_931114
0x9310F9: and     eax, 3FFFFFFFh
0x9310FE: push    14h
0x931100: shl     eax, 2
0x931103: push    eax
0x931104: mov     eax, [esp+2Ch+var_14]
0x931108: mov     ecx, [eax+19Ch]
0x93110E: push    ebx
0x93110F: call    sub_8A75D0
0x931114: mov     edx, [ebp+8]
0x931117: xor     ecx, ecx
0x931119: xor     eax, eax
0x93111B: cmp     edx, ecx
0x93111D: pop     ebx
0x93111E: jle     short loc_931138
0x931120: mov     edx, [ebp+4]
0x931123: movzx   edx, word ptr [edx+eax*8]
0x931127: mov     esi, [edi]
0x931129: shl     edx, 4
0x93112C: mov     [edx+esi+0Ch], ecx
0x931130: mov     edx, [ebp+8]
0x931133: inc     eax
0x931134: cmp     eax, edx
0x931136: jl      short loc_931120
0x931138: pop     edi
0x931139: pop     esi
0x93113A: pop     ebp
0x93113B: add     esp, 14h
0x93113E: retn
