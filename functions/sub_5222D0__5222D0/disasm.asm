0x5222D0: sub     esp, 1Ch; Authoritative Oblivion TESNPC auto-stat calculation. For each of 21 skills: major = 25+(level-1), non-major = 5+0.1*(level-1), then add 5+0.5*(level-1) for matching class specialization, then the signed race bonus, cap at 100, and store in TESNPC::baseSkills. The chargen placeholder class suppresses major/specialization contributions. Attributes start from sex-specific race values, add configured +5 class-primary bonuses, then add (level-1) per governed major skill or 0.2*(level-1) per governed non-major skill, capped at 100.
0x5222D3: push    edi
0x5222D4: mov     edi, ecx
0x5222D6: lea     ecx, [edi+24h]
0x5222D9: call    TESActorBaseData_GetLevel
0x5222DE: movsx   eax, ax
0x5222E1: sub     eax, 1
0x5222E4: cmp     dword ptr [edi+0E8h], 0
0x5222EB: mov     [esp+20h+var_14], eax
0x5222EF: jz      loc_522759
0x5222F5: mov     eax, [edi+104h]
0x5222FB: test    eax, eax
0x5222FD: jz      loc_522759
0x522303: cmp     dword ptr [edi+0Ch], 7
0x522307: mov     [esp+20h+var_19], 0
0x52230C: jnz     short loc_522313
0x52230E: mov     [esp+20h+var_19], 1
0x522313: cmp     [esp+20h+var_19], 0
0x522318: mov     [esp+20h+var_1A], 1
0x52231D: jz      short loc_52232F
0x52231F: mov     ecx, ds:0B37D00h
0x522325: cmp     ecx, [eax+0Ch]
0x522328: jnz     short loc_52232F
0x52232A: mov     [esp+20h+var_1A], 0
0x52232F: push    esi
0x522330: xor     esi, esi
0x522332: push    ebx
0x522333: mov     [esp+28h+var_4], esi
0x522337: push    ebp
0x522338: push    esi
0x522339: push    0
0x52233B: call    ActorValue_GetAVFromGroupOffset; mwMediumArmor: Oblivion group 2 maps skill offset to actor value by adding 0x0C. OpenMW/Morrowind skill index 2 is MediumArmor, but Oblivion offset 2 becomes actor value 0x0E (Blade). Do not pass Morrowind skill indexes directly through this helper.
0x522340: mov     ebx, eax
0x522342: add     esp, 8
0x522345: cmp     ebx, 6
0x522348: jnz     short loc_522355
0x52234A: cmp     [esp+2Ch+var_19], 0
0x52234F: jz      loc_5224A2
0x522355: test    byte ptr [edi+28h], 1
0x522359: mov     eax, [edi+0E8h]
0x52235F: push    ebx
0x522360: jz      short loc_52237A
0x522362: lea     ecx, [eax+80h]
0x522368: call    TESAttributes_GetAVi
0x52236D: movzx   edx, al
0x522370: mov     [esp+2Ch+var_C], edx
0x522374: fild    [esp+2Ch+var_C]
0x522378: jmp     short loc_52238D
0x52237A: lea     ecx, [eax+74h]
0x52237D: call    TESAttributes_GetAVi
0x522382: movzx   eax, al
0x522385: mov     [esp+2Ch+var_C], eax
0x522389: fild    [esp+2Ch+var_C]
0x52238D: cmp     [esp+2Ch+var_1A], 0
0x522392: fstp    [esp+2Ch+var_18]
0x522396: jz      loc_52246E
0x52239C: mov     ecx, [edi+104h]; this
0x5223A2: call    Shared_GetDwordAtOffset38; TESClass context: read primaryAttribute1 through the linker-folded +0x38 getter.
0x5223A7: cmp     ebx, eax
0x5223A9: jnz     short loc_5223B3
0x5223AB: fld     dword ptr ds:0B362E4h; If this attribute is TESClass::primaryAttribute1, add g_fAttributeClassPrimaryBonus (default +5).
0x5223B1: jmp     short loc_5223C8
0x5223B3: mov     ecx, [edi+104h]; this
0x5223B9: call    Shared_GetDwordAtOffset3C; TESClass context: read primaryAttribute2 through the linker-folded +0x3C getter.
0x5223BE: cmp     ebx, eax
0x5223C0: jnz     short loc_5223D0
0x5223C2: fld     dword ptr ds:0B362ECh; If this attribute is TESClass::primaryAttribute2, add g_fAttributeClassSecondaryBonus (default +5).
0x5223C8: fadd    [esp+2Ch+var_18]
0x5223CC: fstp    [esp+2Ch+var_18]
0x5223D0: mov     [esp+2Ch+skillIndex], 0
0x5223D5: mov     esi, dword ptr [esp+2Ch+skillIndex]
0x5223D9: mov     ecx, ds:0B33A98h; this
0x5223DF: push    esi; skillIndex
0x5223E0: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x5223E5: cmp     [eax+30h], ebx
0x5223E8: jnz     short loc_522458
0x5223EA: push    esi
0x5223EB: push    2
0x5223ED: call    ActorValue_GetAVFromGroupOffset; Oblivion group 2 maps native skill index 0..20 to SkillActorValue 0x0C..0x20.
0x5223F2: add     esp, 8
0x5223F5: mov     ebp, eax
0x5223F7: mov     [esp+2Ch+var_C], 0FFFFFFFFh
0x5223FF: xor     esi, esi
0x522401: mov     ecx, [edi+104h]; this
0x522407: push    esi; index
0x522408: call    TESClass_GetMajorSkillAV; TESNPC auto-stat major branch: scan exactly seven class major AVs; a match selects the governed-major attribute contribution and major skill base formula.
0x52240D: cmp     eax, ebp
0x52240F: jnz     short loc_522435
0x522411: push    eax
0x522412: push    2
0x522414: call    ActorValue_GetGroupOffsetFromAV; Oblivion group 2 maps a SkillActorValue back to its native skill index for TESSkill lookup.
0x522419: mov     ecx, ds:0B33A98h; this
0x52241F: add     esp, 8
0x522422: push    eax; skillIndex
0x522423: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x522428: cmp     [eax+30h], ebx
0x52242B: jnz     short loc_522435
0x52242D: mov     [esp+2Ch+var_C], 1
0x522435: add     esi, 1
0x522438: cmp     esi, 7
0x52243B: jl      short loc_522401
0x52243D: mov     eax, [esp+2Ch+var_C]
0x522441: fild    [esp+2Ch+var_14]
0x522445: sub     eax, 1
0x522448: jz      short loc_522450; Attribute scaling by governing skills: add (level-1) for a governed major skill; otherwise multiply by 0.2 before adding.
0x52244A: fmul    qword ptr ds:0A38538h
0x522450: fadd    [esp+2Ch+var_18]
0x522454: fstp    [esp+2Ch+var_18]
0x522458: mov     al, [esp+2Ch+skillIndex]
0x52245C: add     al, 1
0x52245E: cmp     al, 15h
0x522460: mov     [esp+2Ch+skillIndex], al
0x522464: jl      loc_5223D5
0x52246A: mov     esi, [esp+2Ch+var_4]
0x52246E: fld     [esp+2Ch+var_18]
0x522472: fcomp   qword ptr ds:0A309F0h
0x522478: fnstsw  ax
0x52247A: test    ah, 41h
0x52247D: jnz     short loc_522489
0x52247F: fld     dword ptr ds:0A2FE7Ch
0x522485: fstp    [esp+2Ch+var_18]
0x522489: fld     [esp+2Ch+var_18]
0x52248D: fistp   dword ptr [esp+2Ch+var_8]
0x522491: mov     ecx, dword ptr [esp+2Ch+var_8]
0x522495: push    ecx; char
0x522496: push    ebx; int
0x522497: lea     ecx, [edi+88h]; int
0x52249D: call    TESAttributes_SetAVi; TESAttributes_SetAVi: attributes are stored as single bytes in TESAttributes. AVU base-AV guards clamp attributes to 0..configuredLimit before player integer base setters/modifiers reach this storage.
0x5224A2: add     esi, 1
0x5224A5: cmp     esi, 8
0x5224A8: mov     [esp+2Ch+var_4], esi
0x5224AC: jl      loc_522338
0x5224B2: fild    [esp+2Ch+var_14]
0x5224B6: xor     ebx, ebx
0x5224B8: fstp    dword ptr [esp+2Ch+skillIndex]
0x5224BC: lea     esp, [esp+0]
0x5224C0: push    ebx
0x5224C1: push    2
0x5224C3: call    ActorValue_GetAVFromGroupOffset; Convert native Oblivion skill index 0..20 to SkillActorValue 0x0C..0x20 before testing major membership.
0x5224C8: add     esp, 8
0x5224CB: or      ebp, 0FFFFFFFFh
0x5224CE: cmp     [esp+2Ch+var_1A], 0
0x5224D3: mov     [esp+2Ch+var_4], eax
0x5224D7: jz      short loc_5224FF
0x5224D9: xor     esi, esi; Scans exactly seven TESClass major-skill slots using TESClass_GetMajorSkillAV. Membership controls the major versus non-major base formula.
0x5224DB: jmp     short loc_5224E0
0x5224E0: mov     ecx, [edi+104h]; this
0x5224E6: push    esi; index
0x5224E7: call    TESClass_GetMajorSkillAV; TESNPC auto-stat membership scan across exactly seven major slots. Failure is the non-major formula; no minor list or flag exists.
0x5224EC: cmp     eax, [esp+2Ch+var_4]
0x5224F0: jnz     short loc_5224F7
0x5224F2: mov     ebp, 1
0x5224F7: add     esi, 1
0x5224FA: cmp     esi, 7
0x5224FD: jl      short loc_5224E0
0x5224FF: fld     dword ptr [esp+2Ch+skillIndex]
0x522503: mov     eax, ebp
0x522505: sub     eax, 1
0x522508: jz      short loc_522518; Base skill branch: major = 25+(level-1); every skill absent from majorSkills[7] uses non-major/minor = 5+0.1*(level-1).
0x52250A: fmul    qword ptr ds:0A2FC80h
0x522510: fadd    qword ptr ds:0A3F3F0h
0x522516: jmp     short loc_52251E
0x522518: fadd    qword ptr ds:0A492B0h
0x52251E: cmp     [esp+2Ch+var_1A], 0
0x522523: fstp    [esp+2Ch+var_18]
0x522527: jz      short loc_52256B; Specialization is independent of major membership: a matching TESSkill specialization adds 5+0.5*(level-1). Level 1 results before race bonus: major+spec 30, major 25, non-major+spec 10, non-major 5.
0x522529: mov     ecx, ds:0B33A98h; this
0x52252F: mov     esi, [edi+104h]
0x522535: push    ebx; skillIndex
0x522536: call    TESDataHandler_GetTESSkillByCode; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x52253B: mov     ebp, [eax+34h]
0x52253E: mov     ecx, esi; this
0x522540: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x522545: cmp     eax, ebp
0x522547: jnz     short loc_52256B
0x522549: fld     [esp+2Ch+var_18]
0x52254D: fadd    qword ptr ds:0A3F3F0h
0x522553: fstp    [esp+2Ch+var_C]; Executed specialization contribution begins by adding 5.0 to the current major/non-major base.
0x522557: fld     [esp+2Ch+var_C]
0x52255B: fld     dword ptr [esp+2Ch+skillIndex]
0x52255F: fmul    qword ptr ds:0A2FAA0h
0x522565: faddp   st(1), st
0x522567: fstp    [esp+2Ch+var_18]; Executed specialization level scaling then adds 0.5*(actorLevel-1).
0x52256B: mov     eax, [edi+0E8h]
0x522571: mov     edx, [esp+2Ch+var_4]
0x522575: add     eax, 50h ; 'P'; Applies race skill bonus from the seven (skillAV, signed bonus) pairs at TESRace+0x50 after class major/non-major and specialization contributions.
0x522578: mov     ecx, 7
0x52257D: lea     ecx, [ecx+0]
0x522580: movsx   esi, byte ptr [eax]
0x522583: cmp     esi, edx
0x522585: jnz     short loc_52259B
0x522587: movsx   esi, byte ptr [eax+1]
0x52258B: mov     [esp+2Ch+var_4], esi
0x52258F: fild    [esp+2Ch+var_4]
0x522593: fadd    [esp+2Ch+var_18]
0x522597: fstp    [esp+2Ch+var_18]
0x52259B: add     eax, 2
0x52259E: sub     ecx, 1
0x5225A1: jnz     short loc_522580
0x5225A3: fld     [esp+2Ch+var_18]
0x5225A7: fcomp   qword ptr ds:0A309F0h
0x5225AD: fnstsw  ax
0x5225AF: test    ah, 41h
0x5225B2: jnz     short loc_5225BE
0x5225B4: fld     dword ptr ds:0A2FE7Ch
0x5225BA: fstp    [esp+2Ch+var_18]
0x5225BE: fld     [esp+2Ch+var_18]
0x5225C2: fistp   dword ptr [esp+2Ch+var_8]
0x5225C6: mov     dl, [esp+2Ch+var_8]
0x5225CA: mov     [edi+ebx+0ECh], dl; Caps the fully composed starting skill at 100 and stores it in TESNPC::baseSkills[skillOffset] (21 native entries at TESNPC+0xEC).
0x5225D1: add     ebx, 1
0x5225D4: cmp     ebx, 15h
0x5225D7: jl      loc_5224C0
0x5225DD: push    200h; a2
0x5225E2: mov     ecx, edi; this
0x5225E4: call    TESForm_MarkAsModified
0x5225E9: mov     ecx, [edi+104h]; this
0x5225EF: mov     byte ptr [esp+2Ch+var_4], 0
0x5225F4: call    Shared_GetDwordAtOffset38; Linker-folded Oblivion accessor: returns the dword at this+0x38. In TESClass auto-stat calls this is primaryAttribute1; other call contexts may represent unrelated fields.
0x5225F9: cmp     eax, 5
0x5225FC: jz      short loc_52260E
0x5225FE: mov     ecx, [edi+104h]; this
0x522604: call    Shared_GetDwordAtOffset3C; Linker-folded Oblivion accessor: returns the dword at this+0x3C. In TESClass auto-stat calls this is primaryAttribute2; other call contexts may represent unrelated fields.
0x522609: cmp     eax, 5
0x52260C: jnz     short loc_522613
0x52260E: mov     byte ptr [esp+2Ch+var_4], 1
0x522613: cmp     [esp+2Ch+var_19], 0
0x522618: lea     esi, [edi+88h]
0x52261E: push    5
0x522620: mov     ecx, esi
0x522622: jz      short loc_522646
0x522624: call    TESAttributes_GetAVi
0x522629: push    0
0x52262B: mov     ecx, esi
0x52262D: mov     bl, al
0x52262F: call    TESAttributes_GetAVi
0x522634: movzx   ecx, bl
0x522637: movzx   edx, al
0x52263A: push    ecx
0x52263B: push    edx
0x52263C: call    Calc_ActorBaseHealth
0x522641: add     esp, 8
0x522644: jmp     short loc_522684
0x522646: mov     ebp, [edi+104h]
0x52264C: call    TESAttributes_GetAVi
0x522651: push    0
0x522653: mov     ecx, esi
0x522655: mov     bl, al
0x522657: call    TESAttributes_GetAVi
0x52265C: mov     ecx, ebp; this
0x52265E: mov     [esp+2Ch+var_19], al
0x522662: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x522667: mov     ecx, [esp+2Ch+var_14]
0x52266B: push    eax; int
0x52266C: mov     eax, [esp+30h+var_4]
0x522670: push    eax; float
0x522671: movzx   eax, [esp+34h+var_19]
0x522676: movzx   edx, bl
0x522679: push    ecx; int
0x52267A: push    edx; int
0x52267B: push    eax; int
0x52267C: call    sub_547F80
0x522681: add     esp, 14h
0x522684: cmp     [esp+2Ch+skipDerivedStats], 0
0x522689: jnz     short loc_522706
0x52268B: push    eax
0x52268C: mov     ecx, edi
0x52268E: call    TESActorBase_SetHealth
0x522693: push    1
0x522695: mov     ecx, esi
0x522697: call    TESAttributes_GetAVi
0x52269C: movzx   ecx, al
0x52269F: push    0; float
0x5226A1: push    ecx; int
0x5226A2: call    Calc_ActorBaseMagicka
0x5226A7: add     esp, 8
0x5226AA: push    eax
0x5226AB: lea     ecx, [edi+24h]
0x5226AE: call    TESActorBaseData_SetMagicka
0x5226B3: push    2
0x5226B5: mov     ecx, esi
0x5226B7: call    TESAttributes_GetAVi
0x5226BC: push    3
0x5226BE: mov     ecx, esi
0x5226C0: mov     bl, al
0x5226C2: call    TESAttributes_GetAVi
0x5226C7: push    5
0x5226C9: mov     ecx, esi
0x5226CB: mov     [esp+30h+skipDerivedStats], al
0x5226CF: call    TESAttributes_GetAVi
0x5226D4: push    0
0x5226D6: mov     ecx, esi
0x5226D8: mov     [esp+30h+var_19], al
0x5226DC: call    TESAttributes_GetAVi
0x5226E1: movzx   ecx, [esp+2Ch+skipDerivedStats]
0x5226E6: movzx   edx, bl
0x5226E9: push    edx
0x5226EA: movzx   edx, [esp+30h+var_19]
0x5226EF: push    ecx
0x5226F0: movzx   eax, al
0x5226F3: push    edx
0x5226F4: push    eax
0x5226F5: call    Calc_ActorBaseFatigue
0x5226FA: add     esp, 10h
0x5226FD: push    eax
0x5226FE: lea     ecx, [edi+24h]
0x522701: call    TESActorBaseData_SetFatigue
0x522706: mov     eax, [edi+104h]
0x52270C: test    eax, eax
0x52270E: pop     ebp
0x52270F: pop     ebx
0x522710: jz      short loc_52274E
0x522712: mov     ecx, [eax+64h]
0x522715: lea     esi, [edi+68h]
0x522718: push    ecx
0x522719: mov     ecx, esi
0x52271B: call    TESAIForm_SetServiceFlags
0x522720: mov     ecx, [edi+104h]
0x522726: call    sub_51BEB0
0x52272B: push    eax; actorValue
0x52272C: mov     ecx, esi; this
0x52272E: call    TESAIForm_SetTrainingSkill; Accept only SkillActorValue 0x0C..0x20 and store its zero-based 0..20 index in TESAIForm+0x0C.
0x522733: mov     ecx, [edi+104h]
0x522739: call    sub_4A9700
0x52273E: mov     ecx, esi
0x522740: push    eax
0x522741: call    TESAIForm_SetTrainingLevel
0x522746: pop     esi
0x522747: pop     edi
0x522748: add     esp, 1Ch
0x52274B: retn    4
0x52274E: push    0
0x522750: lea     ecx, [edi+68h]
0x522753: call    TESAIForm_SetServiceFlags
0x522758: pop     esi
0x522759: pop     edi
0x52275A: add     esp, 1Ch
0x52275D: retn    4
