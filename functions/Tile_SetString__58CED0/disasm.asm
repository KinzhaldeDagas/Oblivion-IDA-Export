0x58CED0: mov     eax, [esp+trait]
0x58CED4: push    eax; trait
0x58CED5: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58CEDA: test    eax, eax
0x58CEDC: jz      short locret_58CEEA
0x58CEDE: mov     ecx, [esp+arg_4]
0x58CEE2: push    ecx
0x58CEE3: mov     ecx, eax
0x58CEE5: call    sub_58CA50
0x58CEEA: retn    8
