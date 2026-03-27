0x770420: sub     esp, 10h
0x770423: push    ebx
0x770424: push    ebp
0x770425: push    esi
0x770426: mov     esi, [esp+1Ch+arg_0]
0x77042A: mov     edx, [esi+10h]
0x77042D: mov     ebx, [esi+24h]
0x770430: xor     ebp, ebp
0x770432: test    edx, edx
0x770434: push    edi
0x770435: mov     [esp+20h+var_C], ebp
0x770439: jnz     short loc_770477
0x77043B: xor     edi, edi
0x77043D: cmp     [esi+8], di
0x770441: jbe     loc_770530
0x770447: mov     eax, [esi+1Ch]
0x77044A: lea     ebx, [ebx+0]
0x770450: push    eax
0x770451: push    0
0x770453: push    ebx
0x770454: call    __memset
0x770459: mov     eax, [esi+1Ch]
0x77045C: add     ebx, [esi+20h]
0x77045F: add     edi, 1
0x770462: add     esp, 0Ch
0x770465: add     ebp, eax
0x770467: cmp     di, [esi+8]
0x77046B: jb      short loc_770450
0x77046D: pop     edi
0x77046E: pop     esi
0x77046F: mov     eax, ebp
0x770471: pop     ebp
0x770472: pop     ebx
0x770473: add     esp, 10h
0x770476: retn
0x770477: mov     ax, [esi+4]
0x77047B: xor     ecx, ecx
0x77047D: sub     ax, 8
0x770481: cmp     dword ptr [esi], 6
0x770484: movzx   edi, ax
0x770487: setnz   cl
0x77048A: lea     ecx, [ecx+ecx+2]
0x77048E: movzx   eax, cx
0x770491: mov     ecx, edi
0x770493: sub     ecx, eax
0x770495: test    cx, cx
0x770498: mov     [esp+20h+var_4], eax
0x77049C: jle     short loc_7704A7
0x77049E: movzx   eax, ax
0x7704A1: mov     [esp+20h+arg_0], eax
0x7704A5: jmp     short loc_7704AE
0x7704A7: movzx   ecx, di
0x7704AA: mov     [esp+20h+arg_0], ecx
0x7704AE: cmp     [esi+8], bp
0x7704B2: mov     [esp+20h+var_8], ebp
0x7704B6: jbe     short loc_770530
0x7704B8: jmp     short loc_7704C0
0x7704BA: align 10h
0x7704C0: mov     ecx, [esp+20h+arg_0]
0x7704C4: test    cx, cx
0x7704C7: mov     eax, edx
0x7704C9: mov     edi, ebx
0x7704CB: mov     [esp+20h+var_10], 0
0x7704D3: jbe     short loc_7704F5
0x7704D5: movzx   ecx, cx
0x7704D8: movzx   ebp, cx
0x7704DB: mov     [esp+20h+var_10], ebp
0x7704DF: nop
0x7704E0: mov     bp, [eax]
0x7704E3: mov     [edi], bp
0x7704E6: add     edi, 2
0x7704E9: add     eax, 4
0x7704EC: sub     ecx, 1
0x7704EF: jnz     short loc_7704E0
0x7704F1: mov     ebp, [esp+20h+var_C]
0x7704F5: mov     eax, [esp+20h+var_4]
0x7704F9: mov     ecx, [esp+20h+var_10]
0x7704FD: cmp     cx, ax
0x770500: jnb     short loc_770512
0x770502: sub     eax, ecx
0x770504: movzx   ecx, ax
0x770507: xor     eax, eax
0x770509: shr     ecx, 1
0x77050B: rep stosd
0x77050D: adc     ecx, ecx
0x77050F: rep stosw
0x770512: mov     eax, [esp+20h+var_8]
0x770516: add     ebp, [esi+1Ch]
0x770519: add     edx, [esi+18h]
0x77051C: add     ebx, [esi+20h]
0x77051F: add     eax, 1
0x770522: cmp     ax, [esi+8]
0x770526: mov     [esp+20h+var_C], ebp
0x77052A: mov     [esp+20h+var_8], eax
0x77052E: jb      short loc_7704C0
0x770530: pop     edi
0x770531: pop     esi
0x770532: mov     eax, ebp
0x770534: pop     ebp
0x770535: pop     ebx
0x770536: add     esp, 10h
0x770539: retn
