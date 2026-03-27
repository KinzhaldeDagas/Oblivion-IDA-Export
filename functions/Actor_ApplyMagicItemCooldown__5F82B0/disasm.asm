0x5F82B0: push    ebx
0x5F82B1: mov     ebx, [esp+4+arg_0]
0x5F82B5: test    ebx, ebx
0x5F82B7: push    edi
0x5F82B8: mov     edi, ecx
0x5F82BA: jz      short loc_5F82FB
0x5F82BC: push    ebx
0x5F82BD: call    Actor_GetMagicItemCooldown
0x5F82C2: test    eax, eax
0x5F82C4: jnz     short loc_5F82FB
0x5F82C6: push    esi
0x5F82C7: push    8; Size
0x5F82C9: call    FormHeapAlloc
0x5F82CE: mov     esi, eax
0x5F82D0: add     esp, 4
0x5F82D3: mov     ecx, offset TimeGlobals
0x5F82D8: mov     [esi], ebx
0x5F82DA: call    sub_4029D0
0x5F82DF: fdivr   qword ptr ds:0A2F938h
0x5F82E5: push    esi
0x5F82E6: lea     ecx, [edi+9Ch]
0x5F82EC: fmul    qword ptr ds:0A2F920h
0x5F82F2: fstp    dword ptr [esi+4]
0x5F82F5: call    BSSimpleList_PushBack
0x5F82FA: pop     esi
0x5F82FB: pop     edi
0x5F82FC: pop     ebx
0x5F82FD: retn    4
