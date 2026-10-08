0x58CF10: mov     eax, [esp+action]
0x58CF14: mov     edx, [esp+sourceTrait]
0x58CF18: push    eax; opcode
0x58CF19: mov     eax, [esp+4+source]
0x58CF1D: push    edx; sourceTrait
0x58CF1E: mov     edx, [esp+8+trait]
0x58CF22: push    eax; source
0x58CF23: push    edx; trait
0x58CF24: call    Tile__GetOrCreateValue; Verified: sorted trait lookup; if absent allocates 0x1C bytes, constructs Value at 0x589DF0, stores owner Tile at +0 and inserts into Tile value list. Corrects misleading existing-property-only interpretation.
0x58CF29: mov     ecx, eax; this
0x58CF2B: call    Tile__Value__AddReferenceAction; Verified: creates 0x18-byte action, seeds operand from source Tile trait, appends to destination action chain, links same action into source Value reaction chain, then CalculateValue(destination,false). Source selector is resolved before this call; dependency is not re-resolved by sibling/listindex on every evaluation. Fallout named AddAction overload at 0x827DF270.
0x58CF30: retn    10h
