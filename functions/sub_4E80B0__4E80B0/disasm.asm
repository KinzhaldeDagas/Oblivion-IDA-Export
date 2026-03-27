0x4E80B0: sub     esp, 0Ch
0x4E80B3: push    ebx
0x4E80B4: mov     ebx, [esp+10h+arg_4]
0x4E80B8: test    ebx, ebx
0x4E80BA: push    esi
0x4E80BB: mov     esi, ecx
0x4E80BD: jz      loc_4E817C
0x4E80C3: push    edi
0x4E80C4: push    esi
0x4E80C5: mov     ecx, ebx
0x4E80C7: call    BSSimpleList_PushBack
0x4E80CC: lea     edi, [esi+20h]
0x4E80CF: test    edi, edi
0x4E80D1: jz      loc_4E817B
0x4E80D7: cmp     dword ptr [edi+4], 0
0x4E80DB: jnz     short loc_4E80E6
0x4E80DD: cmp     dword ptr [edi], 0
0x4E80E0: jz      loc_4E817B
0x4E80E6: mov     esi, [edi]
0x4E80E8: test    esi, esi
0x4E80EA: jz      loc_4E8170
0x4E80F0: mov     eax, ebx
0x4E80F2: cmp     [eax], esi
0x4E80F4: jz      short loc_4E8170
0x4E80F6: mov     eax, [eax+4]
0x4E80F9: test    eax, eax
0x4E80FB: jnz     short loc_4E80F2
0x4E80FD: mov     eax, [ebx]
0x4E80FF: fld     dword ptr [eax+14h]
0x4E8102: add     eax, 14h
0x4E8105: fsub    dword ptr [esi+14h]
0x4E8108: fstp    [esp+18h+var_C]
0x4E810C: fld     dword ptr [eax+4]
0x4E810F: fsub    dword ptr [esi+18h]
0x4E8112: fstp    [esp+18h+var_8]
0x4E8116: fld     dword ptr [eax+8]
0x4E8119: fsub    dword ptr [esi+1Ch]
0x4E811C: fstp    [esp+18h+var_4]
0x4E8120: fld     [esp+18h+var_C]
0x4E8124: fld     [esp+18h+var_8]
0x4E8128: fld     [esp+18h+var_4]
0x4E812C: fld     st(1)
0x4E812E: fmulp   st(2), st
0x4E8130: fld     st(2)
0x4E8132: fmulp   st(3), st
0x4E8134: fxch    st(1)
0x4E8136: faddp   st(2), st
0x4E8138: fmul    st, st
0x4E813A: faddp   st(1), st
0x4E813C: fstp    [esp+18h+arg_4]
0x4E8140: fld     [esp+18h+arg_4]
0x4E8144: call    __CIsqrt
0x4E8149: fstp    [esp+18h+arg_4]
0x4E814D: fld     [esp+18h+arg_4]
0x4E8151: fld     [esp+18h+arg_0]
0x4E8155: fcom    st(1)
0x4E8157: fnstsw  ax
0x4E8159: fstp    st(1)
0x4E815B: test    ah, 1
0x4E815E: jnz     short loc_4E816E
0x4E8160: push    ebx; int
0x4E8161: push    ecx
0x4E8162: mov     ecx, esi
0x4E8164: fstp    [esp+20h+var_20]; float
0x4E8167: call    sub_4E80B0
0x4E816C: jmp     short loc_4E8170
0x4E816E: fstp    st
0x4E8170: mov     edi, [edi+4]
0x4E8173: test    edi, edi
0x4E8175: jnz     loc_4E80D7
0x4E817B: pop     edi
0x4E817C: pop     esi
0x4E817D: pop     ebx
0x4E817E: add     esp, 0Ch
0x4E8181: retn    8
