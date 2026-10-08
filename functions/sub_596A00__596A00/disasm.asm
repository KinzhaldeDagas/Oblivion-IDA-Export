0x596A00: push    ecx; Oblivion character-generation class commit. Installs the selected TESClass, rebuilds TESNPC auto stats, clears level/attribute/specialization advancement state, then replays deferred skill use under the new seven-major and specialization classification.
0x596A01: push    esi
0x596A02: push    0; int
0x596A04: push    offset ??_R0?AVClassMenu@@@8; struct TypeDescriptor *
0x596A09: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x596A0E: push    0; int
0x596A10: push    406h
0x596A15: call    Menu_GetOpenMenuTile
0x596A1A: add     esp, 4
0x596A1D: mov     ecx, eax
0x596A1F: call    Tile_GetParentMenu
0x596A24: push    eax; void *
0x596A25: call    OblivionDynamicCast
0x596A2A: mov     esi, eax
0x596A2C: add     esp, 14h
0x596A2F: test    esi, esi
0x596A31: mov     [esp+8+var_4], esi
0x596A35: jz      loc_596BB8
0x596A3B: call    InterfaceManager_ConsumeMessageButton
0x596A40: cmp     al, 2
0x596A42: jnz     loc_596BB8
0x596A48: cmp     dword ptr [esi+3Ch], 0
0x596A4C: jz      loc_596BAF
0x596A52: mov     ecx, ds:0B333C4h
0x596A58: mov     eax, [ecx]
0x596A5A: mov     edx, [eax+170h]
0x596A60: push    ebp
0x596A61: push    0; int
0x596A63: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x596A68: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x596A6D: push    0; int
0x596A6F: call    edx
0x596A71: push    eax; void *
0x596A72: call    OblivionDynamicCast
0x596A77: mov     ebp, eax
0x596A79: add     esp, 14h
0x596A7C: test    ebp, ebp
0x596A7E: jz      loc_596BAE
0x596A84: mov     ecx, ds:0B333C4h
0x596A8A: mov     eax, [ecx]
0x596A8C: mov     edx, [eax+268h]
0x596A92: push    edi
0x596A93: call    edx
0x596A95: mov     edi, eax
0x596A97: test    edi, edi
0x596A99: jz      short loc_596AC4
0x596A9B: lea     esi, [edi+3Ch]
0x596A9E: test    esi, esi
0x596AA0: jz      short loc_596AC0
0x596AA2: mov     eax, [esi]
0x596AA4: test    eax, eax
0x596AA6: jz      short loc_596AC0
0x596AA8: mov     ecx, ds:0B333C4h
0x596AAE: mov     edx, [ecx]
0x596AB0: push    eax
0x596AB1: mov     eax, [edx+2E0h]
0x596AB7: call    eax
0x596AB9: mov     esi, [esi+4]
0x596ABC: test    esi, esi
0x596ABE: jnz     short loc_596AA2
0x596AC0: mov     esi, [esp+14h+var_8]
0x596AC4: fldz
0x596AC6: push    ecx
0x596AC7: mov     ecx, ds:0B333C4h
0x596ACD: fstp    [esp+18h+deltaTime]; deltaTime
0x596AD0: add     ecx, 68h ; 'h'; this
0x596AD3: call    MagicTarget_ProcessEffects; Verified active-effect manager: obtains the target's active-effect list, checks target parent/node/cell/process conditions, then enters the list loop. Each eligible ActiveEffect goes through ActiveEffect_Base_ProcessEffect; removed effects are unlinked and destroyed by their virtual destructor. Actor_ProcessMagicEffect calls this manager each actor process tick.
0x596AD8: mov     ecx, [esi+3Ch]
0x596ADB: mov     [ebp+104h], ecx
0x596AE1: push    1; skipDerivedStats
0x596AE3: mov     ecx, ebp; this
0x596AE5: call    TESNPC_RecalculateAutoStats; Class-menu apply invokes TESNPC_RecalculateAutoStats after installing the chosen TESClass, so native starting skills are regenerated from Oblivion class major membership, specialization, level, and race bonuses.
0x596AEA: mov     edx, ds:0B333C4h
0x596AF0: mov     dword ptr [edx+184h], 0; Applying a chosen class during character generation resets majorSkillAdvances to zero.
0x596AFA: mov     eax, ds:0B333C4h
0x596AFF: mov     byte ptr [eax+1DCh], 0; Applying a chosen class clears bCanLevelUp.
0x596B06: mov     ecx, ds:0B333C4h; this
0x596B0C: call    Player_ConsumeOldestAttributeBonusBucket; Consume/reset the active attribute-bonus bucket before replaying deferred character-generation skill use under the newly chosen class.
0x596B11: mov     ecx, ds:0B333C4h; this
0x596B17: call    Player_ClearSpecializationAdvanceCounts; Clear all three specialization advance counters before deferred character-generation use is replayed.
0x596B1C: test    edi, edi
0x596B1E: jz      short loc_596B45
0x596B20: lea     esi, [edi+3Ch]
0x596B23: test    esi, esi
0x596B25: jz      short loc_596B45
0x596B27: mov     eax, [esi]
0x596B29: test    eax, eax
0x596B2B: jz      short loc_596B45
0x596B2D: mov     ecx, ds:0B333C4h
0x596B33: mov     edx, [ecx]
0x596B35: push    eax
0x596B36: mov     eax, [edx+2DCh]
0x596B3C: call    eax
0x596B3E: mov     esi, [esi+4]
0x596B41: test    esi, esi
0x596B43: jnz     short loc_596B27
0x596B45: mov     ecx, ds:0B333C4h; this
0x596B4B: call    Player_ReplayDeferredCharGenSkillUsage; Replay deferred character-generation skill use after the new class is installed, so required experience and advancement side effects use the new seven-major/specialization classification.
0x596B50: call    UI_RefreshStatsMenuActorValues
0x596B55: fld     dword ptr ds:0A379B4h
0x596B5B: push    ecx
0x596B5C: mov     ecx, ds:0B333C4h
0x596B62: fstp    [esp+1Ch+var_1C]
0x596B65: call    sub_5F2530; Fast-travel loop player AV update: clamps/restores health toward base+modifier over travel time.
0x596B6A: mov     ecx, ds:0B333C4h
0x596B70: push    9
0x596B72: call    Actor_GetBaseCalcAVi
0x596B77: mov     [esp+18h+var_C], eax
0x596B7B: fild    [esp+18h+var_C]
0x596B7F: push    1; float
0x596B81: push    ecx
0x596B82: mov     ecx, ds:0B333C4h
0x596B88: fstp    [esp+20h+var_C]
0x596B8C: fld     [esp+20h+var_C]
0x596B90: fstp    [esp+20h+var_20]; float
0x596B93: call    sub_5F25F0; Fast-travel loop player AV update: magicka regeneration/active magic adjustment over travel time.
0x596B98: mov     ecx, ds:0B333C4h
0x596B9E: call    sub_6645C0
0x596BA3: call    MagicMenu_Create
0x596BA8: call    StatsMenu_Create
0x596BAD: pop     edi
0x596BAE: pop     ebp
0x596BAF: pop     esi
0x596BB0: add     esp, 4
0x596BB3: jmp     loc_596710
0x596BB8: pop     esi
0x596BB9: pop     ecx
0x596BBA: retn
0x596710: push    esi
0x596711: push    406h
0x596716: call    Menu_GetOpenMenuTile
0x59671B: mov     esi, eax
0x59671D: add     esp, 4
0x596720: test    esi, esi
0x596722: jz      short loc_596752
0x596724: push    edi; a3
0x596725: mov     ecx, esi
0x596727: call    Tile_GetParentMenu
0x59672C: mov     edi, eax
0x59672E: test    edi, edi
0x596730: jz      short loc_596751
0x596732: fld     dword ptr ds:0A379B4h
0x596738: push    ecx
0x596739: fstp    dword ptr [esp+14h+a2]; value
0x59673C: push    1772h; propertyCode
0x596741: mov     ecx, esi; this
0x596743: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x596748: mov     ecx, edi; int
0x59674A: pop     edi
0x59674B: pop     esi
0x59674C: jmp     Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x596751: pop     edi
0x596752: pop     esi
0x596753: retn
