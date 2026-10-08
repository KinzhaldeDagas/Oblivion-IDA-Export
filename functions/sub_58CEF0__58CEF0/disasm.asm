0x58CEF0: mov     eax, [esp+arg_8]
0x58CEF4: mov     edx, [esp+arg_4]
0x58CEF8: push    eax
0x58CEF9: mov     eax, [esp+4+trait]
0x58CEFD: push    edx
0x58CEFE: push    eax; trait
0x58CEFF: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58CF04: mov     ecx, eax
0x58CF06: call    sub_58CB70
0x58CF0B: retn    0Ch
