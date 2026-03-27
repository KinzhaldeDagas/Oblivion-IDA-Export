0x4371A0: push    0FFFFFFFFh
0x4371A2: push    offset SEH_4371A0
0x4371A7: mov     eax, large fs:0
0x4371AD: push    eax
0x4371AE: push    ecx
0x4371AF: push    ebx
0x4371B0: push    ebp
0x4371B1: push    esi
0x4371B2: push    edi
0x4371B3: mov     eax, ___security_cookie
0x4371B8: xor     eax, esp
0x4371BA: push    eax
0x4371BB: lea     eax, [esp+24h+var_C]
0x4371BF: mov     large fs:0, eax
0x4371C5: mov     esi, ecx
0x4371C7: mov     [esp+24h+var_10], esi
0x4371CB: mov     eax, dword ptr [esp+24h+a2]
0x4371CF: push    eax; a2
0x4371D0: call    sub_436500
0x4371D5: xor     ebx, ebx
0x4371D7: mov     [esi+18h], ebx
0x4371DA: mov     [esi+1Ch], ebx
0x4371DD: mov     [esi+20h], ebx
0x4371E0: mov     [esi+24h], ebx
0x4371E3: mov     dword ptr [esi], offset ??_7QueuedTexture@@6B@; const QueuedTexture::`vftable'
0x4371E9: mov     [esp+24h+var_4], ebx
0x4371ED: mov     [esi+28h], ebx
0x4371F0: mov     ebp, [esp+24h+arg_0]
0x4371F4: mov     edi, ebx
0x4371F6: cmp     edi, ebp
0x4371F8: mov     byte ptr [esp+24h+var_4], 1
0x4371FD: jz      short loc_437230
0x4371FF: cmp     edi, ebx
0x437201: jz      short loc_43721F
0x437203: lea     ecx, [edi+4]
0x437206: push    ecx; lpAddend
0x437207: call    ds:InterlockedDecrement
0x43720D: test    eax, eax
0x43720F: jnz     short loc_43721F
0x437211: cmp     edi, ebx
0x437213: jz      short loc_43721F
0x437215: mov     edx, [edi]
0x437217: mov     eax, [edx]
0x437219: push    1
0x43721B: mov     ecx, edi
0x43721D: call    eax
0x43721F: cmp     ebp, ebx
0x437221: mov     [esi+28h], ebp
0x437224: jz      short loc_437230
0x437226: add     ebp, 4
0x437229: push    ebp; lpAddend
0x43722A: call    ds:InterlockedIncrement
0x437230: mov     dword ptr [esi+0Ch], 5
0x437237: mov     eax, esi
0x437239: mov     ecx, dword ptr [esp+24h+var_C]
0x43723D: mov     large fs:0, ecx
0x437244: pop     ecx
0x437245: pop     edi
0x437246: pop     esi
0x437247: pop     ebp
0x437248: pop     ebx
0x437249: add     esp, 10h
0x43724C: retn    8
