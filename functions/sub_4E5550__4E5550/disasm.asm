0x4E5550: mov     eax, [ecx+1Ch]
0x4E5553: test    eax, eax
0x4E5555: jz      short locret_4E5597
0x4E5557: mov     ecx, ds:0B35F88h
0x4E555D: test    ecx, ecx
0x4E555F: jz      short locret_4E5597
0x4E5561: mov     edx, [ecx]
0x4E5563: push    1
0x4E5565: push    eax
0x4E5566: mov     eax, [edx+84h]
0x4E556C: call    eax
0x4E556E: mov     ecx, ds:0B35F88h; this
0x4E5574: call    NiAVObject_InitializePropertyState; Pass205: NiAVObject_InitializePropertyState obtains parent/root state and calls virtual UpdatePropertiesDownward to propagate local properties.
0x4E5579: mov     ecx, ds:0B35F88h
0x4E557F: call    NiNode_UpdateDynamicEffectState
0x4E5584: fldz
0x4E5586: push    0; a3
0x4E5588: push    ecx
0x4E5589: mov     ecx, ds:0B35F88h; this
0x4E558F: fstp    [esp+8+a2]; a2
0x4E5592: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x4E5597: retn
