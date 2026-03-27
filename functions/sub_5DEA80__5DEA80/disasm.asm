0x5DEA80: push    esi
0x5DEA81: mov     esi, ecx
0x5DEA83: mov     eax, [esi]
0x5DEA85: mov     edx, [eax+4]
0x5DEA88: call    edx
0x5DEA8A: mov     ecx, [esp+4+arg_0]
0x5DEA8E: mov     edx, [ecx]
0x5DEA90: mov     [eax+8], edx
0x5DEA93: mov     ecx, [ecx+4]
0x5DEA96: mov     [eax+0Ch], ecx
0x5DEA99: mov     dword ptr [eax+4], 0
0x5DEAA0: mov     edx, [esi+4]
0x5DEAA3: mov     [eax], edx
0x5DEAA5: mov     ecx, [esi+4]
0x5DEAA8: test    ecx, ecx
0x5DEAAA: jz      short loc_5DEABA
0x5DEAAC: mov     [ecx+4], eax
0x5DEAAF: add     dword ptr [esi+0Ch], 1
0x5DEAB3: mov     [esi+4], eax
0x5DEAB6: pop     esi
0x5DEAB7: retn    4
0x5DEABA: add     dword ptr [esi+0Ch], 1
0x5DEABE: mov     [esi+8], eax
0x5DEAC1: mov     [esi+4], eax
0x5DEAC4: pop     esi
0x5DEAC5: retn    4
