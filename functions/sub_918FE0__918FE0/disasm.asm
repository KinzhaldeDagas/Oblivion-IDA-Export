0x918FE0: mov     ecx, ds:0BA7D98h
0x918FE6: mov     eax, [ecx]
0x918FE8: push    esi
0x918FE9: push    32h ; '2'
0x918FEB: push    34h ; '4'
0x918FED: call    dword ptr [eax+10h]
0x918FF0: mov     ecx, [esp+4+arg_0]
0x918FF4: mov     esi, eax
0x918FF6: push    ecx
0x918FF7: mov     ecx, esi
0x918FF9: mov     word ptr [esi+4], 34h ; '4'
0x918FFF: call    sub_9491F0
0x919004: xor     ecx, ecx
0x919006: lea     eax, [esi+8]
0x919009: mov     dword ptr [esi], offset off_A9D2A0
0x91900F: mov     dword ptr [esi+20h], offset off_A9D280
0x919016: mov     [esi+28h], ecx
0x919019: mov     [esi+2Ch], ecx
0x91901C: mov     dword ptr [esi+30h], 447A0000h
0x919023: mov     dword ptr [eax], offset off_A9D288
0x919029: pop     esi
0x91902A: retn
