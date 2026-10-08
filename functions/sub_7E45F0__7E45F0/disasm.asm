0x7E45F0: mov     ecx, [esp+targetNode]; Verified (Oblivion): clones and attaches the effect's scenegraph property, then returns it only when it is ParticleShaderProperty (virtual subtype ID 0xE). This supplies the concrete type stored at MagicShaderHitEffect +0x3C.
0x7E45F4: sub     esp, 10h
0x7E45F7: test    ecx, ecx
0x7E45F9: push    edi
0x7E45FA: jz      loc_7E46E7
0x7E4600: mov     eax, [ecx]
0x7E4602: mov     edx, [eax+8]
0x7E4605: call    edx
0x7E4607: mov     edi, eax
0x7E4609: test    edi, edi
0x7E460B: jz      loc_7E46E7
0x7E4611: push    ebx
0x7E4612: push    ebp
0x7E4613: push    esi
0x7E4614: call    ParticleShaderProperty_CreateTemplateGeometry; Verified (Oblivion): lazily creates and caches a NiTriShape template with particle geometry data; NiNode_CreateAttachedParticleShaderProperty clones this template before asking BSShaderManager_AssignShadersRecursive to assign shader properties.
0x7E4619: mov     ecx, eax; this
0x7E461B: call    NiObject_CloneWithPointerMap; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x7E4620: mov     esi, eax
0x7E4622: mov     ecx, [esi+0B4h]
0x7E4628: mov     eax, [ecx+18h]
0x7E462B: mov     edx, [ecx+0Ch]
0x7E462E: mov     ebx, [ecx+10h]
0x7E4631: mov     ebp, [ecx+14h]
0x7E4634: mov     [esp+20h+var_4], eax
0x7E4638: mov     eax, [esp+20h+secondaryNode]
0x7E463C: fld     dword ptr [eax+2Ch]
0x7E463F: fadd    st, st
0x7E4641: fstp    [esp+20h+targetNode]
0x7E4645: fld     [esp+20h+var_4]
0x7E4649: fld     [esp+20h+targetNode]
0x7E464D: fcom    st(1)
0x7E464F: fnstsw  ax
0x7E4651: test    ah, 5
0x7E4654: jp      short loc_7E465A
0x7E4656: fstp    st
0x7E4658: jmp     short loc_7E465C
0x7E465A: fstp    st(1)
0x7E465C: mov     [ecx+0Ch], edx
0x7E465F: fstp    [esp+20h+targetNode]
0x7E4663: fld     [esp+20h+targetNode]
0x7E4667: mov     [ecx+10h], ebx
0x7E466A: mov     [ecx+14h], ebp
0x7E466D: fstp    [esp+20h+var_4]
0x7E4671: mov     edx, [esp+20h+var_4]
0x7E4675: mov     [ecx+18h], edx
0x7E4678: mov     eax, [edi]
0x7E467A: mov     edx, [eax+84h]
0x7E4680: push    1
0x7E4682: push    esi
0x7E4683: mov     ecx, edi
0x7E4685: call    edx
0x7E4687: fldz
0x7E4689: push    0; a3
0x7E468B: push    ecx
0x7E468C: mov     ecx, edi; this
0x7E468E: fstp    [esp+28h+a2]; a2
0x7E4691: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x7E4696: push    1; arg3
0x7E4698: push    0; normalMapBypass
0x7E469A: push    16h; shaderId
0x7E469C: push    esi; root
0x7E469D: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x7E46A2: add     esp, 10h
0x7E46A5: push    4
0x7E46A7: mov     ecx, esi
0x7E46A9: call    NiNode_GetNiPropertyByID;
0x7E46AE: mov     esi, eax
0x7E46B0: test    esi, esi
0x7E46B2: jz      short loc_7E46C7
0x7E46B4: mov     eax, [esi]
0x7E46B6: mov     edx, [eax+54h]
0x7E46B9: mov     ecx, esi
0x7E46BB: call    edx
0x7E46BD: xor     ecx, ecx
0x7E46BF: cmp     eax, 0Eh
0x7E46C2: setz    cl
0x7E46C5: mov     eax, ecx; Verified (Oblivion): cloned property is retained only when its virtual subtype returns 0xE. The ParticleShaderProperty vtable's +0x54 slot targets ParticleShaderProperty_GetSubtype, which returns 0xE; this directly identifies shaderProperty_3C as ParticleShaderProperty*.
0x7E46C7: neg     eax
0x7E46C9: sbb     eax, eax
0x7E46CB: and     eax, esi
0x7E46CD: mov     esi, eax
0x7E46CF: jz      short loc_7E46DD
0x7E46D1: call    ParticleShaderProperty_CreateTemplateGeometry; Verified (Oblivion): lazily creates and caches a NiTriShape template with particle geometry data; NiNode_CreateAttachedParticleShaderProperty clones this template before asking BSShaderManager_AssignShadersRecursive to assign shader properties.
0x7E46D6: add     dword ptr ds:0B46010h, 1
0x7E46DD: mov     eax, esi
0x7E46DF: pop     esi
0x7E46E0: pop     ebp
0x7E46E1: pop     ebx
0x7E46E2: pop     edi
0x7E46E3: add     esp, 10h
0x7E46E6: retn
0x7E46E7: xor     eax, eax
0x7E46E9: pop     edi
0x7E46EA: add     esp, 10h
0x7E46ED: retn
