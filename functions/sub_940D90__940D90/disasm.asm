0x940D90: push    ebx
0x940D91: push    esi
0x940D92: mov     esi, ecx
0x940D94: push    edi
0x940D95: mov     word ptr [esi+6], 1
0x940D9B: mov     dword ptr [esi], offset off_AA21EC
0x940DA1: xor     ebx, ebx
0x940DA3: lea     edi, [esi+14h]
0x940DA6: mov     ecx, edi
0x940DA8: mov     [esi+8], ebx
0x940DAB: mov     [esi+0Ch], ebx
0x940DAE: mov     dword ptr [esi+10h], 80000000h
0x940DB5: call    sub_8B0E10
0x940DBA: lea     ecx, [esi+2Ch]
0x940DBD: mov     [esi+20h], ebx
0x940DC0: mov     [esi+24h], ebx
0x940DC3: mov     dword ptr [esi+28h], 80000000h
0x940DCA: call    sub_942B70
0x940DCF: lea     ecx, [esi+38h]
0x940DD2: call    sub_942B70
0x940DD7: lea     ecx, [esi+54h]
0x940DDA: mov     dword ptr [esi+44h], 0FFFFFFFFh
0x940DE1: mov     dword ptr [esi+48h], 0FFFFFFFFh
0x940DE8: mov     [esi+4Ch], ebx
0x940DEB: mov     [esi+50h], ebx
0x940DEE: call    sub_8B0E10
0x940DF3: lea     ecx, [esi+60h]
0x940DF6: call    sub_8B0E10
0x940DFB: push    0FFFFFFFFh
0x940DFD: push    offset unk_BA8764
0x940E02: mov     ecx, edi
0x940E04: call    sub_8B0E80
0x940E09: push    0FFFFFFFFh
0x940E0B: push    offset unk_BA871C
0x940E10: mov     ecx, edi
0x940E12: call    sub_8B0E80
0x940E17: push    0FFFFFFFFh
0x940E19: push    offset unk_BA8788
0x940E1E: mov     ecx, edi
0x940E20: call    sub_8B0E80
0x940E25: pop     edi
0x940E26: mov     eax, esi
0x940E28: pop     esi
0x940E29: pop     ebx
0x940E2A: retn
