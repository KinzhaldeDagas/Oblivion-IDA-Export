0x84F340: push    0FFFFFFFFh
0x84F342: push    offset SEH_850270
0x84F347: mov     eax, large fs:0
0x84F34D: push    eax
0x84F34E: sub     esp, 8
0x84F351: push    ebx
0x84F352: push    ebp
0x84F353: push    esi
0x84F354: push    edi
0x84F355: mov     eax, ds:0B30AACh
0x84F35A: xor     eax, esp
0x84F35C: push    eax
0x84F35D: lea     eax, [esp+28h+var_C]
0x84F361: mov     large fs:0, eax
0x84F367: mov     [esp+28h+var_10], ecx
0x84F36B: mov     edi, ds:0B459B8h
0x84F371: mov     eax, [edi+24h]
0x84F374: mov     esi, [esp+28h+arg_C]
0x84F378: mov     ebx, [eax]
0x84F37A: mov     edx, [esi]
0x84F37C: mov     eax, [edx+88h]
0x84F382: push    0
0x84F384: mov     ecx, esi
0x84F386: mov     [esp+2Ch+var_14], ebx
0x84F38A: call    eax
0x84F38C: mov     ebx, [ebx+4]
0x84F38F: mov     ebp, eax
0x84F391: cmp     ebx, ebp
0x84F393: jz      short loc_84F3CC
0x84F395: test    ebx, ebx
0x84F397: jz      short loc_84F3B5
0x84F399: lea     ecx, [ebx+4]
0x84F39C: push    ecx; lpAddend
0x84F39D: call    dword ptr ds:0A2807Ch
0x84F3A3: test    eax, eax
0x84F3A5: jnz     short loc_84F3B5
0x84F3A7: test    ebx, ebx
0x84F3A9: jz      short loc_84F3B5
0x84F3AB: mov     edx, [ebx]
0x84F3AD: mov     eax, [edx]
0x84F3AF: push    1
0x84F3B1: mov     ecx, ebx
0x84F3B3: call    eax
0x84F3B5: test    ebp, ebp
0x84F3B7: mov     ebx, [esp+28h+var_14]
0x84F3BB: mov     [ebx+4], ebp
0x84F3BE: jz      short loc_84F3D0
0x84F3C0: add     ebp, 4
0x84F3C3: push    ebp; lpAddend
0x84F3C4: call    dword ptr ds:0A28078h
0x84F3CA: jmp     short loc_84F3D0
0x84F3CC: mov     ebx, [esp+28h+var_14]
0x84F3D0: test    ebx, ebx
0x84F3D2: jz      short loc_84F3EE
0x84F3D4: cmp     byte ptr ds:0B42CDDh, 0
0x84F3DB: jz      short loc_84F3EE
0x84F3DD: mov     edx, [esi]
0x84F3DF: mov     eax, [edx+78h]
0x84F3E2: mov     ecx, esi
0x84F3E4: call    eax
0x84F3E6: push    eax
0x84F3E7: mov     ecx, ebx
0x84F3E9: call    sub_7715E0
0x84F3EE: mov     ecx, [edi+24h]
0x84F3F1: mov     ebx, [ecx+4]
0x84F3F4: mov     edx, [esi]
0x84F3F6: mov     eax, [edx+88h]
0x84F3FC: push    1
0x84F3FE: mov     ecx, esi
0x84F400: mov     [esp+2Ch+var_14], ebx
0x84F404: call    eax
0x84F406: mov     ebx, [ebx+4]
0x84F409: mov     ebp, eax
0x84F40B: cmp     ebx, ebp
0x84F40D: jz      short loc_84F446
0x84F40F: test    ebx, ebx
0x84F411: jz      short loc_84F42F
0x84F413: lea     ecx, [ebx+4]
0x84F416: push    ecx; lpAddend
0x84F417: call    dword ptr ds:0A2807Ch
0x84F41D: test    eax, eax
0x84F41F: jnz     short loc_84F42F
0x84F421: test    ebx, ebx
0x84F423: jz      short loc_84F42F
0x84F425: mov     edx, [ebx]
0x84F427: mov     eax, [edx]
0x84F429: push    1
0x84F42B: mov     ecx, ebx
0x84F42D: call    eax
0x84F42F: test    ebp, ebp
0x84F431: mov     ebx, [esp+28h+var_14]
0x84F435: mov     [ebx+4], ebp
0x84F438: jz      short loc_84F44A
0x84F43A: add     ebp, 4
0x84F43D: push    ebp; lpAddend
0x84F43E: call    dword ptr ds:0A28078h
0x84F444: jmp     short loc_84F44A
0x84F446: mov     ebx, [esp+28h+var_14]
0x84F44A: test    ebx, ebx
0x84F44C: jz      short loc_84F468
0x84F44E: cmp     byte ptr ds:0B42CDDh, 0
0x84F455: jz      short loc_84F468
0x84F457: mov     edx, [esi]
0x84F459: mov     eax, [edx+78h]
0x84F45C: mov     ecx, esi
0x84F45E: call    eax
0x84F460: push    eax
0x84F461: mov     ecx, ebx
0x84F463: call    sub_7715E0
0x84F468: mov     ecx, [esi+0A8h]
0x84F46E: mov     ds:0B46628h, ecx
0x84F474: mov     edx, [esi+0ACh]
0x84F47A: mov     ds:0B4662Ch, edx
0x84F480: mov     eax, [esi+0B0h]
0x84F486: mov     ds:0B46630h, eax
0x84F48B: mov     ecx, [esi+0B4h]
0x84F491: mov     ebx, 1
0x84F496: mov     ds:0B46634h, ecx
0x84F49C: add     [edi+60h], ebx
0x84F49F: mov     [esp+28h+arg_C], edi
0x84F4A3: mov     esi, [esp+28h+var_10]
0x84F4A7: mov     eax, [esi+38h]
0x84F4AA: lea     edx, [esp+28h+arg_C]
0x84F4AE: push    edx
0x84F4AF: push    eax
0x84F4B0: lea     ecx, [esi+40h]
0x84F4B3: mov     [esp+30h+var_4], 0
0x84F4BB: call    sub_76CE40
0x84F4C0: or      eax, 0FFFFFFFFh
0x84F4C3: add     [edi+60h], eax
0x84F4C6: mov     [esp+28h+var_4], eax
0x84F4CA: jnz     short loc_84F4D3
0x84F4CC: mov     ecx, edi
0x84F4CE: call    sub_7604D0
0x84F4D3: add     [esi+38h], ebx
0x84F4D6: mov     ecx, [esp+28h+var_C]
0x84F4DA: mov     large fs:0, ecx
0x84F4E1: pop     ecx
0x84F4E2: pop     edi
0x84F4E3: pop     esi
0x84F4E4: pop     ebp
0x84F4E5: pop     ebx
0x84F4E6: add     esp, 14h
0x84F4E9: retn    10h
