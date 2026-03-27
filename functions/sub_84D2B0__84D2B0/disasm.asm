0x84D2B0: push    0FFFFFFFFh
0x84D2B2: push    offset SEH_84D2B0
0x84D2B7: mov     eax, large fs:0
0x84D2BD: push    eax
0x84D2BE: sub     esp, 8
0x84D2C1: push    ebx
0x84D2C2: push    ebp
0x84D2C3: push    esi
0x84D2C4: push    edi
0x84D2C5: mov     eax, ds:0B30AACh
0x84D2CA: xor     eax, esp
0x84D2CC: push    eax
0x84D2CD: lea     eax, [esp+28h+var_C]
0x84D2D1: mov     large fs:0, eax
0x84D2D7: mov     esi, ecx
0x84D2D9: mov     [esp+28h+var_10], esi
0x84D2DD: mov     edi, [esp+28h+arg_8]
0x84D2E1: mov     eax, [edi+10h]
0x84D2E4: mov     ebx, ds:0B456B0h
0x84D2EA: push    eax
0x84D2EB: mov     [esp+2Ch+var_14], ebx
0x84D2EF: call    sub_848C40
0x84D2F4: mov     edi, [edi+0Ch]
0x84D2F7: push    edi
0x84D2F8: mov     ecx, esi
0x84D2FA: call    sub_848E50
0x84D2FF: mov     eax, [ebx+24h]
0x84D302: mov     esi, [esp+28h+arg_C]
0x84D306: mov     edx, [esi]
0x84D308: mov     ebp, [eax]
0x84D30A: mov     eax, [edx+88h]
0x84D310: push    0
0x84D312: mov     ecx, esi
0x84D314: call    eax
0x84D316: mov     edi, [ebp+4]
0x84D319: mov     ebx, eax
0x84D31B: cmp     edi, ebx
0x84D31D: jz      short loc_84D350
0x84D31F: test    edi, edi
0x84D321: jz      short loc_84D33F
0x84D323: lea     ecx, [edi+4]
0x84D326: push    ecx; lpAddend
0x84D327: call    dword ptr ds:0A2807Ch
0x84D32D: test    eax, eax
0x84D32F: jnz     short loc_84D33F
0x84D331: test    edi, edi
0x84D333: jz      short loc_84D33F
0x84D335: mov     edx, [edi]
0x84D337: mov     eax, [edx]
0x84D339: push    1
0x84D33B: mov     ecx, edi
0x84D33D: call    eax
0x84D33F: test    ebx, ebx
0x84D341: mov     [ebp+4], ebx
0x84D344: jz      short loc_84D350
0x84D346: add     ebx, 4
0x84D349: push    ebx; lpAddend
0x84D34A: call    dword ptr ds:0A28078h
0x84D350: test    ebp, ebp
0x84D352: jz      short loc_84D36E
0x84D354: cmp     byte ptr ds:0B42CDDh, 0
0x84D35B: jz      short loc_84D36E
0x84D35D: mov     edx, [esi]
0x84D35F: mov     eax, [edx+78h]
0x84D362: mov     ecx, esi
0x84D364: call    eax
0x84D366: push    eax
0x84D367: mov     ecx, ebp
0x84D369: call    sub_7715E0
0x84D36E: mov     ecx, [esp+28h+var_14]
0x84D372: mov     edx, [ecx+24h]
0x84D375: mov     eax, [esi]
0x84D377: mov     ebp, [edx+4]
0x84D37A: mov     edx, [eax+8Ch]
0x84D380: push    0
0x84D382: mov     ecx, esi
0x84D384: call    edx
0x84D386: test    eax, eax
0x84D388: jz      short loc_84D39C
0x84D38A: mov     eax, [esi]
0x84D38C: mov     edx, [eax+8Ch]
0x84D392: push    0
0x84D394: mov     ecx, esi
0x84D396: call    edx
0x84D398: mov     ebx, eax
0x84D39A: jmp     short loc_84D3B1
0x84D39C: test    dword ptr [esi+1Ch], 80h
0x84D3A3: mov     ebx, ds:0B430F0h
0x84D3A9: ja      short loc_84D3B1
0x84D3AB: mov     ebx, ds:0B430DCh
0x84D3B1: mov     edi, [ebp+4]
0x84D3B4: cmp     edi, ebx
0x84D3B6: jz      short loc_84D3E9
0x84D3B8: test    edi, edi
0x84D3BA: jz      short loc_84D3D8
0x84D3BC: lea     eax, [edi+4]
0x84D3BF: push    eax; lpAddend
0x84D3C0: call    dword ptr ds:0A2807Ch
0x84D3C6: test    eax, eax
0x84D3C8: jnz     short loc_84D3D8
0x84D3CA: test    edi, edi
0x84D3CC: jz      short loc_84D3D8
0x84D3CE: mov     edx, [edi]
0x84D3D0: mov     eax, [edx]
0x84D3D2: push    1
0x84D3D4: mov     ecx, edi
0x84D3D6: call    eax
0x84D3D8: test    ebx, ebx
0x84D3DA: mov     [ebp+4], ebx
0x84D3DD: jz      short loc_84D3E9
0x84D3DF: add     ebx, 4
0x84D3E2: push    ebx; lpAddend
0x84D3E3: call    dword ptr ds:0A28078h
0x84D3E9: test    ebp, ebp
0x84D3EB: jz      short loc_84D407
0x84D3ED: cmp     byte ptr ds:0B42CDDh, 0
0x84D3F4: jz      short loc_84D407
0x84D3F6: mov     edx, [esi]
0x84D3F8: mov     eax, [edx+78h]
0x84D3FB: mov     ecx, esi
0x84D3FD: call    eax
0x84D3FF: push    eax
0x84D400: mov     ecx, ebp
0x84D402: call    sub_7715E0
0x84D407: mov     ecx, [esp+28h+var_14]
0x84D40B: mov     edx, [ecx+24h]
0x84D40E: mov     eax, [esi]
0x84D410: mov     ebx, [edx+8]
0x84D413: mov     edx, [eax+88h]
0x84D419: push    1
0x84D41B: mov     ecx, esi
0x84D41D: call    edx
0x84D41F: mov     edi, [ebx+4]
0x84D422: mov     ebp, eax
0x84D424: cmp     edi, ebp
0x84D426: jz      short loc_84D459
0x84D428: test    edi, edi
0x84D42A: jz      short loc_84D448
0x84D42C: lea     eax, [edi+4]
0x84D42F: push    eax; lpAddend
0x84D430: call    dword ptr ds:0A2807Ch
0x84D436: test    eax, eax
0x84D438: jnz     short loc_84D448
0x84D43A: test    edi, edi
0x84D43C: jz      short loc_84D448
0x84D43E: mov     edx, [edi]
0x84D440: mov     eax, [edx]
0x84D442: push    1
0x84D444: mov     ecx, edi
0x84D446: call    eax
0x84D448: test    ebp, ebp
0x84D44A: mov     [ebx+4], ebp
0x84D44D: jz      short loc_84D459
0x84D44F: add     ebp, 4
0x84D452: push    ebp; lpAddend
0x84D453: call    dword ptr ds:0A28078h
0x84D459: test    ebx, ebx
0x84D45B: jz      short loc_84D477
0x84D45D: cmp     byte ptr ds:0B42CDDh, 0
0x84D464: jz      short loc_84D477
0x84D466: mov     edx, [esi]
0x84D468: mov     eax, [edx+78h]
0x84D46B: mov     ecx, esi
0x84D46D: call    eax
0x84D46F: push    eax
0x84D470: mov     ecx, ebx
0x84D472: call    sub_7715E0
0x84D477: mov     ebx, [esp+28h+var_14]
0x84D47B: mov     ecx, [ebx+24h]
0x84D47E: mov     edi, [ecx+0Ch]
0x84D481: mov     edx, [esi]
0x84D483: mov     eax, [edx+8Ch]
0x84D489: push    1
0x84D48B: mov     ecx, esi
0x84D48D: mov     [esp+2Ch+arg_8], edi
0x84D491: call    eax
0x84D493: test    eax, eax
0x84D495: jz      short loc_84D4A9
0x84D497: mov     edx, [esi]
0x84D499: mov     eax, [edx+8Ch]
0x84D49F: push    1
0x84D4A1: mov     ecx, esi
0x84D4A3: call    eax
0x84D4A5: mov     ebp, eax
0x84D4A7: jmp     short loc_84D4BE
0x84D4A9: test    dword ptr [esi+1Ch], 80h
0x84D4B0: mov     ebp, ds:0B430F0h
0x84D4B6: ja      short loc_84D4BE
0x84D4B8: mov     ebp, ds:0B430DCh
0x84D4BE: mov     edi, [edi+4]
0x84D4C1: cmp     edi, ebp
0x84D4C3: jz      short loc_84D4FC
0x84D4C5: test    edi, edi
0x84D4C7: jz      short loc_84D4E5
0x84D4C9: lea     ecx, [edi+4]
0x84D4CC: push    ecx; lpAddend
0x84D4CD: call    dword ptr ds:0A2807Ch
0x84D4D3: test    eax, eax
0x84D4D5: jnz     short loc_84D4E5
0x84D4D7: test    edi, edi
0x84D4D9: jz      short loc_84D4E5
0x84D4DB: mov     edx, [edi]
0x84D4DD: mov     eax, [edx]
0x84D4DF: push    1
0x84D4E1: mov     ecx, edi
0x84D4E3: call    eax
0x84D4E5: test    ebp, ebp
0x84D4E7: mov     edi, [esp+28h+arg_8]
0x84D4EB: mov     [edi+4], ebp
0x84D4EE: jz      short loc_84D500
0x84D4F0: add     ebp, 4
0x84D4F3: push    ebp; lpAddend
0x84D4F4: call    dword ptr ds:0A28078h
0x84D4FA: jmp     short loc_84D500
0x84D4FC: mov     edi, [esp+28h+arg_8]
0x84D500: test    edi, edi
0x84D502: jz      short loc_84D51E
0x84D504: cmp     byte ptr ds:0B42CDDh, 0
0x84D50B: jz      short loc_84D51E
0x84D50D: mov     edx, [esi]
0x84D50F: mov     eax, [edx+78h]
0x84D512: mov     ecx, esi
0x84D514: call    eax
0x84D516: push    eax
0x84D517: mov     ecx, edi
0x84D519: call    sub_7715E0
0x84D51E: mov     edi, 1
0x84D523: add     [ebx+60h], edi
0x84D526: mov     [esp+28h+arg_8], ebx
0x84D52A: mov     esi, [esp+28h+var_10]
0x84D52E: mov     edx, [esi+38h]
0x84D531: lea     ecx, [esp+28h+arg_8]
0x84D535: push    ecx
0x84D536: push    edx
0x84D537: lea     ecx, [esi+40h]
0x84D53A: mov     [esp+30h+var_4], 0
0x84D542: call    sub_76CE40
0x84D547: or      eax, 0FFFFFFFFh
0x84D54A: add     [ebx+60h], eax
0x84D54D: mov     [esp+28h+var_4], eax
0x84D551: jnz     short loc_84D55A
0x84D553: mov     ecx, ebx
0x84D555: call    sub_7604D0
0x84D55A: add     [esi+38h], edi
0x84D55D: mov     ecx, [esp+28h+var_C]
0x84D561: mov     large fs:0, ecx
0x84D568: pop     ecx
0x84D569: pop     edi
0x84D56A: pop     esi
0x84D56B: pop     ebp
0x84D56C: pop     ebx
0x84D56D: add     esp, 14h
0x84D570: retn    10h
