0x79C380: push    0FFFFFFFFh; Pop-heap primitive for SFrondGuide. Moves the first heap element to the output slot, then rebuilds the shortened heap by calling the typed adjust-heap path with the saved guide value.
0x79C382: push    offset SEH_79C380
0x79C387: mov     eax, large fs:0
0x79C38D: push    eax
0x79C38E: push    esi
0x79C38F: push    edi
0x79C390: mov     eax, ds:0B30AACh
0x79C395: xor     eax, esp
0x79C397: push    eax
0x79C398: lea     eax, [esp+18h+var_C]
0x79C39C: mov     large fs:0, eax
0x79C3A2: mov     esi, [esp+18h+first]
0x79C3A6: mov     edi, [esp+18h+result]
0x79C3AA: push    esi; source
0x79C3AB: mov     ecx, edi; this
0x79C3AD: mov     [esp+1Ch+var_4], 0
0x79C3B5: call    OB_stVector_SFrondVertex_CopyAssign_010201A0; Oblivion-authoritative copy assignment for the SFrondGuide vertex vector at +0x00. Reuses existing 0x38-byte-element capacity when possible, otherwise frees/reserves and deep-copies the source range.
0x79C3BA: fld     dword ptr [esi+10h]
0x79C3BD: fstp    dword ptr [edi+10h]
0x79C3C0: fld     dword ptr [esi+14h]
0x79C3C3: fstp    dword ptr [edi+14h]
0x79C3C6: mov     al, [esi+18h]
0x79C3C9: mov     [edi+18h], al
0x79C3CC: fld     dword ptr [esi+1Ch]
0x79C3CF: mov     eax, dword ptr [esp+18h+sorterState]
0x79C3D3: fstp    dword ptr [edi+1Ch]
0x79C3D6: fld     dword ptr [esi+20h]
0x79C3D9: push    eax; sorterState
0x79C3DA: fstp    dword ptr [edi+20h]
0x79C3DD: sub     esp, 30h
0x79C3E0: fld     dword ptr [esi+24h]
0x79C3E3: mov     [esp+4Ch+first], esp
0x79C3E7: fstp    dword ptr [edi+24h]
0x79C3EA: mov     ecx, [esi+28h]
0x79C3ED: mov     [edi+28h], ecx
0x79C3F0: mov     edx, [esi+2Ch]
0x79C3F3: mov     [edi+2Ch], edx
0x79C3F6: mov     edi, esp
0x79C3F8: lea     ecx, [esp+4Ch+value]
0x79C3FC: push    ecx; source
0x79C3FD: mov     ecx, edi; this
0x79C3FF: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79C404: fld     [esp+4Ch+value.guideLength]; Computed centerline length.
0x79C408: mov     ecx, [esp+4Ch+value.verticesPerGuideVertex]; Generated geometry vertices associated with each guide vertex.
0x79C40F: fstp    dword ptr [edi+10h]
0x79C412: mov     eax, [esp+4Ch+value.sharedVertexStartIndex]; Start index in shared indexed geometry.
0x79C419: fld     [esp+4Ch+value.radius]; Frond radius.
0x79C41D: mov     dl, [esp+4Ch+value.frondMapIndex]; Selected frond texture/map index.
0x79C421: fstp    dword ptr [edi+14h]
0x79C424: fld     [esp+4Ch+value.offsetAngle]; Rotation offset around the guide centerline.
0x79C428: mov     [edi+28h], eax
0x79C42B: mov     [edi+2Ch], ecx
0x79C42E: fstp    dword ptr [edi+1Ch]
0x79C431: mov     ecx, [esp+4Ch+last]
0x79C435: fld     [esp+4Ch+value.surfaceArea]; Computed surface area used for LOD.
0x79C439: mov     [edi+18h], dl
0x79C43C: fstp    dword ptr [edi+20h]
0x79C43F: fld     [esp+4Ch+value.fuzzySurfaceArea]; Randomized surface-area key used for guide LOD ordering.
0x79C446: sub     ecx, esi
0x79C448: mov     eax, 2AAAAAABh
0x79C44D: fstp    dword ptr [edi+24h]
0x79C450: imul    ecx
0x79C452: sar     edx, 3
0x79C455: mov     eax, edx
0x79C457: shr     eax, 1Fh
0x79C45A: add     eax, edx
0x79C45C: push    eax; length
0x79C45D: push    0; holeIndex
0x79C45F: push    esi; base
0x79C460: call    OB_SFrondGuide_AdjustHeap_010201A0; Adjusts/sifts one hole down the SFrondGuide heap, selecting children by fuzzySurfaceArea and moving whole non-trivial guide records. Finishes by pushing the saved by-value guide upward into its final heap slot.
0x79C465: mov     eax, [esp+58h+value.vertexVector.begin]; Oblivion compact guide storage: direct 16-byte vector of 0x38-byte SFrondVertex records. Local RT 4.1 stock stack-vertex fields are absent.
0x79C469: add     esp, 40h
0x79C46C: test    eax, eax
0x79C46E: jz      short loc_79C479
0x79C470: push    eax
0x79C471: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79C476: add     esp, 4
0x79C479: mov     ecx, [esp+18h+var_C]
0x79C47D: mov     large fs:0, ecx
0x79C484: pop     ecx
0x79C485: pop     edi
0x79C486: pop     esi
0x79C487: add     esp, 0Ch
0x79C48A: retn
0x9CC380: lea     ecx, [ebp+10h]; this
0x9CC383: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CC388: mov     edx, [esp+last]
0x9CC38C: lea     eax, [edx-8]
0x9CC38F: mov     ecx, [edx-0Ch]
0x9CC392: xor     ecx, eax
0x9CC394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC399: mov     eax, offset stru_AF553C
0x9CC39E: jmp     ___CxxFrameHandler3
