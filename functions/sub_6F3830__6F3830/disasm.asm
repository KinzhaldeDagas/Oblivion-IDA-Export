0x6F3830: push    ebx
0x6F3831: push    ebp
0x6F3832: mov     ebp, [esp+8+arg_4]
0x6F3836: test    ebp, ebp
0x6F3838: push    esi
0x6F3839: mov     esi, ecx
0x6F383B: jz      short loc_6F3843
0x6F383D: cmp     ebp, [esp+0Ch+arg_C]
0x6F3841: jz      short loc_6F3848
0x6F3843: call    __invalid_parameter_noinfo
0x6F3848: mov     ebx, [esp+0Ch+arg_8]
0x6F384C: mov     ecx, [esp+0Ch+arg_10]
0x6F3850: cmp     ebx, ecx
0x6F3852: jz      short loc_6F388D
0x6F3854: mov     eax, [esi+8]
0x6F3857: push    edi
0x6F3858: mov     byte ptr [esp+10h+arg_4], 0
0x6F385D: mov     edx, [esp+10h+arg_4]
0x6F3861: push    edx
0x6F3862: mov     edx, [esp+14h+arg_0]
0x6F3866: push    edx
0x6F3867: mov     edx, [esp+18h+arg_0]
0x6F386B: push    edx
0x6F386C: push    ebx
0x6F386D: push    eax
0x6F386E: push    ecx
0x6F386F: call    sub_6F3170
0x6F3874: mov     ecx, [esi+8]
0x6F3877: mov     edi, eax
0x6F3879: mov     eax, [esp+28h+arg_0]
0x6F387D: push    eax
0x6F387E: push    esi
0x6F387F: push    ecx
0x6F3880: push    edi
0x6F3881: call    sub_5570D0
0x6F3886: add     esp, 28h
0x6F3889: mov     [esi+8], edi
0x6F388C: pop     edi
0x6F388D: mov     eax, [esp+0Ch+arg_0]
0x6F3891: pop     esi
0x6F3892: mov     [eax], ebp
0x6F3894: pop     ebp
0x6F3895: mov     [eax+4], ebx
0x6F3898: pop     ebx
0x6F3899: retn    14h
