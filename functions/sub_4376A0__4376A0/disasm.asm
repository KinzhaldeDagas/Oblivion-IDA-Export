0x4376A0: push    0FFFFFFFFh
0x4376A2: push    offset SEH_4376A0
0x4376A7: mov     eax, large fs:0
0x4376AD: push    eax
0x4376AE: push    ecx
0x4376AF: push    ebx
0x4376B0: push    ebp
0x4376B1: push    esi
0x4376B2: push    edi
0x4376B3: mov     eax, ___security_cookie
0x4376B8: xor     eax, esp
0x4376BA: push    eax
0x4376BB: lea     eax, [esp+24h+var_C]
0x4376BF: mov     large fs:0, eax
0x4376C5: mov     esi, ecx
0x4376C7: mov     [esp+24h+var_10], esi
0x4376CB: mov     ebp, [esp+24h+arg_4]
0x4376CF: xor     ebx, ebx
0x4376D1: cmp     ebp, ebx
0x4376D3: jz      short loc_4376DA
0x4376D5: lea     edi, [ebp+24h]
0x4376D8: jmp     short loc_4376DC
0x4376DA: xor     edi, edi
0x4376DC: mov     eax, dword ptr [esp+24h+a2]
0x4376E0: push    eax; a2
0x4376E1: call    sub_436500
0x4376E6: mov     [esi+18h], ebx
0x4376E9: mov     [esi+1Ch], ebx
0x4376EC: mov     [esi+20h], ebx
0x4376EF: mov     [esi+24h], ebx
0x4376F2: mov     dword ptr [esi], offset ??_7QueuedModel@@6B@; const QueuedModel::`vftable'
0x4376F8: mov     [esp+24h+var_4], ebx
0x4376FC: mov     [esi+28h], ebx
0x4376FF: mov     ecx, [esp+24h+arg_C]
0x437703: mov     [esi+30h], ecx
0x437706: mov     [esi+2Ch], edi
0x437709: mov     [esi+34h], bl
0x43770C: mov     edx, [edi]
0x43770E: mov     eax, [edx+14h]
0x437711: mov     ecx, edi
0x437713: mov     byte ptr [esp+24h+var_4], 1
0x437718: call    eax
0x43771A: push    eax
0x43771B: mov     ecx, esi
0x43771D: call    sub_434600
0x437722: push    1
0x437724: push    ebx
0x437725: mov     ecx, esi
0x437727: call    sub_434CB0
0x43772C: mov     cl, [esi+34h]
0x43772F: mov     edx, [esp+24h+arg_0]
0x437733: and     cl, 0F9h
0x437736: or      cl, 1
0x437739: mov     [esi+34h], cl
0x43773C: mov     dword ptr [esi], offset ??_7QueuedTreeModel@@6B@; const QueuedTreeModel::`vftable'
0x437742: mov     [esi+38h], edx
0x437745: mov     [esi+3Ch], ebp
0x437748: mov     eax, esi
0x43774A: mov     ecx, [esp+24h+var_C]
0x43774E: mov     large fs:0, ecx
0x437755: pop     ecx
0x437756: pop     edi
0x437757: pop     esi
0x437758: pop     ebp
0x437759: pop     ebx
0x43775A: add     esp, 10h
0x43775D: retn    10h
