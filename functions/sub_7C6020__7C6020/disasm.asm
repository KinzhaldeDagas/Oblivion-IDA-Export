0x7C6020: sub     esp, 0Ch; Refresh a moved backing NiPointLight: require +0xFC, +0x104, and normal +0xF4 state; compare cached +0x108..+0x110 against light world position, then rebuild/relink if moved.
0x7C6023: push    ebx
0x7C6024: push    ebp
0x7C6025: push    esi
0x7C6026: mov     esi, [esp+18h+light]
0x7C602A: cmp     byte ptr [esi+0FCh], 0; Gate source-motion refresh on backingIsNiPointLight (+0xFC).
0x7C6031: push    edi
0x7C6032: mov     ebp, ecx
0x7C6034: jz      loc_7C60E9
0x7C603A: cmp     byte ptr [esi+104h], 0; Only lights registered with trackBackingPosition=true participate in native moving-source position refresh.
0x7C6041: jz      loc_7C60E9
0x7C6047: cmp     byte ptr [esi+0F4h], 0
0x7C604E: jnz     loc_7C60E9
0x7C6054: lea     eax, [esp+1Ch+light]
0x7C6058: push    eax
0x7C6059: mov     ecx, esi
0x7C605B: call    ShadowSceneLight_GetLightRef
0x7C6060: mov     ebx, [eax]
0x7C6062: mov     eax, [esp+1Ch+light]
0x7C6066: test    eax, eax
0x7C6068: jz      short loc_7C6088
0x7C606A: mov     edi, eax
0x7C606C: add     eax, 4
0x7C606F: push    eax; lpAddend
0x7C6070: call    dword ptr ds:0A2807Ch
0x7C6076: test    eax, eax
0x7C6078: jnz     short loc_7C6088
0x7C607A: test    edi, edi
0x7C607C: jz      short loc_7C6088
0x7C607E: mov     edx, [edi]
0x7C6080: mov     eax, [edx]
0x7C6082: push    1
0x7C6084: mov     ecx, edi
0x7C6086: call    eax
0x7C6088: mov     ecx, [esi+108h]
0x7C608E: mov     edx, [esi+10Ch]
0x7C6094: mov     eax, [esi+110h]
0x7C609A: mov     [esp+1Ch+var_C.x], ecx
0x7C609E: lea     edi, [ebx+88h]
0x7C60A4: push    edi; other
0x7C60A5: lea     ecx, [esp+20h+var_C]; this
0x7C60A9: mov     [esp+20h+var_C.y], edx
0x7C60AD: mov     [esp+20h+var_C.z], eax
0x7C60B1: call    NiPoint3__NotEqual; Compare cached source position +0x108..+0x110 against the backing NiPointLight world position.
0x7C60B6: test    al, al
0x7C60B8: jz      short loc_7C60E9
0x7C60BA: cmp     word ptr [esi+118h], 0FFh
0x7C60C3: jz      short loc_7C60E9
0x7C60C5: mov     ecx, [edi]
0x7C60C7: mov     edx, [edi+4]
0x7C60CA: sub     esp, 0Ch
0x7C60CD: mov     eax, esp
0x7C60CF: mov     [eax], ecx
0x7C60D1: mov     ecx, [edi+8]
0x7C60D4: mov     [eax+4], edx
0x7C60D7: mov     [eax+8], ecx
0x7C60DA: mov     ecx, esi; self
0x7C60DC: call    ShadowSceneLight_SetCachedSourcePosition; When a tracked source moved and cull status permits, refresh the cached position before receiver reconciliation.
0x7C60E1: push    esi; light
0x7C60E2: mov     ecx, ebp; self
0x7C60E4: call    ShadowSceneNode_ReconcileSourceLightReceivers; MEF PERF 2026-10-07 PASS2: PERF-13 movement trigger: RefreshMovedPointLightSource calls full receiver reconciliation after tracked ordinary point source changes cached world position and cullStatus is notFF. Called from full-light visibility at7C7988. This makes repeated source-motion reconciliation reachable; actual per-frame counts remain unmeasured.
0x7C60E9: pop     edi
0x7C60EA: pop     esi
0x7C60EB: pop     ebp
0x7C60EC: pop     ebx
0x7C60ED: add     esp, 0Ch
0x7C60F0: retn    4
