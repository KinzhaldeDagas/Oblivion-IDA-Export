0x768470: push    ebx
0x768471: push    esi
0x768472: mov     esi, [esp+8+arg_4]
0x768476: push    edi
0x768477: mov     edi, [esi+38h]
0x76847A: mov     ebx, ecx
0x76847C: mov     ecx, edi
0x76847E: call    sub_777F10
0x768483: test    al, al
0x768485: jz      short loc_76848F
0x768487: pop     edi
0x768488: pop     esi
0x768489: mov     al, 1
0x76848B: pop     ebx
0x76848C: retn    20h ; ' '
0x76848F: mov     eax, [esi]
0x768491: mov     edx, [eax+50h]
0x768494: mov     ecx, esi
0x768496: call    edx
0x768498: movzx   ecx, word ptr [esi+8]
0x76849C: movzx   edx, word ptr [esp+0Ch+arg_8]
0x7684A1: movzx   eax, ax
0x7684A4: movzx   ecx, cx
0x7684A7: movzx   eax, ax
0x7684AA: mov     [edi+18h], ecx
0x7684AD: mov     ecx, [esp+0Ch+arg_10]
0x7684B1: mov     [edi+14h], eax
0x7684B4: movzx   eax, word ptr [esp+0Ch+arg_C]
0x7684B9: mov     [edi+4Ch], ecx
0x7684BC: mov     ecx, [esp+0Ch+arg_1C]
0x7684C0: push    ecx
0x7684C1: push    0
0x7684C3: mov     [edi+40h], eax
0x7684C6: movzx   eax, word ptr [esp+14h+arg_18]
0x7684CB: mov     [edi+3Ch], edx
0x7684CE: mov     edx, [esp+14h+arg_14]
0x7684D2: push    esi
0x7684D3: push    edi
0x7684D4: mov     ecx, ebx
0x7684D6: mov     [edi+48h], edx
0x7684D9: mov     [edi+44h], eax
0x7684DC: call    sub_7633D0
0x7684E1: test    al, al
0x7684E3: mov     byte ptr [esp+0Ch+arg_8], al
0x7684E7: jz      loc_768577
0x7684ED: mov     ecx, [edi+1Ch]
0x7684F0: push    ebp
0x7684F1: xor     ebp, ebp
0x7684F3: test    ecx, ecx
0x7684F5: mov     [esp+10h+arg_10], ecx
0x7684F9: jbe     short loc_768576
0x7684FB: add     ebx, 604h
0x768501: mov     [esp+10h+arg_C], ebx
0x768505: cmp     ebp, [edi+1Ch]
0x768508: jnb     short loc_768512
0x76850A: mov     edx, [edi+24h]
0x76850D: mov     eax, [edx+ebp*4]
0x768510: jmp     short loc_768514
0x768512: xor     eax, eax
0x768514: mov     ebx, [eax+4]
0x768517: push    24h ; '$'; Size
0x768519: call    FormHeapAlloc
0x76851E: mov     ecx, [esp+14h+arg_1C]
0x768522: mov     esi, eax
0x768524: mov     eax, [esp+14h+arg_4]
0x768528: add     esp, 4
0x76852B: lea     edx, [esp+10h+arg_18]
0x76852F: mov     [esi], eax
0x768531: xor     eax, eax
0x768533: push    edx
0x768534: mov     [esi+0Ch], ecx
0x768537: mov     ecx, [esp+14h+arg_C]
0x76853B: push    ebx
0x76853C: mov     [esi+4], eax
0x76853F: mov     [esi+8], eax
0x768542: mov     [esi+10h], eax
0x768545: mov     [esi+14h], eax
0x768548: mov     [esi+18h], edi
0x76854B: mov     [esi+1Ch], ebp
0x76854E: call    NiTMap_GetAt
0x768553: mov     ecx, [esp+10h+arg_C]; this
0x768557: neg     al
0x768559: push    esi; a3
0x76855A: push    ebx; a2
0x76855B: sbb     eax, eax
0x76855D: and     eax, [esp+18h+arg_18]
0x768561: mov     [esi+20h], eax
0x768564: call    NiTMap_SetAt
0x768569: add     ebp, 1
0x76856C: cmp     ebp, [esp+10h+arg_10]
0x768570: jb      short loc_768505
0x768572: mov     al, byte ptr [esp+10h+arg_8]
0x768576: pop     ebp
0x768577: pop     edi
0x768578: pop     esi
0x768579: pop     ebx
0x76857A: retn    20h ; ' '
