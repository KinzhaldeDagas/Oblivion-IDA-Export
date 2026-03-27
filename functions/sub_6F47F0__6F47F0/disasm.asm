0x6F47F0: push    0FFFFFFFFh
0x6F47F2: push    offset SEH_6F47F0
0x6F47F7: mov     eax, large fs:0
0x6F47FD: push    eax
0x6F47FE: sub     esp, 8
0x6F4801: push    ebx
0x6F4802: push    ebp
0x6F4803: push    esi
0x6F4804: push    edi
0x6F4805: mov     eax, ds:0B30AACh
0x6F480A: xor     eax, esp
0x6F480C: push    eax
0x6F480D: lea     eax, [esp+28h+var_C]
0x6F4811: mov     large fs:0, eax
0x6F4817: mov     esi, ecx
0x6F4819: mov     ecx, [esi+4]
0x6F481C: xor     ebp, ebp
0x6F481E: cmp     ecx, ebp
0x6F4820: mov     [esp+28h+var_4], ebp
0x6F4824: jnz     short loc_6F482A
0x6F4826: xor     eax, eax
0x6F4828: jmp     short loc_6F4840
0x6F482A: mov     edx, [esi+8]
0x6F482D: sub     edx, ecx
0x6F482F: mov     eax, 2E8BA2E9h
0x6F4834: imul    edx
0x6F4836: sar     edx, 3
0x6F4839: mov     eax, edx
0x6F483B: shr     eax, 1Fh
0x6F483E: add     eax, edx
0x6F4840: mov     ebx, [esp+28h+arg_0]
0x6F4844: cmp     eax, ebx
0x6F4846: jnb     short loc_6F4885
0x6F4848: cmp     ecx, ebp
0x6F484A: jnz     short loc_6F4850
0x6F484C: xor     edi, edi
0x6F484E: jmp     short loc_6F4866
0x6F4850: mov     edx, [esi+8]
0x6F4853: sub     edx, ecx
0x6F4855: mov     eax, 2E8BA2E9h
0x6F485A: imul    edx
0x6F485C: sar     edx, 3
0x6F485F: mov     edi, edx
0x6F4861: shr     edi, 1Fh
0x6F4864: add     edi, edx
0x6F4866: mov     ebp, [esi+8]
0x6F4869: cmp     ecx, ebp
0x6F486B: jbe     short loc_6F4872
0x6F486D: call    __invalid_parameter_noinfo
0x6F4872: lea     eax, [esp+28h+arg_4]
0x6F4876: push    eax
0x6F4877: sub     ebx, edi
0x6F4879: push    ebx
0x6F487A: push    ebp
0x6F487B: push    esi
0x6F487C: mov     ecx, esi
0x6F487E: call    sub_6F41C0
0x6F4883: jmp     short loc_6F48E3
0x6F4885: cmp     ecx, ebp
0x6F4887: jz      short loc_6F48E5
0x6F4889: mov     edi, [esi+8]
0x6F488C: mov     edx, edi
0x6F488E: sub     edx, ecx
0x6F4890: mov     eax, 2E8BA2E9h
0x6F4895: imul    edx
0x6F4897: sar     edx, 3
0x6F489A: mov     eax, edx
0x6F489C: shr     eax, 1Fh
0x6F489F: add     eax, edx
0x6F48A1: cmp     ebx, eax
0x6F48A3: jnb     short loc_6F48E5
0x6F48A5: cmp     ecx, edi
0x6F48A7: jbe     short loc_6F48AE
0x6F48A9: call    __invalid_parameter_noinfo
0x6F48AE: mov     ebp, [esi+4]
0x6F48B1: cmp     ebp, [esi+8]
0x6F48B4: jbe     short loc_6F48BB
0x6F48B6: call    __invalid_parameter_noinfo
0x6F48BB: imul    ebx, 2Ch ; ','
0x6F48BE: add     ebx, ebp
0x6F48C0: cmp     ebx, [esi+8]
0x6F48C3: mov     [esp+28h+var_10], ebp
0x6F48C7: ja      short loc_6F48CE
0x6F48C9: cmp     ebx, [esi+4]
0x6F48CC: jnb     short loc_6F48D3
0x6F48CE: call    __invalid_parameter_noinfo
0x6F48D3: push    edi
0x6F48D4: push    esi
0x6F48D5: push    ebx
0x6F48D6: push    esi
0x6F48D7: lea     ecx, [esp+38h+var_14]
0x6F48DB: push    ecx
0x6F48DC: mov     ecx, esi
0x6F48DE: call    sub_6F37D0
0x6F48E3: xor     ebp, ebp
0x6F48E5: mov     eax, [esp+28h+arg_24]
0x6F48E9: cmp     eax, ebp
0x6F48EB: jz      short loc_6F48F6
0x6F48ED: push    eax
0x6F48EE: call    FormHeapFree
0x6F48F3: add     esp, 4
0x6F48F6: cmp     [esp+28h+arg_1C], 10h
0x6F48FB: mov     [esp+28h+arg_24], ebp
0x6F48FF: mov     [esp+28h+arg_28], ebp
0x6F4903: mov     [esp+28h+arg_2C], ebp
0x6F4907: jb      short loc_6F4916
0x6F4909: mov     edx, [esp+28h+arg_8]
0x6F490D: push    edx
0x6F490E: call    FormHeapFree
0x6F4913: add     esp, 4
0x6F4916: mov     ecx, [esp+28h+var_C]
0x6F491A: mov     large fs:0, ecx
0x6F4921: pop     ecx
0x6F4922: pop     edi
0x6F4923: pop     esi
0x6F4924: pop     ebp
0x6F4925: pop     ebx
0x6F4926: add     esp, 14h
0x6F4929: retn    30h ; '0'
