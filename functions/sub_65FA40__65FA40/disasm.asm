0x65FA40: fldz; Store raw Oblivion skill-use progress. Negative inputs clamp to 0; only native SkillActorValue 0x0C..0x20 maps into PlayerCharacter::skillExp[21]. This helper does not apply major/minor multipliers.
0x65FA42: push    esi
0x65FA43: fcom    [esp+4+progress]
0x65FA47: mov     esi, ecx
0x65FA49: fnstsw  ax
0x65FA4B: test    ah, 41h
0x65FA4E: jnz     short loc_65FA56; Clamp negative progress to 0. Positive progress is not capped at the current requirement, allowing excess to carry across an increase.
0x65FA50: fstp    [esp+4+progress]
0x65FA54: jmp     short loc_65FA58
0x65FA56: fstp    st
0x65FA58: mov     eax, [esp+4+actorValue]
0x65FA5C: lea     ecx, [eax-0Ch]
0x65FA5F: cmp     ecx, 14h
0x65FA62: ja      short loc_65FA7D; Reject actor values outside the fixed 21-skill range 0x0C..0x20.
0x65FA64: push    eax
0x65FA65: push    2
0x65FA67: call    ActorValue_GetGroupOffsetFromAV; Oblivion group 2 maps native SkillActorValue 0x0C..0x20 to skillExp index 0..20.
0x65FA6C: fld     [esp+0Ch+progress]
0x65FA70: movsx   edx, al
0x65FA73: add     esp, 8
0x65FA76: fstp    dword ptr [esi+edx*4+130h]
0x65FA7D: pop     esi
0x65FA7E: retn    8
