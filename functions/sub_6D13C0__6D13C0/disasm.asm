0x6D13C0: push    esi; NiGeomMorpherController::Update. Requires morphData +0x50. Native timing reads NiTimeController.flags at +0x08: bit 0x20 forces cachedScaledTime +0x28 to the sentinel and weightsDirty +0x58; otherwise NiTimeController_IsUpdateUnchanged may recompute +0x28, with +0x5A able to force sampling. If target +0x30 exists and weights are dirty, interpolators are sampled at cachedScaledTime and geometry is queued/committed. Deployed Crossbow meshes prove Base/weight0=released and BowMorph/weight1=cocked, hence Cocked=.333333 and Release=.366667. Critical external Crossbow contrast: controller->flags resolves derived morphFlags +0x3C, not base timing flags +0x08, so current source clears unrelated morpher bits while native timing can overwrite its custom +0x28. If corrected to the base field, clearing 0x20 prevents the manager sentinel and clearing Active 0x08 makes IsUpdateUnchanged reuse the custom time; source-set weightsDirty still causes sampling. Oblivion 0x47C930 dispatches attached-controller Update without an A
0x6D13C1: mov     esi, ecx
0x6D13C3: cmp     dword ptr [esi+50h], 0
0x6D13C7: jz      loc_6D1470
0x6D13CD: mov     al, [esi+8]
0x6D13D0: shr     al, 5
0x6D13D3: test    al, 1
0x6D13D5: jz      short loc_6D13E6; Test NiTimeController.flags at object +0x08 for bit 0x20 (interpolator/manager-controlled). This is not NiGeomMorpherController.morphFlags at +0x3C.
0x6D13D7: mov     byte ptr [esi+58h], 1
0x6D13DB: fld     dword ptr ds:0A7A164h
0x6D13E1: fstp    dword ptr [esi+28h]; Manager-controlled path overwrites cachedScaledTime +0x28 with the native sentinel before morph interpolation.
0x6D13E4: jmp     short loc_6D1401
0x6D13E6: fld     [esp+4+applicationTime]
0x6D13EA: push    ecx
0x6D13EB: fstp    [esp+8+controllerTime]; applicationTime
0x6D13EE: call    NiTimeController_IsUpdateUnchanged; Return true only when an active NiTimeController can reuse its previous interpolation result. Active bit is NiTimeController.flags +0x08 bit 3. On an application-time change, computeScaledTimeOnUpdate +0x2C normally calls virtual ComputeScaledTime and refreshes cachedScaledTime +0x28; forceUpdate +0x38 forces one changed result and is cleared. If +0x2C is zero, report changed without recomputing +0x28.
0x6D13F3: test    al, al
0x6D13F5: jz      short loc_6D13FD
0x6D13F7: cmp     byte ptr [esi+5Ah], 0; Ordinary path asks NiTimeController_IsUpdateUnchanged; for an active controller whose application time changed, it can recompute and overwrite cachedScaledTime +0x28 before this Update samples weights.
0x6D13FB: jz      short loc_6D1401
0x6D13FD: mov     byte ptr [esi+58h], 1
0x6D1401: cmp     dword ptr [esi+30h], 0
0x6D1405: jz      short loc_6D1470
0x6D1407: cmp     byte ptr [esi+58h], 0
0x6D140B: jz      short loc_6D1470
0x6D140D: fld     dword ptr [esi+28h]
0x6D1410: push    ecx
0x6D1411: mov     ecx, esi; this
0x6D1413: fstp    [esp+8+controllerTime]; unusedControllerTime
0x6D1416: call    NiGeomMorpherController_SampleInterpolators; Samples every morph-target interpolator and writes the resulting floats into morphWeights (+0x40; data +0x44, size +0x4A). Although the ABI consumes one float stack argument (retn 4), the native body does not read it: interpolation uses the controller's cached time at NiTimeController +0x28. Callers pass that same cached value. This is controller time, not a direct morph weight.
0x6D141B: cmp     byte ptr ds:0B3CE19h, 0
0x6D1422: jz      short loc_6D1470
0x6D1424: call    NiParallelUpdateTaskManager_HasPendingSignal; 3DTheft decode 2026-05-16: returns g_NiParallelUpdateTaskManager != 0 && manager->byte+0x1B0 != 0. Used by morph update to decide whether to submit a NiGeomMorpherUpdateTask.
0x6D1429: test    al, al
0x6D142B: jz      short loc_6D1470
0x6D142D: mov     ecx, [esi+30h]
0x6D1430: mov     edx, [ecx+0B4h]
0x6D1436: cmp     dword ptr [edx+4], 1
0x6D143A: jnz     short loc_6D1470
0x6D143C: push    edi
0x6D143D: call    sub_6EBF20
0x6D1442: mov     edi, eax
0x6D1444: test    edi, edi
0x6D1446: jz      short loc_6D146F
0x6D1448: mov     eax, [esi+30h]
0x6D144B: push    eax
0x6D144C: push    esi
0x6D144D: mov     ecx, edi
0x6D144F: call    sub_6EBC20
0x6D1454: mov     ecx, ds:0B3F940h; 3DTheft decode 2026-05-16: pending manager path submits a NiGeomMorpherUpdateTask through wrapper around manager vfunc +0x60; fallback calls task cleanup vfunc +0x54 if submission fails.
0x6D145A: push    2
0x6D145C: push    edi
0x6D145D: call    NiParallelUpdateTaskManager_SubmitTaskWrapper
0x6D1462: test    al, al
0x6D1464: jnz     short loc_6D146F
0x6D1466: mov     edx, [edi]
0x6D1468: mov     eax, [edx+54h]
0x6D146B: mov     ecx, edi
0x6D146D: call    eax
0x6D146F: pop     edi
0x6D1470: pop     esi
0x6D1471: retn    4
