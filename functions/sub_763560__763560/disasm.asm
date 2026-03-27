0x763560: push    ebx
0x763561: push    esi
0x763562: mov     ebx, ecx
0x763564: push    edi
0x763565: lea     esi, [ebx+180h]
0x76356B: push    esi; lpCriticalSection
0x76356C: call    dword ptr ds:0A2806Ch
0x763572: call    dword ptr ds:0A2808Ch
0x763578: add     dword ptr [esi+7Ch], 1
0x76357C: mov     [esi+78h], eax
0x76357F: mov     eax, [esp+0Ch+arg_0]
0x763583: mov     edi, [eax+24h]
0x763586: test    edi, edi
0x763588: jnz     short loc_763596
0x76358A: push    ebx
0x76358B: push    eax
0x76358C: call    sub_761270
0x763591: add     esp, 8
0x763594: mov     edi, eax
0x763596: add     dword ptr [esi+7Ch], 0FFFFFFFFh
0x76359A: jnz     short loc_7635A3
0x76359C: mov     dword ptr [esi+78h], 0
0x7635A3: push    esi; lpCriticalSection
0x7635A4: call    dword ptr ds:0A28074h
0x7635AA: test    edi, edi
0x7635AC: pop     edi
0x7635AD: pop     esi
0x7635AE: setnz   al
0x7635B1: pop     ebx
0x7635B2: retn    4
