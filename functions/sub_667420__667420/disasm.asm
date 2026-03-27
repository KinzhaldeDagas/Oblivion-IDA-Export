0x667420: sub     esp, 1Ch
0x667423: push    ebx
0x667424: push    edi
0x667425: mov     edi, [esp+24h+arg_0]
0x667429: mov     eax, [edi]
0x66742B: mov     edx, [eax+190h]
0x667431: mov     ebx, ecx
0x667433: mov     ecx, edi
0x667435: call    edx
0x667437: test    al, al
0x667439: jnz     loc_667514
0x66743F: mov     ecx, ebx; this
0x667441: call    TESObjectREFR__GetNiNode
0x667446: test    eax, eax
0x667448: jz      loc_667514
0x66744E: mov     eax, [edi]
0x667450: mov     edx, [eax+154h]
0x667456: push    esi
0x667457: mov     ecx, edi
0x667459: call    edx
0x66745B: mov     esi, eax
0x66745D: mov     eax, [esi+20h]
0x667460: mov     ecx, [esi+24h]
0x667463: mov     edx, [esi+28h]
0x667466: mov     [esp+28h+var_10], eax
0x66746A: mov     eax, [esi+2Ch]
0x66746D: mov     [esp+28h+var_C], ecx
0x667471: mov     ecx, ebx; this
0x667473: mov     [esp+28h+var_8], edx
0x667477: mov     [esp+28h+var_4], eax
0x66747B: call    TESObjectREFR__GetNiNode
0x667480: fld     dword ptr [eax+54h]
0x667483: fsub    [esp+28h+var_10]
0x667487: add     eax, 54h ; 'T'
0x66748A: fstp    dword ptr [esp+28h+var_1C]
0x66748E: fld     dword ptr [eax+4]
0x667491: fsub    [esp+28h+var_C]
0x667495: fstp    dword ptr [esp+28h+var_1C+4]
0x667499: fld     dword ptr [eax+8]
0x66749C: fsub    [esp+28h+var_8]
0x6674A0: fstp    [esp+28h+var_14]
0x6674A4: fld     dword ptr [esp+28h+var_1C+4]
0x6674A8: fld     dword ptr [esp+28h+var_1C]
0x6674AC: fld     [esp+28h+var_14]
0x6674B0: fld     [esp+28h+var_4]
0x6674B4: fstp    [esp+28h+var_1C]
0x6674B8: fld     st(1)
0x6674BA: fmulp   st(2), st
0x6674BC: fld     st(2)
0x6674BE: fmulp   st(3), st
0x6674C0: fxch    st(1)
0x6674C2: faddp   st(2), st
0x6674C4: fmul    st, st
0x6674C6: faddp   st(1), st
0x6674C8: fstp    [esp+28h+arg_0]
0x6674CC: fld     [esp+28h+arg_0]
0x6674D0: call    __CIsqrt
0x6674D5: fstp    [esp+28h+arg_0]
0x6674D9: fld     [esp+28h+arg_0]
0x6674DD: fcomp   [esp+28h+var_1C]
0x6674E1: fnstsw  ax
0x6674E3: test    ah, 5
0x6674E6: jp      short loc_667513
0x6674E8: push    esi
0x6674E9: mov     ecx, ebx
0x6674EB: call    sub_6670F0
0x6674F0: test    al, al
0x6674F2: jz      short loc_667513
0x6674F4: or      word ptr [esi+18h], 1
0x6674F9: push    0
0x6674FB: push    1
0x6674FD: push    0
0x6674FF: push    esi
0x667500: call    sub_88CF20
0x667505: add     esp, 10h
0x667508: push    edi
0x667509: mov     ecx, offset dword_B3BB44
0x66750E: call    BSSimpleList_PushBack
0x667513: pop     esi
0x667514: pop     edi
0x667515: pop     ebx
0x667516: add     esp, 1Ch
0x667519: retn    4
