0x931140: push    ebx
0x931141: push    ebp
0x931142: mov     ebp, [esp+8+arg_C]
0x931146: mov     eax, [ebp+8]
0x931149: push    esi
0x93114A: mov     esi, [esp+0Ch+arg_0]
0x93114E: push    edi
0x93114F: mov     edi, [esi+8]
0x931152: and     eax, 3FFFFFFFh
0x931157: cmp     eax, edi
0x931159: jge     short loc_93116F
0x93115B: add     eax, eax
0x93115D: cmp     edi, eax
0x93115F: jl      short loc_931163
0x931161: mov     eax, edi
0x931163: push    2
0x931165: push    eax
0x931166: push    ebp
0x931167: call    sub_8A6E40
0x93116C: add     esp, 0Ch
0x93116F: mov     ebx, [esp+10h+arg_8]
0x931173: mov     [ebp+4], edi
0x931176: mov     eax, [esi+8]
0x931179: mov     ecx, [ebx+8]
0x93117C: xor     edi, edi
0x93117E: test    eax, eax
0x931180: mov     [esp+10h+arg_8], ecx
0x931184: jle     short loc_931200
0x931186: mov     eax, [esi+4]
0x931189: lea     ecx, [eax+edi*8]
0x93118C: mov     ax, [ecx+6]
0x931190: cmp     ax, 1
0x931194: mov     [esp+10h+arg_C], ecx
0x931198: jz      short loc_9311AB
0x93119A: cmp     ax, 2
0x93119E: jz      short loc_9311AB
0x9311A0: mov     ecx, [ebp+0]
0x9311A3: mov     word ptr [ecx+edi*2], 0FFFFh
0x9311A9: jmp     short loc_9311F4
0x9311AB: mov     edx, [ebp+0]
0x9311AE: mov     ax, [ebx+8]
0x9311B2: mov     [edx+edi*2], ax
0x9311B6: mov     edx, [ebx+0Ch]
0x9311B9: mov     eax, [ebx+8]
0x9311BC: lea     esi, [ebx+4]
0x9311BF: and     edx, 3FFFFFFFh
0x9311C5: cmp     eax, edx
0x9311C7: jnz     short loc_9311D8
0x9311C9: push    8
0x9311CB: push    esi
0x9311CC: call    sub_8A6EE0
0x9311D1: mov     ecx, [esp+18h+arg_C]
0x9311D5: add     esp, 8
0x9311D8: mov     ecx, [ecx]
0x9311DA: mov     eax, [esi+4]
0x9311DD: mov     edx, [esi]
0x9311DF: mov     [edx+eax*8], ecx
0x9311E2: mov     ecx, [esp+10h+arg_C]
0x9311E6: mov     ecx, [ecx+4]
0x9311E9: mov     [edx+eax*8+4], ecx
0x9311ED: inc     dword ptr [esi+4]
0x9311F0: mov     esi, [esp+10h+arg_0]
0x9311F4: mov     eax, [esi+8]
0x9311F7: inc     edi
0x9311F8: cmp     edi, eax
0x9311FA: jl      short loc_931186
0x9311FC: mov     ecx, [esp+10h+arg_8]
0x931200: cmp     ecx, [ebx+8]
0x931203: jge     short loc_931231
0x931205: mov     edx, [ebx+4]
0x931208: mov     esi, [ebp+0]
0x93120B: lea     eax, [edx+ecx*8]
0x93120E: movzx   edx, word ptr [eax+2]
0x931212: mov     dx, [esi+edx*2]
0x931216: mov     [eax+2], dx
0x93121A: movzx   edx, word ptr [eax+4]
0x93121E: mov     esi, [ebp+0]
0x931221: mov     dx, [esi+edx*2]
0x931225: mov     [eax+4], dx
0x931229: mov     eax, [ebx+8]
0x93122C: inc     ecx
0x93122D: cmp     ecx, eax
0x93122F: jl      short loc_931205
0x931231: pop     edi
0x931232: pop     esi
0x931233: pop     ebp
0x931234: pop     ebx
0x931235: retn
