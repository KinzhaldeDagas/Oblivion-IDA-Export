0x7958D0: sub     esp, 8
0x7958D3: push    ebx
0x7958D4: push    ebp
0x7958D5: push    esi
0x7958D6: mov     esi, ecx
0x7958D8: mov     ecx, [esi+4]
0x7958DB: test    ecx, ecx
0x7958DD: push    edi
0x7958DE: jnz     short loc_7958E4
0x7958E0: xor     eax, eax
0x7958E2: jmp     short loc_7958EC
0x7958E4: mov     eax, [esi+8]
0x7958E7: sub     eax, ecx
0x7958E9: sar     eax, 2
0x7958EC: mov     ebx, [esp+18h+arg_0]
0x7958F0: cmp     eax, ebx
0x7958F2: jnb     short loc_79592B
0x7958F4: test    ecx, ecx
0x7958F6: jnz     short loc_7958FC
0x7958F8: xor     edi, edi
0x7958FA: jmp     short loc_795904
0x7958FC: mov     edi, [esi+8]
0x7958FF: sub     edi, ecx
0x795901: sar     edi, 2
0x795904: mov     ebp, [esi+8]
0x795907: cmp     ecx, ebp
0x795909: jbe     short loc_795910
0x79590B: call    __invalid_parameter_noinfo
0x795910: lea     eax, [esp+18h+arg_4]
0x795914: push    eax; int
0x795915: sub     ebx, edi
0x795917: push    ebx; int
0x795918: push    ebp; Src
0x795919: push    esi; int
0x79591A: mov     ecx, esi
0x79591C: call    sub_7A3280
0x795921: pop     edi
0x795922: pop     esi
0x795923: pop     ebp
0x795924: pop     ebx
0x795925: add     esp, 8
0x795928: retn    8
0x79592B: test    ecx, ecx
0x79592D: jz      short loc_795979
0x79592F: mov     ebp, [esi+8]
0x795932: mov     eax, ebp
0x795934: sub     eax, ecx
0x795936: sar     eax, 2
0x795939: cmp     ebx, eax
0x79593B: jnb     short loc_795979
0x79593D: cmp     ecx, ebp
0x79593F: jbe     short loc_795946
0x795941: call    __invalid_parameter_noinfo
0x795946: mov     edi, [esi+4]
0x795949: cmp     edi, [esi+8]
0x79594C: jbe     short loc_795953
0x79594E: call    __invalid_parameter_noinfo
0x795953: mov     [esp+18h+var_4], edi
0x795957: lea     edi, [edi+ebx*4]
0x79595A: cmp     edi, [esi+8]
0x79595D: ja      short loc_795964
0x79595F: cmp     edi, [esi+4]
0x795962: jnb     short loc_795969
0x795964: call    __invalid_parameter_noinfo
0x795969: push    ebp; Src
0x79596A: push    esi; int
0x79596B: push    edi; Dst
0x79596C: push    esi; int
0x79596D: lea     ecx, [esp+28h+var_8]
0x795971: push    ecx; int
0x795972: mov     ecx, esi
0x795974: call    sub_439050
0x795979: pop     edi
0x79597A: pop     esi
0x79597B: pop     ebp
0x79597C: pop     ebx
0x79597D: add     esp, 8
0x795980: retn    8
