0x58CA00: push    esi
0x58CA01: mov     esi, ecx
0x58CA03: fld     dword ptr [esi+4]
0x58CA06: mov     byte ptr [esi+1Ah], 1
0x58CA0A: fld     [esp+4+value]
0x58CA0E: fucompp
0x58CA10: fnstsw  ax
0x58CA12: test    ah, 44h
0x58CA15: jp      short loc_58CA1F
0x58CA17: cmp     word ptr [esi+18h], 0FDEh
0x58CA1D: jnz     short loc_58CA45
0x58CA1F: push    0; a3
0x58CA21: push    offset EmptyString; a2
0x58CA26: lea     ecx, [esi+8]; this
0x58CA29: call    BSStringT_Set
0x58CA2E: fld     [esp+4+value]
0x58CA32: mov     ecx, esi; this
0x58CA34: fstp    dword ptr [esi+4]
0x58CA37: call    Tile__Value__ClearActions; Verified: unlinks and frees action nodes reachable through Value +0x10 sentinel; also removes crosslinks at action +0x10/+0x14. Called before CalculateValue by numeric setter.
0x58CA3C: push    1; forceUpdate
0x58CA3E: mov     ecx, esi; this
0x58CA40: call    Tile__Value__CalculateValue; Verified: numeric setter invokes CalculateValue with the same Value receiver and force=true. Dependency updates occur synchronously; no extra tile-wide call is needed for propagation.
0x58CA45: pop     esi
0x58CA46: retn    4
