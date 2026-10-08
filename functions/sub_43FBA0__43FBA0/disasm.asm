0x43FBA0: push    esi
0x43FBA1: mov     esi, [esp+4+arg_0]
0x43FBA5: mov     ecx, esi; this
0x43FBA7: call    TESObjectREFR_HasVisibleDistantFlag; Verified gate: mobile-object scene cleanup begins only when TESObjectREFR_HasVisibleDistantFlag is true. Fallout's same-named visible-distant getter confirms the 0x8000 meaning; this call path then independently requires the 0x80000 state before detaching the NiNode.
0x43FBAC: test    al, al
0x43FBAE: jz      short loc_43FC1B
0x43FBB0: mov     eax, [esi]
0x43FBB2: mov     edx, [eax+154h]
0x43FBB8: mov     ecx, esi
0x43FBBA: call    edx
0x43FBBC: test    eax, eax
0x43FBBE: jz      short loc_43FC1B
0x43FBC0: mov     ecx, esi; this
0x43FBC2: call    TESObjectREFR_HasTemp3DFlag; Verified gate: mobile cleanup removes the current NiNode only when the reference has the probable visible-distant flag, has a NiNode, and has the probable HasTemp3D bit set. It then clears the NiNode pointer and HasTemp3D bit.
0x43FBC7: test    al, al
0x43FBC9: jz      short loc_43FC1B
0x43FBCB: mov     eax, [esi]
0x43FBCD: mov     edx, [eax+154h]
0x43FBD3: push    edi
0x43FBD4: mov     ecx, esi
0x43FBD6: call    edx
0x43FBD8: mov     edi, [eax+1Ch]
0x43FBDB: test    edi, edi
0x43FBDD: jz      short loc_43FC08
0x43FBDF: mov     eax, [esi]
0x43FBE1: mov     edx, [eax+154h]
0x43FBE7: push    ebx
0x43FBE8: mov     ebx, [edi]
0x43FBEA: mov     ecx, esi
0x43FBEC: call    edx
0x43FBEE: mov     edx, [ebx+88h]
0x43FBF4: push    eax
0x43FBF5: lea     eax, [esp+10h+arg_0]
0x43FBF9: push    eax
0x43FBFA: mov     ecx, edi
0x43FBFC: call    edx
0x43FBFE: lea     ecx, [esp+0Ch+arg_0]; slot
0x43FC02: call    NiPointerSlot_Release
0x43FC07: pop     ebx
0x43FC08: push    0; node
0x43FC0A: mov     ecx, esi; this
0x43FC0C: call    MobileObject_SetNiNode; Verified MobileObject node setter: invokes the reference's pre-node-update virtual, releases any old NiNode reference, stores the new node in TESObjectREFR+0x40, and AddRefs it. Used by both normal Set3D and the queued distant-tree attach path.
0x43FC11: push    0; enabled
0x43FC13: mov     ecx, esi; this
0x43FC15: call    TESObjectREFR_SetTemp3DFlag; Verified local operation: sets/clears TESObjectREFR flags +0x08 bit 0x80000. Probable semantic name SetTemp3DFlag; the bit is toggled around reference NiNode attachment/removal and matches Fallout's named SetHasTemp3D usage.
0x43FC1A: pop     edi
0x43FC1B: pop     esi
0x43FC1C: retn    4
