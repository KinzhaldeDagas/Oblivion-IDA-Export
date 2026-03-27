0x437890: mov     eax, dword ptr [esp+a2]
0x437894: push    ebx
0x437895: push    esi
0x437896: push    edi
0x437897: push    eax; a2
0x437898: mov     esi, ecx
0x43789A: call    sub_436500
0x43789F: mov     edi, [esp+0Ch+arg_0]
0x4378A3: xor     ebx, ebx
0x4378A5: mov     [esi+18h], ebx
0x4378A8: mov     eax, ebx
0x4378AA: cmp     eax, edi
0x4378AC: mov     [esi+1Ch], ebx
0x4378AF: mov     [esi+20h], ebx
0x4378B2: mov     [esi+24h], ebx
0x4378B5: mov     dword ptr [esi], offset ??_7QueuedKF@@6B@; const QueuedKF::`vftable'
0x4378BB: mov     [esi+28h], ebx
0x4378BE: jz      short loc_4378E1
0x4378C0: cmp     eax, ebx
0x4378C2: jz      short loc_4378D0
0x4378C4: mov     eax, 0Ch
0x4378C9: push    eax; lpAddend
0x4378CA: call    ds:InterlockedDecrement
0x4378D0: cmp     edi, ebx
0x4378D2: mov     [esi+28h], edi
0x4378D5: jz      short loc_4378E1
0x4378D7: add     edi, 0Ch
0x4378DA: push    edi; lpAddend
0x4378DB: call    ds:InterlockedIncrement
0x4378E1: pop     edi
0x4378E2: mov     dword ptr [esi+0Ch], 5
0x4378E9: mov     eax, esi
0x4378EB: pop     esi
0x4378EC: pop     ebx
0x4378ED: retn    8
