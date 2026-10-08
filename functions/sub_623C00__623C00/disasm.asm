0x623C00: sub     esp, 10h
0x623C03: push    esi
0x623C04: mov     esi, ecx
0x623C06: cmp     dword ptr [esi+6Ch], 0
0x623C0A: jnz     loc_623E3F
0x623C10: cmp     dword ptr [esi+70h], 8
0x623C14: jz      loc_623E3F
0x623C1A: fldz
0x623C1C: push    edi; a5
0x623C1D: fcomp   dword ptr [esi+184h]
0x623C23: fnstsw  ax
0x623C25: test    ah, 41h
0x623C28: jnz     short loc_623C44
0x623C2A: mov     edi, [esi+3Ch]; a1
0x623C2D: push    0; useActorProjection
0x623C2F: call    CombatController_GetCurrentTarget
0x623C34: push    eax; to
0x623C35: push    edi; from
0x623C36: call    TESObjectREFR_GetSurfaceDistance; Three-argument cdecl routine: returns float surface distance from 'from' to 'to'. All 24 callers push exactly from, to, and useActorProjection then reclaim 0x0C. The prior EDI register argument, fourth stack byte, and double return were analysis pollution.
0x623C3B: fstp    dword ptr [esi+184h]
0x623C41: add     esp, 0Ch
0x623C44: fld     dword ptr [esi+184h]
0x623C4A: mov     ecx, esi; this
0x623C4C: fstp    [esp+18h+var_10]
0x623C50: call    CombatController_GetDesiredCombatDistance; Caches desired combat distance based on active combat mode and ranged/melee data.
0x623C55: lea     eax, [esp+18h+outMaximumDistance]
0x623C59: fstp    [esp+18h+var_C]
0x623C5D: fldz
0x623C5F: push    eax; outMaximumDistance
0x623C60: lea     ecx, [esp+1Ch+outOptimalDistance]
0x623C64: fst     [esp+1Ch+outOptimalDistance]
0x623C68: push    ecx; outOptimalDistance
0x623C69: fstp    [esp+20h+outMaximumDistance]
0x623C6D: mov     ecx, esi; this
0x623C6F: call    CombatController_GetRangedDistanceBounds; Combines projectile/spell bounds with TESCombatStyle optimal/max range multipliers (SDK +0x6C/+0x70).
0x623C74: mov     eax, [esi+70h]
0x623C77: cmp     eax, 2
0x623C7A: jz      short loc_623C81
0x623C7C: cmp     eax, 4
0x623C7F: jnz     short loc_623C89
0x623C81: fld     [esp+18h+outOptimalDistance]
0x623C85: fstp    [esp+18h+var_C]
0x623C89: fld     [esp+18h+var_C]
0x623C8D: push    ebx
0x623C8E: push    0; unused
0x623C90: sub     esp, 8
0x623C93: fstp    [esp+28h+maximumDistance]; maximumDistance
0x623C97: mov     ecx, esi; this
0x623C99: fld     [esp+28h+var_10]
0x623C9D: fstp    [esp+28h+surfaceDistance]; surfaceDistance
0x623CA0: call    CombatController_IsTargetWithinRangedDistance; Tests surfaceDistance against maximumDistance plus a combat-style-controlled tolerance. Ranged weapon modes 2 and 4 suppress that extra tolerance.
0x623CA5: mov     bl, al
0x623CA7: test    bl, bl
0x623CA9: jz      short loc_623D0E
0x623CAB: mov     eax, [esi+70h]
0x623CAE: test    eax, eax
0x623CB0: jz      short loc_623CBC
0x623CB2: cmp     eax, 1
0x623CB5: jz      short loc_623CBC
0x623CB7: cmp     eax, 3
0x623CBA: jnz     short loc_623D0E
0x623CBC: cmp     byte ptr [esi+158h], 0
0x623CC3: jnz     short loc_623D0E
0x623CC5: mov     edi, [esi+3Ch]
0x623CC8: push    0; outAngleDegrees
0x623CCA: mov     ecx, esi
0x623CCC: call    CombatController_GetCurrentTarget
0x623CD1: push    eax; target
0x623CD2: push    edi; actor
0x623CD3: call    Actor_IsFacingReferenceWithinCombatAngle; Computes the absolute XY heading difference from actor to target, normalizes across the 360-degree boundary, optionally returns degrees, and tests it against the combat-facing threshold game setting.
0x623CD8: add     esp, 0Ch
0x623CDB: test    al, al
0x623CDD: jz      short loc_623D0E
0x623CDF: movzx   edx, byte ptr [esi+158h]
0x623CE6: mov     edi, [esi+3Ch]
0x623CE9: push    edx
0x623CEA: mov     ecx, esi
0x623CEC: call    CombatController_GetCurrentTarget
0x623CF1: push    eax
0x623CF2: push    edi
0x623CF3: call    sub_617590
0x623CF8: add     esp, 0Ch
0x623CFB: mov     [esi+174h], al
0x623D01: pop     ebx
0x623D02: pop     edi
0x623D03: mov     ecx, esi
0x623D05: pop     esi
0x623D06: add     esp, 10h
0x623D09: jmp     sub_61D320
0x623D0E: cmp     byte ptr [esi+49h], 0
0x623D12: jnz     loc_623F87
0x623D18: mov     edi, 1
0x623D1D: cmp     [esi+74h], edi
0x623D20: jz      loc_623F87
0x623D26: mov     ecx, esi
0x623D28: call    loc_622820
0x623D2D: test    al, al
0x623D2F: jnz     loc_623E3D
0x623D35: mov     eax, [esi+70h]
0x623D38: push    eax; mode
0x623D39: call    CombatMode_IsRangedWeaponMode; Returns true only for native combat modes 2 and 4, the two ranged-weapon modes used by the distance and attack-option logic.
0x623D3E: mov     cl, al
0x623D40: add     esp, 4
0x623D43: test    cl, cl
0x623D45: jz      short loc_623D65
0x623D47: cmp     dword ptr [esi+74h], 0
0x623D4B: jnz     short loc_623D65
0x623D4D: fld     [esp+1Ch+var_10]
0x623D51: fld     [esp+1Ch+outMaximumDistance]
0x623D55: fcompp
0x623D57: fnstsw  ax
0x623D59: test    ah, 5
0x623D5C: jp      short loc_623D94
0x623D5E: mov     byte ptr [esi+17Eh], 1
0x623D65: fld     [esp+1Ch+var_10]
0x623D69: fld     [esp+1Ch+var_C]
0x623D6D: fcompp
0x623D6F: fnstsw  ax
0x623D71: test    ah, 5
0x623D74: jp      loc_623E81
0x623D7A: test    cl, cl
0x623D7C: jz      short loc_623DD8
0x623D7E: cmp     byte ptr [esi+116h], 0
0x623D85: jz      short loc_623DB8
0x623D87: pop     ebx
0x623D88: pop     edi
0x623D89: mov     ecx, esi; this
0x623D8B: pop     esi
0x623D8C: add     esp, 10h
0x623D8F: jmp     ActorMovement_BuildPathGridWaypointList; Verified actor movement path helper called by CombatController_UpdateMovementAndReachability and other movement callers. Finds a reachable PathGrid node near the actor, checks distance and line of sight, collects enabled linked-point positions into the actor's waypoint list, then updates the movement path. Owner class layout remains Unknown.
0x623D94: cmp     byte ptr [esi+158h], 0
0x623D9B: jnz     loc_623E3D
0x623DA1: cmp     dword ptr [esi+6Ch], 2
0x623DA5: jz      loc_623E3D
0x623DAB: pop     ebx
0x623DAC: pop     edi
0x623DAD: mov     ecx, esi
0x623DAF: pop     esi
0x623DB0: add     esp, 10h
0x623DB3: jmp     sub_61CE40; Combat dodge selection consumes Actor_GetFatigueFraction; SmartAI reads the same resource without changing actions.
0x623DB8: test    bl, bl
0x623DBA: jnz     short loc_623DF8
0x623DBC: mov     ecx, esi
0x623DBE: call    CombatController_CanReachCurrentTarget; Returns current-target reachability at +0x174, additionally forcing false when a non-water-capable actor cannot fight a swimming target.
0x623DC3: test    al, al
0x623DC5: pop     ebx
0x623DC6: pop     edi
0x623DC7: mov     ecx, esi
0x623DC9: pop     esi
0x623DCA: jnz     loc_623D06
0x623DD0: add     esp, 10h
0x623DD3: jmp     sub_61FE90
0x623DD8: test    bl, bl
0x623DDA: jz      short loc_623E44
0x623DDC: mov     ecx, esi
0x623DDE: call    sub_6163A0
0x623DE3: test    al, al
0x623DE5: jnz     short loc_623E44
0x623DE7: mov     ecx, [esi+3Ch]
0x623DEA: mov     edx, [ecx]
0x623DEC: mov     eax, [edx+25Ch]
0x623DF2: call    eax
0x623DF4: test    al, al
0x623DF6: jnz     short loc_623E3D
0x623DF8: mov     ecx, [esi+3Ch]
0x623DFB: mov     ecx, [ecx+58h]
0x623DFE: mov     edx, [ecx]
0x623E00: mov     eax, [edx+2C4h]
0x623E06: push    0
0x623E08: push    2
0x623E0A: call    eax
0x623E0C: mov     ecx, [esi+3Ch]
0x623E0F: mov     ecx, [ecx+58h]
0x623E12: mov     edx, [ecx]
0x623E14: mov     eax, [edx+2C4h]
0x623E1A: push    edi
0x623E1B: push    edi
0x623E1C: call    eax
0x623E1E: mov     ecx, [esi+3Ch]
0x623E21: mov     ecx, [ecx+58h]
0x623E24: mov     edx, [ecx]
0x623E26: mov     eax, [edx+2C4h]
0x623E2C: push    edi
0x623E2D: push    100h
0x623E32: call    eax
0x623E34: push    3
0x623E36: mov     ecx, esi
0x623E38: call    sub_619920
0x623E3D: pop     ebx
0x623E3E: pop     edi
0x623E3F: pop     esi
0x623E40: add     esp, 10h
0x623E43: retn
0x623E44: mov     ecx, esi
0x623E46: call    CombatController_CanReachCurrentTarget; Returns current-target reachability at +0x174, additionally forcing false when a non-water-capable actor cannot fight a swimming target.
0x623E4B: test    al, al
0x623E4D: jnz     loc_623D01
0x623E53: mov     ecx, [esi+3Ch]
0x623E56: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x623E5B: mov     edx, [eax]
0x623E5D: mov     ecx, eax
0x623E5F: mov     eax, [edx+16Ch]
0x623E65: push    80h ; '€'
0x623E6A: call    eax
0x623E6C: test    al, al
0x623E6E: jz      loc_623D01
0x623E74: pop     ebx
0x623E75: pop     edi
0x623E76: mov     ecx, esi
0x623E78: pop     esi
0x623E79: add     esp, 10h
0x623E7C: jmp     sub_61FEF0
0x623E81: mov     ecx, esi
0x623E83: call    CombatController_GetCurrentTarget
0x623E88: cmp     eax, ds:0B333C4h
0x623E8E: jnz     short loc_623E94
0x623E90: mov     byte ptr [esi+4Bh], 1
0x623E94: mov     ecx, esi
0x623E96: call    CombatController_GetCurrentTarget
0x623E9B: test    eax, eax
0x623E9D: jz      short loc_623EEC
0x623E9F: mov     ecx, esi
0x623EA1: call    CombatController_GetCurrentTarget
0x623EA6: mov     edx, [eax]
0x623EA8: mov     ecx, eax
0x623EAA: mov     eax, [edx+350h]
0x623EB0: call    eax
0x623EB2: test    al, al
0x623EB4: jz      short loc_623EEC
0x623EB6: cmp     byte ptr [esi+49h], 0
0x623EBA: jz      short loc_623E3D
0x623EBC: mov     ecx, [esi+3Ch]
0x623EBF: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x623EC4: test    al, al
0x623EC6: jz      short loc_623ED2
0x623EC8: mov     ecx, [esi+3Ch]; this
0x623ECB: push    0; shouldBlock
0x623ECD: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x623ED2: cmp     [esi+74h], edi
0x623ED5: jnz     loc_623E3D
0x623EDB: pop     ebx
0x623EDC: mov     [esi+78h], edi
0x623EDF: pop     edi
0x623EE0: mov     dword ptr [esi+74h], 3
0x623EE7: pop     esi
0x623EE8: add     esp, 10h
0x623EEB: retn
0x623EEC: mov     ecx, [esi+70h]
0x623EEF: push    ecx; mode
0x623EF0: call    CombatMode_IsRangedWeaponMode; Returns true only for native combat modes 2 and 4, the two ranged-weapon modes used by the distance and attack-option logic.
0x623EF5: add     esp, 4
0x623EF8: test    al, al
0x623EFA: jz      short loc_623F7A
0x623EFC: cmp     byte ptr [esi+116h], 0
0x623F03: jz      short loc_623F12
0x623F05: pop     ebx
0x623F06: pop     edi
0x623F07: mov     ecx, esi; this
0x623F09: pop     esi
0x623F0A: add     esp, 10h
0x623F0D: jmp     ActorMovement_BuildPathGridWaypointList; Verified actor movement path helper called by CombatController_UpdateMovementAndReachability and other movement callers. Finds a reachable PathGrid node near the actor, checks distance and line of sight, collects enabled linked-point positions into the actor's waypoint list, then updates the movement path. Owner class layout remains Unknown.
0x623F12: mov     ecx, [esi+3Ch]
0x623F15: call    Actor_GetEffectiveCombatStyle; Resolves actor/mount combat style and falls back to DefaultCombatStyle when the base style is null.
0x623F1A: mov     edx, [eax]
0x623F1C: mov     ecx, eax
0x623F1E: mov     eax, [edx+158h]
0x623F24: call    eax
0x623F26: fstp    [esp+1Ch+outMaximumDistance]
0x623F2A: fldz
0x623F2C: fld     [esp+1Ch+outMaximumDistance]
0x623F30: fcom    st(1)
0x623F32: fnstsw  ax
0x623F34: fstp    st(1)
0x623F36: test    ah, 41h
0x623F39: jnz     short loc_623F78
0x623F3B: fld     [esp+1Ch+var_10]
0x623F3F: fcompp
0x623F41: fnstsw  ax
0x623F43: test    ah, 5
0x623F46: jp      short loc_623F7A
0x623F48: mov     ecx, offset unk_B372A8
0x623F4D: call    GameSetting_GetSafeFloatPointer
0x623F52: fld     [esp+1Ch+outMaximumDistance]
0x623F56: sub     esp, 8
0x623F59: fstp    [esp+24h+var_20]; float
0x623F5D: mov     ecx, esi
0x623F5F: fld     dword ptr [eax]
0x623F61: fstp    [esp+24h+maximumDistance]; float
0x623F64: call    CombatController_GetCurrentTarget
0x623F69: push    eax; int
0x623F6A: mov     ecx, esi
0x623F6C: call    sub_61CAA0
0x623F71: pop     ebx
0x623F72: pop     edi
0x623F73: pop     esi
0x623F74: add     esp, 10h
0x623F77: retn
0x623F78: fstp    st
0x623F7A: pop     ebx
0x623F7B: pop     edi
0x623F7C: mov     ecx, esi
0x623F7E: pop     esi
0x623F7F: add     esp, 10h
0x623F82: jmp     sub_61CE40; Combat dodge selection consumes Actor_GetFatigueFraction; SmartAI reads the same resource without changing actions.
0x623F87: pop     ebx
0x623F88: pop     edi
0x623F89: mov     ecx, esi
0x623F8B: pop     esi
0x623F8C: add     esp, 10h
0x623F8F: jmp     sub_6191B0
