0x64B2D0: cmp     [esp+arg_0], 0
0x64B2D5: push    esi
0x64B2D6: mov     esi, ecx
0x64B2D8: jnz     short loc_64B2E4
0x64B2DA: mov     eax, [esi+0F0h]
0x64B2E0: pop     esi
0x64B2E1: retn    4
0x64B2E4: mov     ecx, [esi+0F0h]
0x64B2EA: test    ecx, ecx
0x64B2EC: jz      short loc_64B2F9
0x64B2EE: push    0
0x64B2F0: call    ContainerEntryExtraData_HasWorn
0x64B2F5: test    al, al
0x64B2F7: jnz     short loc_64B2DA
0x64B2F9: xor     eax, eax
0x64B2FB: pop     esi
0x64B2FC: retn    4
