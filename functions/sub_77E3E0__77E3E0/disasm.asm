0x77E3E0: push    esi
0x77E3E1: push    edi
0x77E3E2: mov     edi, [esp+8+arg_0]
0x77E3E6: mov     esi, [edi+38h]
0x77E3E9: test    esi, esi
0x77E3EB: jz      short loc_77E424
0x77E3ED: push    esi
0x77E3EE: call    sub_782930
0x77E3F3: mov     eax, [esi+24h]
0x77E3F6: test    eax, eax
0x77E3F8: jz      short loc_77E40D
0x77E3FA: mov     ecx, [esi+1Ch]
0x77E3FD: add     ecx, ecx
0x77E3FF: add     ecx, ecx
0x77E401: push    ecx
0x77E402: push    0
0x77E404: push    eax
0x77E405: call    __memset
0x77E40A: add     esp, 0Ch
0x77E40D: mov     ecx, esi
0x77E40F: call    sub_778110
0x77E414: push    esi
0x77E415: call    FormHeapFree
0x77E41A: add     esp, 4
0x77E41D: mov     dword ptr [edi+38h], 0
0x77E424: pop     edi
0x77E425: pop     esi
0x77E426: retn    4
