0x5CF980: push    esi
0x5CF981: mov     esi, ecx
0x5CF983: mov     byte ptr [esi+50h], 2
0x5CF987: call    sub_57BD80
0x5CF98C: cmp     dword ptr [esi+48h], 0
0x5CF990: mov     dword ptr [esi+3Ch], 0
0x5CF997: jz      short loc_5CF9A2
0x5CF999: push    0; ArgList
0x5CF99B: mov     ecx, esi
0x5CF99D: call    sub_5CEF60
0x5CF9A2: pop     esi
0x5CF9A3: retn    8
