0x7976E0: push    0FFFFFFFFh
0x7976E2: push    offset SEH_7976E0
0x7976E7: mov     eax, large fs:0
0x7976ED: push    eax
0x7976EE: sub     esp, 8
0x7976F1: push    ebx
0x7976F2: push    ebp
0x7976F3: push    esi
0x7976F4: push    edi
0x7976F5: mov     eax, ds:0B30AACh
0x7976FA: xor     eax, esp
0x7976FC: push    eax
0x7976FD: lea     eax, [esp+28h+var_C]
0x797701: mov     large fs:0, eax
0x797707: mov     esi, ecx
0x797709: mov     ecx, [esi+4]
0x79770C: xor     ebx, ebx
0x79770E: cmp     ecx, ebx
0x797710: mov     [esp+28h+var_4], ebx
0x797714: jnz     short loc_79771A
0x797716: xor     eax, eax
0x797718: jmp     short loc_797722
0x79771A: mov     eax, [esi+8]
0x79771D: sub     eax, ecx
0x79771F: sar     eax, 4
0x797722: mov     edi, [esp+28h+arg_0]
0x797726: cmp     eax, edi
0x797728: jnb     short loc_797755
0x79772A: cmp     ecx, ebx
0x79772C: jz      short loc_797736
0x79772E: mov     ebx, [esi+8]
0x797731: sub     ebx, ecx
0x797733: sar     ebx, 4
0x797736: mov     ebp, [esi+8]
0x797739: cmp     ecx, ebp
0x79773B: jbe     short loc_797742
0x79773D: call    __invalid_parameter_noinfo
0x797742: lea     eax, [esp+28h+arg_4]
0x797746: push    eax
0x797747: sub     edi, ebx
0x797749: push    edi
0x79774A: push    ebp
0x79774B: push    esi
0x79774C: mov     ecx, esi
0x79774E: call    sub_79EBB0
0x797753: jmp     short loc_7977A5
0x797755: cmp     ecx, ebx
0x797757: jz      short loc_7977A5
0x797759: mov     ebp, [esi+8]
0x79775C: mov     eax, ebp
0x79775E: sub     eax, ecx
0x797760: sar     eax, 4
0x797763: cmp     edi, eax
0x797765: jnb     short loc_7977A5
0x797767: cmp     ecx, ebp
0x797769: jbe     short loc_797770
0x79776B: call    __invalid_parameter_noinfo
0x797770: mov     ebx, [esi+4]
0x797773: cmp     ebx, [esi+8]
0x797776: jbe     short loc_79777D
0x797778: call    __invalid_parameter_noinfo
0x79777D: shl     edi, 4
0x797780: add     edi, ebx
0x797782: cmp     edi, [esi+8]
0x797785: mov     [esp+28h+var_10], ebx
0x797789: ja      short loc_797790
0x79778B: cmp     edi, [esi+4]
0x79778E: jnb     short loc_797795
0x797790: call    __invalid_parameter_noinfo
0x797795: push    ebp
0x797796: push    esi
0x797797: push    edi
0x797798: push    esi
0x797799: lea     ecx, [esp+38h+var_14]
0x79779D: push    ecx
0x79779E: mov     ecx, esi
0x7977A0: call    sub_796790
0x7977A5: mov     eax, [esp+28h+arg_8]
0x7977A9: test    eax, eax
0x7977AB: jz      short loc_7977B6
0x7977AD: push    eax
0x7977AE: call    FormHeapFree
0x7977B3: add     esp, 4
0x7977B6: mov     ecx, [esp+28h+var_C]
0x7977BA: mov     large fs:0, ecx
0x7977C1: pop     ecx
0x7977C2: pop     edi
0x7977C3: pop     esi
0x7977C4: pop     ebp
0x7977C5: pop     ebx
0x7977C6: add     esp, 14h
0x7977C9: retn    14h
