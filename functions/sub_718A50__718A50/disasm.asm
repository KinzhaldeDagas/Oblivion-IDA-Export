0x718A50: push    esi
0x718A51: mov     esi, ecx
0x718A53: call    sub_70FD10
0x718A58: fld1
0x718A5A: mov     eax, ds:0B3F9A8h
0x718A5F: mov     [esi+24h], eax
0x718A62: mov     ecx, ds:0B3F9ACh
0x718A68: mov     [esi+28h], ecx
0x718A6B: mov     edx, ds:0B3F9B0h
0x718A71: fstp    dword ptr [esi+30h]
0x718A74: mov     [esi+2Ch], edx
0x718A77: pop     esi
0x718A78: retn
