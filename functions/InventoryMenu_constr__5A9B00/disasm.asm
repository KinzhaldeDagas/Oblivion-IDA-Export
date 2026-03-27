0x5A9B00: push    esi
0x5A9B01: mov     esi, ecx
0x5A9B03: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5A9B08: fldz
0x5A9B0A: xor     eax, eax
0x5A9B0C: fst     dword ptr [esi+48h]
0x5A9B0F: mov     [esi+28h], eax
0x5A9B12: fstp    dword ptr [esi+4Ch]
0x5A9B15: mov     [esi+2Ch], eax
0x5A9B18: mov     [esi+30h], eax
0x5A9B1B: mov     [esi+34h], eax
0x5A9B1E: mov     [esi+3Ch], eax
0x5A9B21: mov     [esi+50h], eax
0x5A9B24: mov     ds:0B3B3D9h, al
0x5A9B29: mov     dword ptr [esi], offset ??_7InventoryMenu@@6B@; const InventoryMenu::`vftable'
0x5A9B2F: mov     dword ptr [esi+40h], 1Fh
0x5A9B36: mov     byte ptr [esi+44h], 0FFh
0x5A9B3A: mov     eax, esi
0x5A9B3C: pop     esi
0x5A9B3D: retn
