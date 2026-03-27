0x8DA080: push    esi
0x8DA081: push    edi
0x8DA082: mov     edi, [esp+8+arg_0]
0x8DA086: test    edi, edi
0x8DA088: mov     esi, ecx
0x8DA08A: jz      short loc_8DA0BB
0x8DA08C: mov     ecx, edi
0x8DA08E: call    sub_8BC720
0x8DA093: mov     eax, [esi+10h]
0x8DA096: mov     ecx, [esi+0Ch]
0x8DA099: add     esi, 8
0x8DA09C: and     eax, 3FFFFFFFh
0x8DA0A1: cmp     ecx, eax
0x8DA0A3: jnz     short loc_8DA0B0
0x8DA0A5: push    4
0x8DA0A7: push    esi
0x8DA0A8: call    sub_8A6EE0
0x8DA0AD: add     esp, 8
0x8DA0B0: mov     ecx, [esi+4]
0x8DA0B3: mov     edx, [esi]
0x8DA0B5: mov     [edx+ecx*4], edi
0x8DA0B8: inc     dword ptr [esi+4]
0x8DA0BB: pop     edi
0x8DA0BC: pop     esi
0x8DA0BD: retn    4
