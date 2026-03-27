0x90B2F0: sub     esp, 14h
0x90B2F3: push    ebx
0x90B2F4: push    esi
0x90B2F5: mov     esi, large fs:2Ch
0x90B2FC: push    edi
0x90B2FD: mov     edi, ds:0BA9DE4h
0x90B303: mov     eax, [esi+edi*4]
0x90B306: mov     edx, [eax+1A4h]
0x90B30C: cmp     edx, [eax+1A8h]
0x90B312: jnb     short loc_90B33A
0x90B314: push    ebp
0x90B315: mov     ebp, eax
0x90B317: mov     ebx, [ebp+1A4h]
0x90B31D: mov     dword ptr [ebx], offset aTthkbvagent; "TthkBvAgent"
0x90B323: rdtsc
0x90B325: mov     [esp+24h+var_14], eax
0x90B329: mov     eax, [esp+24h+var_14]
0x90B32D: mov     [ebx+4], eax
0x90B330: add     ebx, 0Ch
0x90B333: mov     [ebp+1A4h], ebx
0x90B339: pop     ebp
0x90B33A: mov     eax, [esp+20h+arg_0]
0x90B33E: mov     edx, [eax+8]
0x90B341: mov     ecx, [ecx+0Ch]
0x90B344: mov     [esp+20h+var_4], eax
0x90B348: mov     [esp+20h+var_8], edx
0x90B34C: mov     edx, [eax]
0x90B34E: mov     eax, [eax+4]
0x90B351: mov     edx, [edx+0Ch]
0x90B354: mov     [esp+20h+var_C], eax
0x90B358: mov     eax, [esp+20h+arg_C]
0x90B35C: push    eax
0x90B35D: mov     eax, [esp+24h+arg_8]
0x90B361: push    eax
0x90B362: mov     eax, [esp+28h+arg_4]
0x90B366: push    eax
0x90B367: lea     eax, [esp+2Ch+var_10]
0x90B36B: mov     [esp+2Ch+var_10], edx
0x90B36F: mov     edx, [ecx]
0x90B371: push    eax
0x90B372: call    dword ptr [edx+8]
0x90B375: mov     eax, [esi+edi*4]
0x90B378: mov     ecx, [eax+1A4h]
0x90B37E: cmp     ecx, [eax+1A8h]
0x90B384: jnb     short loc_90B3AA
0x90B386: mov     esi, eax
0x90B388: mov     ecx, [esi+1A4h]
0x90B38E: mov     dword ptr [ecx], offset aEt; "Et"
0x90B394: rdtsc
0x90B396: mov     [esp+20h+arg_0], eax
0x90B39A: mov     edx, [esp+20h+arg_0]
0x90B39E: mov     [ecx+4], edx
0x90B3A1: add     ecx, 0Ch
0x90B3A4: mov     [esi+1A4h], ecx
0x90B3AA: pop     edi
0x90B3AB: pop     esi
0x90B3AC: pop     ebx
0x90B3AD: add     esp, 14h
0x90B3B0: retn    10h
