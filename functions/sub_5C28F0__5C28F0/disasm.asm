0x5C28F0: sub     esp, 8; RaceSexMenu apply/close path. Commits player appearance/base changes; when the selected class differs, rebuilds auto stats and resets/replays class-dependent player progression state. Always rebuilds required skill experience before finishing.
0x5C28F3: push    esi
0x5C28F4: push    40Ch
0x5C28F9: call    Menu_GetOpenMenuTile
0x5C28FE: mov     esi, eax
0x5C2900: add     esp, 4
0x5C2903: test    esi, esi
0x5C2905: jz      loc_5C2B3D
0x5C290B: push    ebp
0x5C290C: push    edi; a3
0x5C290D: mov     ecx, esi
0x5C290F: call    Tile_GetParentMenu
0x5C2914: mov     edi, eax
0x5C2916: test    edi, edi
0x5C2918: mov     [esp+14h+var_4], edi
0x5C291C: jz      short loc_5C2960
0x5C291E: fld     dword ptr ds:0A379B4h
0x5C2924: push    ecx
0x5C2925: fstp    [esp+18h+a2]; value
0x5C2928: push    1772h; propertyCode
0x5C292D: mov     ecx, esi; this
0x5C292F: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C2934: mov     ecx, edi; int
0x5C2936: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5C293B: mov     eax, [edi+864h]
0x5C2941: test    eax, eax
0x5C2943: jz      short loc_5C2959
0x5C2945: mov     ecx, ds:0B333C4h
0x5C294B: push    0
0x5C294D: push    1
0x5C294F: push    0
0x5C2951: push    1
0x5C2953: push    eax
0x5C2954: call    Actor_EquipItem; UCWUS pipeline note: Actor equip path is not currently hooked by UCWUS.dll. Bridge replacement scripts own equip selection/token setup through OBSE commands.
0x5C2959: mov     byte ptr ds:0B3B5D8h, 1
0x5C2960: mov     ecx, ds:0B333C4h
0x5C2966: mov     eax, [ecx]
0x5C2968: mov     edx, [eax+170h]
0x5C296E: call    edx
0x5C2970: mov     ecx, ds:0B333C4h
0x5C2976: mov     ebp, eax
0x5C2978: call    Actor_GetBaseClass; Compare the player's current base class FormID with the class tracked by this chargen flow; the differing-class branch performs the full progression reset.
0x5C297D: mov     ecx, ds:0B37D00h
0x5C2983: cmp     ecx, [eax+0Ch]
0x5C2986: jz      loc_5C2ABC
0x5C298C: mov     ecx, ds:0B333C4h
0x5C2992: mov     edx, [ecx]
0x5C2994: mov     eax, [edx+268h]
0x5C299A: call    eax
0x5C299C: mov     edi, eax
0x5C299E: test    edi, edi
0x5C29A0: jz      short loc_5C29CE
0x5C29A2: lea     esi, [edi+3Ch]
0x5C29A5: test    esi, esi
0x5C29A7: jz      short loc_5C29CE
0x5C29A9: lea     esp, [esp+0]
0x5C29B0: mov     eax, [esi]
0x5C29B2: test    eax, eax
0x5C29B4: jz      short loc_5C29CE
0x5C29B6: mov     ecx, ds:0B333C4h
0x5C29BC: mov     edx, [ecx]
0x5C29BE: push    eax
0x5C29BF: mov     eax, [edx+2E0h]
0x5C29C5: call    eax
0x5C29C7: mov     esi, [esi+4]
0x5C29CA: test    esi, esi
0x5C29CC: jnz     short loc_5C29B0
0x5C29CE: fldz
0x5C29D0: push    ecx
0x5C29D1: mov     ecx, ds:0B333C4h
0x5C29D7: fstp    [esp+18h+a2]; deltaTime
0x5C29DA: add     ecx, 68h ; 'h'; this
0x5C29DD: call    MagicTarget_ProcessEffects; Verified active-effect manager: obtains the target's active-effect list, checks target parent/node/cell/process conditions, then enters the list loop. Each eligible ActiveEffect goes through ActiveEffect_Base_ProcessEffect; removed effects are unlinked and destroyed by their virtual destructor. Actor_ProcessMagicEffect calls this manager each actor process tick.
0x5C29E2: push    1; skipDerivedStats
0x5C29E4: mov     ecx, ebp; this
0x5C29E6: call    TESNPC_RecalculateAutoStats; Recalculate TESNPC auto-calculated attributes and starting skills under the newly selected class.
0x5C29EB: mov     ecx, ds:0B333C4h
0x5C29F1: mov     dword ptr [ecx+184h], 0; Class changed: reset PlayerCharacter::majorSkillAdvances.
0x5C29FB: mov     edx, ds:0B333C4h
0x5C2A01: mov     byte ptr [edx+1DCh], 0; Class changed: clear PlayerCharacter::bCanLevelUp.
0x5C2A08: mov     ecx, ds:0B333C4h; this
0x5C2A0E: call    Player_ConsumeOldestAttributeBonusBucket; Class changed: consume/reset the active (oldest) queued attribute-bonus bucket.
0x5C2A13: mov     ecx, ds:0B333C4h; this
0x5C2A19: call    Player_ClearSpecializationAdvanceCounts; Class changed: clear the three Combat/Magic/Stealth skill-advance counters.
0x5C2A1E: test    edi, edi
0x5C2A20: jz      short loc_5C2A4E
0x5C2A22: lea     esi, [edi+3Ch]
0x5C2A25: test    esi, esi
0x5C2A27: jz      short loc_5C2A4E
0x5C2A29: lea     esp, [esp+0]
0x5C2A30: mov     eax, [esi]
0x5C2A32: test    eax, eax
0x5C2A34: jz      short loc_5C2A4E
0x5C2A36: mov     ecx, ds:0B333C4h
0x5C2A3C: mov     edx, [ecx]
0x5C2A3E: push    eax
0x5C2A3F: mov     eax, [edx+2DCh]
0x5C2A45: call    eax
0x5C2A47: mov     esi, [esi+4]
0x5C2A4A: test    esi, esi
0x5C2A4C: jnz     short loc_5C2A30
0x5C2A4E: mov     ecx, ds:0B333C4h; this
0x5C2A54: call    Player_ReplayDeferredCharGenSkillUsage; Replay deferred chargen skill usage after installing the new class so major/minor and specialization multipliers are evaluated from Oblivion's current TESClass.
0x5C2A59: call    UI_RefreshStatsMenuActorValues
0x5C2A5E: fld     dword ptr ds:0A379B4h
0x5C2A64: push    ecx
0x5C2A65: mov     ecx, ds:0B333C4h
0x5C2A6B: fstp    [esp+18h+a2]
0x5C2A6E: call    sub_5F2530; Fast-travel loop player AV update: clamps/restores health toward base+modifier over travel time.
0x5C2A73: mov     ecx, ds:0B333C4h
0x5C2A79: push    9
0x5C2A7B: call    Actor_GetBaseCalcAVi
0x5C2A80: mov     [esp+14h+var_8], eax
0x5C2A84: fild    [esp+14h+var_8]
0x5C2A88: push    1; float
0x5C2A8A: push    ecx
0x5C2A8B: mov     ecx, ds:0B333C4h
0x5C2A91: fstp    [esp+1Ch+var_8]
0x5C2A95: fld     [esp+1Ch+var_8]
0x5C2A99: fstp    [esp+1Ch+var_1C]; float
0x5C2A9C: call    sub_5F25F0; Fast-travel loop player AV update: magicka regeneration/active magic adjustment over travel time.
0x5C2AA1: mov     ecx, ds:0B333C4h
0x5C2AA7: call    sub_6645C0
0x5C2AAC: call    MagicMenu_Create
0x5C2AB1: call    StatsMenu_Create
0x5C2AB6: mov     edi, [esp+14h+var_4]
0x5C2ABA: jmp     short loc_5C2AC5
0x5C2ABC: push    1; skipDerivedStats
0x5C2ABE: mov     ecx, ebp; this
0x5C2AC0: call    TESNPC_RecalculateAutoStats; Authoritative Oblivion TESNPC auto-stat calculation. For each of 21 skills: major = 25+(level-1), non-major = 5+0.1*(level-1), then add 5+0.5*(level-1) for matching class specialization, then the signed race bonus, cap at 100, and store in TESNPC::baseSkills. The chargen placeholder class suppresses major/specialization contributions. Attributes start from sex-specific race values, add configured +5 class-primary bonuses, then add (level-1) per governed major skill or 0.2*(level-1) per governed non-major skill, capped at 100.
0x5C2AC5: call    UI_RefreshStatsMenuActorValues
0x5C2ACA: mov     ecx, ebp
0x5C2ACC: call    sub_522760
0x5C2AD1: mov     ecx, ds:0B333C4h
0x5C2AD7: call    sub_6626E0
0x5C2ADC: fld     dword ptr ds:0A379B4h
0x5C2AE2: push    ecx
0x5C2AE3: mov     ecx, ds:0B333C4h
0x5C2AE9: fstp    [esp+18h+a2]
0x5C2AEC: call    sub_5F2530; Fast-travel loop player AV update: clamps/restores health toward base+modifier over travel time.
0x5C2AF1: fld     dword ptr ds:0A57EF8h
0x5C2AF7: push    1; float
0x5C2AF9: push    ecx
0x5C2AFA: mov     ecx, ds:0B333C4h
0x5C2B00: fstp    [esp+1Ch+var_1C]; float
0x5C2B03: call    sub_5F25F0; Fast-travel loop player AV update: magicka regeneration/active magic adjustment over travel time.
0x5C2B08: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x5C2B0D: mov     ecx, ds:0B333C4h
0x5C2B13: push    0
0x5C2B15: call    PlayerCharacter_SetCurrentMagicItem
0x5C2B1A: mov     ecx, ds:0B333C4h; this
0x5C2B20: call    Player_RecalculateAllRequiredSkillExperience; Rebuild requiredSkillExp[21] after all Race/Sex and class-dependent base-skill mutations are complete.
0x5C2B25: cmp     byte ptr [edi+894h], 0
0x5C2B2C: setz    cl
0x5C2B2F: push    ecx; a1
0x5C2B30: mov     ecx, ds:0B333C4h; this
0x5C2B36: call    TogglePOV
0x5C2B3B: pop     edi
0x5C2B3C: pop     ebp
0x5C2B3D: pop     esi
0x5C2B3E: add     esp, 8
0x5C2B41: retn
