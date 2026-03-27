0x413A95: cmp     eax, 54414552h
0x413A9A: push    esi
0x413A9B: jg      EffectItem_GetQualifiedName_SkillAttr___SwitchEffectCode_3
0x413AA1: jz      short EffectItem_GetQualifiedName_SkillAttr___Restore
0x413AA3: cmp     eax, 4B535244h
0x413AA8: jg      short EffectItem_GetQualifiedName_SkillAttr___SwitchEffectCode_2
0x413AAA: jz      EffectItem_GetQualifiedName_SkillAttr___Drain
0x413AB0: cmp     eax, 4B534241h
0x413AB5: jz      short EffectItem_GetQualifiedName_SkillAttr___Absorb
0x413AB7: cmp     eax, 4B534F46h
0x413ABC: jnz     short EffectItem_GetQualifiedName_SkillAttr___GetEffectName
