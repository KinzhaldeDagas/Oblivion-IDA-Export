0x98769C: push    60h
0x98769E: push    offset stru_AFFAD8
0x9876A3: call    __SEH_prolog4
0x9876A8: and     [ebp+ms_exc.registration.TryLevel], 0
0x9876AC: lea     eax, [ebp+StartupInfo]
0x9876AF: push    eax; lpStartupInfo
0x9876B0: call    dword ptr ds:0A281D0h
0x9876B6: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x9876BD: mov     edi, 94h ; '”'
0x9876C2: push    edi; dwBytes
0x9876C3: push    0; dwFlags
0x9876C5: mov     ebx, ds:0A281CCh
0x9876CB: call    ebx ; GetProcessHeap
0x9876CD: push    eax; hHeap
0x9876CE: call    dword ptr ds:0A28194h
0x9876D4: mov     esi, eax
0x9876D6: test    esi, esi
0x9876D8: jnz     short loc_9876E7
0x9876DA: push    12h
0x9876DC: call    _fast_error_exit
0x9876E1: pop     ecx
0x9876E2: jmp     loc_987871
0x9876E7: mov     [esi], edi
0x9876E9: push    esi; lpVersionInformation
0x9876EA: call    dword ptr ds:0A281C8h
0x9876F0: push    esi; lpMem
0x9876F1: push    0; dwFlags
0x9876F3: test    eax, eax
0x9876F5: jnz     short loc_987705
0x9876F7: call    ebx ; GetProcessHeap
0x9876F9: push    eax; hHeap
0x9876FA: call    dword ptr ds:0A28198h
0x987700: jmp     loc_987871
0x987705: mov     eax, [esi+10h]
0x987708: mov     [ebp+var_20], eax
0x98770B: mov     eax, [esi+4]
0x98770E: mov     [ebp+var_24], eax
0x987711: mov     eax, [esi+8]
0x987714: mov     [ebp+var_28], eax
0x987717: mov     edi, [esi+0Ch]
0x98771A: and     edi, 7FFFh
0x987720: call    ebx ; GetProcessHeap
0x987722: push    eax; hHeap
0x987723: call    dword ptr ds:0A28198h
0x987729: mov     esi, [ebp+var_20]
0x98772C: cmp     esi, 2
0x98772F: jz      short loc_987737
0x987731: or      edi, 8000h
0x987737: mov     ecx, [ebp+var_24]
0x98773A: mov     eax, ecx
0x98773C: shl     eax, 8
0x98773F: mov     edx, [ebp+var_28]
0x987742: add     eax, edx
0x987744: mov     ds:0BA9D94h, esi
0x98774A: mov     ds:0BA9D9Ch, eax
0x98774F: mov     ds:0BA9DA0h, ecx
0x987755: mov     ds:0BA9DA4h, edx
0x98775B: mov     ds:0BA9D98h, edi
0x987761: call    _check_managed_app
0x987766: mov     [ebp+var_20], eax
0x987769: xor     ebx, ebx
0x98776B: inc     ebx
0x98776C: push    ebx
0x98776D: call    __heap_init
0x987772: pop     ecx
0x987773: test    eax, eax
0x987775: jnz     short loc_98777F
0x987777: push    1Ch
0x987779: call    _fast_error_exit
0x98777E: pop     ecx
0x98777F: call    __mtinit
0x987784: test    eax, eax
0x987786: jnz     short loc_987790
0x987788: push    10h
0x98778A: call    _fast_error_exit
0x98778F: pop     ecx
0x987790: call    sub_98D7BD
0x987795: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x987798: call    __ioinit
0x98779D: test    eax, eax
0x98779F: jge     short loc_9877A9
0x9877A1: push    1Bh
0x9877A3: call    __amsg_exit
0x9877A8: pop     ecx
0x9877A9: call    dword ptr ds:0A281C4h
0x9877AF: mov     ds:0BABC04h, eax
0x9877B4: call    ___crtGetEnvironmentStringsA
0x9877B9: mov     ds:0BA9DF8h, eax
0x9877BE: call    __setargv
0x9877C3: test    eax, eax
0x9877C5: jge     short loc_9877CF
0x9877C7: push    8
0x9877C9: call    __amsg_exit
0x9877CE: pop     ecx
0x9877CF: call    __setenvp
0x9877D4: test    eax, eax
0x9877D6: jge     short loc_9877E0
0x9877D8: push    9
0x9877DA: call    __amsg_exit
0x9877DF: pop     ecx
0x9877E0: push    ebx
0x9877E1: call    __InitializeGlobals?
0x9877E6: pop     ecx
0x9877E7: test    eax, eax
0x9877E9: jz      short loc_9877F2
0x9877EB: push    eax
0x9877EC: call    __amsg_exit
0x9877F1: pop     ecx
0x9877F2: call    __wincmdln
0x9877F7: test    byte ptr [ebp+StartupInfo.dwFlags], bl
0x9877FA: jz      short loc_987802
0x9877FC: movzx   ecx, [ebp+StartupInfo.wShowWindow]
0x987800: jmp     short loc_987805
0x987802: push    0Ah
0x987804: pop     ecx
0x987805: push    ecx; nShowCmd
0x987806: push    eax; lpCmdLine
0x987807: push    0; hPrevInstance
0x987809: push    400000h; hInstance
0x98780E: call    _WinMain@16
0x987813: mov     [ebp+var_1C], eax
0x987816: cmp     [ebp+var_20], 0
0x98781A: jnz     short ___tmainCRTStartup___$LN44
0x98781C: push    eax
0x98781D: call    $LN26
