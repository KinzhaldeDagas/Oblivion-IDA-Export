0x551450: push    0FFFFFFFFh
0x551452: push    offset SEH_551450
0x551457: mov     eax, large fs:0
0x55145D: push    eax
0x55145E: sub     esp, 8
0x551461: push    ebx
0x551462: push    ebp
0x551463: push    esi
0x551464: push    edi
0x551465: mov     eax, ds:0B30AACh
0x55146A: xor     eax, esp
0x55146C: push    eax
0x55146D: lea     eax, [esp+28h+var_C]
0x551471: mov     large fs:0, eax
0x551477: mov     ebx, ecx
0x551479: push    offset stru_B39C00; lpCriticalSection
0x55147E: call    dword ptr ds:0A2806Ch
0x551484: call    dword ptr ds:0A2808Ch
0x55148A: mov     edi, 1
0x55148F: add     ds:0B39C7Ch, edi
0x551495: xor     esi, esi
0x551497: mov     ds:0B39C78h, eax
0x55149C: mov     [esp+28h+var_14], esi
0x5514A0: cmp     [esp+28h+a2], esi
0x5514A4: mov     [esp+28h+var_4], esi
0x5514A8: jnz     short loc_5514D5
0x5514AA: mov     eax, [esp+28h+arg_0]
0x5514AE: push    eax
0x5514AF: lea     ecx, [ebx+4]
0x5514B2: call    NiTMap_RemoveAt
0x5514B7: sub     ds:0B39C7Ch, edi
0x5514BD: jnz     short loc_5514C5
0x5514BF: mov     ds:0B39C78h, esi
0x5514C5: push    offset stru_B39C00; lpCriticalSection
0x5514CA: call    dword ptr ds:0A28074h
0x5514D0: jmp     loc_551594
0x5514D5: push    10h; Size
0x5514D7: call    FormHeapAlloc
0x5514DC: mov     ebp, ds:0A28078h
0x5514E2: mov     edi, eax
0x5514E4: add     esp, 4
0x5514E7: cmp     edi, esi
0x5514E9: jz      short loc_55151F
0x5514EB: lea     eax, [edi+4]
0x5514EE: push    offset NiRefObject_objcount; lpAddend
0x5514F3: mov     dword ptr [edi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x5514F9: mov     [esp+2Ch+lpAddend], eax
0x5514FD: mov     dword ptr [eax], 0
0x551503: call    ebp ; InterlockedIncrement
0x551505: mov     ecx, [esp+28h+lpAddend]
0x551509: mov     dword ptr [edi], offset ??_7Entry@BSFaceGenModelMap@@6B@; const BSFaceGenModelMap::Entry::`vftable'
0x55150F: mov     esi, edi
0x551511: push    ecx; lpAddend
0x551512: mov     dword ptr [edi+8], 0
0x551519: mov     [esp+2Ch+var_14], esi
0x55151D: call    ebp ; InterlockedIncrement
0x55151F: mov     edx, [esp+28h+a2]
0x551523: push    edx; a2
0x551524: lea     ecx, [esi+8]; this
0x551527: call    NiSmartPointer_Set??
0x55152C: call    dword ptr ds:0A280D0h
0x551532: push    ecx
0x551533: mov     [esi+0Ch], eax
0x551536: mov     eax, esp
0x551538: mov     [esp+2Ch+a2], esp
0x55153C: lea     edi, [esi+4]
0x55153F: push    edi; lpAddend
0x551540: mov     [eax], esi
0x551542: call    ebp ; InterlockedIncrement
0x551544: mov     eax, [esp+2Ch+arg_0]
0x551548: push    eax
0x551549: lea     ecx, [ebx+4]
0x55154C: call    sub_4A1B10
0x551551: push    esi
0x551552: mov     ecx, ebx
0x551554: call    sub_5506B0
0x551559: sub     dword ptr ds:0B39C7Ch, 1
0x551560: jnz     short loc_55156C
0x551562: mov     dword ptr ds:0B39C78h, 0
0x55156C: push    offset stru_B39C00; lpCriticalSection
0x551571: call    dword ptr ds:0A28074h
0x551577: push    edi; lpAddend
0x551578: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x551580: call    dword ptr ds:0A2807Ch
0x551586: test    eax, eax
0x551588: jnz     short loc_551594
0x55158A: mov     edx, [esi]
0x55158C: mov     eax, [edx]
0x55158E: push    1
0x551590: mov     ecx, esi
0x551592: call    eax
0x551594: mov     ecx, dword ptr [esp+28h+var_C]
0x551598: mov     large fs:0, ecx
0x55159F: pop     ecx
0x5515A0: pop     edi
0x5515A1: pop     esi
0x5515A2: pop     ebp
0x5515A3: pop     ebx
0x5515A4: add     esp, 14h
0x5515A7: retn    8
