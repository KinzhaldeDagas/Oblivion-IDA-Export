0x98A1B9: push    0Ch
0x98A1BB: push    offset stru_AFFC08
0x98A1C0: call    __SEH_prolog4
0x98A1C5: call    __getptd
0x98A1CA: mov     esi, eax
0x98A1CC: mov     eax, dword_B318B0
0x98A1D1: test    [esi+70h], eax
0x98A1D4: jz      short loc_98A1F8
0x98A1D6: cmp     dword ptr [esi+6Ch], 0
0x98A1DA: jz      short loc_98A1F8
0x98A1DC: call    __getptd
0x98A1E1: mov     esi, [eax+6Ch]
