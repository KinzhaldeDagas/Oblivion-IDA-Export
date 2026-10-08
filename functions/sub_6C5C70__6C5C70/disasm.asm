0x6C5C70: mov     eax, [esp+arg_10]; Creates or reuses a __TempBlendSequence__ for the current pose, then transitions from that temporary pose to the requested destination sequence through 0x6C9D30. ActorAnimData_PlaySequence uses this for player/camera-visible roots when a normal cross-fade cannot be used.
0x6C5C74: push    esi
0x6C5C75: mov     esi, [esp+4+arg_0]
0x6C5C79: push    eax
0x6C5C7A: push    esi
0x6C5C7B: call    NiControllerManager_GetOrCreateTempBlendSequence; Obtains an inactive __TempBlendSequence__ with enough controlled blocks or allocates one, rebuilds it from the destination/optional source pose, resets it, and registers it with the controller manager. This temporary sequence is manager-owned transition scaffolding.
0x6C5C80: fld1
0x6C5C82: mov     ecx, [esp+4+arg_C]
0x6C5C86: push    0; int
0x6C5C88: sub     esp, 8
0x6C5C8B: fst     [esp+10h+var_C]; float
0x6C5C8F: fstp    [esp+10h+var_10]; float
0x6C5C92: push    ecx; int
0x6C5C93: fld     [esp+14h+arg_4]
0x6C5C97: sub     esp, 8
0x6C5C9A: fstp    [esp+1Ch+var_18]; float
0x6C5C9E: mov     ecx, eax
0x6C5CA0: fld     [esp+1Ch+arg_8]
0x6C5CA4: fstp    [esp+1Ch+var_1C]; float
0x6C5CA7: push    esi; int
0x6C5CA8: call    sub_6C9D30; Internal temporary-pose transition: activates the generated pose sequence, activates the destination with ease-in, deactivates the pose over that interval, and aligns normalized timing fields. Called by NiControllerManager_BlendFromPose.
0x6C5CAD: pop     esi
0x6C5CAE: retn    14h
