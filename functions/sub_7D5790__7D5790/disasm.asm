0x7D5790: push    0FFFFFFFFh; Associate receiver geometry only after BSShaderProperty RTTI, NiPropertyState+0x18 property-kind-4 lookup, and shader subtype 1..10. Existing links reorder; new links are inserted into both light-local and property-side ownership.
0x7D5792: push    offset SEH_7D5790
0x7D5797: mov     eax, large fs:0
0x7D579D: push    eax
0x7D579E: sub     esp, 14h
0x7D57A1: push    ebx
0x7D57A2: push    ebp
0x7D57A3: push    esi
0x7D57A4: push    edi
0x7D57A5: mov     eax, ds:0B30AACh
0x7D57AA: xor     eax, esp
0x7D57AC: push    eax
0x7D57AD: lea     eax, [esp+34h+var_C]
0x7D57B1: mov     large fs:0, eax
0x7D57B7: mov     ebp, ecx
0x7D57B9: xor     ebx, ebx
0x7D57BB: mov     [esp+34h+output], ebx
0x7D57BF: mov     esi, [esp+34h+geometry]
0x7D57C3: push    esi
0x7D57C4: call    NiGeometry_GetBSShaderProperty; Native receiver pre-gate: read NiGeometry+0xBC direct shader-property slot and require BSShaderProperty RTTI/cast success.
0x7D57C9: add     esp, 4
0x7D57CC: test    eax, eax
0x7D57CE: jz      short loc_7D57EB
0x7D57D0: lea     eax, [esp+34h+output]
0x7D57D4: push    eax; output
0x7D57D5: mov     ecx, esi; this
0x7D57D7: call    NiGeometry_GetPropertyState; Returns a strong reference to NiGeometry+0xAC NiPropertyState through the output pointer. The active BSShaderProperty is propertyState+0x18; AccumulateGeometry uses that property as the owner and producer of the RenderPass list.
0x7D57DC: cmp     dword ptr [eax], 0
0x7D57DF: mov     ebx, 1
0x7D57E4: mov     byte ptr [esp+34h+geometry], 0
0x7D57E9: jnz     short loc_7D57F0
0x7D57EB: mov     byte ptr [esp+34h+geometry], 1
0x7D57F0: test    bl, 1
0x7D57F3: jz      short loc_7D5819
0x7D57F5: mov     edi, [esp+34h+output]
0x7D57F9: test    edi, edi
0x7D57FB: jz      short loc_7D5819
0x7D57FD: lea     ecx, [edi+4]
0x7D5800: push    ecx; lpAddend
0x7D5801: call    dword ptr ds:0A2807Ch
0x7D5807: test    eax, eax
0x7D5809: jnz     short loc_7D5819
0x7D580B: test    edi, edi
0x7D580D: jz      short loc_7D5819
0x7D580F: mov     edx, [edi]
0x7D5811: mov     eax, [edx]
0x7D5813: push    1
0x7D5815: mov     ecx, edi
0x7D5817: call    eax
0x7D5819: cmp     byte ptr [esp+34h+geometry], 0
0x7D581E: jnz     loc_7D595E
0x7D5824: push    offset unk_B3FA00; lpCriticalSection
0x7D5829: call    dword ptr ds:0A2806Ch
0x7D582F: call    dword ptr ds:0A2808Ch
0x7D5835: add     dword ptr ds:0B3FA7Ch, 1
0x7D583C: lea     ecx, [esp+34h+geometry]
0x7D5840: push    ecx; output
0x7D5841: mov     ecx, esi; this
0x7D5843: mov     ds:0B3FA78h, eax
0x7D5848: call    NiGeometry_GetPropertyState; Returns a strong reference to NiGeometry+0xAC NiPropertyState through the output pointer. The active BSShaderProperty is propertyState+0x18; AccumulateGeometry uses that property as the owner and producer of the RenderPass list.
0x7D584D: mov     eax, [eax]
0x7D584F: mov     edi, [eax+18h]
0x7D5852: mov     eax, [esp+34h+geometry]
0x7D5856: test    eax, eax
0x7D5858: jz      short loc_7D5878
0x7D585A: mov     ebx, eax
0x7D585C: add     eax, 4
0x7D585F: push    eax; lpAddend
0x7D5860: call    dword ptr ds:0A2807Ch
0x7D5866: test    eax, eax
0x7D5868: jnz     short loc_7D5878
0x7D586A: test    ebx, ebx
0x7D586C: jz      short loc_7D5878
0x7D586E: mov     edx, [ebx]
0x7D5870: mov     eax, [edx]
0x7D5872: push    1
0x7D5874: mov     ecx, ebx
0x7D5876: call    eax
0x7D5878: sub     dword ptr ds:0B3FA7Ch, 1
0x7D587F: jnz     short loc_7D588B
0x7D5881: mov     dword ptr ds:0B3FA78h, 0
0x7D588B: push    offset unk_B3FA00; lpCriticalSection
0x7D5890: call    dword ptr ds:0A28074h; MEF PERF 2026-10-07 PASS2: PERF-13 synchronization limit: critical section B3FA00 is LEFT here before subtype virtual calls and tail search7D58C2. Its presence does not prove mutual exclusion for receiver-list searches/index lifetime. Establish all writers/reentrancy before enabling cached node pointers.
0x7D5896: test    edi, edi
0x7D5898: jz      loc_7D595E
0x7D589E: mov     edx, [edi]
0x7D58A0: mov     eax, [edx+54h]
0x7D58A3: mov     ecx, edi
0x7D58A5: call    eax
0x7D58A7: cmp     eax, 1
0x7D58AA: jl      loc_7D595E
0x7D58B0: mov     edx, [edi]
0x7D58B2: mov     eax, [edx+54h]
0x7D58B5: mov     ecx, edi
0x7D58B7: call    eax
0x7D58B9: cmp     eax, 0Ah
0x7D58BC: jg      loc_7D595E
0x7D58C2: mov     ebx, [ebp+144h]; MEF PERF 2026-10-07 PASS2: PERF-13 Verified search scope: reload receiverCursor+144 into EBX then scan EAX from fence at7D58D0, comparing node payload+8. Matched nodes move before fence at7D597C; new entries insert at list HEAD7D5935. Neither is searched again in this pass. A whole-list membership cache would change duplicate/repeated-visit semantics.
0x7D58C8: mov     eax, ebx
0x7D58CA: test    eax, eax
0x7D58CC: jz      short loc_7D58E4
0x7D58CE: mov     edi, edi
0x7D58D0: cmp     [eax+8], esi; MEF PERF 2026-10-07 PASS2: PERF-13 admission cost: if S old distinct receivers are unmatched and M distinct accepted new geometries are disjoint, each miss compares fence plus S old entries: M*(S+1). For N old receivers visited in reverse tail order, hit comparisons are N*(N+3)/2. Assumes stable links/callback behavior; no scene-size or FPS measurement.
0x7D58D3: lea     ecx, [eax+8]
0x7D58D6: mov     edx, eax
0x7D58D8: mov     eax, [eax]
0x7D58DA: jz      loc_7D5974
0x7D58E0: test    eax, eax
0x7D58E2: jnz     short loc_7D58D0; MEF PERF 2026-10-07 PASS2: PERF-13 admission cost: if S old distinct receivers are unmatched and M distinct accepted new geometries are disjoint, each miss compares fence plus S old entries: M*(S+1). For N old receivers visited in reverse tail order, hit comparisons are N*(N+3)/2. Assumes stable links/callback behavior; no scene-size or FPS measurement.
0x7D58E4: test    dword ptr [edi+1Ch], 1000h; passInfo bit 0x1000 vetoes a new receiver association for non-TallGrass shader properties; subtype 4 is the TallGrass exception.
0x7D58EB: jbe     short loc_7D5904
0x7D58ED: mov     eax, [edi]
0x7D58EF: mov     edx, [eax+54h]
0x7D58F2: mov     ecx, edi
0x7D58F4: call    edx
0x7D58F6: xor     ecx, ecx
0x7D58F8: cmp     eax, 4
0x7D58FB: setz    cl
0x7D58FE: mov     eax, ecx
0x7D5900: test    eax, eax
0x7D5902: jz      short loc_7D595E
0x7D5904: lea     edx, [esi+20h]
0x7D5907: push    edx
0x7D5908: push    ebp
0x7D5909: mov     ecx, edi
0x7D590B: call    BSShaderProperty_AddShadowLight; Insert ShadowSceneLight into BSShaderProperty+0x6C in receiver-distance order and clear property cache/dirty state.
0x7D5910: test    esi, esi
0x7D5912: mov     [esp+34h+geometry], esi
0x7D5916: jz      short loc_7D5922
0x7D5918: lea     eax, [esi+4]
0x7D591B: push    eax; lpAddend
0x7D591C: call    dword ptr ds:0A28078h
0x7D5922: lea     ecx, [esp+34h+geometry]
0x7D5926: push    ecx; payload
0x7D5927: lea     ecx, [ebp+0E4h]; self
0x7D592D: mov     [esp+38h+var_4], 0
0x7D5935: call    NiTRefPointerList__AddHead; Insert the accepted exact NiGeometry leaf into this ShadowSceneLight's refcounted object/receiver list.
0x7D593A: test    esi, esi
0x7D593C: mov     [esp+34h+var_4], 0FFFFFFFFh
0x7D5944: jz      short loc_7D595E
0x7D5946: lea     edx, [esi+4]
0x7D5949: push    edx; lpAddend
0x7D594A: call    dword ptr ds:0A2807Ch
0x7D5950: test    eax, eax
0x7D5952: jnz     short loc_7D595E
0x7D5954: mov     eax, [esi]
0x7D5956: mov     edx, [eax]
0x7D5958: push    1
0x7D595A: mov     ecx, esi
0x7D595C: call    edx
0x7D595E: mov     ecx, [esp+34h+var_C]
0x7D5962: mov     large fs:0, ecx
0x7D5969: pop     ecx
0x7D596A: pop     edi
0x7D596B: pop     esi
0x7D596C: pop     ebp
0x7D596D: pop     ebx
0x7D596E: add     esp, 20h
0x7D5971: retn    4
0x7D5974: push    ebx; before
0x7D5975: push    edx; node
0x7D5976: lea     ecx, [ebp+0E4h]; self
0x7D597C: call    NiTPointerList_MoveNodeBefore; MEF PERF 2026-10-07 PASS2: PERF-13 hit semantics: MoveNodeBefore repositions the exact matching OLD-TAIL node immediately before fence, with no node allocation/refcount/count change. Remove that occurrence from a proposed tail index. Preserve later receiver-bound property reordering when +104 true and +F4 false.
0x7D5981: cmp     byte ptr [ebp+104h], 0
0x7D5988: jz      short loc_7D595E
0x7D598A: cmp     byte ptr [ebp+0F4h], 0
0x7D5991: jnz     short loc_7D595E
0x7D5993: mov     ecx, [esi+20h]
0x7D5996: mov     edx, [esi+24h]
0x7D5999: mov     eax, [esi+28h]
0x7D599C: mov     [esp+34h+bound.centerX], ecx
0x7D59A0: mov     ecx, [esi+2Ch]
0x7D59A3: mov     [esp+34h+bound.centerY], edx
0x7D59A7: lea     edx, [esp+34h+bound]
0x7D59AB: mov     [esp+34h+bound.radius], ecx
0x7D59AF: push    edx; bound
0x7D59B0: mov     ecx, edi; self
0x7D59B2: mov     [esp+38h+bound.centerZ], eax
0x7D59B6: call    BSShaderProperty_ReorderShadowLightsForReceiverBound; MEF PERF 2026-10-07 PASS3: PERF-14 sole direct caller found: receiver association HIT moved old receiver before fence, then +104 tracking enabled and +F4 projector mode clear cause whole PROPERTY light-list reorder with geometry bound copied from+20..+2C. Can repeat for multiple source reconciliations on one receiver. If Q eligible calls see unchanged N-light sorted list, score calls=Q*N*(N+1)/2; Q=N gives cubic scaling, not a proven per-frame population.
0x7D59BB: jmp     short loc_7D595E
0x9CEBB0: lea     ecx, [ebp+4]; slot
0x9CEBB3: jmp     NiPointerSlot_Release
0x9CEBB8: mov     edx, [esp+arg_4]
0x9CEBBC: lea     eax, [edx-24h]
0x9CEBBF: mov     ecx, [edx-28h]
0x9CEBC2: xor     ecx, eax
0x9CEBC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CEBC9: mov     eax, offset stru_AF7A4C
0x9CEBCE: jmp     ___CxxFrameHandler3
