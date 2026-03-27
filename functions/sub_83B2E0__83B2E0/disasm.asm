0x83B2E0: push    0FFFFFFFFh
0x83B2E2: push    offset SEH_882120
0x83B2E7: mov     eax, large fs:0
0x83B2ED: push    eax
0x83B2EE: push    ebx
0x83B2EF: push    ebp
0x83B2F0: push    esi
0x83B2F1: push    edi
0x83B2F2: mov     eax, ds:0B30AACh
0x83B2F7: xor     eax, esp
0x83B2F9: push    eax
0x83B2FA: lea     eax, [esp+20h+var_C]
0x83B2FE: mov     large fs:0, eax
0x83B304: mov     edi, ecx
0x83B306: mov     eax, [esp+20h+arg_8]
0x83B30A: mov     esi, [eax+0Ch]
0x83B30D: mov     ebx, ds:0B45790h
0x83B313: push    esi
0x83B314: call    sub_848E50
0x83B319: mov     edx, [edi]
0x83B31B: mov     eax, [esp+20h+arg_0]
0x83B31F: mov     edx, [edx+0BCh]
0x83B325: push    0
0x83B327: push    esi
0x83B328: push    eax
0x83B329: mov     ecx, edi
0x83B32B: call    edx
0x83B32D: mov     esi, [esp+20h+arg_C]
0x83B331: mov     eax, [esi+0A8h]
0x83B337: mov     ds:0B46628h, eax
0x83B33C: mov     ecx, [esi+0ACh]
0x83B342: mov     ds:0B4662Ch, ecx
0x83B348: mov     edx, [esi+0B0h]
0x83B34E: mov     ds:0B46630h, edx
0x83B354: mov     eax, [esi+0B4h]
0x83B35A: mov     ds:0B46634h, eax
0x83B35F: mov     ecx, [ebx+24h]
0x83B362: mov     ebp, [ecx]
0x83B364: mov     edx, [esi]
0x83B366: mov     eax, [edx+88h]
0x83B36C: push    0
0x83B36E: mov     ecx, esi
0x83B370: mov     [esp+24h+arg_8], ebp
0x83B374: call    eax
0x83B376: mov     ebp, [ebp+4]
0x83B379: cmp     ebp, eax
0x83B37B: mov     [esp+20h+arg_0], eax
0x83B37F: jz      short loc_83B3BB
0x83B381: test    ebp, ebp
0x83B383: jz      short loc_83B3A6
0x83B385: lea     ecx, [ebp+4]
0x83B388: push    ecx; lpAddend
0x83B389: call    dword ptr ds:0A2807Ch
0x83B38F: test    eax, eax
0x83B391: jnz     short loc_83B3A2
0x83B393: test    ebp, ebp
0x83B395: jz      short loc_83B3A2
0x83B397: mov     edx, [ebp+0]
0x83B39A: mov     eax, [edx]
0x83B39C: push    1
0x83B39E: mov     ecx, ebp
0x83B3A0: call    eax
0x83B3A2: mov     eax, [esp+20h+arg_0]
0x83B3A6: test    eax, eax
0x83B3A8: mov     ecx, [esp+20h+arg_8]
0x83B3AC: mov     [ecx+4], eax
0x83B3AF: jz      short loc_83B3BB
0x83B3B1: add     eax, 4
0x83B3B4: push    eax; lpAddend
0x83B3B5: call    dword ptr ds:0A28078h
0x83B3BB: mov     edx, [esp+20h+arg_8]
0x83B3BF: push    esi
0x83B3C0: push    edx
0x83B3C1: mov     ecx, edi
0x83B3C3: call    sub_848FA0
0x83B3C8: mov     eax, [ebx+24h]
0x83B3CB: mov     ebp, [eax+4]
0x83B3CE: push    0
0x83B3D0: push    esi
0x83B3D1: mov     ecx, edi
0x83B3D3: mov     [esp+28h+arg_8], ebp
0x83B3D7: call    sub_848FD0
0x83B3DC: mov     ebp, [ebp+4]
0x83B3DF: cmp     ebp, eax
0x83B3E1: mov     [esp+20h+arg_0], eax
0x83B3E5: jz      short loc_83B421
0x83B3E7: test    ebp, ebp
0x83B3E9: jz      short loc_83B40C
0x83B3EB: lea     ecx, [ebp+4]
0x83B3EE: push    ecx; lpAddend
0x83B3EF: call    dword ptr ds:0A2807Ch
0x83B3F5: test    eax, eax
0x83B3F7: jnz     short loc_83B408
0x83B3F9: test    ebp, ebp
0x83B3FB: jz      short loc_83B408
0x83B3FD: mov     edx, [ebp+0]
0x83B400: mov     eax, [edx]
0x83B402: push    1
0x83B404: mov     ecx, ebp
0x83B406: call    eax
0x83B408: mov     eax, [esp+20h+arg_0]
0x83B40C: test    eax, eax
0x83B40E: mov     ecx, [esp+20h+arg_8]
0x83B412: mov     [ecx+4], eax
0x83B415: jz      short loc_83B421
0x83B417: add     eax, 4
0x83B41A: push    eax; lpAddend
0x83B41B: call    dword ptr ds:0A28078h
0x83B421: mov     edx, [esp+20h+arg_8]
0x83B425: push    esi
0x83B426: push    edx
0x83B427: mov     ecx, edi
0x83B429: call    sub_848FA0
0x83B42E: mov     eax, [ebx+24h]
0x83B431: mov     ebp, [eax+10h]
0x83B434: mov     edx, [esi]
0x83B436: mov     eax, [edx+88h]
0x83B43C: push    1
0x83B43E: mov     ecx, esi
0x83B440: mov     [esp+24h+arg_8], ebp
0x83B444: call    eax
0x83B446: mov     ebp, [ebp+4]
0x83B449: cmp     ebp, eax
0x83B44B: mov     [esp+20h+arg_0], eax
0x83B44F: jz      short loc_83B48B
0x83B451: test    ebp, ebp
0x83B453: jz      short loc_83B476
0x83B455: lea     ecx, [ebp+4]
0x83B458: push    ecx; lpAddend
0x83B459: call    dword ptr ds:0A2807Ch
0x83B45F: test    eax, eax
0x83B461: jnz     short loc_83B472
0x83B463: test    ebp, ebp
0x83B465: jz      short loc_83B472
0x83B467: mov     edx, [ebp+0]
0x83B46A: mov     eax, [edx]
0x83B46C: push    1
0x83B46E: mov     ecx, ebp
0x83B470: call    eax
0x83B472: mov     eax, [esp+20h+arg_0]
0x83B476: test    eax, eax
0x83B478: mov     ecx, [esp+20h+arg_8]
0x83B47C: mov     [ecx+4], eax
0x83B47F: jz      short loc_83B48B
0x83B481: add     eax, 4
0x83B484: push    eax; lpAddend
0x83B485: call    dword ptr ds:0A28078h
0x83B48B: mov     edx, [esp+20h+arg_8]
0x83B48F: push    esi
0x83B490: push    edx
0x83B491: mov     ecx, edi
0x83B493: call    sub_848FA0
0x83B498: mov     esi, 1
0x83B49D: add     [ebx+60h], esi
0x83B4A0: mov     [esp+20h+arg_8], ebx
0x83B4A4: mov     ecx, [edi+38h]
0x83B4A7: lea     eax, [esp+20h+arg_8]
0x83B4AB: push    eax
0x83B4AC: push    ecx
0x83B4AD: lea     ecx, [edi+40h]
0x83B4B0: mov     [esp+28h+var_4], 0
0x83B4B8: call    sub_76CE40
0x83B4BD: or      eax, 0FFFFFFFFh
0x83B4C0: add     [ebx+60h], eax
0x83B4C3: mov     [esp+20h+var_4], eax
0x83B4C7: jnz     short loc_83B4D0
0x83B4C9: mov     ecx, ebx
0x83B4CB: call    sub_7604D0
0x83B4D0: add     [edi+38h], esi
0x83B4D3: mov     ecx, [esp+20h+var_C]
0x83B4D7: mov     large fs:0, ecx
0x83B4DE: pop     ecx
0x83B4DF: pop     edi
0x83B4E0: pop     esi
0x83B4E1: pop     ebp
0x83B4E2: pop     ebx
0x83B4E3: add     esp, 0Ch
0x83B4E6: retn    10h
