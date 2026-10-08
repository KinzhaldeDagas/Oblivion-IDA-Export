0x560960: push    0FFFFFFFFh; Verified current STBB layout view: BSTreeModel_OblivionLayout_058_STBBVerified refines model+0x1C to NiTriShape* billboardShape_STBB. This supersedes the earlier partial +0x1C NiStream view; the ctor initializes the shape pointer null.
0x560962: push    offset ??0BSTreeModel@@QAE@XZ_SEH
0x560967: mov     eax, large fs:0
0x56096D: push    eax
0x56096E: push    ecx
0x56096F: push    ebx
0x560970: push    ebp
0x560971: push    esi
0x560972: push    edi
0x560973: mov     eax, ds:0B30AACh
0x560978: xor     eax, esp
0x56097A: push    eax
0x56097B: lea     eax, [esp+24h+var_C]
0x56097F: mov     large fs:0, eax
0x560985: mov     esi, ecx
0x560987: mov     [esp+24h+var_10], esi
0x56098B: xor     ebx, ebx
0x56098D: push    0B3FD64h; lpAddend
0x560992: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x560998: mov     [esi+4], ebx
0x56099B: call    dword ptr ds:0A28078h
0x5609A1: mov     dword ptr [esi], offset ??_7BSTreeModel@@6B@; Verified BSTreeModel runtime layout is 0x58 bytes in Oblivion. Fallout's same-named model has a smaller 0x50-byte structure; its seed/trunk length/trunk width fields are at +0x40/+0x48/+0x4C versus Oblivion +0x48/+0x50/+0x54.
0x5609A7: mov     [esp+24h+var_4], ebx
0x5609AB: mov     [esi+10h], ebx; Verified owning baseModel NiPointer at +0x10 starts null; InitAsInstance stores the base model here and the destructor releases it after the instance CSpeedTreeRT wrapper.
0x5609AE: mov     [esi+1Ch], ebx; Verified: billboardShape_STBB NiTriShape smart pointer at BSTreeModel+0x1C starts null. CreateBillboardGeometry stores the `STBB` NiTriShape here; CreateArt passes it through BSTreeNode vtable +0xC0 to BSTreeNode_SetBillboard; ClearModel and instances release/clone it.
0x5609B1: mov     [esi+20h], ebx; Verified leafShaderStreamData NiPointer at +0x20 starts null. CreateLeafGeometry fills it with OB_STLSPData and SpeedTreeLeafShaderProperty constructors consume it; instances share its reference.
0x5609B4: mov     [esi+34h], ebx; Verified branchTexturingProperty at +0x34 starts null; ApplyBaseObject creates the branch texture property and CreateArt attaches it to the branch root.
0x5609B7: mov     [esi+38h], ebx; Verified leafTexture at +0x38 starts null; ApplyBaseObject loads the TESObjectTREE leaf source texture here and assigns it to every leaf LOD shader property.
0x5609BA: mov     [esi+3Ch], ebx; Verified billboardTexturingProperty at +0x3C starts null; ApplyBaseObject loads the tree billboard texture and assigns this property to the billboard geometry path.
0x5609BD: mov     [esi+40h], ebx; Verified collisionShape NiPointer at +0x40 starts null; CreateGeometry builds a Havok capsule from trunkLength/trunkWidth and CreateArt passes it to BSTreeNode_ctor.
0x5609C0: mov     ebp, ds:0A2807Ch
0x5609C6: mov     [esi+0Ch], ebx; Verified BSTreeModel.speedTree at +0x0C starts null; BSTreeModel_InitFromBase allocates/loads the CSpeedTreeRT wrapper here, and the destructor releases it.
0x5609C9: mov     [esi+8], ebx; Verified BSTreeModel modelState enum values: constructor 0=uninitialized, InitFromBase sets 1=base model, and InitAsInstance sets 2=instance. Update and instance guards distinguish state 2.
0x5609CC: mov     [esi+14h], ebx; Verified branchGeometryDataByLOD array pointer at +0x14 starts null and is allocated to branch LOD count by CreateBranchGeometry; CreateArt uses each entry to build a branch NiTriStrips node.
0x5609CF: mov     [esi+18h], ebx; Verified leafGeometryDataByLOD array pointer at +0x18 starts null and is allocated to leaf LOD count by CreateLeafGeometry; CreateArt builds each leaf NiTriShape from those data entries.
0x5609D2: mov     edi, [esi+1Ch]
0x5609D5: cmp     edi, ebx
0x5609D7: mov     byte ptr [esp+24h+var_4], 7
0x5609DC: jz      short loc_5609F9
0x5609DE: lea     eax, [edi+4]
0x5609E1: push    eax; lpAddend
0x5609E2: call    ebp ; InterlockedDecrement
0x5609E4: test    eax, eax
0x5609E6: jnz     short loc_5609F6
0x5609E8: cmp     edi, ebx
0x5609EA: jz      short loc_5609F6
0x5609EC: mov     edx, [edi]
0x5609EE: mov     eax, [edx]
0x5609F0: push    1
0x5609F2: mov     ecx, edi
0x5609F4: call    eax
0x5609F6: mov     [esi+1Ch], ebx
0x5609F9: mov     edi, [esi+20h]
0x5609FC: cmp     edi, ebx
0x5609FE: jz      short loc_560A1B
0x560A00: lea     ecx, [edi+4]
0x560A03: push    ecx; lpAddend
0x560A04: call    ebp ; InterlockedDecrement
0x560A06: test    eax, eax
0x560A08: jnz     short loc_560A18
0x560A0A: cmp     edi, ebx
0x560A0C: jz      short loc_560A18
0x560A0E: mov     edx, [edi]
0x560A10: mov     eax, [edx]
0x560A12: push    1
0x560A14: mov     ecx, edi
0x560A16: call    eax
0x560A18: mov     [esi+20h], ebx
0x560A1B: mov     [esi+24h], ebx; Verified branchShaderPropertiesByLOD pointer array at +0x24 starts null, is allocated by CreateBranchGeometry, and is cloned per LOD when making a model instance.
0x560A1E: mov     [esi+28h], ebx; Verified leafShaderPropertiesByLOD pointer array at +0x28 starts null, is allocated by CreateLeafGeometry, and is cloned per LOD when making a model instance.
0x560A21: mov     [esi+2Ch], ebx; Verified branchCachedPropertiesByLOD array at +0x2C starts null; CreateArt caches branch child property ID 3 into its LOD slots for reuse.
0x560A24: mov     [esi+30h], ebx; Candidate role: leafCachedPropertiesByLOD array at +0x30 is initialized and copied/cleared like the other leaf LOD arrays; CreateArt consumes its entries as BSShaderProperty values when present, but no stock writer was found in this pass.
0x560A27: mov     edi, [esi+34h]
0x560A2A: cmp     edi, ebx
0x560A2C: jz      short loc_560A49
0x560A2E: lea     ecx, [edi+4]
0x560A31: push    ecx; lpAddend
0x560A32: call    ebp ; InterlockedDecrement
0x560A34: test    eax, eax
0x560A36: jnz     short loc_560A46
0x560A38: cmp     edi, ebx
0x560A3A: jz      short loc_560A46
0x560A3C: mov     edx, [edi]
0x560A3E: mov     eax, [edx]
0x560A40: push    1
0x560A42: mov     ecx, edi
0x560A44: call    eax
0x560A46: mov     [esi+34h], ebx
0x560A49: mov     edi, [esi+38h]
0x560A4C: cmp     edi, ebx
0x560A4E: jz      short loc_560A6B
0x560A50: lea     ecx, [edi+4]
0x560A53: push    ecx; lpAddend
0x560A54: call    ebp ; InterlockedDecrement
0x560A56: test    eax, eax
0x560A58: jnz     short loc_560A68
0x560A5A: cmp     edi, ebx
0x560A5C: jz      short loc_560A68
0x560A5E: mov     edx, [edi]
0x560A60: mov     eax, [edx]
0x560A62: push    1
0x560A64: mov     ecx, edi
0x560A66: call    eax
0x560A68: mov     [esi+38h], ebx
0x560A6B: mov     edi, [esi+3Ch]
0x560A6E: cmp     edi, ebx
0x560A70: jz      short loc_560A8D
0x560A72: lea     ecx, [edi+4]
0x560A75: push    ecx; lpAddend
0x560A76: call    ebp ; InterlockedDecrement
0x560A78: test    eax, eax
0x560A7A: jnz     short loc_560A8A
0x560A7C: cmp     edi, ebx
0x560A7E: jz      short loc_560A8A
0x560A80: mov     edx, [edi]
0x560A82: mov     eax, [edx]
0x560A84: push    1
0x560A86: mov     ecx, edi
0x560A88: call    eax
0x560A8A: mov     [esi+3Ch], ebx
0x560A8D: fldz
0x560A8F: mov     dword ptr [esi+48h], 1; Verified BSTreeModel.seed at +0x48 defaults to 1; InitFromBase replaces it with CSpeedTreeRT_GetSeed after successful Compute.
0x560A96: fst     dword ptr [esi+44h]; Verified curveScalar at +0x44 defaults to 0 and ApplyBaseObject writes the validated forced/TESObjectTREE curve scalar here.
0x560A99: mov     [esi+4Ch], bl; Verified: BSTreeModel constructor initializes the byte at +0x4C to 0. Manager later sets it to 1 after the model's vtable CreateArt call; no stock read was found, so its semantic meaning remains Unknown.
0x560A9C: fst     dword ptr [esi+50h]; Verified trunkLength at +0x50 and trunkWidth at +0x54 default to 0; successful InitFromBase fills them from CSpeedTreeRT_GetTrunkLength/GetTrunkWidth, and CreateGeometry uses them for the fallback Havok capsule.
0x560A9F: mov     eax, esi
0x560AA1: fstp    dword ptr [esi+54h]
0x560AA4: mov     ecx, dword ptr [esp+24h+var_C]
0x560AA8: mov     large fs:0, ecx
0x560AAF: pop     ecx
0x560AB0: pop     edi
0x560AB1: pop     esi
0x560AB2: pop     ebp
0x560AB3: pop     ebx
0x560AB4: add     esp, 10h
0x560AB7: retn
0x9BD000: mov     ecx, [ebp-10h]
0x9BD003: jmp     NiRefObject_destr
0x9BD008: mov     ecx, [ebp-10h]
0x9BD00B: add     ecx, 10h; slot
0x9BD00E: jmp     NiPointerSlot_Release
0x9BD013: mov     ecx, [ebp-10h]
0x9BD016: add     ecx, 1Ch; slot
0x9BD019: jmp     NiPointerSlot_Release
0x9BD01E: mov     ecx, [ebp-10h]
0x9BD021: add     ecx, 20h ; ' '; slot
0x9BD024: jmp     NiPointerSlot_Release
0x9BD029: mov     ecx, [ebp-10h]
0x9BD02C: add     ecx, 34h ; '4'; slot
0x9BD02F: jmp     NiPointerSlot_Release
0x9BD034: mov     ecx, [ebp-10h]
0x9BD037: add     ecx, 38h ; '8'; slot
0x9BD03A: jmp     NiPointerSlot_Release
0x9BD03F: mov     ecx, [ebp-10h]
0x9BD042: add     ecx, 3Ch ; '<'; slot
0x9BD045: jmp     NiPointerSlot_Release
0x9BD04A: mov     ecx, [ebp-10h]
0x9BD04D: add     ecx, 40h ; '@'; slot
0x9BD050: jmp     NiPointerSlot_Release
0x9BD055: mov     edx, [esp+arg_4]
0x9BD059: lea     eax, [edx-14h]
0x9BD05C: mov     ecx, [edx-18h]
0x9BD05F: xor     ecx, eax
0x9BD061: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BD066: mov     eax, offset stru_AE6ACC
0x9BD06B: jmp     ___CxxFrameHandler3
