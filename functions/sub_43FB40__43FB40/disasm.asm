0x43FB40: mov     eax, ds:0B06A2Ch; Exterior-grid shadow source-light activation. For every uGridsToLoad cell at process level 6, enumerate its references and register each ordinary attached ExtraLight, then reconcile receivers for every ShadowSceneNode full-list source. This does not enumerate statics and never calls ShadowSceneNodeAddShadowCaster.
0x43FB45: push    ebx
0x43FB46: push    ebp
0x43FB47: push    esi
0x43FB48: push    edi
0x43FB49: mov     ebp, ecx
0x43FB4B: xor     edi, edi
0x43FB4D: mov     bl, 6
0x43FB4F: nop
0x43FB50: cmp     edi, eax
0x43FB52: jnb     short loc_43FB85
0x43FB54: xor     esi, esi
0x43FB56: cmp     esi, eax
0x43FB58: jnb     short loc_43FB80
0x43FB5A: mov     ecx, [ebp+8]
0x43FB5D: push    esi
0x43FB5E: push    edi
0x43FB5F: call    GetGridEntry
0x43FB64: mov     ecx, [eax]; self
0x43FB66: test    ecx, ecx
0x43FB68: jz      short loc_43FB76
0x43FB6A: cmp     [ecx+26h], bl
0x43FB6D: jnz     short loc_43FB76
0x43FB6F: push    1; registerLights
0x43FB71: call    TESObjectCELL_RegisterOrUnregisterAttachedLights; Register ordinary attached light sources for every reference in this process-level-6 exterior cell; this is source-light registration, not static-caster admission.
0x43FB76: mov     eax, ds:0B06A2Ch
0x43FB7B: add     esi, 1
0x43FB7E: jmp     short loc_43FB56
0x43FB80: add     edi, 1
0x43FB83: jmp     short loc_43FB50
0x43FB85: push    1; retainLightLists
0x43FB87: push    1; reconcileReceivers
0x43FB89: push    0
0x43FB8B: call    GetShadowSceneNode
0x43FB90: add     esp, 4
0x43FB93: mov     ecx, eax; self
0x43FB95: call    ShadowSceneNode_ReconcileAllSourceLightsAndOptionallyTeardown; After all loaded exterior grid cells are processed, reconcile every full-list source light and retain both light lists (arguments true, true).
0x43FB9A: pop     edi
0x43FB9B: pop     esi
0x43FB9C: pop     ebp
0x43FB9D: pop     ebx
0x43FB9E: retn
