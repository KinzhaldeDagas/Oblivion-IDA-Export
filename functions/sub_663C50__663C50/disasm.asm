0x663C50: mov     eax, [esp+actorValue]; Skill-use requirement recalculation evaluates the curve with the raw skill level, including level 0; only an exactly-zero computed result is replaced with 1.
0x663C54: sub     esp, 8
0x663C57: push    edi
0x663C58: mov     edi, ecx
0x663C5A: lea     ecx, [eax-0Ch]
0x663C5D: cmp     ecx, 14h
0x663C60: ja      loc_663D26
0x663C66: push    ebx
0x663C67: push    esi
0x663C68: push    eax
0x663C69: push    2
0x663C6B: call    ActorValue_GetGroupOffsetFromAV; RealArenaTraining fidelity pass: ActorValue_GetGroupOffsetFromAV(group, actorValue). Player skill-progress code calls this with group 2 before indexing player skillExp/requiredSkillExp.
0x663C70: mov     ecx, ds:0B33A98h; this
0x663C76: movsx   eax, al
0x663C79: add     esp, 8
0x663C7C: push    eax; skillIndex
0x663C7D: mov     [esp+18h+var_4], eax
0x663C81: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x663C86: mov     esi, eax
0x663C88: xor     ebx, ebx
0x663C8A: cmp     esi, ebx
0x663C8C: jz      loc_663D24
0x663C92: mov     eax, [esi+2Ch]
0x663C95: push    ebp
0x663C96: push    eax
0x663C97: mov     ecx, edi
0x663C99: call    Actor_GetBaseCalcAVi
0x663C9E: mov     ecx, edi
0x663CA0: mov     ebp, eax
0x663CA2: mov     [esp+18h+specializationSkill], bl
0x663CA6: mov     byte ptr [esp+18h+actorValue], bl
0x663CAA: call    Actor_GetBaseClass; Actor_GetBaseClass: if Actor_IsNPC, calls GetBaseForm and returns dword [base+0x104]. Direct runtime accessor for NPC class.
0x663CAF: mov     edx, [eax+0Ch]
0x663CB2: cmp     edx, ds:0B37D00h
0x663CB8: jz      short loc_663CEA
0x663CBA: mov     ebx, [esi+34h]; Read TESSkill_Data::specialization at TESSkill+0x34 for the independent specialization-speed comparison.
0x663CBD: mov     ecx, edi
0x663CBF: call    Actor_GetBaseClass; Actor_GetBaseClass: if Actor_IsNPC, calls GetBaseForm and returns dword [base+0x104]. Direct runtime accessor for NPC class.
0x663CC4: mov     ecx, eax; this
0x663CC6: call    Shared_GetDwordAtOffset40; TESClass call context: read TESClass::specialization at +0x40 through the linker-shared dword accessor, then compare it with TESSkill::specialization at +0x34.
0x663CCB: mov     esi, [esi+2Ch]
0x663CCE: cmp     eax, ebx
0x663CD0: setz    al
0x663CD3: push    esi; actorValue
0x663CD4: mov     ecx, edi
0x663CD6: mov     [esp+1Ch+specializationSkill], al
0x663CDA: call    Actor_GetBaseClass; Actor_GetBaseClass: if Actor_IsNPC, calls GetBaseForm and returns dword [base+0x104]. Direct runtime accessor for NPC class.
0x663CDF: mov     ecx, eax; this
0x663CE1: call    TESClass_IsMajorSkillAV; The sole required-use membership split is TESClass_IsMajorSkillAV: true selects g_fSkillUseMajorMult, false selects g_fSkillUseMinorMult. The chargen placeholder class bypass also leaves both flags false.
0x663CE6: mov     byte ptr [esp+18h+actorValue], al
0x663CEA: mov     ecx, [esp+18h+actorValue]
0x663CEE: mov     edx, dword ptr [esp+18h+specializationSkill]
0x663CF2: push    ecx; isMajorSkill
0x663CF3: push    edx; matchesClassSpecialization
0x663CF4: push    ebp; baseSkillValue
0x663CF5: call    Calc_RequiredSkillUseExperience; Required use = pow(baseSkillValue * g_fSkillUseFactor, g_fSkillUseExp) * (specializationMatch ? g_fSkillUseSpecMult : 1) * (majorMatch ? g_fSkillUseMajorMult : g_fSkillUseMinorMult). Native defaults: 1.0, 1.0, 0.75, 0.75, 1.25.
0x663CFA: fstp    [esp+24h+actorValue]
0x663CFE: fldz
0x663D00: add     esp, 0Ch
0x663D03: fcomp   [esp+18h+actorValue]
0x663D07: pop     ebp
0x663D08: fnstsw  ax
0x663D0A: test    ah, 44h
0x663D0D: jp      short loc_663D15
0x663D0F: fld1
0x663D11: fstp    [esp+14h+actorValue]
0x663D15: fld     [esp+14h+actorValue]
0x663D19: mov     eax, [esp+14h+var_4]
0x663D1D: fstp    dword ptr [edi+eax*4+7A4h]
0x663D24: pop     esi
0x663D25: pop     ebx
0x663D26: pop     edi
0x663D27: add     esp, 8
0x663D2A: retn    4
