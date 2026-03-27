0x796630: sub     esp, 8
0x796633: push    esi
0x796634: mov     esi, ecx
0x796636: mov     ecx, [esi+0DCh]
0x79663C: test    ecx, ecx
0x79663E: push    edi
0x79663F: movzx   edi, word ptr [esi+22h]
0x796643: jz      short loc_796651
0x796645: mov     eax, [esi+0E0h]
0x79664B: sub     eax, ecx
0x79664D: cmp     edi, eax
0x79664F: jb      short loc_796656
0x796651: call    __invalid_parameter_noinfo
0x796656: mov     eax, [esi+0DCh]
0x79665C: mov     cl, byte ptr [esp+10h+arg_0]
0x796660: cmp     cl, [edi+eax]
0x796663: jnz     loc_79671B
0x796669: movzx   edi, word ptr [esi+22h]
0x79666D: mov     ecx, [esi+0CCh]
0x796673: add     edi, edi
0x796675: test    ecx, ecx
0x796677: jz      short loc_796688
0x796679: mov     eax, [esi+0D0h]
0x79667F: sub     eax, ecx
0x796681: sar     eax, 2
0x796684: cmp     edi, eax
0x796686: jb      short loc_79668D
0x796688: call    __invalid_parameter_noinfo
0x79668D: mov     edx, [esi+0CCh]
0x796693: push    ebx
0x796694: mov     ebx, [esp+14h+arg_4]
0x796698: fld     dword ptr [ebx+8]
0x79669B: mov     ecx, edx
0x79669D: test    ecx, ecx
0x79669F: fstp    [esp+14h+arg_0]
0x7966A3: fld     dword ptr [ebx]
0x7966A5: fld     [esp+14h+arg_0]
0x7966A9: fld     st
0x7966AB: fsubp   st(2), st
0x7966AD: fld     dword ptr [edx+edi*4]
0x7966B0: movzx   edi, word ptr [esi+22h]
0x7966B4: lea     edi, [edi+edi+1]
0x7966B8: fmulp   st(2), st
0x7966BA: faddp   st(1), st
0x7966BC: fstp    [esp+14h+var_8]
0x7966C0: jz      short loc_7966D1
0x7966C2: mov     eax, [esi+0D0h]
0x7966C8: sub     eax, ecx
0x7966CA: sar     eax, 2
0x7966CD: cmp     edi, eax
0x7966CF: jb      short loc_7966D6
0x7966D1: call    __invalid_parameter_noinfo
0x7966D6: fld     dword ptr [ebx+14h]
0x7966D9: mov     eax, [esi+0CCh]
0x7966DF: fstp    [esp+14h+arg_0]
0x7966E3: fld     dword ptr [ebx+4]
0x7966E6: fld     [esp+14h+arg_0]
0x7966EA: fld     st
0x7966EC: fsubp   st(2), st
0x7966EE: fld     dword ptr [eax+edi*4]
0x7966F1: fmulp   st(2), st
0x7966F3: faddp   st(1), st
0x7966F5: fstp    [esp+14h+var_4]
0x7966F9: call    sub_787680
0x7966FE: test    al, al
0x796700: pop     ebx
0x796701: jz      short loc_79670D
0x796703: fld     [esp+10h+var_4]
0x796707: fchs
0x796709: fstp    [esp+10h+var_4]
0x79670D: push    0FFFFFFFFh; float
0x79670F: lea     ecx, [esp+14h+var_8]
0x796713: push    ecx; int
0x796714: mov     ecx, esi
0x796716: call    sub_796320
0x79671B: pop     edi
0x79671C: pop     esi
0x79671D: add     esp, 8
0x796720: retn    8
