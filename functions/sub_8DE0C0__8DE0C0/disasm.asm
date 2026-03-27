0x8DE0C0: sub     esp, 38h
0x8DE0C3: mov     eax, [ecx+38h]
0x8DE0C6: push    ebx
0x8DE0C7: push    ebp
0x8DE0C8: push    esi
0x8DE0C9: xor     ebp, ebp
0x8DE0CB: test    eax, eax
0x8DE0CD: push    edi
0x8DE0CE: mov     [esp+48h+var_38], ecx
0x8DE0D2: jle     short loc_8DE137
0x8DE0D4: mov     eax, [ecx+34h]
0x8DE0D7: mov     esi, [eax+ebp*4]
0x8DE0DA: mov     eax, [esi+3Ch]
0x8DE0DD: add     esi, 14h
0x8DE0E0: xor     edi, edi
0x8DE0E2: test    eax, eax
0x8DE0E4: jle     short loc_8DE12F
0x8DE0E6: mov     ecx, [esi+24h]
0x8DE0E9: mov     ecx, [ecx+edi*8+4]
0x8DE0ED: mov     eax, [ecx+10h]
0x8DE0F0: add     eax, ecx
0x8DE0F2: mov     cl, [eax+91h]
0x8DE0F8: test    cl, cl
0x8DE0FA: jnz     short loc_8DE123
0x8DE0FC: movzx   edx, word ptr [eax+8Ch]
0x8DE103: mov     ebx, [esp+48h+arg_4]
0x8DE107: push    edx
0x8DE108: push    ebp
0x8DE109: mov     ecx, ebx
0x8DE10B: call    sub_91F220
0x8DE110: mov     eax, [ebx]
0x8DE112: mov     ecx, [eax+4]
0x8DE115: mov     edx, [eax]
0x8DE117: mov     eax, [edx]
0x8DE119: neg     ecx
0x8DE11B: cmp     eax, ecx
0x8DE11D: jz      loc_8DE2E8
0x8DE123: mov     eax, [esi+28h]
0x8DE126: inc     edi
0x8DE127: cmp     edi, eax
0x8DE129: jl      short loc_8DE0E6
0x8DE12B: mov     ecx, [esp+48h+var_38]
0x8DE12F: mov     eax, [ecx+38h]
0x8DE132: inc     ebp
0x8DE133: cmp     ebp, eax
0x8DE135: jl      short loc_8DE0D4
0x8DE137: mov     eax, [ecx+38h]
0x8DE13A: xor     ebx, ebx
0x8DE13C: test    eax, eax
0x8DE13E: jle     short loc_8DE1B8
0x8DE140: mov     eax, [ecx+34h]
0x8DE143: mov     esi, [eax+ebx*4]
0x8DE146: mov     eax, [esi+6Ch]
0x8DE149: xor     ebp, ebp
0x8DE14B: test    eax, eax
0x8DE14D: jle     short loc_8DE1B0
0x8DE14F: xor     edi, edi
0x8DE151: mov     eax, [esi+68h]
0x8DE154: mov     ecx, [eax+edi+4]
0x8DE158: mov     dl, [ecx+91h]
0x8DE15E: add     eax, edi
0x8DE160: test    dl, dl
0x8DE162: jnz     short loc_8DE1A1
0x8DE164: mov     eax, [eax+8]
0x8DE167: mov     dl, [eax+91h]
0x8DE16D: test    dl, dl
0x8DE16F: jnz     short loc_8DE1A1
0x8DE171: movzx   edx, word ptr [eax+8Ch]
0x8DE178: movzx   eax, word ptr [ecx+8Ch]
0x8DE17F: mov     ecx, [esp+48h+arg_4]
0x8DE183: push    edx
0x8DE184: push    eax
0x8DE185: call    sub_91F220
0x8DE18A: mov     ecx, [esp+48h+arg_4]
0x8DE18E: mov     eax, [ecx]
0x8DE190: mov     edx, [eax+4]
0x8DE193: mov     eax, [eax]
0x8DE195: mov     ecx, [eax]
0x8DE197: neg     edx
0x8DE199: cmp     ecx, edx
0x8DE19B: jz      loc_8DE2E8
0x8DE1A1: mov     eax, [esi+6Ch]
0x8DE1A4: inc     ebp
0x8DE1A5: add     edi, 1Ch
0x8DE1A8: cmp     ebp, eax
0x8DE1AA: jl      short loc_8DE151
0x8DE1AC: mov     ecx, [esp+48h+var_38]
0x8DE1B0: mov     eax, [ecx+38h]
0x8DE1B3: inc     ebx
0x8DE1B4: cmp     ebx, eax
0x8DE1B6: jl      short loc_8DE140
0x8DE1B8: mov     eax, [ecx+60h]
0x8DE1BB: xor     ebp, ebp
0x8DE1BD: cmp     eax, ebp
0x8DE1BF: lea     edx, [esp+48h+var_28]
0x8DE1C3: mov     esi, 8000000Ah
0x8DE1C8: mov     [esp+48h+var_34], edx
0x8DE1CC: mov     [esp+48h+var_30], ebp
0x8DE1D0: mov     [esp+48h+var_2C], esi
0x8DE1D4: jle     loc_8DE28F
0x8DE1DA: lea     ebx, [ebx+0]
0x8DE1E0: mov     eax, [ecx+5Ch]
0x8DE1E3: mov     edi, [eax+ebp*4]
0x8DE1E6: test    edi, edi
0x8DE1E8: lea     eax, [eax+ebp*4]
0x8DE1EB: jz      loc_8DE283
0x8DE1F1: mov     [esp+48h+var_30], 0
0x8DE1F9: mov     ecx, [eax]
0x8DE1FB: mov     edx, [ecx]
0x8DE1FD: lea     eax, [esp+48h+var_34]
0x8DE201: push    eax
0x8DE202: call    dword ptr [edx+0Ch]
0x8DE205: mov     ecx, [esp+48h+var_30]
0x8DE209: mov     edx, [esp+48h+var_34]
0x8DE20D: xor     esi, esi
0x8DE20F: or      edi, 0FFFFFFFFh
0x8DE212: cmp     esi, ecx
0x8DE214: jge     short loc_8DE27B
0x8DE216: mov     eax, [edx+esi*4]
0x8DE219: mov     bl, [eax+91h]
0x8DE21F: test    bl, bl
0x8DE221: jnz     short loc_8DE225
0x8DE223: mov     edi, esi
0x8DE225: inc     esi
0x8DE226: cmp     edi, 0FFFFFFFFh
0x8DE229: jz      short loc_8DE212
0x8DE22B: cmp     esi, ecx
0x8DE22D: jge     short loc_8DE27B
0x8DE22F: nop
0x8DE230: mov     eax, [edx+esi*4]
0x8DE233: mov     bl, [eax+91h]
0x8DE239: test    bl, bl
0x8DE23B: jnz     short loc_8DE276
0x8DE23D: movzx   ecx, word ptr [eax+8Ch]
0x8DE244: mov     edx, [edx+edi*4]
0x8DE247: movzx   eax, word ptr [edx+8Ch]
0x8DE24E: mov     ebx, [esp+48h+arg_4]
0x8DE252: push    ecx
0x8DE253: push    eax
0x8DE254: mov     ecx, ebx
0x8DE256: call    sub_91F220
0x8DE25B: mov     eax, [ebx]
0x8DE25D: mov     ecx, [eax+4]
0x8DE260: mov     edx, [eax]
0x8DE262: mov     eax, [edx]
0x8DE264: neg     ecx
0x8DE266: cmp     eax, ecx
0x8DE268: jz      loc_8DE2F9
0x8DE26E: mov     ecx, [esp+48h+var_30]
0x8DE272: mov     edx, [esp+48h+var_34]
0x8DE276: inc     esi
0x8DE277: cmp     esi, ecx
0x8DE279: jl      short loc_8DE230
0x8DE27B: mov     esi, [esp+48h+var_2C]
0x8DE27F: mov     ecx, [esp+48h+var_38]
0x8DE283: mov     eax, [ecx+60h]
0x8DE286: inc     ebp
0x8DE287: cmp     ebp, eax
0x8DE289: jl      loc_8DE1E0
0x8DE28F: test    esi, esi
0x8DE291: js      short loc_8DE2C4
0x8DE293: mov     ecx, large fs:2Ch
0x8DE29A: mov     eax, ds:0BA9DE4h
0x8DE29F: mov     eax, [ecx+eax*4]
0x8DE2A2: mov     ecx, [eax+19Ch]
0x8DE2A8: test    ecx, ecx
0x8DE2AA: jnz     short loc_8DE2B2
0x8DE2AC: mov     ecx, ds:0BA7D9Ch
0x8DE2B2: and     esi, 3FFFFFFFh
0x8DE2B8: push    14h
0x8DE2BA: shl     esi, 2
0x8DE2BD: push    esi
0x8DE2BE: push    edx
0x8DE2BF: call    sub_8A75D0
0x8DE2C4: mov     ecx, [esp+48h+arg_4]
0x8DE2C8: mov     eax, [ecx]
0x8DE2CA: mov     edx, [eax+4]
0x8DE2CD: mov     eax, [eax]
0x8DE2CF: mov     ecx, [eax]
0x8DE2D1: mov     eax, [esp+48h+arg_0]
0x8DE2D5: pop     edi
0x8DE2D6: neg     edx
0x8DE2D8: pop     esi
0x8DE2D9: cmp     ecx, edx
0x8DE2DB: setz    cl
0x8DE2DE: pop     ebp
0x8DE2DF: mov     [eax], cl
0x8DE2E1: pop     ebx
0x8DE2E2: add     esp, 38h
0x8DE2E5: retn    8
0x8DE2E8: mov     eax, [esp+48h+arg_0]
0x8DE2EC: pop     edi
0x8DE2ED: pop     esi
0x8DE2EE: pop     ebp
0x8DE2EF: mov     byte ptr [eax], 1
0x8DE2F2: pop     ebx
0x8DE2F3: add     esp, 38h
0x8DE2F6: retn    8
0x8DE2F9: mov     eax, [esp+48h+var_2C]
0x8DE2FD: test    eax, eax
0x8DE2FF: mov     esi, [esp+48h+arg_0]
0x8DE303: mov     byte ptr [esi], 1
0x8DE306: js      short loc_8DE33D
0x8DE308: mov     ecx, ds:0BA9DE4h
0x8DE30E: mov     edx, large fs:2Ch
0x8DE315: mov     ecx, [edx+ecx*4]
0x8DE318: mov     ecx, [ecx+19Ch]
0x8DE31E: test    ecx, ecx
0x8DE320: jnz     short loc_8DE328
0x8DE322: mov     ecx, ds:0BA7D9Ch
0x8DE328: mov     edx, [esp+48h+var_34]
0x8DE32C: and     eax, 3FFFFFFFh
0x8DE331: push    14h
0x8DE333: shl     eax, 2
0x8DE336: push    eax
0x8DE337: push    edx
0x8DE338: call    sub_8A75D0
0x8DE33D: pop     edi
0x8DE33E: mov     eax, esi
0x8DE340: pop     esi
0x8DE341: pop     ebp
0x8DE342: pop     ebx
0x8DE343: add     esp, 38h
0x8DE346: retn    8
