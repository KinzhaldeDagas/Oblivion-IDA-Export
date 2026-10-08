0x58CEB0: mov     eax, [esp+this]; Sets an existing numeric Tile property by code. RaceSex sliders drive XML synchronization through user3 (0xFB1); the committed slider value is exposed through user0 (0xFAE).
0x58CEB4: push    eax; trait
0x58CEB5: call    Tile__GetOrCreateValue; Immediately call Tile_GetPropertyByCode_ on this. Tile_SetFloat tolerates a missing property, but not a null Tile object.
0x58CEBA: test    eax, eax
0x58CEBC: jz      short locret_58CECD
0x58CEBE: fld     [esp+a2]
0x58CEC2: push    ecx
0x58CEC3: mov     ecx, eax; this
0x58CEC5: fstp    [esp+4+value]; value
0x58CEC8: call    Tile__Value__SetFloat; Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
0x58CECD: retn    8
