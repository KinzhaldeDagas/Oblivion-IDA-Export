0x76F2A0: sub     esp, 0Ch
0x76F2A3: push    ebx
0x76F2A4: push    ebp
0x76F2A5: push    esi
0x76F2A6: push    edi
0x76F2A7: mov     edi, [esp+1Ch+arg_0]
0x76F2AB: mov     edx, [edi+10h]
0x76F2AE: mov     esi, [edi+24h]
0x76F2B1: xor     ebx, ebx
0x76F2B3: xor     ebp, ebp
0x76F2B5: cmp     edx, ebx
0x76F2B7: mov     [esp+1Ch+var_C], ebp
0x76F2BB: mov     [esp+1Ch+var_8], edx
0x76F2BF: jnz     short loc_76F2FA
0x76F2C1: cmp     [edi+8], bx
0x76F2C5: jbe     loc_76F39A
0x76F2CB: mov     eax, [edi+1Ch]
0x76F2CE: mov     edi, edi
0x76F2D0: push    eax
0x76F2D1: push    0FFh
0x76F2D6: push    esi
0x76F2D7: call    __memset
0x76F2DC: mov     eax, [edi+1Ch]
0x76F2DF: add     esi, [edi+20h]
0x76F2E2: add     ebx, 1
0x76F2E5: add     esp, 0Ch
0x76F2E8: add     ebp, eax
0x76F2EA: cmp     bx, [edi+8]
0x76F2EE: jb      short loc_76F2D0
0x76F2F0: pop     edi
0x76F2F1: pop     esi
0x76F2F2: mov     eax, ebp
0x76F2F4: pop     ebp
0x76F2F5: pop     ebx
0x76F2F6: add     esp, 0Ch
0x76F2F9: retn
0x76F2FA: mov     ax, [edi+4]
0x76F2FE: sub     ax, 14h
0x76F302: movzx   eax, ax
0x76F305: lea     ecx, [eax-4]
0x76F308: test    cx, cx
0x76F30B: jle     short loc_76F317
0x76F30D: mov     [esp+1Ch+arg_0], 4
0x76F315: jmp     short loc_76F31E
0x76F317: movzx   eax, ax
0x76F31A: mov     [esp+1Ch+arg_0], eax
0x76F31E: cmp     [edi+8], bx
0x76F322: mov     [esp+1Ch+var_4], ebx
0x76F326: jbe     short loc_76F39A
0x76F328: jmp     short loc_76F330
0x76F32A: align 10h
0x76F330: mov     ecx, [esp+1Ch+arg_0]
0x76F334: xor     ebp, ebp
0x76F336: test    cx, cx
0x76F339: mov     eax, edx
0x76F33B: jbe     short loc_76F358
0x76F33D: movzx   ecx, cx
0x76F340: movzx   ebp, cx
0x76F343: mov     bl, [eax]
0x76F345: mov     [esi], bl
0x76F347: add     esi, 1
0x76F34A: add     eax, 1
0x76F34D: sub     ecx, 1
0x76F350: jnz     short loc_76F343
0x76F352: cmp     bp, 4
0x76F356: jnb     short loc_76F374
0x76F358: mov     ecx, 4
0x76F35D: sub     ecx, ebp
0x76F35F: movzx   ebx, cx
0x76F362: push    ebx
0x76F363: push    0
0x76F365: push    esi
0x76F366: call    __memset
0x76F36B: mov     edx, [esp+28h+var_8]
0x76F36F: add     esp, 0Ch
0x76F372: add     esi, ebx
0x76F374: mov     eax, [edi+1Ch]
0x76F377: add     [esp+1Ch+var_C], eax
0x76F37B: mov     eax, [esp+1Ch+var_4]
0x76F37F: add     edx, [edi+18h]
0x76F382: add     esi, [edi+20h]
0x76F385: add     eax, 1
0x76F388: cmp     ax, [edi+8]
0x76F38C: mov     [esp+1Ch+var_8], edx
0x76F390: mov     [esp+1Ch+var_4], eax
0x76F394: jb      short loc_76F330
0x76F396: mov     ebp, [esp+1Ch+var_C]
0x76F39A: pop     edi
0x76F39B: pop     esi
0x76F39C: mov     eax, ebp
0x76F39E: pop     ebp
0x76F39F: pop     ebx
0x76F3A0: add     esp, 0Ch
0x76F3A3: retn
