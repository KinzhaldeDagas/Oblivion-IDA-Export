0x69EB60: push    esi; Verified MagicModelHitEffect_Update calls base lifetime/target checks, uses bFinished to stop the SpecialIdle_HitEffect controller sequence, and returns false after the visual is done so ActorProcessManager_UpdateTempEffects can remove it.
0x69EB61: mov     esi, ecx
0x69EB63: mov     ecx, [esi+1Ch]
0x69EB66: test    ecx, ecx
0x69EB68: jz      loc_69EC29
0x69EB6E: mov     eax, [ecx]
0x69EB70: mov     edx, [eax+154h]
0x69EB76: call    edx
0x69EB78: test    eax, eax
0x69EB7A: jz      loc_69EC29
0x69EB80: fld     [esp+4+deltaSeconds]
0x69EB84: push    ecx
0x69EB85: mov     ecx, esi; this
0x69EB87: fstp    [esp+8+var_8]; deltaSeconds
0x69EB8A: call    MagicHitEffect_Update; Verified MagicHitEffect_Update accumulates elapsedSeconds at +0x20, rejects missing/unloaded/flagged targetReference at +0x1C, and sets bFinished (+0x24) when durationSeconds (+0x08) is exceeded. Model and shader overrides use bFinished to end their visuals; the field's broad role is Probable 'finished/expired' state.
0x69EB8F: test    al, al
0x69EB91: jz      loc_69EC29
0x69EB97: cmp     dword ptr [esi+30h], 0
0x69EB9B: jz      short loc_69EC08
0x69EB9D: mov     eax, [esi]
0x69EB9F: mov     edx, [eax+70h]
0x69EBA2: mov     ecx, esi
0x69EBA4: call    edx
0x69EBA6: mov     eax, [esi+30h]
0x69EBA9: mov     eax, [eax+0Ch]
0x69EBAC: push    eax
0x69EBAD: push    offset stru_B3CAC0
0x69EBB2: call    NiRTTI_Cast
0x69EBB7: add     esp, 8
0x69EBBA: test    eax, eax
0x69EBBC: jz      short loc_69EC08
0x69EBBE: push    offset aSpecialidle_hi; "SpecialIdle_HitEffect"
0x69EBC3: mov     ecx, eax; this
0x69EBC5: call    NiControllerManager_FindSequenceByName; Looks up a NiControllerSequence by name in the controller manager name map at +0x58; returns null on miss.
0x69EBCA: mov     ecx, eax; this
0x69EBCC: test    ecx, ecx
0x69EBCE: jz      short loc_69EC08
0x69EBD0: fld     dword ptr [ecx+34h]
0x69EBD3: fld     dword ptr [ecx+30h]
0x69EBD6: fcompp
0x69EBD8: fnstsw  ax
0x69EBDA: test    ah, 5
0x69EBDD: jp      short loc_69EC08
0x69EBDF: cmp     dword ptr [ecx+44h], 0
0x69EBE3: jz      short loc_69EC08
0x69EBE5: cmp     dword ptr [ecx+24h], 2
0x69EBE9: jz      short loc_69EBF1
0x69EBEB: cmp     byte ptr [esi+24h], 0
0x69EBEF: jz      short loc_69EC23
0x69EBF1: fldz
0x69EBF3: push    0; transition
0x69EBF5: push    ecx
0x69EBF6: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x69EBF9: mov     byte ptr [esi+24h], 1
0x69EBFD: call    NiControllerSequence_Deactivate; Native controller-sequence deactivation. Immediate stop clears active state/controller links; positive ease-out enters state 3 or 4 and records fade timing.
0x69EC02: fld     dword ptr [esi+20h]
0x69EC05: fstp    dword ptr [esi+8]
0x69EC08: cmp     byte ptr [esi+24h], 0
0x69EC0C: jz      short loc_69EC23
0x69EC0E: fld     dword ptr [esi+20h]
0x69EC11: fld     dword ptr [esi+8]
0x69EC14: fadd    qword ptr ds:0A3D0C0h
0x69EC1A: fcompp
0x69EC1C: fnstsw  ax
0x69EC1E: test    ah, 5
0x69EC21: jnp     short loc_69EC29
0x69EC23: mov     al, 1
0x69EC25: pop     esi
0x69EC26: retn    4
0x69EC29: xor     al, al
0x69EC2B: pop     esi
0x69EC2C: retn    4
