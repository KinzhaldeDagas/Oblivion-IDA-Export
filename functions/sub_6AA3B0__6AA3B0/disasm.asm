0x6AA3B0: push    0FFFFFFFFh
0x6AA3B2: push    offset SEH_7B2180
0x6AA3B7: mov     eax, large fs:0
0x6AA3BD: push    eax
0x6AA3BE: push    ecx
0x6AA3BF: push    ebx
0x6AA3C0: push    ebp
0x6AA3C1: push    esi
0x6AA3C2: push    edi
0x6AA3C3: mov     eax, ds:0B30AACh
0x6AA3C8: xor     eax, esp
0x6AA3CA: push    eax
0x6AA3CB: lea     eax, [esp+24h+var_C]
0x6AA3CF: mov     large fs:0, eax
0x6AA3D5: mov     esi, ecx
0x6AA3D7: mov     eax, [esi]
0x6AA3D9: mov     ebx, [esp+24h+arg_0]
0x6AA3DD: mov     edx, [eax+4]
0x6AA3E0: push    ebx
0x6AA3E1: mov     [esp+28h+var_4], 0
0x6AA3E9: call    edx
0x6AA3EB: mov     ebp, eax
0x6AA3ED: mov     eax, [esi+8]
0x6AA3F0: mov     edi, [eax+ebp*4]
0x6AA3F3: test    edi, edi
0x6AA3F5: jz      short loc_6AA413
0x6AA3F7: mov     eax, [edi+4]
0x6AA3FA: mov     edx, [esi]
0x6AA3FC: mov     edx, [edx+8]
0x6AA3FF: push    eax
0x6AA400: push    ebx
0x6AA401: mov     ecx, esi
0x6AA403: call    edx
0x6AA405: test    al, al
0x6AA407: jnz     loc_6AA494
0x6AA40D: mov     edi, [edi]
0x6AA40F: test    edi, edi
0x6AA411: jnz     short loc_6AA3F7
0x6AA413: mov     edx, [esi]
0x6AA415: mov     eax, [edx+14h]
0x6AA418: mov     ecx, esi
0x6AA41A: call    eax
0x6AA41C: mov     ebx, [esp+20h+arg_8]
0x6AA420: test    ebx, ebx
0x6AA422: push    ecx
0x6AA423: mov     edi, eax
0x6AA425: mov     eax, esp
0x6AA427: mov     [esp+24h+var_C], esp
0x6AA42B: mov     [eax], ebx
0x6AA42D: jz      short loc_6AA439
0x6AA42F: lea     ecx, [ebx+4]
0x6AA432: push    ecx; lpAddend
0x6AA433: call    dword ptr ds:0A28078h
0x6AA439: mov     eax, [esp+24h+arg_4]
0x6AA43D: mov     edx, [esi]
0x6AA43F: mov     edx, [edx+0Ch]
0x6AA442: push    eax
0x6AA443: push    edi
0x6AA444: mov     ecx, esi
0x6AA446: call    edx
0x6AA448: mov     eax, [esi+8]
0x6AA44B: mov     ecx, [eax+ebp*4]
0x6AA44E: mov     [edi], ecx
0x6AA450: mov     edx, [esi+8]
0x6AA453: mov     [edx+ebp*4], edi
0x6AA456: add     dword ptr [esi+0Ch], 1
0x6AA45A: test    ebx, ebx
0x6AA45C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6AA464: jz      short loc_6AA47E
0x6AA466: lea     eax, [ebx+4]
0x6AA469: push    eax; lpAddend
0x6AA46A: call    dword ptr ds:0A2807Ch
0x6AA470: test    eax, eax
0x6AA472: jnz     short loc_6AA47E
0x6AA474: mov     edx, [ebx]
0x6AA476: mov     eax, [edx]
0x6AA478: push    1
0x6AA47A: mov     ecx, ebx
0x6AA47C: call    eax
0x6AA47E: mov     ecx, [esp+24h+var_C]
0x6AA482: mov     large fs:0, ecx
0x6AA489: pop     ecx
0x6AA48A: pop     edi
0x6AA48B: pop     esi
0x6AA48C: pop     ebp
0x6AA48D: pop     ebx
0x6AA48E: add     esp, 10h
0x6AA491: retn    8
0x6AA494: mov     eax, [esi]
0x6AA496: mov     edx, [eax+10h]
0x6AA499: push    edi
0x6AA49A: mov     ecx, esi
0x6AA49C: call    edx
0x6AA49E: mov     ebx, [esp+20h+arg_8]
0x6AA4A2: test    ebx, ebx
0x6AA4A4: push    ecx
0x6AA4A5: mov     eax, esp
0x6AA4A7: mov     [esp+24h+var_C], esp
0x6AA4AB: mov     [eax], ebx
0x6AA4AD: jz      short loc_6AA4B9
0x6AA4AF: lea     eax, [ebx+4]
0x6AA4B2: push    eax; lpAddend
0x6AA4B3: call    dword ptr ds:0A28078h
0x6AA4B9: mov     eax, [esp+24h+arg_4]
0x6AA4BD: mov     edx, [esi]
0x6AA4BF: mov     edx, [edx+0Ch]
0x6AA4C2: push    eax
0x6AA4C3: push    edi
0x6AA4C4: mov     ecx, esi
0x6AA4C6: call    edx
0x6AA4C8: jmp     short loc_6AA45A
