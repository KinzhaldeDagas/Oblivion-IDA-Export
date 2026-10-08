0x680AA0: sub     esp, 1Ch; Verified cost calculation: obtains the reference's position in the specified spatial form and adds Euclidean distance from the supplied position. When includeTransitionPenalty is true it also adds TravelPath_ComputeDoorTransitionPenalty. Sentinel/invalid-position fallback is the global float constant; broader heuristic policy is Unknown.
0x680AA3: mov     eax, [esp+1Ch+space]
0x680AA7: fld     dword ptr ds:0A32048h
0x680AAD: test    eax, eax
0x680AAF: fstp    [esp+1Ch+var_1C]
0x680AB2: jz      short loc_680B2E
0x680AB4: push    esi
0x680AB5: mov     esi, [esp+20h+reference]
0x680AB9: test    esi, esi
0x680ABB: jz      short loc_680B2D
0x680ABD: lea     ecx, [esp+20h+outPosition]
0x680AC1: push    ecx; outPosition
0x680AC2: push    eax; space
0x680AC3: mov     ecx, esi; this
0x680AC5: call    TravelPathSpaceDoorLink_GetPositionInSpace; Verified: chooses the link endpoint reference matching the supplied spatial form, calls its position virtual at vtable offset +0x174, and copies the NiPoint3 to outPosition. Returns false for missing/mismatched endpoints.
0x680ACA: test    al, al
0x680ACC: jz      short loc_680B2D
0x680ACE: mov     ecx, [esp+20h+position]
0x680AD2: fld     dword ptr [ecx]
0x680AD4: fcomp   qword ptr ds:0A3A5B0h
0x680ADA: fnstsw  ax
0x680ADC: test    ah, 44h
0x680ADF: jnp     short loc_680B0C
0x680AE1: fld     dword ptr [ecx]
0x680AE3: fsub    [esp+20h+outPosition.x]
0x680AE7: fstp    [esp+20h+var_C]
0x680AEB: fld     dword ptr [ecx+4]
0x680AEE: fsub    [esp+20h+outPosition.y]
0x680AF2: fstp    [esp+20h+var_8]
0x680AF6: fld     dword ptr [ecx+8]
0x680AF9: lea     ecx, [esp+20h+var_C]
0x680AFD: fsub    [esp+20h+outPosition.z]
0x680B01: fstp    [esp+20h+var_4]
0x680B05: call    NiPoint3_Length; Returns sqrt(x*x + y*y + z*z) for the three-float NiPoint3 value. Fallout's related NiPoint3 helpers corroborate the engine type; behavior verified here.
0x680B0A: jmp     short loc_680B0E
0x680B0C: fldz
0x680B0E: cmp     [esp+20h+includeTransitionPenalty], 0
0x680B13: fstp    [esp+20h+var_1C]
0x680B17: jz      short loc_680B2D
0x680B19: mov     edx, [esp+20h+sourceRef]
0x680B1D: push    edx; sourceRefContext
0x680B1E: mov     ecx, esi; doorLink
0x680B20: call    TravelPath_ComputeDoorTransitionPenalty; Verified Oblivion route costs: after the access-policy check, a successful TESObjectDOOR_CheckActorAccess with mustLockpickOut=1 adds fPathMustLockpickPenalty (plus zero-valued dbl_A2FC68); a failed check adds fPathImpassableDoorPenalty. Separately, if either endpoint has minimal-use flag and ignore-min-use is false, adds fPathMinimalUseDoorPenalty. Fallout's search uses fixed 409600 penalties for its policy/minimal-use branches, so the numeric behavior differs.
0x680B25: fadd    [esp+20h+var_1C]
0x680B29: fstp    [esp+20h+var_1C]
0x680B2D: pop     esi
0x680B2E: fld     [esp+1Ch+var_1C]
0x680B31: add     esp, 1Ch
0x680B34: retn
