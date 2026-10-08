0x7C7EB0: cmp     [esp+reconcileReceivers], 0; If reconcileReceivers is true, walk fullListHead_E8 and reconcile each non-null ShadowSceneLight source. If retainLightLists is false afterward, tear down the full/active lists. Both direct retail callers pass true/true, so this wrapper's teardown branch is not taken by them.
0x7C7EB5: push    edi
0x7C7EB6: mov     edi, ecx
0x7C7EB8: jz      short loc_7C7EEB
0x7C7EBA: push    esi
0x7C7EBB: mov     esi, [edi+0E8h]; Begin the native full-list walk; entries are source ShadowSceneLight objects, not loaded static references.
0x7C7EC1: test    esi, esi
0x7C7EC3: jz      short loc_7C7EDC
0x7C7EC5: lea     eax, [esi+8]
0x7C7EC8: mov     eax, [eax]
0x7C7ECA: test    eax, eax
0x7C7ECC: mov     esi, [esi]
0x7C7ECE: jz      short loc_7C7ED8
0x7C7ED0: push    eax; light
0x7C7ED1: mov     ecx, edi; self
0x7C7ED3: call    ShadowSceneNode_ReconcileSourceLightReceivers; Reconcile the current source light's eligible receiver geometry against the current scene.
0x7C7ED8: test    esi, esi
0x7C7EDA: jnz     short loc_7C7EC5
0x7C7EDC: cmp     [esp+8+retainLightLists], 0
0x7C7EE1: pop     esi
0x7C7EE2: jnz     short loc_7C7EEB
0x7C7EE4: mov     ecx, edi
0x7C7EE6: call    ShadowSceneNode_TeardownLightLists; Conditional list teardown occurs only when reconcileReceivers=true and retainLightLists=false. The two direct retail callers both pass retainLightLists=true.
0x7C7EEB: pop     edi
0x7C7EEC: retn    8
