0x695010: sub     esp, 34h; MagicBallProjectile SpecialIdle setup. Synchronizes projectile node transform and starts SpecialIdle_Projectile sequence from the controller-manager text-key map.
0x695013: push    ebx
0x695014: push    esi
0x695015: mov     esi, ecx
0x695017: mov     eax, [esi]
0x695019: mov     edx, [eax+154h]
0x69501F: call    edx
0x695021: mov     ebx, eax
0x695023: test    ebx, ebx
0x695025: jz      loc_695139
0x69502B: fld     dword ptr [esi+84h]
0x695031: push    edi
0x695032: fabs
0x695034: mov     ecx, esi
0x695036: fstp    [esp+40h+var_34]
0x69503A: fld     [esp+40h+var_34]
0x69503E: fstp    dword ptr [ebx+60h]
0x695041: mov     eax, [esi]
0x695043: mov     edx, [eax+174h]
0x695049: call    edx
0x69504B: mov     ecx, [eax]
0x69504D: mov     [ebx+54h], ecx
0x695050: mov     edx, [eax+4]
0x695053: mov     [ebx+58h], edx
0x695056: mov     eax, [eax+8]
0x695059: mov     [ebx+5Ch], eax
0x69505C: mov     edx, [esi+24h]
0x69505F: mov     ecx, [esi+20h]
0x695062: mov     eax, [esi+28h]
0x695065: sub     esp, 0Ch
0x695068: mov     [esp+4Ch+var_2C], edx
0x69506C: fld     [esp+4Ch+var_2C]
0x695070: fstp    [esp+4Ch+easeOutTime]; rollY
0x695074: mov     [esp+4Ch+var_30], ecx
0x695078: fld     [esp+4Ch+var_30]
0x69507C: mov     [esp+4Ch+var_28], eax
0x695080: fstp    [esp+4Ch+a2]; pitchX
0x695084: lea     ecx, [esp+4Ch+var_24]; this
0x695088: fld     [esp+4Ch+var_28]
0x69508C: fstp    [esp+4Ch+easeInTime]; yawZ
0x69508F: call    NiMatrix33_SetEulerZXY; Writes a NiMatrix33 from Euler angles in Z*(X*Y) order: yawZ, pitchX, rollY. All observed callers use the written matrix and ignore incidental EAX.
0x695094: lea     edi, [ebx+30h]
0x695097: mov     ecx, 9
0x69509C: lea     esi, [esp+40h+var_24]
0x6950A0: push    ebx
0x6950A1: rep movsd
0x6950A3: call    sub_6F94E0
0x6950A8: mov     eax, [ebx+0Ch]
0x6950AB: push    eax
0x6950AC: push    offset stru_B3CAC0
0x6950B1: call    NiRTTI_Cast
0x6950B6: mov     esi, eax
0x6950B8: add     esp, 0Ch
0x6950BB: test    esi, esi
0x6950BD: jz      short loc_695138
0x6950BF: lea     ecx, [esp+40h+var_34]
0x6950C3: push    ecx
0x6950C4: push    offset aSpecialidle_pr; "SpecialIdle_Projectile"
0x6950C9: lea     ecx, [esi+58h]
0x6950CC: call    NiTMap_GetAt; Projectile update directly looks up SpecialIdle_Projectile in projectile NiNode controller manager sequence map.
0x6950D1: test    al, al
0x6950D3: jz      short loc_695138
0x6950D5: mov     edi, [esp+40h+var_34]
0x6950D9: test    edi, edi
0x6950DB: jz      short loc_695138
0x6950DD: fldz
0x6950DF: push    ecx
0x6950E0: mov     ecx, esi; this
0x6950E2: fstp    [esp+44h+easeOutTime]; easeOutTime
0x6950E5: call    NiControllerManager_DeactivateAllSequences; Iterates all controller-manager sequence slots and deactivates each sequence with the supplied ease-out time and transition flag zero.
0x6950EA: fldz
0x6950EC: push    0; transition
0x6950EE: push    0; timeSyncSequence
0x6950F0: sub     esp, 8
0x6950F3: fstp    [esp+50h+easeInTime]; easeInTime
0x6950F7: mov     ecx, edi; this
0x6950F9: fld1
0x6950FB: fstp    [esp+50h+weight]; weight
0x6950FE: push    0; startOver
0x695100: push    0; priority
0x695102: call    NiControllerSequence_Activate; Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
0x695107: or      word ptr [esi+8], 8
0x69510C: fld     dword ptr ds:0A7DEB4h
0x695112: fchs
0x695114: push    1; a3
0x695116: fstp    dword ptr [edi+48h]
0x695119: push    ecx
0x69511A: fld     dword ptr ds:0B33A30h
0x695120: mov     ecx, ebx; this
0x695122: fsub    qword ptr ds:0A2FC80h
0x695128: fstp    [esp+48h+var_34]
0x69512C: fld     [esp+48h+var_34]
0x695130: fstp    [esp+48h+a2]; a2
0x695133: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x695138: pop     edi
0x695139: pop     esi
0x69513A: pop     ebx
0x69513B: add     esp, 34h
0x69513E: retn
