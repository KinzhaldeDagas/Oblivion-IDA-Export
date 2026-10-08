0x56FB40: push    esi; Verified BSTempEffectGeometryDecal_Initialize override at vtable +0x4C. It guards repeated live initialization with initializeCallbackDone, checks source/parent refs, obtains sourceGeometry->geomData->m_spAdditionalGeomData, branches on that object's +0x4C bool slot to one of two builders, then marks callback-done and releases transient source refs. LoadGame builds restored geometry through BuildGeneratedGeometry instead of dispatching this Initialize virtual, so this byte is not a general generated-geometry-ready flag.
0x56FB41: mov     esi, ecx
0x56FB43: mov     eax, [esi+2Ch]
0x56FB46: cmp     dword ptr [eax+0B8h], 0
0x56FB4D: jz      loc_56FBF1
0x56FB53: cmp     byte ptr [esi+14h], 0
0x56FB57: jnz     short loc_56FB97
0x56FB59: mov     edx, [esi+30h]
0x56FB5C: mov     ecx, 1
0x56FB61: cmp     [edx+4], ecx
0x56FB64: jbe     short loc_56FB97
0x56FB66: cmp     [eax+4], ecx
0x56FB69: jbe     short loc_56FB97
0x56FB6B: mov     eax, [eax+0B4h]
0x56FB71: test    eax, eax
0x56FB73: jz      short loc_56FB7A
0x56FB75: mov     eax, [eax+34h]
0x56FB78: jmp     short loc_56FB7C
0x56FB7A: xor     eax, eax
0x56FB7C: mov     edx, [eax]
0x56FB7E: mov     ecx, eax
0x56FB80: mov     eax, [edx+4Ch]
0x56FB83: call    eax; Verified local dataflow: sourceGeometryData is NiGeometryData* and this loads member m_spAdditionalGeomData at object +0x34 as NiAdditionalGeometryData*. It calls that object's virtual +0x4C. The base and BSPackedAdditionalGeometryData vtables return false/true respectively; interpreting this as packed-data or vertex-stream readiness is Probable, exact method semantics Unknown.
0x56FB85: test    al, al
0x56FB87: mov     ecx, esi; this
0x56FB89: jz      short loc_56FB92
0x56FB8B: call    BSTempEffectGeometryDecal_InitializeUsingVertexStreams; Verified vertex-stream builder uses source geometry data, locks/reads/unlocks the vertex stream, constructs clipped decal mesh arrays and hands them to BSTempEffectGeometryDecal_BuildGeneratedGeometry. Called from Initialize only when source additional-data vslot +0x4C returns true.
0x56FB90: jmp     short loc_56FB97
0x56FB92: call    BSTempEffectGeometryDecal_InitializeUsingSkinnedGeometryData; Verified CPU-skinned fallback builder passes sourceGeometry->skinData and NiGeometryData vertex/normal arrays/count to sub_72AF20, then computes/clips decal arrays and calls BSTempEffectGeometryDecal_BuildGeneratedGeometry. Called from Initialize when source additional-data vslot +0x4C returns false.
0x56FB97: push    ebp
0x56FB98: mov     ebp, ds:0A2807Ch
0x56FB9E: push    edi
0x56FB9F: mov     byte ptr [esi+14h], 1
0x56FBA3: mov     edi, [esi+2Ch]
0x56FBA6: test    edi, edi
0x56FBA8: jz      short loc_56FBC9
0x56FBAA: lea     ecx, [edi+4]
0x56FBAD: push    ecx; lpAddend
0x56FBAE: call    ebp ; InterlockedDecrement
0x56FBB0: test    eax, eax
0x56FBB2: jnz     short loc_56FBC2
0x56FBB4: test    edi, edi
0x56FBB6: jz      short loc_56FBC2
0x56FBB8: mov     edx, [edi]
0x56FBBA: mov     eax, [edx]
0x56FBBC: push    1
0x56FBBE: mov     ecx, edi
0x56FBC0: call    eax
0x56FBC2: mov     dword ptr [esi+2Ch], 0
0x56FBC9: mov     edi, [esi+30h]
0x56FBCC: test    edi, edi
0x56FBCE: jz      short loc_56FBEF
0x56FBD0: lea     ecx, [edi+4]
0x56FBD3: push    ecx; lpAddend
0x56FBD4: call    ebp ; InterlockedDecrement
0x56FBD6: test    eax, eax
0x56FBD8: jnz     short loc_56FBE8
0x56FBDA: test    edi, edi
0x56FBDC: jz      short loc_56FBE8
0x56FBDE: mov     edx, [edi]
0x56FBE0: mov     eax, [edx]
0x56FBE2: push    1
0x56FBE4: mov     ecx, edi
0x56FBE6: call    eax
0x56FBE8: mov     dword ptr [esi+30h], 0
0x56FBEF: pop     edi
0x56FBF0: pop     ebp
0x56FBF1: pop     esi
0x56FBF2: retn
