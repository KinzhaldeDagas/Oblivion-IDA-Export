0x8F8090: mov     ecx, ds:0BA7D98h
0x8F8096: mov     eax, [ecx]
0x8F8098: push    esi
0x8F8099: push    1Ch
0x8F809B: push    2Ch ; ','
0x8F809D: call    dword ptr [eax+10h]
0x8F80A0: mov     ecx, [esp+4+arg_C]
0x8F80A4: mov     esi, eax
0x8F80A6: mov     [esi+8], ecx
0x8F80A9: mov     ecx, [esp+4+arg_0]
0x8F80AD: or      edx, 0FFFFFFFFh
0x8F80B0: mov     word ptr [esi+4], 2Ch ; ','
0x8F80B6: mov     word ptr [esi+6], 1
0x8F80BC: mov     dword ptr [esi], offset off_A9B63C
0x8F80C2: mov     [esi+1Ch], edx
0x8F80C5: mov     [esi+20h], edx
0x8F80C8: mov     [esi+24h], edx
0x8F80CB: mov     [esi+28h], edx
0x8F80CE: mov     edx, [ecx]
0x8F80D0: lea     eax, [esi+0Ch]
0x8F80D3: push    eax
0x8F80D4: add     edx, 10h
0x8F80D7: push    edx
0x8F80D8: call    sub_8D1DB0
0x8F80DD: add     esp, 8
0x8F80E0: mov     dword ptr [esi], offset off_A9B670
0x8F80E6: mov     eax, esi
0x8F80E8: pop     esi
0x8F80E9: retn
