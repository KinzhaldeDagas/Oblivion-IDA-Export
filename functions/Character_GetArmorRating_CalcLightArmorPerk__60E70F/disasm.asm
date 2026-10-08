0x60E70F: fld     dword ptr [ebp+108h]
0x60E715: push    1Bh; actorValue
0x60E717: mov     ecx, ebp; this
0x60E719: fstp    [esp+4+arg_8]
0x60E71D: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x60E722: cmp     eax, 4
0x60E725: jnz     short loc_60E752
0x60E727: push    1
0x60E729: mov     ecx, ebp
0x60E72B: call    Actor_GetArmorCoverage; Light Master purity call: Actor_GetArmorCoverage(actor, heavy=1). A third-class Medium item must make this test nonzero so native Light Master cannot multiply Medium/mixed sets.
0x60E730: test    eax, eax
0x60E732: jnz     short loc_60E752
0x60E734: push    eax
0x60E735: mov     ecx, ebp
0x60E737: call    Actor_GetArmorCoverage; Light Master minimum-coverage call: Actor_GetArmorCoverage(actor, heavy=0), compared with the weighted minimum at 0xB37260. Medium-only mastery should mirror this minimum-coverage gate after proving every worn armor form is Medium.
0x60E73C: cmp     eax, ds:0B37260h
0x60E742: jl      short loc_60E752
0x60E744: fld     dword ptr ds:0B37258h
0x60E74A: fmul    [esp+arg_8]
0x60E74E: fstp    [esp+arg_8]
0x60E752: mov     ecx, ebp
0x60E754: call    Actor_GetArmorRating; Adds Actor_GetArmorRating(this), which is GetAVfCur(0x2B DefendBonus), to the worn-armor total before the fMaxArmorRating cap.
0x60E759: fadd    [esp+arg_8]
0x60E75D: pop     ebp
0x60E75E: pop     ebx
0x60E75F: fstp    [esp-8+arg_C]
0x60E763: fldz
0x60E765: fld     dword ptr ds:0B37D20h
0x60E76B: fcom    st(1)
0x60E76D: fnstsw  ax
0x60E76F: fstp    st(1)
0x60E771: test    ah, 41h
0x60E774: jnz     short loc_60E79F; Vanilla fMaxArmorRating cap branch. AVU jumps to the no-cap return so its wrapper can apply DR to worn armor + DefendBonus first, then reapply fMaxArmorRating.
0x60E776: fld     [esp-8+arg_C]
0x60E77A: fcom    st(1)
0x60E77C: fnstsw  ax
0x60E77E: test    ah, 5
0x60E781: jp      short loc_60E791
0x60E783: fstp    st(1)
0x60E785: fstp    [esp-8+arg_8]
0x60E789: fld     [esp-8+arg_8]
0x60E78D: add     esp, 50h
0x60E790: retn
0x60E791: fstp    st
0x60E793: fstp    [esp-8+arg_8]
0x60E797: fld     [esp-8+arg_8]
0x60E79B: add     esp, 50h
0x60E79E: retn
0x60E79F: fstp    st
0x60E7A1: fld     [esp-8+arg_C]
0x60E7A5: fstp    [esp-8+arg_8]
0x60E7A9: fld     [esp-8+arg_8]
0x60E7AD: add     esp, 50h
0x60E7B0: retn
