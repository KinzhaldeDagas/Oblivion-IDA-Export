0x526DB0: push    ecx
0x526DB1: push    ebx
0x526DB2: push    ebp
0x526DB3: push    esi
0x526DB4: push    edi
0x526DB5: mov     edi, [esp+14h+arg_0]
0x526DB9: mov     eax, [edi]
0x526DBB: mov     edx, [eax+168h]
0x526DC1: mov     ebp, ecx
0x526DC3: mov     ecx, edi
0x526DC5: call    edx
0x526DC7: mov     ecx, ds:0B333C4h
0x526DCD: cmp     edi, ecx
0x526DCF: mov     esi, [edi+3Ch]
0x526DD2: mov     ebx, eax
0x526DD4: mov     [esp+14h+arg_0], 1
0x526DDC: jnz     short loc_526E26
0x526DDE: mov     [esp+14h+arg_0], 2
0x526DE6: jmp     short loc_526DF6
0x526DE8: jmp     short loc_526DF0
0x526DF0: mov     ecx, ds:0B333C4h; this
0x526DF6: cmp     edi, ecx
0x526DF8: jnz     short loc_526E26
0x526DFA: cmp     [esp+14h+arg_0], 1
0x526DFF: jnz     short loc_526E26
0x526E01: mov     al, [ecx+588h]
0x526E07: mov     [esp+14h+firstPerson], al
0x526E0B: mov     edx, dword ptr [esp+14h+firstPerson]
0x526E0F: push    edx; firstPerson
0x526E10: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x526E15: mov     ecx, ds:0B333C4h; this
0x526E1B: push    1; firstPerson
0x526E1D: mov     ebx, eax
0x526E1F: call    PlayerCharacter_GetNodeByPerspective; Explicit perspective node selector. false tail-calls TESObjectREFR_GetNiNode; true returns PlayerCharacter.firstPersonNiNode at +0x5D0. Native flag type is bool.
0x526E24: mov     esi, eax
0x526E26: push    ebx; int
0x526E27: push    edi; int
0x526E28: mov     ecx, ebp; int
0x526E2A: call    sub_5268D0
0x526E2F: mov     ecx, ebx
0x526E31: call    sub_47BC40
0x526E36: test    esi, esi
0x526E38: jz      short loc_526E60
0x526E3A: mov     ecx, esi; this
0x526E3C: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x526E41: mov     ecx, esi
0x526E43: call    NiNode_UpdateDynamicEffectState
0x526E48: mov     eax, [esi]
0x526E4A: mov     edx, [eax+78h]
0x526E4D: mov     ecx, esi
0x526E4F: call    edx
0x526E51: fldz
0x526E53: push    0; a3
0x526E55: push    ecx
0x526E56: mov     ecx, esi; this
0x526E58: fstp    [esp+1Ch+a2]; a2
0x526E5B: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x526E60: sub     [esp+14h+arg_0], 1
0x526E65: jnz     short loc_526DF0
0x526E67: pop     edi
0x526E68: pop     esi
0x526E69: pop     ebp
0x526E6A: pop     ebx
0x526E6B: pop     ecx
0x526E6C: retn    4
