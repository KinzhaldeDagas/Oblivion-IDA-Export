0x46F600: cmp     [eax], ecx
0x46F602: jz      short TESSpellList_HasSpell___Return_1
0x46F604: mov     eax, [eax+4]
0x46F607: test    eax, eax
0x46F609: jnz     short TESSpellList_HasSpell___SpellListLoop
