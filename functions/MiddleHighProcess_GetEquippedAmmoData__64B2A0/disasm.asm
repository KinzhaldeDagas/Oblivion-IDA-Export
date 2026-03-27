0x64B2A0: cmp     [esp+arg_0], 0
0x64B2A5: push    esi
0x64B2A6: mov     esi, ecx
0x64B2A8: jnz     short loc_64B2B4
0x64B2AA: mov     eax, [esi+0ECh]
0x64B2B0: pop     esi
0x64B2B1: retn    4
0x64B2B4: mov     ecx, [esi+0ECh]
0x64B2BA: test    ecx, ecx
0x64B2BC: jz      short loc_64B2C9
0x64B2BE: push    0
0x64B2C0: call    ContainerEntryExtraData_HasWorn
0x64B2C5: test    al, al
0x64B2C7: jnz     short loc_64B2AA
0x64B2C9: xor     eax, eax
0x64B2CB: pop     esi
0x64B2CC: retn    4
