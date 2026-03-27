0x90D960: push    ebx
0x90D961: mov     ebx, [esp+4+arg_0]
0x90D965: push    ebp
0x90D966: push    esi
0x90D967: mov     esi, ecx
0x90D969: mov     [esi], ebx
0x90D96B: push    edi
0x90D96C: xor     edi, edi
0x90D96E: mov     [esi+4], edi
0x90D971: mov     [esi+8], edi
0x90D974: mov     ebp, 80000000h
0x90D979: mov     [esi+0Ch], ebp
0x90D97C: lea     eax, [ebx+4]
0x90D97F: push    eax
0x90D980: lea     ecx, [esi+20h]
0x90D983: mov     [esi+10h], edi
0x90D986: mov     [esi+14h], edi
0x90D989: mov     [esi+18h], ebp
0x90D98C: call    sub_942D70
0x90D991: mov     [esi+30h], edi
0x90D994: mov     [esi+34h], edi
0x90D997: mov     [esi+38h], ebp
0x90D99A: mov     [esi+3Ch], edi
0x90D99D: mov     [esi+40h], edi
0x90D9A0: mov     [esi+44h], ebp
0x90D9A3: mov     al, [ebx+5]
0x90D9A6: mov     cl, ds:0B2FDE5h
0x90D9AC: cmp     cl, al
0x90D9AE: pop     edi
0x90D9AF: setnz   dl
0x90D9B2: mov     [esi+48h], dl
0x90D9B5: mov     eax, esi
0x90D9B7: pop     esi
0x90D9B8: pop     ebp
0x90D9B9: pop     ebx
0x90D9BA: retn    4
