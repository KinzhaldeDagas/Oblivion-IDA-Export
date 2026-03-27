0x4EF100: push    esi
0x4EF101: mov     esi, ecx
0x4EF103: mov     ecx, [esi+54h]
0x4EF106: test    ecx, ecx
0x4EF108: jz      short loc_4EF11E
0x4EF10A: mov     eax, [ecx]
0x4EF10C: mov     edx, [eax+10h]
0x4EF10F: push    1
0x4EF111: call    edx
0x4EF113: mov     eax, [esp+4+arg_0]
0x4EF117: mov     [esi+54h], eax
0x4EF11A: pop     esi
0x4EF11B: retn    4
0x4EF11E: mov     ecx, [esp+4+arg_0]
0x4EF122: mov     [esi+54h], ecx
0x4EF125: pop     esi
0x4EF126: retn    4
