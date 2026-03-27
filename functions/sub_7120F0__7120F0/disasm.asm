0x7120F0: push    esi
0x7120F1: push    edi
0x7120F2: mov     edi, [esp+8+arg_0]
0x7120F6: mov     eax, [edi]
0x7120F8: mov     edx, [eax+4]
0x7120FB: mov     esi, ecx
0x7120FD: mov     ecx, edi
0x7120FF: call    edx
0x712101: test    al, al
0x712103: jnz     short loc_712114
0x712105: pop     edi
0x712106: mov     dword ptr [esi+21Ch], 0
0x712110: pop     esi
0x712111: retn    4
0x712114: mov     eax, [esi]
0x712116: mov     edx, [eax+3Ch]
0x712119: mov     ecx, esi
0x71211B: mov     [esi+21Ch], edi
0x712121: call    edx
0x712123: pop     edi
0x712124: mov     dword ptr [esi+21Ch], 0
0x71212E: pop     esi
0x71212F: retn    4
