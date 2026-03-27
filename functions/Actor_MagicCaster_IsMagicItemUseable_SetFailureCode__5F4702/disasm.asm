0x5F4702: test    esi, esi
0x5F4704: pop     ebp
0x5F4705: jz      short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4707: cmp     [esp-4+arg_E], 0
0x5F470C: jz      short loc_5F4716
0x5F470E: mov     dword ptr [esi], 2
0x5F4714: jmp     short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4716: cmp     [esp-4+arg_D], 0
0x5F471B: jz      short loc_5F4725
0x5F471D: mov     dword ptr [esi], 6
0x5F4723: jmp     short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4725: cmp     [esp-4+arg_1C], 0
0x5F472A: jnz     short loc_5F4734
0x5F472C: mov     dword ptr [esi], 1
0x5F4732: jmp     short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4734: cmp     [esp-4+arg_F], 0
0x5F4739: jnz     short loc_5F4743
0x5F473B: mov     dword ptr [esi], 3
0x5F4741: jmp     short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4743: test    bl, bl
0x5F4745: jz      short Actor_MagicCaster_IsMagicItemUseable___SwitchMagicItemType
0x5F4747: mov     dword ptr [esi], 5
