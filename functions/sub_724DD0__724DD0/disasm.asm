0x724DD0: push    esi
0x724DD1: mov     esi, ecx
0x724DD3: mov     eax, [esi+8]
0x724DD6: push    edi
0x724DD7: mov     edi, [esp+8+arg_0]
0x724DDB: mov     [edi+8], eax
0x724DDE: mov     ecx, [esi+0Ch]
0x724DE1: mov     [edi+0Ch], ecx
0x724DE4: mov     edx, [esi+10h]
0x724DE7: mov     [edi+10h], edx
0x724DEA: mov     eax, [esi+14h]
0x724DED: mov     [edi+14h], eax
0x724DF0: mov     ecx, [esi+18h]
0x724DF3: mov     [edi+18h], ecx
0x724DF6: mov     edx, [esi+1Ch]
0x724DF9: mov     [edi+1Ch], edx
0x724DFC: mov     eax, [esi+20h]
0x724DFF: push    eax
0x724E00: mov     ecx, edi
0x724E02: call    sub_724AB0
0x724E07: mov     ecx, [esi+20h]
0x724E0A: mov     edx, [esi+24h]
0x724E0D: mov     eax, [edi+24h]
0x724E10: shl     ecx, 4
0x724E13: push    ecx; Size
0x724E14: push    edx; Src
0x724E15: push    eax; Dst
0x724E16: call    _memcpy
0x724E1B: add     esp, 0Ch
0x724E1E: pop     edi
0x724E1F: pop     esi
0x724E20: retn    8
