0x7C6FF0: push    esi; Find an existing source light; clear receiver associations when source flag +0x18 bit0 is set, otherwise refresh source-derived state.
0x7C6FF1: push    edi
0x7C6FF2: mov     edi, [esp+8+backingLight]
0x7C6FF6: push    edi; backingLight
0x7C6FF7: mov     esi, ecx
0x7C6FF9: call    ShadowSceneNode_FindFullLightBySource; Search the native ShadowSceneNode full-light list for a ShadowSceneLight whose backing NiLight identity matches the supplied source.
0x7C6FFE: test    byte ptr [edi+18h], 1
0x7C7002: jz      short loc_7C7010
0x7C7004: mov     ecx, eax
0x7C7006: call    ShadowSceneLight_ClearReceiverAssociations; Remove property-side shadow-light links, reset shader-side state, and free this light's object/receiver list associations.
0x7C700B: pop     edi
0x7C700C: pop     esi
0x7C700D: retn    4
0x7C7010: test    eax, eax
0x7C7012: jz      short loc_7C701C
0x7C7014: push    eax; light
0x7C7015: mov     ecx, esi; self
0x7C7017: call    ShadowSceneNode_ReconcileSourceLightReceivers; Reconcile one ordinary source light against current scene receivers. Projector-mode lights are skipped; culled sources clear associations, visible sources begin/add/remove receiver reconciliation.
0x7C701C: pop     edi
0x7C701D: pop     esi
0x7C701E: retn    4
