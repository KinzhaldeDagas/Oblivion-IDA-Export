0x620290: sub     esp, 40h; Evaluates close-combat alternatives while mode +0x74 is 3: caches target surface distance, checks desired range and animation/action state, scores equipped-weapon, magic, and unarmed choices, then starts an action or changes combat mode. Its caller supplies one stack flag that is unused in this build; apparent EBX/EBP/EDI/x87 parameters were decompiler artifacts.
0x620293: push    esi
0x620294: mov     esi, ecx
0x620296: cmp     dword ptr [esi+74h], 3
0x62029A: jnz     loc_620C29
0x6202A0: call    CombatController_GetCurrentTarget
0x6202A5: test    eax, eax
0x6202A7: jz      loc_620C29
0x6202AD: fldz
0x6202AF: push    edi; a5
0x6202B0: fcomp   dword ptr [esi+184h]
0x6202B6: mov     dword ptr [esi+50h], 0FFh
0x6202BD: fnstsw  ax
0x6202BF: test    ah, 41h
0x6202C2: jnz     short loc_6202E0
0x6202C4: mov     edi, [esi+3Ch]; a1
0x6202C7: push    0; useActorProjection
0x6202C9: mov     ecx, esi
0x6202CB: call    CombatController_GetCurrentTarget
0x6202D0: push    eax; to
0x6202D1: push    edi; from
0x6202D2: call    TESObjectREFR_GetSurfaceDistance; Three-argument cdecl routine: returns float surface distance from 'from' to 'to'. All 24 callers push exactly from, to, and useActorProjection then reclaim 0x0C. The prior EDI register argument, fourth stack byte, and double return were analysis pollution.
0x6202D7: fstp    dword ptr [esi+184h]
0x6202DD: add     esp, 0Ch
0x6202E0: fld     dword ptr [esi+184h]
0x6202E6: push    ebx; slot
0x6202E7: mov     bl, byte ptr [esp+4Ch+unusedModeFlag]
0x6202EB: fstp    [esp+4Ch+targetAttacking]
0x6202EF: test    bl, bl
0x6202F1: jz      short loc_620318
0x6202F3: mov     edi, [esi+3Ch]
0x6202F6: mov     eax, [edi]
0x6202F8: mov     edx, [eax+26Ch]
0x6202FE: mov     ecx, edi
0x620300: call    edx
0x620302: fstp    qword ptr [esp+4Ch+targetStaggered]
0x620306: mov     eax, [edi]
0x620308: mov     edx, [eax+0ECh]
0x62030E: mov     ecx, edi
0x620310: call    edx
0x620312: fmul    qword ptr [esp+4Ch+targetStaggered]
0x620316: jmp     short loc_62031F
0x620318: mov     ecx, esi; this
0x62031A: call    CombatController_GetDesiredCombatDistance; Caches desired combat distance based on active combat mode and ranged/melee data.
0x62031F: mov     ecx, [esi+3Ch]
0x620322: fstp    [esp+4Ch+var_1C]
0x620326: mov     eax, [ecx]
0x620328: mov     edx, [eax+164h]
0x62032E: push    3
0x620330: call    edx
0x620332: mov     ecx, eax; this
0x620334: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x620339: push    eax
0x62033A: call    AnimGroup_UsesAttackOrCastNoteTemplate; Returns true when the encoded key is not group 0xFF and the fixed Oblivion group record's note-template class is 4, 5, 6, or 7. Those classes cover AttackLeft/Right, power attacks, BlockAttack, AttackBow, and cast groups. This is a fixed-table classifier, not dynamic group registration.
0x62033F: mov     ecx, [esi+3Ch]
0x620342: mov     byte ptr [esp+4Ch+targetAttacking], al
0x620346: mov     eax, [ecx]
0x620348: mov     edx, [eax+164h]
0x62034E: add     esp, 4
0x620351: push    3; slot
0x620353: call    edx
0x620355: mov     ecx, eax; this
0x620357: call    ActorAnimData_GetSlotActionState; Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
0x62035C: mov     ecx, [esi+3Ch]
0x62035F: cmp     eax, 2
0x620362: setz    byte ptr [esp+48h+var_3C+1]
0x620367: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x62036C: mov     ecx, [esi+3Ch]
0x62036F: cmp     eax, 3
0x620372: setz    byte ptr [esp+48h+var_3C+3]
0x620377: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x62037C: cmp     eax, 7
0x62037F: jz      short loc_620393
0x620381: mov     ecx, [esi+3Ch]
0x620384: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x620389: cmp     eax, 8
0x62038C: mov     byte ptr [esp+48h+var_3C], 0
0x620391: jnz     short loc_620398
0x620393: mov     byte ptr [esp+48h+var_3C], 1
0x620398: mov     ecx, esi
0x62039A: call    CombatController_GetCurrentTarget
0x62039F: mov     ecx, eax
0x6203A1: call    Actor_IsCurrentActionInRange2To5; Process vfunc +0x2D0 in range 2..5 guard used by Player_OnInput jump gate with Acrobatics mastery. Treat as an action/movement lock signal when deciding climb eligibility.
0x6203A6: mov     ecx, esi
0x6203A8: mov     byte ptr [esp+48h+var_1C], al
0x6203AC: call    CombatController_GetCurrentTarget
0x6203B1: mov     ecx, eax
0x6203B3: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x6203B8: cmp     eax, 3
0x6203BB: setz    al
0x6203BE: mov     ecx, esi
0x6203C0: mov     byte ptr [esp+48h+targetStaggered+4], al
0x6203C4: call    CombatController_GetCurrentTarget
0x6203C9: mov     ecx, eax
0x6203CB: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x6203D0: cmp     eax, 7
0x6203D3: jz      short loc_6203ED
0x6203D5: mov     ecx, esi
0x6203D7: call    CombatController_GetCurrentTarget
0x6203DC: mov     ecx, eax
0x6203DE: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x6203E3: cmp     eax, 8
0x6203E6: mov     [esp+48h+var_24+4], 0
0x6203EB: jnz     short loc_6203F2
0x6203ED: mov     [esp+48h+var_24+4], 1
0x6203F2: mov     ecx, esi
0x6203F4: call    CombatController_GetCurrentTarget
0x6203F9: mov     edx, [eax]
0x6203FB: mov     ecx, eax
0x6203FD: mov     eax, [edx+334h]
0x620403: push    1
0x620405: call    eax
0x620407: mov     ecx, esi
0x620409: mov     byte ptr [esp+4Ch+var_40+2], al
0x62040D: call    CombatController_GetCurrentTarget
0x620412: mov     ecx, eax
0x620414: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x620419: mov     ecx, esi
0x62041B: mov     byte ptr [esp+4Ch+var_34], al
0x62041F: call    CombatController_GetEquippedWeaponForm
0x620424: fld     [esp+4Ch+var_1C]
0x620428: push    0; unused
0x62042A: sub     esp, 8
0x62042D: fstp    [esp+58h+maximumDistance]; maximumDistance
0x620431: mov     ecx, esi; this
0x620433: fld     [esp+58h+targetAttacking]
0x620437: fstp    [esp+58h+surfaceDistance]; surfaceDistance
0x62043A: call    CombatController_IsTargetWithinRangedDistance; Tests surfaceDistance against maximumDistance plus a combat-style-controlled tolerance. Ranged weapon modes 2 and 4 suppress that extra tolerance.
0x62043F: test    al, al
0x620441: jz      loc_620C27
0x620447: mov     ecx, [esi+3Ch]
0x62044A: mov     ecx, [ecx+58h]
0x62044D: mov     edx, [ecx]
0x62044F: mov     eax, [edx+0F8h]
0x620455: push    ebp
0x620456: push    1
0x620458: call    eax
0x62045A: fldz
0x62045C: test    bl, bl
0x62045E: fstp    [esp+48h+var_34]
0x620462: mov     ebp, eax
0x620464: mov     dword ptr [esp+48h+var_24], ebp
0x620468: jz      short loc_620479
0x62046A: mov     ecx, esi
0x62046C: call    CombatController_GetEquippedWeaponForm
0x620471: test    eax, eax
0x620473: jnz     short loc_620479
0x620475: mov     bl, 1
0x620477: jmp     short loc_62047B
0x620479: xor     bl, bl
0x62047B: cmp     byte ptr [esp+48h+arg_8], 0
0x620480: jnz     short loc_620492
0x620482: mov     ecx, esi
0x620484: call    CombatController_GetEquippedWeaponForm
0x620489: test    eax, eax
0x62048B: jnz     short loc_620496
0x62048D: cmp     [esi+70h], eax
0x620490: jz      short loc_620496
0x620492: test    bl, bl
0x620494: jz      short loc_6204F4
0x620496: mov     ecx, esi
0x620498: call    CombatController_GetCurrentTarget
0x62049D: mov     ecx, dword ptr [esp+48h+var_2C]
0x6204A1: mov     edx, [eax]
0x6204A3: mov     edi, [esi+3Ch]
0x6204A6: mov     ebp, [esi+70h]
0x6204A9: push    ecx
0x6204AA: mov     ecx, eax
0x6204AC: mov     eax, [edx+19Ch]
0x6204B2: call    eax
0x6204B4: mov     ecx, [esp+48h+targetKnockedDown]
0x6204B8: test    ebp, ebp
0x6204BA: setz    dl
0x6204BD: push    eax; targetBlocking
0x6204BE: mov     eax, [esp+4Ch+targetAttacking]
0x6204C2: push    ecx; targetKnockedDown
0x6204C3: mov     ecx, edi
0x6204C5: push    edx; targetStaggered
0x6204C6: mov     edx, [edi]
0x6204C8: push    eax; targetAttacking
0x6204C9: mov     eax, [edx+284h]
0x6204CF: push    7; usePowerAttack
0x6204D1: call    eax
0x6204D3: push    eax; luckValue
0x6204D4: mov     ecx, esi; this
0x6204D6: call    CombatController_GetWeaponSkillLevel; Returns the combat actor's weapon-skill level as an integer. Actor paths read the relevant actor value; creature fallback converts its floating calculation to SInt32 before returning EAX.
0x6204DB: push    eax; skillValue
0x6204DC: mov     ecx, edi
0x6204DE: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x6204E3: push    eax; combatStyle
0x6204E4: call    CombatStyle_CalculateAttackScore; Calculates an attack desirability score from luck-modified skill, CombatStyle weights, target action-state flags, power/regular attack multiplier, and the attack-during-block multiplier.
0x6204E9: fstp    [esp+68h+var_34]
0x6204ED: mov     ebp, dword ptr [esp+68h+var_24]
0x6204F1: add     esp, 20h
0x6204F4: fldz
0x6204F6: mov     ecx, [esi+7Ch]
0x6204F9: test    ecx, ecx
0x6204FB: fstp    [esp+48h+arg_8]
0x6204FF: jz      loc_620594
0x620505: fld     dword ptr [esi+44h]
0x620508: fsub    dword ptr [esi+104h]
0x62050E: fld     dword ptr [esi+108h]
0x620514: fcompp
0x620516: fnstsw  ax
0x620518: test    ah, 5
0x62051B: jp      short loc_620594
0x62051D: push    0
0x62051F: push    0
0x620521: push    ecx
0x620522: mov     ecx, esi
0x620524: call    CombatController_CanUseSpellAgainstCurrentTarget
0x620529: test    al, al
0x62052B: jz      short loc_620594
0x62052D: mov     ecx, esi
0x62052F: call    CombatController_GetCurrentTarget
0x620534: mov     edx, [eax]
0x620536: mov     edi, [esi+3Ch]
0x620539: mov     ebp, [edi]
0x62053B: mov     ecx, eax
0x62053D: mov     eax, [edx+19Ch]
0x620543: push    0
0x620545: call    eax
0x620547: mov     ecx, [esp+44h+targetAttacking]
0x62054B: mov     edx, [esp+44h+targetStaggered]
0x62054F: push    eax
0x620550: mov     eax, [edi]
0x620552: push    ecx; targetBlocking
0x620553: push    0; targetKnockedDown
0x620555: push    edx; targetStaggered
0x620556: mov     edx, [eax+284h]
0x62055C: push    7; targetAttacking
0x62055E: mov     ecx, edi
0x620560: call    edx
0x620562: push    eax; usePowerAttack
0x620563: mov     eax, [esi+7Ch]
0x620566: mov     ecx, [eax]
0x620568: add     ecx, 0Ch
0x62056B: call    EffectItemList_GetSchoolAV
0x620570: mov     edx, [ebp+284h]
0x620576: push    eax; luckValue
0x620577: mov     ecx, edi
0x620579: call    edx
0x62057B: push    eax; skillValue
0x62057C: mov     ecx, edi
0x62057E: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x620583: push    eax; combatStyle
0x620584: call    CombatStyle_CalculateAttackScore; Calculates an attack desirability score from luck-modified skill, CombatStyle weights, target action-state flags, power/regular attack multiplier, and the attack-during-block multiplier.
0x620589: fstp    [esp+68h+arg_8]
0x62058D: mov     ebp, dword ptr [esp+68h+var_24]
0x620591: add     esp, 20h
0x620594: cmp     byte ptr [esp+48h+var_38+2], 0
0x620599: jnz     short loc_6205DF
0x62059B: mov     ecx, esi
0x62059D: call    CombatController_GetCurrentTarget
0x6205A2: cmp     eax, ds:0B333C4h
0x6205A8: jz      short loc_6205DF
0x6205AA: cmp     dword ptr [esi+7Ch], 0
0x6205AE: fld     [esp+48h+var_34]
0x6205B2: fld     qword ptr ds:0A309F0h
0x6205B8: fadd    st(1), st
0x6205BA: fxch    st(1)
0x6205BC: fstp    [esp+48h+var_34]
0x6205C0: jz      short loc_6205DD
0x6205C2: fldz
0x6205C4: fld     [esp+48h+arg_8]
0x6205C8: fcom    st(1)
0x6205CA: fnstsw  ax
0x6205CC: fstp    st(1)
0x6205CE: test    ah, 41h
0x6205D1: jnz     short loc_6205DB
0x6205D3: faddp   st(1), st
0x6205D5: fstp    [esp+48h+arg_8]
0x6205D9: jmp     short loc_6205DF
0x6205DB: fstp    st
0x6205DD: fstp    st
0x6205DF: mov     eax, [esp+48h+targetKnockedDown]
0x6205E3: mov     edi, [esi+3Ch]
0x6205E6: mov     edx, [edi]
0x6205E8: test    ebp, ebp
0x6205EA: setnz   cl
0x6205ED: push    eax
0x6205EE: mov     eax, [edx+284h]
0x6205F4: push    ecx
0x6205F5: push    7; float
0x6205F7: mov     ecx, edi
0x6205F9: call    eax
0x6205FB: mov     edx, [edi]
0x6205FD: push    eax; char
0x6205FE: mov     eax, [edx+284h]
0x620604: push    0Fh; int
0x620606: mov     ecx, edi
0x620608: call    eax
0x62060A: push    eax; int
0x62060B: mov     ecx, edi
0x62060D: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x620612: push    eax; int
0x620613: call    sub_546D40
0x620618: fstp    [esp+64h+var_38]
0x62061C: add     esp, 14h
0x62061F: cmp     byte ptr [esp+50h+var_40+3], 0
0x620624: jz      short loc_62062C
0x620626: fldz
0x620628: fstp    [esp+50h+unusedModeFlag]
0x62062C: mov     ecx, esi
0x62062E: call    CombatController_GetCurrentTarget
0x620633: mov     edx, [eax]
0x620635: mov     ecx, eax
0x620637: mov     eax, [edx+1A0h]
0x62063D: call    eax
0x62063F: test    al, al
0x620641: jnz     short loc_6206A4
0x620643: mov     ecx, esi
0x620645: call    CombatController_GetCurrentTarget
0x62064A: mov     edx, [eax]
0x62064C: mov     ecx, eax
0x62064E: mov     eax, [edx+19Ch]
0x620654: call    eax
0x620656: test    al, al
0x620658: jnz     short loc_6206A4
0x62065A: mov     ecx, esi
0x62065C: call    CombatController_GetCurrentTarget
0x620661: mov     ecx, eax; this
0x620663: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x620668: cmp     eax, 3
0x62066B: jz      short loc_6206A4
0x62066D: mov     ecx, esi
0x62066F: call    CombatController_GetCurrentTarget
0x620674: mov     ecx, eax; this
0x620676: call    Actor__IsSleeping; Returns true exactly when Actor.process exists and GetSleepState() == kSitSleep_Sleeping (9). This is a SitSleep-state test, not a combat/procedure test.
0x62067B: test    al, al
0x62067D: jnz     short loc_6206A4
0x62067F: mov     ecx, esi
0x620681: call    CombatController_GetCurrentTarget
0x620686: mov     ecx, eax; this
0x620688: call    Actor__GetDeadState; Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
0x62068D: cmp     eax, 5
0x620690: jz      short loc_6206A4
0x620692: mov     ecx, esi
0x620694: call    CombatController_GetCurrentTarget
0x620699: mov     ecx, eax
0x62069B: call    Actor_IsWeaponOut
0x6206A0: test    al, al
0x6206A2: jnz     short loc_6206AC
0x6206A4: fldz
0x6206A6: fst     [esp+50h+var_38]
0x6206AA: jmp     short loc_6206AE
0x6206AC: fldz
0x6206AE: mov     bl, byte ptr [esp+50h+targetKnockedDown]
0x6206B2: fld     [esp+50h+var_3C]
0x6206B6: test    bl, bl
0x6206B8: jz      short loc_6206C9
0x6206BA: fld     [esp+50h+unusedModeFlag]
0x6206BE: fcom    st(1)
0x6206C0: fnstsw  ax
0x6206C2: test    ah, 5
0x6206C5: jnp     short loc_6206EB
0x6206C7: fstp    st
0x6206C9: mov     ecx, [esi+3Ch]
0x6206CC: fstp    st
0x6206CE: mov     ecx, [ecx+58h]
0x6206D1: fstp    st
0x6206D3: mov     edx, [ecx]
0x6206D5: mov     eax, [edx+2DCh]
0x6206DB: call    eax
0x6206DD: fldz
0x6206DF: test    al, al
0x6206E1: jz      short loc_6206F8
0x6206E3: fld     [esp+50h+var_3C]
0x6206E7: fld     [esp+50h+unusedModeFlag]
0x6206EB: cmp     byte ptr [esi+158h], 0
0x6206F2: jnz     short loc_620716
0x6206F4: fstp    st
0x6206F6: fstp    st
0x6206F8: cmp     byte ptr [esi+158h], 0
0x6206FF: fst     [esp+50h+var_3C]
0x620703: fst     [esp+50h+unusedModeFlag]
0x620707: jnz     short loc_62070D
0x620709: fst     [esp+50h+var_38]
0x62070D: fld     [esp+50h+var_3C]
0x620711: jmp     loc_620810
0x620716: fcom    st(2)
0x620718: fnstsw  ax
0x62071A: test    ah, 41h
0x62071D: jnz     loc_62080E
0x620723: fxch    st(1)
0x620725: fcom    st(2)
0x620727: fnstsw  ax
0x620729: test    ah, 41h
0x62072C: jnz     loc_62080E
0x620732: fld     st(1)
0x620734: fsub    st, st(1)
0x620736: fstp    dword ptr [esp+50h+var_2C]
0x62073A: fld     dword ptr [esp+50h+var_2C]
0x62073E: fabs
0x620740: fstp    dword ptr [esp+50h+var_2C]
0x620744: fld     dword ptr [esp+50h+var_2C]
0x620748: fstp    dword ptr [esp+50h+var_2C]
0x62074C: fld     dword ptr [esp+50h+var_2C]
0x620750: fld     st
0x620752: fadd    st, st(1)
0x620754: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x620759: mov     dword ptr [esp+50h+var_2C], eax
0x62075D: fisubr  dword ptr [esp+50h+var_2C]
0x620761: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x620766: mov     edi, eax
0x620768: test    edi, edi
0x62076A: jz      loc_620801
0x620770: fstp    st(2)
0x620772: push    0; Seed
0x620774: fcom    st(1)
0x620776: fnstsw  ax
0x620778: fstp    st(1)
0x62077A: test    ah, 41h
0x62077D: jnz     short loc_6207B6
0x62077F: fstp    [esp+54h+var_2C]
0x620783: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x620788: cdq
0x620789: idiv    edi
0x62078B: push    0; Seed
0x62078D: mov     [esp+58h+unusedModeFlag], edx
0x620791: fild    [esp+58h+unusedModeFlag]
0x620795: fsubr   [esp+58h+var_2C]
0x620799: fstp    [esp+58h+unusedModeFlag]
0x62079D: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x6207A2: cdq
0x6207A3: add     esp, 8
0x6207A6: idiv    edi
0x6207A8: mov     dword ptr [esp+50h+var_2C], edx
0x6207AC: fild    dword ptr [esp+50h+var_2C]
0x6207B0: fadd    [esp+50h+var_3C]
0x6207B4: jmp     short loc_6207F1
0x6207B6: fstp    st
0x6207B8: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x6207BD: cdq
0x6207BE: idiv    edi
0x6207C0: push    0; Seed
0x6207C2: mov     dword ptr [esp+58h+var_2C], edx
0x6207C6: fild    dword ptr [esp+58h+var_2C]
0x6207CA: fadd    [esp+58h+unusedModeFlag]
0x6207CE: fstp    [esp+58h+unusedModeFlag]
0x6207D2: fld     [esp+58h+var_3C]
0x6207D6: fstp    qword ptr [esp+58h+var_34]
0x6207DA: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x6207DF: cdq
0x6207E0: add     esp, 8
0x6207E3: idiv    edi
0x6207E5: mov     dword ptr [esp+50h+var_2C], edx
0x6207E9: fild    dword ptr [esp+50h+var_2C]
0x6207ED: fsubr   qword ptr [esp+50h+var_34]
0x6207F1: fstp    [esp+50h+var_3C]
0x6207F5: fld     [esp+50h+var_3C]
0x6207F9: fld     [esp+50h+unusedModeFlag]
0x6207FD: fldz
0x6207FF: fxch    st(2)
0x620801: fcom    st(1)
0x620803: fnstsw  ax
0x620805: test    ah, 5
0x620808: jnp     short loc_62080E
0x62080A: fstp    st(1)
0x62080C: jmp     short loc_620810
0x62080E: fstp    st
0x620810: test    bl, bl
0x620812: fstp    [esp+50h+var_34]
0x620816: jz      short loc_62081F
0x620818: cmp     byte ptr [esp+50h+var_40+1], 0
0x62081D: jz      short loc_62082C
0x62081F: cmp     dword ptr [esi+6Ch], 4
0x620823: jz      short loc_62082C
0x620825: cmp     byte ptr [esp+50h+var_40], 0
0x62082A: jz      short loc_620832
0x62082C: fstp    [esp+50h+var_38]
0x620830: jmp     short loc_620834
0x620832: fstp    st
0x620834: mov     ecx, [esi+3Ch]
0x620837: mov     edx, [ecx]
0x620839: mov     eax, [edx+164h]
0x62083F: call    eax
0x620841: test    eax, eax
0x620843: jz      short loc_62085F
0x620845: mov     ecx, [esi+3Ch]
0x620848: mov     edx, [ecx]
0x62084A: mov     eax, [edx+164h]
0x620850: push    1Bh; encodedKey
0x620852: call    eax
0x620854: mov     ecx, eax; this
0x620856: call    ActorAnimData_HasAnimKey; Returns whether ActorAnimData +0x9C contains an entry for the encoded animation key. Presence test only; it does not select or play a sequence.
0x62085B: test    al, al
0x62085D: jnz     short loc_620865
0x62085F: fldz
0x620861: fstp    [esp+50h+var_38]
0x620865: test    ebp, ebp
0x620867: jnz     short loc_620881
0x620869: mov     ecx, esi
0x62086B: call    CombatController_GetCurrentTarget
0x620870: mov     ecx, [eax+58h]
0x620873: mov     edx, [ecx]
0x620875: mov     eax, [edx+138h]
0x62087B: call    eax
0x62087D: test    al, al
0x62087F: jnz     short loc_620899
0x620881: mov     ecx, esi
0x620883: call    CombatController_GetCurrentTarget
0x620888: mov     ecx, [eax+58h]
0x62088B: mov     edx, [ecx]
0x62088D: mov     eax, [edx+13Ch]
0x620893: call    eax
0x620895: test    al, al
0x620897: jz      short loc_6208A1
0x620899: fldz
0x62089B: fst     [esp+50h+var_38]
0x62089F: jmp     short loc_6208A3
0x6208A1: fldz
0x6208A3: test    ebp, ebp
0x6208A5: jz      short loc_6208CE
0x6208A7: fcom    [esp+50h+var_38]
0x6208AB: fnstsw  ax
0x6208AD: test    ah, 5
0x6208B0: jp      short loc_6208CE
0x6208B2: fstp    st
0x6208B4: push    0
0x6208B6: mov     ecx, ebp
0x6208B8: call    ContainerEntryExtraData_GetHealth
0x6208BD: fldz
0x6208BF: fcom    st(1)
0x6208C1: fnstsw  ax
0x6208C3: fstp    st(1)
0x6208C5: test    ah, 1
0x6208C8: jnz     short loc_6208CE
0x6208CA: fst     [esp+50h+var_38]
0x6208CE: fld     [esp+50h+var_38]
0x6208D2: fadd    [esp+50h+var_34]
0x6208D6: fst     [esp+50h+var_8]
0x6208DA: fld     qword ptr ds:0A309F0h
0x6208E0: fsub    st, st(1)
0x6208E2: fld     dword ptr ds:0B37128h
0x6208E8: fcom    st(1)
0x6208EA: fnstsw  ax
0x6208EC: test    ah, 5
0x6208EF: jp      short loc_6208F5
0x6208F1: fstp    st
0x6208F3: jmp     short loc_6208F7
0x6208F5: fstp    st(1)
0x6208F7: mov     ebp, 1
0x6208FC: fstp    dword ptr [esp+50h+var_2C]
0x620900: cmp     [esi+6Ch], ebp
0x620903: jnz     short loc_62090D
0x620905: fxch    st(1)
0x620907: fst     dword ptr [esp+50h+var_2C]
0x62090B: fxch    st(1)
0x62090D: test    bl, bl
0x62090F: jz      short loc_620920
0x620911: cmp     byte ptr [esp+50h+var_40+1], 0
0x620916: jnz     short loc_620920
0x620918: fxch    st(1)
0x62091A: fst     dword ptr [esp+50h+var_2C]
0x62091E: fxch    st(1)
0x620920: mov     ebx, 2
0x620925: cmp     [esi+78h], ebx
0x620928: jnz     short loc_620932
0x62092A: fxch    st(1)
0x62092C: fstp    dword ptr [esp+50h+var_2C]
0x620930: jmp     short loc_620934
0x620932: fstp    st(1)
0x620934: fadd    dword ptr [esp+50h+var_2C]
0x620938: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x62093D: test    eax, eax
0x62093F: mov     edi, eax
0x620941: jg      short loc_620948
0x620943: mov     edi, 64h ; 'd'
0x620948: push    0; Seed
0x62094A: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x62094F: cdq
0x620950: idiv    edi
0x620952: add     esp, 4
0x620955: mov     dword ptr [esp+50h+var_2C], edx
0x620959: fild    dword ptr [esp+50h+var_2C]
0x62095D: fstp    dword ptr [esp+50h+var_2C]
0x620961: fld     dword ptr [esp+50h+var_2C]
0x620965: fld     [esp+50h+var_34]
0x620969: fcom    st(1)
0x62096B: fnstsw  ax
0x62096D: test    ah, 41h
0x620970: jnz     loc_620ACE
0x620976: fld     [esp+50h+var_3C]
0x62097A: fld     [esp+50h+unusedModeFlag]
0x62097E: fcompp
0x620980: fnstsw  ax
0x620982: test    ah, 41h
0x620985: jp      loc_620ACE
0x62098B: cmp     byte ptr [esi+49h], 0
0x62098F: fstp    st(1)
0x620991: fstp    st
0x620993: jz      short loc_6209AE
0x620995: mov     ecx, [esi+3Ch]; this
0x620998: push    0; shouldBlock
0x62099A: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x62099F: cmp     [esi+74h], ebp
0x6209A2: jnz     short loc_6209AE
0x6209A4: mov     [esi+78h], ebp
0x6209A7: mov     dword ptr [esi+74h], 3
0x6209AE: mov     eax, dword ptr [esp+50h+var_24]
0x6209B2: fld     [esp+50h+var_1C]
0x6209B6: lea     ecx, [esp+50h+var_2C]
0x6209BA: push    ecx; int
0x6209BB: mov     ecx, [esp+54h+targetStaggered]
0x6209BF: lea     edx, [esp+54h+unusedModeFlag]
0x6209C3: push    edx; int
0x6209C4: mov     edx, dword ptr [esp+58h+var_24+4]
0x6209C8: push    eax; char
0x6209C9: mov     eax, [esp+5Ch+targetKnockedDown]
0x6209CD: push    ecx; int
0x6209CE: push    edx; int
0x6209CF: sub     esp, 8
0x6209D2: fstp    [esp+6Ch+var_68]; float
0x6209D6: mov     ecx, esi
0x6209D8: fld     [esp+6Ch+targetAttacking]
0x6209DC: mov     byte ptr [esp+6Ch+unusedModeFlag], 0
0x6209E1: fstp    [esp+6Ch+var_6C]; float
0x6209E4: push    eax; char
0x6209E5: mov     byte ptr [esp+70h+var_2C], 0
0x6209EA: call    sub_61F8F0; Combat action choice consumes fatigue and current target state; SmartAI v0.3 only re-ranks existing targets.
0x6209EF: mov     ebx, eax
0x6209F1: cmp     ebx, 0FFh
0x6209F7: jz      loc_620C26
0x6209FD: cmp     byte ptr [esi+159h], 0
0x620A04: jnz     loc_620C26
0x620A0A: mov     ecx, esi
0x620A0C: call    CombatController_GetCurrentTarget
0x620A11: mov     edx, [eax]
0x620A13: mov     ecx, eax
0x620A15: mov     eax, [edx+154h]
0x620A1B: call    eax
0x620A1D: test    eax, eax
0x620A1F: jz      loc_620C26
0x620A25: mov     ecx, esi
0x620A27: call    CombatController_ApplySelectedPoisonToWeapon; Applies the CombatController-selected poison item at +0xA4 to the equipped weapon when it has neither poison nor enchantment, removes the consumed poison item, and clears the selection when empty. Private EBP-carried state is preserved in the type.
0x620A2C: cmp     byte ptr [esp+50h+unusedModeFlag], 0
0x620A31: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+268h)
0x620A36: jnz     short loc_620A3D
0x620A38: mov     ecx, (offset g_GameSettingStringPointers_B36CD8+260h)
0x620A3D: call    GameSetting_GetSafeFloatPointer
0x620A42: fld     dword ptr [eax]
0x620A44: push    0; Seed
0x620A46: fstp    [esp+54h+targetAttacking]
0x620A4A: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x620A4F: mov     [esp+54h+targetStaggered], eax
0x620A53: fild    [esp+54h+targetStaggered]
0x620A57: add     esp, 4
0x620A5A: fdiv    qword ptr ds:0A3D5A8h
0x620A60: fld     [esp+50h+targetAttacking]
0x620A64: fcompp
0x620A66: fnstsw  ax
0x620A68: test    ah, 1
0x620A6B: jnz     short loc_620AB7
0x620A6D: mov     ebp, [esi+3Ch]
0x620A70: mov     edi, [ebp+0]
0x620A73: add     edi, 308h
0x620A79: cmp     byte ptr [esp+50h+unusedModeFlag], 0
0x620A7E: push    0
0x620A80: mov     ecx, esi
0x620A82: jz      short loc_620AA9
0x620A84: push    0Ah
0x620A86: call    CombatController_GetCurrentTarget
0x620A8B: mov     edx, [edi]
0x620A8D: push    eax
0x620A8E: mov     ecx, ebp
0x620A90: call    edx
0x620A92: mov     ecx, dword ptr [esp+50h+var_2C]
0x620A96: push    ecx
0x620A97: push    ebx
0x620A98: mov     ecx, esi
0x620A9A: call    CombatController_TryStartAttackAction; Attempts to start the selected attack animation group; on success it saves the prior mode, sets combat mode +0x74 to 0, and records the chosen attack group at +0x50. Private register-carried inputs are retained.
0x620A9F: pop     ebp
0x620AA0: pop     ebx
0x620AA1: pop     edi
0x620AA2: pop     esi
0x620AA3: add     esp, 40h
0x620AA6: retn    4
0x620AA9: push    0
0x620AAB: call    CombatController_GetCurrentTarget
0x620AB0: push    eax
0x620AB1: mov     eax, [edi]
0x620AB3: mov     ecx, ebp
0x620AB5: call    eax
0x620AB7: mov     ecx, dword ptr [esp+50h+var_2C]
0x620ABB: push    ecx
0x620ABC: push    ebx
0x620ABD: mov     ecx, esi
0x620ABF: call    CombatController_TryStartAttackAction; Attempts to start the selected attack animation group; on success it saves the prior mode, sets combat mode +0x74 to 0, and records the chosen attack group at +0x50. Private register-carried inputs are retained.
0x620AC4: pop     ebp
0x620AC5: pop     ebx
0x620AC6: pop     edi
0x620AC7: pop     esi
0x620AC8: add     esp, 40h
0x620ACB: retn    4
0x620ACE: fcomp   st(1)
0x620AD0: fnstsw  ax
0x620AD2: test    ah, 41h
0x620AD5: jnz     loc_620B83
0x620ADB: fld     [esp+50h+unusedModeFlag]
0x620ADF: fld     [esp+50h+var_3C]
0x620AE3: fcompp
0x620AE5: fnstsw  ax
0x620AE7: test    ah, 5
0x620AEA: jp      loc_620B83
0x620AF0: cmp     byte ptr [esp+50h+targetKnockedDown], 0
0x620AF5: jnz     loc_620B83
0x620AFB: cmp     byte ptr [esi+49h], 0
0x620AFF: fstp    st
0x620B01: jz      short loc_620B1C
0x620B03: mov     ecx, [esi+3Ch]; this
0x620B06: push    0; shouldBlock
0x620B08: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x620B0D: cmp     [esi+74h], ebp
0x620B10: jnz     short loc_620B1C
0x620B12: mov     [esi+78h], ebp
0x620B15: mov     dword ptr [esi+74h], 3
0x620B1C: mov     ecx, esi
0x620B1E: call    CombatController_GetCurrentTarget
0x620B23: test    eax, eax
0x620B25: jz      short loc_620B2C
0x620B27: add     eax, 68h ; 'h'
0x620B2A: jmp     short loc_620B2E
0x620B2C: xor     eax, eax
0x620B2E: mov     edx, [esi+7Ch]
0x620B31: push    eax
0x620B32: push    edx
0x620B33: mov     ecx, esi
0x620B35: call    CombatController_TryUseMagicItem
0x620B3A: test    al, al
0x620B3C: jz      loc_620C26
0x620B42: fld     dword ptr [esi+44h]
0x620B45: mov     ecx, offset unk_B372E8
0x620B4A: fstp    [esp+50h+unusedModeFlag]
0x620B4E: call    GameSetting_GetSafeFloatPointer
0x620B53: fld     dword ptr [eax]
0x620B55: pop     ebp
0x620B56: fstp    [esp+4Ch+targetStaggered]
0x620B5A: pop     ebx
0x620B5B: fld     [esp+48h+unusedModeFlag]
0x620B5F: pop     edi
0x620B60: fstp    dword ptr [esi+104h]
0x620B66: fld     [esp+44h+targetStaggered]
0x620B6A: fstp    dword ptr [esi+108h]
0x620B70: fld     dword ptr ds:0A30634h
0x620B76: fstp    dword ptr [esi+10Ch]
0x620B7C: pop     esi
0x620B7D: add     esp, 40h
0x620B80: retn    4
0x620B83: fldz
0x620B85: fcomp   [esp+50h+var_38]
0x620B89: fnstsw  ax
0x620B8B: test    ah, 5
0x620B8E: jp      short loc_620BB7
0x620B90: fcomp   [esp+50h+var_8]
0x620B94: fnstsw  ax
0x620B96: test    ah, 5
0x620B99: jp      short loc_620BB9
0x620B9B: mov     ecx, [esi+3Ch]; this
0x620B9E: push    ebp; shouldBlock
0x620B9F: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x620BA4: mov     eax, [esi+74h]
0x620BA7: mov     [esi+74h], ebp
0x620BAA: pop     ebp
0x620BAB: pop     ebx
0x620BAC: pop     edi
0x620BAD: mov     [esi+78h], eax
0x620BB0: pop     esi
0x620BB1: add     esp, 40h
0x620BB4: retn    4
0x620BB7: fstp    st
0x620BB9: cmp     [esi+78h], ebx
0x620BBC: jz      short loc_620C26
0x620BBE: mov     ecx, [esi+74h]
0x620BC1: mov     [esi+78h], ecx
0x620BC4: mov     ecx, [esi+3Ch]
0x620BC7: mov     [esi+74h], ebx
0x620BCA: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x620BCF: mov     ecx, [esi+3Ch]
0x620BD2: mov     edi, eax
0x620BD4: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x620BD9: mov     edx, [edi]
0x620BDB: mov     ebx, eax
0x620BDD: mov     eax, [edx+140h]
0x620BE3: mov     ecx, edi
0x620BE5: call    eax
0x620BE7: mov     edx, [ebx]
0x620BE9: mov     eax, [edx+13Ch]
0x620BEF: push    ecx
0x620BF0: mov     ecx, ebx
0x620BF2: fstp    [esp+54h+maximumDistance]; value2
0x620BF5: call    eax
0x620BF7: push    ecx
0x620BF8: fstp    [esp+58h+surfaceDistance]; value1
0x620BFB: call    RandomFloatBetween; Returns a uniformly distributed floating value between the two inputs, accepting either input order.
0x620C00: fstp    [esp+58h+unusedModeFlag]
0x620C04: add     esp, 8
0x620C07: fld     dword ptr [esi+44h]
0x620C0A: fstp    dword ptr [esi+0E0h]
0x620C10: fld     [esp+50h+unusedModeFlag]
0x620C14: fstp    dword ptr [esi+0E4h]
0x620C1A: fld     dword ptr ds:0A30634h
0x620C20: fstp    dword ptr [esi+0E8h]
0x620C26: pop     ebp
0x620C27: pop     ebx
0x620C28: pop     edi
0x620C29: pop     esi
0x620C2A: add     esp, 40h
0x620C2D: retn    4
