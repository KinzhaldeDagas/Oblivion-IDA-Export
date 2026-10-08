0x437E60: push    ebx; Verified QueuedTree vtable override at slot +0x30, homologous in role to Fallout QueuedTree::UseDistant3D. Oblivion builds a NiTriShape/STBB billboard and NiBillboardNode through TESObjectTREE_BuildDistantBillboard(false), applies shader properties, then invokes the owning queued-tree callback. Fallout instead builds TESObjectTREE distant geometry and prepares a DistantLOD shader object. This is not a QueuedTreeBillboard method.
0x437E61: mov     ebx, ecx
0x437E63: mov     ecx, [ebx+20h]
0x437E66: mov     eax, [ecx]
0x437E68: mov     edx, [eax+170h]
0x437E6E: push    edi
0x437E6F: call    edx
0x437E71: push    0; distantPlane
0x437E73: mov     ecx, eax; this
0x437E75: call    sub_4BA780; Verified Oblivion rendering path is a flat billboard DDS attached to STBB NiTriShape and NiBillboardNode. Fallout's QueuedTreeBillboard::CreateBillboard builds the engine's BSTreeModel distant geometry and inserts it through DistantLODShaderProperty::AddDistantLOD; same queued asset workflow, different renderer integration.
0x437E7A: mov     edi, eax
0x437E7C: test    edi, edi
0x437E7E: jz      short loc_437EEC
0x437E80: cmp     word ptr [edi+0B6h], 0
0x437E88: push    esi
0x437E89: ja      short loc_437E8F
0x437E8B: xor     esi, esi
0x437E8D: jmp     short loc_437E97
0x437E8F: mov     eax, [edi+0B0h]
0x437E95: mov     esi, [eax]
0x437E97: mov     eax, [esi+0B4h]
0x437E9D: mov     cx, [eax+2Eh]
0x437EA1: push    1; arg3
0x437EA3: push    1; normalMapBypass
0x437EA5: and     cx, 0FFFh
0x437EAA: or      cx, 4000h
0x437EAF: push    1; shaderId
0x437EB1: push    esi; root
0x437EB2: mov     [eax+2Eh], cx
0x437EB6: mov     byte ptr [eax+30h], 11h
0x437EBA: mov     byte ptr [eax+31h], 1Fh
0x437EBE: call    BSShaderManager_AssignShadersRecursive; Generic recursive shader assignment wrapper around 0x7B7FC0. In decoded TES4 tree code it is used for branch shader id 4 and simple/default id 1; no stock call with frond shader id 5 was found in this pass.
0x437EC3: add     esp, 10h
0x437EC6: push    4
0x437EC8: mov     ecx, esi
0x437ECA: call    NiNode_GetNiPropertyByID;
0x437ECF: test    eax, eax
0x437ED1: pop     esi
0x437ED2: jz      short loc_437EE2
0x437ED4: or      dword ptr [eax+1Ch], offset loc_402000
0x437EDB: mov     dword ptr [eax+24h], 0
0x437EE2: mov     edx, [ebx]
0x437EE4: mov     eax, [edx+34h]
0x437EE7: push    edi
0x437EE8: mov     ecx, ebx
0x437EEA: call    eax
0x437EEC: pop     edi
0x437EED: pop     ebx
0x437EEE: retn
