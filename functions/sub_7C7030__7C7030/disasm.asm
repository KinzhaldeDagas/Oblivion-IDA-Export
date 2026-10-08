0x7C7030: mov     eax, [esp+backingLight]; Find an existing source light and forward the requested per-source projector mode to ShadowSceneLight+0xF4.
0x7C7034: push    eax; backingLight
0x7C7035: call    ShadowSceneNode_FindFullLightBySource; Search the native ShadowSceneNode full-light list for a ShadowSceneLight whose backing NiLight identity matches the supplied source.
0x7C703A: test    eax, eax
0x7C703C: jz      short locret_7C704A
0x7C703E: mov     ecx, [esp+arg_4]
0x7C7042: push    ecx
0x7C7043: mov     ecx, eax
0x7C7045: call    ShadowSceneLight_SetPerSourceProjectorMode; Set per-source projected-light mode at +0xF4. A mode change may discard/release shadow map +0x114; this selector is not actor-only.
0x7C704A: retn    8
