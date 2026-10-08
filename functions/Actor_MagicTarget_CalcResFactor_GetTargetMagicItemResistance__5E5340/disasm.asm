0x5E5340: cmp     [esp+arg_14], 0; AVU decode: choose target magic-item resistance AV. Uses ResistPoison (0x43) for poison path/flag, otherwise ResistMagic (0x40) when the magic item type check allows it.
0x5E5345: jnz     short loc_5E535A
0x5E5347: mov     eax, [ebx]
0x5E5349: mov     edx, [eax+18h]
0x5E534C: mov     ecx, ebx
0x5E534E: call    edx
0x5E5350: cmp     eax, 5
0x5E5353: mov     ebx, 40h ; '@'; Ordinary hostile magic uses actor value 0x40 ResistMagic as the item-level resistance bucket; poison uses 0x43 instead.
0x5E5358: jnz     short loc_5E535F
0x5E535A: mov     ebx, 43h ; 'C'
0x5E535F: mov     eax, [edi]
0x5E5361: mov     edx, [eax+288h]
0x5E5367: push    ebx
0x5E5368: mov     ecx, edi
0x5E536A: call    edx
0x5E536C: fstp    [esp+4+arg_C]; Stores target current float magic-item resistance into the Calc_MagicTargetResistanceFactor arg_C slot (entry +0x10).
