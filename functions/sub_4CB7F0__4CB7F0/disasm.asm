0x4CB7F0: mov     eax, ds:0B3F9A8h
0x4CB7F5: sub     esp, 0Ch
0x4CB7F8: push    ebx
0x4CB7F9: push    ebp
0x4CB7FA: push    esi
0x4CB7FB: mov     esi, [esp+18h+arg_0]
0x4CB7FF: mov     [esi], eax
0x4CB801: mov     ebp, ecx
0x4CB803: mov     ecx, ds:0B3F9ACh
0x4CB809: mov     [esi+4], ecx
0x4CB80C: mov     edx, ds:0B3F9B0h
0x4CB812: push    edi
0x4CB813: push    ebp; a2
0x4CB814: mov     ecx, offset stru_B35C80; this
0x4CB819: mov     [esi+8], edx
0x4CB81C: call    sub_496EA0
0x4CB821: lea     edi, [ebp+48h]
0x4CB824: xor     ebx, ebx
0x4CB826: test    edi, edi
0x4CB828: jz      loc_4CB8AA
0x4CB82E: mov     edi, edi
0x4CB830: mov     ecx, [edi]
0x4CB832: test    ecx, ecx
0x4CB834: jz      short loc_4CB873
0x4CB836: mov     eax, [ecx]
0x4CB838: mov     edx, [eax+174h]
0x4CB83E: call    edx
0x4CB840: fld     dword ptr [esi]
0x4CB842: fadd    dword ptr [eax]
0x4CB844: add     ebx, 1
0x4CB847: fstp    [esp+1Ch+var_C]
0x4CB84B: fld     dword ptr [eax+4]
0x4CB84E: fadd    dword ptr [esi+4]
0x4CB851: fstp    [esp+1Ch+var_8]
0x4CB855: mov     ecx, [esp+1Ch+var_8]
0x4CB859: fld     dword ptr [eax+8]
0x4CB85C: mov     eax, [esp+1Ch+var_C]
0x4CB860: fadd    dword ptr [esi+8]
0x4CB863: mov     [esi], eax
0x4CB865: mov     [esi+4], ecx
0x4CB868: fstp    [esp+1Ch+var_4]
0x4CB86C: mov     edx, [esp+1Ch+var_4]
0x4CB870: mov     [esi+8], edx
0x4CB873: mov     edi, [edi+4]
0x4CB876: test    edi, edi
0x4CB878: jnz     short loc_4CB830
0x4CB87A: test    ebx, ebx
0x4CB87C: mov     [esp+1Ch+arg_0], ebx
0x4CB880: jle     short loc_4CB8AA
0x4CB882: fild    [esp+1Ch+arg_0]
0x4CB886: fld1
0x4CB888: fdivrp  st(1), st
0x4CB88A: fstp    [esp+1Ch+arg_0]
0x4CB88E: fld     dword ptr [esi]
0x4CB890: fld     [esp+1Ch+arg_0]
0x4CB894: fld     st
0x4CB896: fmulp   st(2), st
0x4CB898: fxch    st(1)
0x4CB89A: fstp    dword ptr [esi]
0x4CB89C: fld     dword ptr [esi+4]
0x4CB89F: fmul    st, st(1)
0x4CB8A1: fstp    dword ptr [esi+4]
0x4CB8A4: fmul    dword ptr [esi+8]
0x4CB8A7: fstp    dword ptr [esi+8]
0x4CB8AA: push    ebp; a2
0x4CB8AB: mov     ecx, offset stru_B35C80; this
0x4CB8B0: call    sub_496F50
0x4CB8B5: pop     edi
0x4CB8B6: pop     esi
0x4CB8B7: pop     ebp
0x4CB8B8: pop     ebx
0x4CB8B9: add     esp, 0Ch
0x4CB8BC: retn    4
