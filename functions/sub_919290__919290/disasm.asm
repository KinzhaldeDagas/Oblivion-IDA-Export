0x919290: push    ebx
0x919291: push    ebp
0x919292: push    esi
0x919293: mov     esi, ecx
0x919295: mov     eax, [esi+24h]
0x919298: test    eax, eax
0x91929A: push    edi
0x91929B: mov     dword ptr [esi], offset off_A9D2EC
0x9192A1: mov     dword ptr [esi+8], offset off_A9D2D4
0x9192A8: mov     dword ptr [esi+20h], offset off_A9D84C
0x9192AF: mov     dword ptr [esi+28h], offset off_A9D2C8
0x9192B6: jz      short loc_9192DE
0x9192B8: mov     ecx, [eax+60h]
0x9192BB: xor     edi, edi
0x9192BD: test    ecx, ecx
0x9192BF: jle     short loc_9192DE
0x9192C1: mov     eax, [esi+24h]
0x9192C4: mov     ecx, [eax+5Ch]
0x9192C7: mov     ecx, [ecx+edi*4]
0x9192CA: lea     eax, [esi+28h]
0x9192CD: push    eax
0x9192CE: call    sub_898A80
0x9192D3: mov     edx, [esi+24h]
0x9192D6: mov     eax, [edx+60h]
0x9192D9: inc     edi
0x9192DA: cmp     edi, eax
0x9192DC: jl      short loc_9192C1
0x9192DE: mov     ebx, [esi+40h]
0x9192E1: test    ebx, ebx
0x9192E3: jle     short loc_9192FC
0x9192E5: xor     edi, edi
0x9192E7: mov     ecx, [esi+3Ch]
0x9192EA: mov     eax, [ecx+edi]
0x9192ED: add     ecx, edi
0x9192EF: push    0
0x9192F1: call    dword ptr [eax]
0x9192F3: add     edi, 80h ; '€'
0x9192F9: dec     ebx
0x9192FA: jnz     short loc_9192E7
0x9192FC: mov     eax, [esi+44h]
0x9192FF: test    eax, eax
0x919301: mov     ebp, ds:0BA9DE4h
0x919307: js      short loc_919337
0x919309: mov     ecx, large fs:2Ch
0x919310: mov     edx, [ecx+ebp*4]
0x919313: mov     ecx, [edx+19Ch]
0x919319: test    ecx, ecx
0x91931B: jnz     short loc_919323
0x91931D: mov     ecx, ds:0BA7D9Ch
0x919323: and     eax, 3FFFFFFFh
0x919328: push    14h
0x91932A: shl     eax, 7
0x91932D: push    eax
0x91932E: mov     eax, [esi+3Ch]
0x919331: push    eax
0x919332: call    sub_8A75D0
0x919337: mov     ebx, [esi+34h]
0x91933A: test    ebx, ebx
0x91933C: jle     short loc_919355
0x91933E: xor     edi, edi
0x919340: mov     ecx, [esi+30h]
0x919343: mov     edx, [ecx+edi]
0x919346: add     ecx, edi
0x919348: push    0
0x91934A: call    dword ptr [edx]
0x91934C: add     edi, 80h ; '€'
0x919352: dec     ebx
0x919353: jnz     short loc_919340
0x919355: mov     eax, [esi+38h]
0x919358: test    eax, eax
0x91935A: js      short loc_91938A
0x91935C: mov     ecx, large fs:2Ch
0x919363: mov     edx, [ecx+ebp*4]
0x919366: mov     ecx, [edx+19Ch]
0x91936C: test    ecx, ecx
0x91936E: jnz     short loc_919376
0x919370: mov     ecx, ds:0BA7D9Ch
0x919376: and     eax, 3FFFFFFFh
0x91937B: push    14h
0x91937D: shl     eax, 7
0x919380: push    eax
0x919381: mov     eax, [esi+30h]
0x919384: push    eax
0x919385: call    sub_8A75D0
0x91938A: pop     edi
0x91938B: mov     dword ptr [esi+28h], offset off_A9D2B4
0x919392: mov     ecx, esi
0x919394: pop     esi
0x919395: pop     ebp
0x919396: pop     ebx
0x919397: jmp     sub_949180
