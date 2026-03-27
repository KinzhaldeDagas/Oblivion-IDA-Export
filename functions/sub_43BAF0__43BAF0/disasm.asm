0x43BAF0: push    0FFFFFFFFh
0x43BAF2: push    offset SEH_43BAF0
0x43BAF7: mov     eax, large fs:0
0x43BAFD: push    eax
0x43BAFE: sub     esp, 8
0x43BB01: push    ebx
0x43BB02: push    ebp
0x43BB03: push    esi
0x43BB04: push    edi
0x43BB05: mov     eax, ___security_cookie
0x43BB0A: xor     eax, esp
0x43BB0C: push    eax
0x43BB0D: lea     eax, [esp+28h+var_C]
0x43BB11: mov     large fs:0, eax
0x43BB17: mov     [esp+28h+var_10], ecx
0x43BB1B: xor     ebx, ebx
0x43BB1D: push    38h ; '8'; Size
0x43BB1F: mov     [esp+2Ch+var_4], ebx
0x43BB23: mov     [esp+2Ch+var_14], ebx
0x43BB27: call    FormHeapAlloc
0x43BB2C: mov     ebp, [esp+2Ch+arg_4]
0x43BB30: mov     esi, eax
0x43BB32: add     esp, 4
0x43BB35: cmp     esi, ebx
0x43BB37: jz      short loc_43BB6B
0x43BB39: mov     eax, dword ptr [esp+28h+a2]
0x43BB3D: push    eax; a2
0x43BB3E: mov     ecx, esi; this
0x43BB40: call    sub_436500
0x43BB45: mov     [esi+18h], ebx
0x43BB48: mov     [esi+20h], ebp
0x43BB4B: mov     [esi+1Ch], ebx
0x43BB4E: mov     dword ptr [esi], offset ??_7QueuedHelmet@@6B@; const QueuedHelmet::`vftable'
0x43BB54: mov     [esi+24h], ebx
0x43BB57: mov     [esi+28h], ebx
0x43BB5A: mov     [esi+2Ch], ebx
0x43BB5D: mov     ecx, [esi+20h]
0x43BB60: mov     eax, [ecx+150h]
0x43BB66: mov     [esi+30h], eax
0x43BB69: jmp     short loc_43BB6D
0x43BB6B: xor     esi, esi
0x43BB6D: cmp     esi, ebx
0x43BB6F: mov     edi, [esp+28h+arg_0]
0x43BB73: mov     [edi], esi
0x43BB75: jz      short loc_43BB81
0x43BB77: add     esi, 8
0x43BB7A: push    esi; lpAddend
0x43BB7B: call    ds:InterlockedIncrement
0x43BB81: mov     eax, [edi]
0x43BB83: cmp     eax, ebx
0x43BB85: push    ebx
0x43BB86: push    ecx
0x43BB87: mov     ecx, esp
0x43BB89: mov     [esp+30h+var_4], ebx
0x43BB8D: mov     [esp+30h+var_14], 1
0x43BB95: mov     [esp+30h+arg_4], esp
0x43BB99: mov     [ecx], eax
0x43BB9B: jz      short loc_43BBA7
0x43BB9D: add     eax, 8
0x43BBA0: push    eax; lpAddend
0x43BBA1: call    ds:InterlockedIncrement
0x43BBA7: mov     edx, [esp+30h+var_10]
0x43BBAB: mov     eax, [ebp+150h]
0x43BBB1: mov     ecx, [edx+10h]
0x43BBB4: mov     edx, [ecx]
0x43BBB6: push    eax
0x43BBB7: mov     eax, [edx+0Ch]
0x43BBBA: call    eax
0x43BBBC: cmp     al, bl
0x43BBBE: jz      short loc_43BBD7
0x43BBC0: mov     edx, [esp+28h+arg_C]
0x43BBC4: mov     ecx, [edi]
0x43BBC6: push    edx
0x43BBC7: call    sub_43AC40
0x43BBCC: mov     ecx, [edi]
0x43BBCE: mov     eax, [ecx]
0x43BBD0: mov     edx, [eax+20h]
0x43BBD3: call    edx
0x43BBD5: jmp     short loc_43BBFB
0x43BBD7: mov     esi, [edi]
0x43BBD9: cmp     esi, ebx
0x43BBDB: jz      short loc_43BBFB
0x43BBDD: lea     eax, [esi+8]
0x43BBE0: push    eax; lpAddend
0x43BBE1: call    ds:InterlockedDecrement
0x43BBE7: test    eax, eax
0x43BBE9: jnz     short loc_43BBF9
0x43BBEB: cmp     esi, ebx
0x43BBED: jz      short loc_43BBF9
0x43BBEF: mov     edx, [esi]
0x43BBF1: mov     eax, [edx]
0x43BBF3: push    1
0x43BBF5: mov     ecx, esi
0x43BBF7: call    eax
0x43BBF9: mov     [edi], ebx
0x43BBFB: mov     eax, edi
0x43BBFD: mov     ecx, dword ptr [esp+28h+var_C]
0x43BC01: mov     large fs:0, ecx
0x43BC08: pop     ecx
0x43BC09: pop     edi
0x43BC0A: pop     esi
0x43BC0B: pop     ebp
0x43BC0C: pop     ebx
0x43BC0D: add     esp, 14h
0x43BC10: retn    10h
