0x76D530: sub     esp, 20h
0x76D533: push    esi
0x76D534: push    edi
0x76D535: mov     edi, ecx
0x76D537: cmp     dword ptr [edi+0Ch], 0
0x76D53B: lea     esi, [edi+0Ch]
0x76D53E: jz      short loc_76D547
0x76D540: mov     eax, [edi]
0x76D542: mov     edx, [eax+2Ch]
0x76D545: call    edx
0x76D547: mov     eax, [esp+28h+arg_0]
0x76D54B: mov     ecx, [eax]
0x76D54D: mov     edx, [ecx+0A0h]
0x76D553: push    esi
0x76D554: push    eax
0x76D555: call    edx
0x76D557: test    eax, eax
0x76D559: jl      short loc_76D57E
0x76D55B: mov     eax, [esi]
0x76D55D: mov     ecx, [eax]
0x76D55F: lea     edx, [esp+28h+a1]
0x76D563: push    edx
0x76D564: push    eax
0x76D565: mov     eax, [ecx+30h]
0x76D568: call    eax
0x76D56A: test    eax, eax
0x76D56C: jge     short loc_76D588
0x76D56E: mov     eax, [esi]
0x76D570: mov     ecx, [eax]
0x76D572: mov     edx, [ecx+8]
0x76D575: push    eax
0x76D576: call    edx
0x76D578: mov     dword ptr [esi], 0
0x76D57E: pop     edi
0x76D57F: xor     al, al
0x76D581: pop     esi
0x76D582: add     esp, 20h
0x76D585: retn    4
0x76D588: mov     eax, [esp+28h+a1]
0x76D58C: push    eax; a1
0x76D58D: call    CreateSurfaceData
0x76D592: mov     ecx, [esp+2Ch+var_4]
0x76D596: mov     edx, [esp+2Ch+var_8]
0x76D59A: add     esp, 4
0x76D59D: push    ecx
0x76D59E: mov     ecx, [edi+8]
0x76D5A1: push    edx
0x76D5A2: mov     [edi+10h], eax
0x76D5A5: call    sub_731E40
0x76D5AA: pop     edi
0x76D5AB: mov     al, 1
0x76D5AD: pop     esi
0x76D5AE: add     esp, 20h
0x76D5B1: retn    4
