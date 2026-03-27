0x7975F0: push    0FFFFFFFFh
0x7975F2: push    offset SEH_7976E0
0x7975F7: mov     eax, large fs:0
0x7975FD: push    eax
0x7975FE: sub     esp, 8
0x797601: push    ebx
0x797602: push    ebp
0x797603: push    esi
0x797604: push    edi
0x797605: mov     eax, ds:0B30AACh
0x79760A: xor     eax, esp
0x79760C: push    eax
0x79760D: lea     eax, [esp+28h+var_C]
0x797611: mov     large fs:0, eax
0x797617: mov     esi, ecx
0x797619: mov     ecx, [esi+4]
0x79761C: xor     ebx, ebx
0x79761E: cmp     ecx, ebx
0x797620: mov     [esp+28h+var_4], ebx
0x797624: jnz     short loc_79762A
0x797626: xor     eax, eax
0x797628: jmp     short loc_797632
0x79762A: mov     eax, [esi+8]
0x79762D: sub     eax, ecx
0x79762F: sar     eax, 4
0x797632: mov     edi, [esp+28h+arg_0]
0x797636: cmp     eax, edi
0x797638: jnb     short loc_797665
0x79763A: cmp     ecx, ebx
0x79763C: jz      short loc_797646
0x79763E: mov     ebx, [esi+8]
0x797641: sub     ebx, ecx
0x797643: sar     ebx, 4
0x797646: mov     ebp, [esi+8]
0x797649: cmp     ecx, ebp
0x79764B: jbe     short loc_797652
0x79764D: call    __invalid_parameter_noinfo
0x797652: lea     eax, [esp+28h+arg_4]
0x797656: push    eax
0x797657: sub     edi, ebx
0x797659: push    edi
0x79765A: push    ebp
0x79765B: push    esi
0x79765C: mov     ecx, esi
0x79765E: call    sub_796FE0
0x797663: jmp     short loc_7976B5
0x797665: cmp     ecx, ebx
0x797667: jz      short loc_7976B5
0x797669: mov     ebp, [esi+8]
0x79766C: mov     eax, ebp
0x79766E: sub     eax, ecx
0x797670: sar     eax, 4
0x797673: cmp     edi, eax
0x797675: jnb     short loc_7976B5
0x797677: cmp     ecx, ebp
0x797679: jbe     short loc_797680
0x79767B: call    __invalid_parameter_noinfo
0x797680: mov     ebx, [esi+4]
0x797683: cmp     ebx, [esi+8]
0x797686: jbe     short loc_79768D
0x797688: call    __invalid_parameter_noinfo
0x79768D: shl     edi, 4
0x797690: add     edi, ebx
0x797692: cmp     edi, [esi+8]
0x797695: mov     [esp+28h+var_10], ebx
0x797699: ja      short loc_7976A0
0x79769B: cmp     edi, [esi+4]
0x79769E: jnb     short loc_7976A5
0x7976A0: call    __invalid_parameter_noinfo
0x7976A5: push    ebp
0x7976A6: push    esi
0x7976A7: push    edi
0x7976A8: push    esi
0x7976A9: lea     ecx, [esp+38h+var_14]
0x7976AD: push    ecx
0x7976AE: mov     ecx, esi
0x7976B0: call    sub_796730
0x7976B5: mov     eax, [esp+28h+arg_8]
0x7976B9: test    eax, eax
0x7976BB: jz      short loc_7976C6
0x7976BD: push    eax
0x7976BE: call    FormHeapFree
0x7976C3: add     esp, 4
0x7976C6: mov     ecx, [esp+28h+var_C]
0x7976CA: mov     large fs:0, ecx
0x7976D1: pop     ecx
0x7976D2: pop     edi
0x7976D3: pop     esi
0x7976D4: pop     ebp
0x7976D5: pop     ebx
0x7976D6: add     esp, 14h
0x7976D9: retn    14h
