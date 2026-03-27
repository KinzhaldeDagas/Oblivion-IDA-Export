0x84E3E0: push    0FFFFFFFFh
0x84E3E2: push    offset SEH_879360
0x84E3E7: mov     eax, large fs:0
0x84E3ED: push    eax
0x84E3EE: push    ecx
0x84E3EF: push    ebx
0x84E3F0: push    ebp
0x84E3F1: push    esi
0x84E3F2: push    edi
0x84E3F3: mov     eax, ds:0B30AACh
0x84E3F8: xor     eax, esp
0x84E3FA: push    eax
0x84E3FB: lea     eax, [esp+24h+var_C]
0x84E3FF: mov     large fs:0, eax
0x84E405: mov     esi, ecx
0x84E407: mov     [esp+24h+var_10], esi
0x84E40B: mov     edi, [esp+24h+arg_8]
0x84E40F: mov     eax, [edi+10h]
0x84E412: mov     ebx, ds:0B456B4h
0x84E418: push    eax
0x84E419: call    sub_848DA0
0x84E41E: mov     edi, [edi+0Ch]
0x84E421: push    edi
0x84E422: mov     ecx, esi
0x84E424: call    sub_848E50
0x84E429: mov     eax, [ebx+24h]
0x84E42C: mov     esi, [esp+24h+arg_C]
0x84E430: mov     edi, [eax]
0x84E432: mov     edx, [esi]
0x84E434: mov     eax, [edx+88h]
0x84E43A: push    0
0x84E43C: mov     ecx, esi
0x84E43E: mov     [esp+28h+arg_8], edi
0x84E442: call    eax
0x84E444: mov     edi, [edi+4]
0x84E447: mov     ebp, eax
0x84E449: cmp     edi, ebp
0x84E44B: jz      short loc_84E484
0x84E44D: test    edi, edi
0x84E44F: jz      short loc_84E46D
0x84E451: lea     ecx, [edi+4]
0x84E454: push    ecx; lpAddend
0x84E455: call    dword ptr ds:0A2807Ch
0x84E45B: test    eax, eax
0x84E45D: jnz     short loc_84E46D
0x84E45F: test    edi, edi
0x84E461: jz      short loc_84E46D
0x84E463: mov     edx, [edi]
0x84E465: mov     eax, [edx]
0x84E467: push    1
0x84E469: mov     ecx, edi
0x84E46B: call    eax
0x84E46D: test    ebp, ebp
0x84E46F: mov     edi, [esp+24h+arg_8]
0x84E473: mov     [edi+4], ebp
0x84E476: jz      short loc_84E488
0x84E478: add     ebp, 4
0x84E47B: push    ebp; lpAddend
0x84E47C: call    dword ptr ds:0A28078h
0x84E482: jmp     short loc_84E488
0x84E484: mov     edi, [esp+24h+arg_8]
0x84E488: test    edi, edi
0x84E48A: jz      short loc_84E4A6
0x84E48C: cmp     byte ptr ds:0B42CDDh, 0
0x84E493: jz      short loc_84E4A6
0x84E495: mov     edx, [esi]
0x84E497: mov     eax, [edx+78h]
0x84E49A: mov     ecx, esi
0x84E49C: call    eax
0x84E49E: push    eax
0x84E49F: mov     ecx, edi
0x84E4A1: call    sub_7715E0
0x84E4A6: mov     ecx, [ebx+24h]
0x84E4A9: mov     edi, [ecx+4]
0x84E4AC: mov     edx, [esi]
0x84E4AE: mov     eax, [edx+8Ch]
0x84E4B4: push    0
0x84E4B6: mov     ecx, esi
0x84E4B8: mov     [esp+28h+arg_8], edi
0x84E4BC: call    eax
0x84E4BE: test    eax, eax
0x84E4C0: jz      short loc_84E4D4
0x84E4C2: mov     edx, [esi]
0x84E4C4: mov     eax, [edx+8Ch]
0x84E4CA: push    0
0x84E4CC: mov     ecx, esi
0x84E4CE: call    eax
0x84E4D0: mov     ebp, eax
0x84E4D2: jmp     short loc_84E4E9
0x84E4D4: test    dword ptr [esi+1Ch], 80h
0x84E4DB: mov     ebp, ds:0B430F0h
0x84E4E1: ja      short loc_84E4E9
0x84E4E3: mov     ebp, ds:0B430DCh
0x84E4E9: mov     edi, [edi+4]
0x84E4EC: cmp     edi, ebp
0x84E4EE: jz      short loc_84E527
0x84E4F0: test    edi, edi
0x84E4F2: jz      short loc_84E510
0x84E4F4: lea     ecx, [edi+4]
0x84E4F7: push    ecx; lpAddend
0x84E4F8: call    dword ptr ds:0A2807Ch
0x84E4FE: test    eax, eax
0x84E500: jnz     short loc_84E510
0x84E502: test    edi, edi
0x84E504: jz      short loc_84E510
0x84E506: mov     edx, [edi]
0x84E508: mov     eax, [edx]
0x84E50A: push    1
0x84E50C: mov     ecx, edi
0x84E50E: call    eax
0x84E510: test    ebp, ebp
0x84E512: mov     edi, [esp+24h+arg_8]
0x84E516: mov     [edi+4], ebp
0x84E519: jz      short loc_84E52B
0x84E51B: add     ebp, 4
0x84E51E: push    ebp; lpAddend
0x84E51F: call    dword ptr ds:0A28078h
0x84E525: jmp     short loc_84E52B
0x84E527: mov     edi, [esp+24h+arg_8]
0x84E52B: test    edi, edi
0x84E52D: jz      short loc_84E549
0x84E52F: cmp     byte ptr ds:0B42CDDh, 0
0x84E536: jz      short loc_84E549
0x84E538: mov     edx, [esi]
0x84E53A: mov     eax, [edx+78h]
0x84E53D: mov     ecx, esi
0x84E53F: call    eax
0x84E541: push    eax
0x84E542: mov     ecx, edi
0x84E544: call    sub_7715E0
0x84E549: mov     ecx, [ebx+24h]
0x84E54C: mov     edi, [ecx+8]
0x84E54F: mov     edx, [esi]
0x84E551: mov     eax, [edx+90h]
0x84E557: push    0
0x84E559: mov     ecx, esi
0x84E55B: mov     [esp+28h+arg_8], edi
0x84E55F: call    eax
0x84E561: mov     edi, [edi+4]
0x84E564: mov     ebp, eax
0x84E566: cmp     edi, ebp
0x84E568: jz      short loc_84E5A1
0x84E56A: test    edi, edi
0x84E56C: jz      short loc_84E58A
0x84E56E: lea     ecx, [edi+4]
0x84E571: push    ecx; lpAddend
0x84E572: call    dword ptr ds:0A2807Ch
0x84E578: test    eax, eax
0x84E57A: jnz     short loc_84E58A
0x84E57C: test    edi, edi
0x84E57E: jz      short loc_84E58A
0x84E580: mov     edx, [edi]
0x84E582: mov     eax, [edx]
0x84E584: push    1
0x84E586: mov     ecx, edi
0x84E588: call    eax
0x84E58A: test    ebp, ebp
0x84E58C: mov     edi, [esp+24h+arg_8]
0x84E590: mov     [edi+4], ebp
0x84E593: jz      short loc_84E5A5
0x84E595: add     ebp, 4
0x84E598: push    ebp; lpAddend
0x84E599: call    dword ptr ds:0A28078h
0x84E59F: jmp     short loc_84E5A5
0x84E5A1: mov     edi, [esp+24h+arg_8]
0x84E5A5: test    edi, edi
0x84E5A7: jz      short loc_84E5C3
0x84E5A9: cmp     byte ptr ds:0B42CDDh, 0
0x84E5B0: jz      short loc_84E5C3
0x84E5B2: mov     edx, [esi]
0x84E5B4: mov     eax, [edx+78h]
0x84E5B7: mov     ecx, esi
0x84E5B9: call    eax
0x84E5BB: push    eax
0x84E5BC: mov     ecx, edi
0x84E5BE: call    sub_7715E0
0x84E5C3: mov     edi, 1
0x84E5C8: add     [ebx+60h], edi
0x84E5CB: mov     [esp+24h+arg_8], ebx
0x84E5CF: mov     esi, [esp+24h+var_10]
0x84E5D3: mov     edx, [esi+38h]
0x84E5D6: lea     ecx, [esp+24h+arg_8]
0x84E5DA: push    ecx
0x84E5DB: push    edx
0x84E5DC: lea     ecx, [esi+40h]
0x84E5DF: mov     [esp+2Ch+var_4], 0
0x84E5E7: call    sub_76CE40
0x84E5EC: or      eax, 0FFFFFFFFh
0x84E5EF: add     [ebx+60h], eax
0x84E5F2: mov     [esp+24h+var_4], eax
0x84E5F6: jnz     short loc_84E5FF
0x84E5F8: mov     ecx, ebx
0x84E5FA: call    sub_7604D0
0x84E5FF: add     [esi+38h], edi
0x84E602: mov     ecx, dword ptr [esp+24h+var_C]
0x84E606: mov     large fs:0, ecx
0x84E60D: pop     ecx
0x84E60E: pop     edi
0x84E60F: pop     esi
0x84E610: pop     ebp
0x84E611: pop     ebx
0x84E612: add     esp, 10h
0x84E615: retn    10h
