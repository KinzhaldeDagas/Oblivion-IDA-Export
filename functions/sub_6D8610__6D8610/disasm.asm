0x6D8610: push    0FFFFFFFFh
0x6D8612: push    offset SEH_88E880
0x6D8617: mov     eax, large fs:0
0x6D861D: push    eax
0x6D861E: push    ecx
0x6D861F: push    ebx
0x6D8620: push    ebp
0x6D8621: push    esi
0x6D8622: push    edi
0x6D8623: mov     eax, ds:0B30AACh
0x6D8628: xor     eax, esp
0x6D862A: push    eax
0x6D862B: lea     eax, [esp+24h+var_C]
0x6D862F: mov     large fs:0, eax
0x6D8635: mov     esi, ecx
0x6D8637: mov     edi, [esp+24h+arg_0]
0x6D863B: push    edi
0x6D863C: call    nullsub_returnvVoid_1arg
0x6D8641: mov     ecx, edi
0x6D8643: call    sub_7124A0
0x6D8648: mov     edi, [esi+2Ch]
0x6D864B: mov     ebx, eax
0x6D864D: cmp     edi, ebx
0x6D864F: jz      short loc_6D8682
0x6D8651: test    edi, edi
0x6D8653: jz      short loc_6D8671
0x6D8655: lea     eax, [edi+4]
0x6D8658: push    eax; lpAddend
0x6D8659: call    dword ptr ds:0A2807Ch
0x6D865F: test    eax, eax
0x6D8661: jnz     short loc_6D8671
0x6D8663: test    edi, edi
0x6D8665: jz      short loc_6D8671
0x6D8667: mov     edx, [edi]
0x6D8669: mov     eax, [edx]
0x6D866B: push    1
0x6D866D: mov     ecx, edi
0x6D866F: call    eax
0x6D8671: test    ebx, ebx
0x6D8673: mov     [esi+2Ch], ebx
0x6D8676: jz      short loc_6D8682
0x6D8678: add     ebx, 4
0x6D867B: push    ebx; lpAddend
0x6D867C: call    dword ptr ds:0A28078h
0x6D8682: movzx   ebp, word ptr [esi+16h]
0x6D8686: lea     ebx, [esi+1Ch]
0x6D8689: push    ebp
0x6D868A: mov     ecx, ebx
0x6D868C: call    sub_6C4510
0x6D8691: xor     edi, edi
0x6D8693: test    ebp, ebp
0x6D8695: jbe     short loc_6D86F4
0x6D8697: mov     ecx, [esp+24h+arg_0]
0x6D869B: call    sub_7124A0
0x6D86A0: mov     esi, eax
0x6D86A2: test    esi, esi
0x6D86A4: mov     [esp+24h+var_10], esi
0x6D86A8: jz      short loc_6D86B4
0x6D86AA: lea     ecx, [esi+4]
0x6D86AD: push    ecx; lpAddend
0x6D86AE: call    dword ptr ds:0A28078h
0x6D86B4: lea     edx, [esp+24h+var_10]
0x6D86B8: push    edx
0x6D86B9: push    edi
0x6D86BA: mov     ecx, ebx
0x6D86BC: mov     [esp+2Ch+var_4], 0
0x6D86C4: call    sub_6D7E90
0x6D86C9: test    esi, esi
0x6D86CB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D86D3: jz      short loc_6D86ED
0x6D86D5: lea     eax, [esi+4]
0x6D86D8: push    eax; lpAddend
0x6D86D9: call    dword ptr ds:0A2807Ch
0x6D86DF: test    eax, eax
0x6D86E1: jnz     short loc_6D86ED
0x6D86E3: mov     edx, [esi]
0x6D86E5: mov     eax, [edx]
0x6D86E7: push    1
0x6D86E9: mov     ecx, esi
0x6D86EB: call    eax
0x6D86ED: add     edi, 1
0x6D86F0: cmp     edi, ebp
0x6D86F2: jb      short loc_6D8697
0x6D86F4: mov     ecx, dword ptr [esp+24h+var_C]
0x6D86F8: mov     large fs:0, ecx
0x6D86FF: pop     ecx
0x6D8700: pop     edi
0x6D8701: pop     esi
0x6D8702: pop     ebp
0x6D8703: pop     ebx
0x6D8704: add     esp, 10h
0x6D8707: retn    4
