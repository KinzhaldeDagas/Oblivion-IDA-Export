0x5511D0: sub     esp, 8
0x5511D3: fldz
0x5511D5: push    ebx
0x5511D6: push    esi
0x5511D7: fstp    [esp+10h+var_8]
0x5511DB: mov     esi, ecx
0x5511DD: xor     ebx, ebx
0x5511DF: cmp     [esi], ebx
0x5511E1: jbe     short loc_55123E
0x5511E3: push    edi
0x5511E4: xor     edi, edi
0x5511E6: cmp     [esi+4], edi
0x5511E9: jbe     short loc_551236
0x5511EB: jmp     short loc_5511F0
0x5511ED: align 10h
0x5511F0: mov     eax, [esi+0Ch]
0x5511F3: test    eax, eax
0x5511F5: jz      short loc_551201
0x5511F7: mov     ecx, [esi+10h]
0x5511FA: sub     ecx, eax
0x5511FC: sar     ecx, 2
0x5511FF: jnz     short loc_551206
0x551201: call    __invalid_parameter_noinfo
0x551206: mov     edx, [esi+4]
0x551209: mov     eax, [esi+0Ch]
0x55120C: imul    edx, ebx
0x55120F: add     edx, edi
0x551211: add     edi, 1
0x551214: cmp     edi, [esi+4]
0x551217: fld     dword ptr [eax+edx*4]
0x55121A: fstp    [esp+14h+var_4]
0x55121E: fld     [esp+14h+var_4]
0x551222: fmul    st, st
0x551224: fstp    [esp+14h+var_4]
0x551228: fld     [esp+14h+var_4]
0x55122C: fadd    [esp+14h+var_8]
0x551230: fstp    [esp+14h+var_8]
0x551234: jb      short loc_5511F0
0x551236: add     ebx, 1
0x551239: cmp     ebx, [esi]
0x55123B: jb      short loc_5511E4
0x55123D: pop     edi
0x55123E: fld     [esp+10h+var_8]
0x551242: pop     esi
0x551243: pop     ebx
0x551244: add     esp, 8
0x551247: retn
