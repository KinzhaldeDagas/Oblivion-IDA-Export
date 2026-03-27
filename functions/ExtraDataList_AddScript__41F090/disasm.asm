0x41F090: push    0FFFFFFFFh
0x41F092: push    offset SEH_8C62B0
0x41F097: mov     eax, large fs:0
0x41F09D: push    eax
0x41F09E: push    ecx
0x41F09F: push    esi
0x41F0A0: mov     eax, ___security_cookie
0x41F0A5: xor     eax, esp
0x41F0A7: push    eax
0x41F0A8: lea     eax, [esp+18h+var_C]
0x41F0AC: mov     large fs:0, eax
0x41F0B2: mov     esi, ecx
0x41F0B4: push    12h; a2
0x41F0B6: call    BaseExtraList_GetExtraData
0x41F0BB: test    eax, eax
0x41F0BD: jz      short ExtraDataList_AddScript___NewExtraScript
0x41F0BF: mov     ecx, [esp+18h+arg_0]
0x41F0C3: mov     [eax+0Ch], ecx
0x41F0C6: mov     ecx, [esp+18h+var_C]
0x41F0CA: mov     large fs:0, ecx
0x41F0D1: pop     ecx
0x41F0D2: pop     esi
0x41F0D3: add     esp, 10h
0x41F0D6: retn    4
