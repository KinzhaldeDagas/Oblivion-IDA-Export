0x437430: mov     eax, dword ptr [esp+a2]
0x437434: push    ebx
0x437435: push    esi
0x437436: push    edi
0x437437: push    eax; a2
0x437438: mov     esi, ecx
0x43743A: call    sub_436500
0x43743F: mov     edi, [esp+0Ch+arg_0]
0x437443: xor     ebx, ebx
0x437445: mov     [esi+18h], ebx
0x437448: mov     eax, ebx
0x43744A: cmp     eax, edi
0x43744C: mov     [esi+1Ch], ebx
0x43744F: mov     [esi+20h], ebx
0x437452: mov     [esi+24h], ebx
0x437455: mov     dword ptr [esi], offset ??_7QueuedModel@@6B@; const QueuedModel::`vftable'
0x43745B: mov     [esi+28h], ebx
0x43745E: jz      short loc_437481
0x437460: cmp     eax, ebx
0x437462: jz      short loc_437470
0x437464: mov     eax, 4
0x437469: push    eax; lpAddend
0x43746A: call    ds:InterlockedDecrement
0x437470: cmp     edi, ebx
0x437472: mov     [esi+28h], edi
0x437475: jz      short loc_437481
0x437477: add     edi, 4
0x43747A: push    edi; lpAddend
0x43747B: call    ds:InterlockedIncrement
0x437481: pop     edi
0x437482: mov     dword ptr [esi+0Ch], 5
0x437489: mov     eax, esi
0x43748B: pop     esi
0x43748C: pop     ebx
0x43748D: retn    8
