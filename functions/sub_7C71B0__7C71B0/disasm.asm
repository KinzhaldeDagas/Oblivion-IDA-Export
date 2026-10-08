0x7C71B0: push    0FFFFFFFFh; Reorder the full light list using ShadowSceneLight_ComputeCameraRelativeScore and cached score +0xD0.
0x7C71B2: push    offset SEH_7C71B0
0x7C71B7: mov     eax, large fs:0
0x7C71BD: push    eax
0x7C71BE: sub     esp, 1Ch
0x7C71C1: push    ebx
0x7C71C2: push    ebp
0x7C71C3: push    esi
0x7C71C4: push    edi
0x7C71C5: mov     eax, ds:0B30AACh
0x7C71CA: xor     eax, esp
0x7C71CC: push    eax
0x7C71CD: lea     eax, [esp+3Ch+var_C]
0x7C71D1: mov     large fs:0, eax
0x7C71D7: mov     edi, ecx
0x7C71D9: mov     [esp+3Ch+var_28], edi
0x7C71DD: mov     eax, [esp+3Ch+arg_0]
0x7C71E1: mov     ecx, [edi+118h]
0x7C71E7: mov     ebx, [edi+0E8h]
0x7C71ED: push    eax
0x7C71EE: call    ShadowSceneLight_ComputeCameraRelativeScore; Compute and cache the camera-relative full-list ranking value at ShadowSceneLight+0xD0.
0x7C71F3: fstp    st
0x7C71F5: test    ebx, ebx
0x7C71F7: jz      loc_7C7320
0x7C71FD: jmp     short loc_7C7204
0x7C7200: mov     edi, [esp+3Ch+var_28]
0x7C7204: mov     ecx, [esp+3Ch+arg_0]
0x7C7208: lea     eax, [ebx+8]
0x7C720B: mov     eax, [eax]
0x7C720D: mov     ebp, ebx
0x7C720F: mov     ebx, [ebx]
0x7C7211: push    ecx
0x7C7212: mov     ecx, eax
0x7C7214: mov     [esp+40h+var_14], ebp
0x7C7218: call    ShadowSceneLight_ComputeCameraRelativeScore; Compute and cache the camera-relative full-list ranking value at ShadowSceneLight+0xD0.
0x7C721D: fstp    [esp+3Ch+var_18]
0x7C7221: xor     esi, esi
0x7C7223: mov     [esp+3Ch+var_24], esi
0x7C7227: mov     edi, [edi+0E8h]; MEF LARGE PERF 2026-09-08: PERF-6 quadratic origin: reload full-list head from node+E8 for every outer light, then compare each preceding cached+D0 score until current node or first lower score. No already-ordered-prefix fast path exists. Preserve the original score computation sequence and32-bit cached results.
0x7C722D: cmp     edi, ebp
0x7C722F: mov     [esp+3Ch+var_4], esi
0x7C7233: jz      loc_7C72F4; MEF v57 VERIFY 2026-10-08: V57-UNWIND-1 is a VERIFIED CONDITIONAL C++ unwind ownership mismatch. Isolated production PerfRankLights probe: normal cold splice balances refs; throwing remove or insert leaves exactly one extra held ref. Native state0 unwind9CE770 releases it. Stock recovery callback throw behavior remains UNKNOWN; not an ordinary-OOM or arbitrary-SEH claim. Correct by scoped native-equivalent ownership, propagate the exception and keep completed list side effects; never replay scoring/mutation after failure.
0x7C7239: lea     esp, [esp+0]
0x7C7240: cmp     esi, [edi+8]
0x7C7243: lea     ebp, [edi+8]
0x7C7246: mov     [esp+3Ch+position], edi
0x7C724A: mov     edi, [edi]
0x7C724C: jz      short loc_7C727F
0x7C724E: test    esi, esi
0x7C7250: jz      short loc_7C726A
0x7C7252: lea     edx, [esi+4]
0x7C7255: push    edx; lpAddend
0x7C7256: call    dword ptr ds:0A2807Ch
0x7C725C: test    eax, eax
0x7C725E: jnz     short loc_7C726A
0x7C7260: mov     eax, [esi]
0x7C7262: mov     edx, [eax]
0x7C7264: push    1
0x7C7266: mov     ecx, esi
0x7C7268: call    edx
0x7C726A: mov     esi, [ebp+0]
0x7C726D: test    esi, esi
0x7C726F: mov     [esp+3Ch+var_24], esi
0x7C7273: jz      short loc_7C727F
0x7C7275: lea     eax, [esi+4]
0x7C7278: push    eax; lpAddend
0x7C7279: call    dword ptr ds:0A28078h; MEF LARGE PERF 2026-09-08: PERF-6 each new predecessor payload held in ESI gets InterlockedIncrement; previous temp is decremented at7C7256 and final temp at7C7304. For i distinct predecessors scanned without a splice, there are i increments+i decrements. Strong list ownership keeps these references live; eliminating cycles needs pinned native ownership/synchronization, not raw unowned pointer caching.
0x7C727F: fld     dword ptr [esi+0D0h]
0x7C7285: fstp    [esp+3Ch+var_1C]
0x7C7289: fld     [esp+3Ch+var_1C]
0x7C728D: fld     [esp+3Ch+var_18]
0x7C7291: fcompp
0x7C7293: fnstsw  ax
0x7C7295: test    ah, 41h
0x7C7298: jz      short loc_7C72A2
0x7C729A: cmp     edi, [esp+3Ch+var_14]
0x7C729E: jnz     short loc_7C7240
0x7C72A0: jmp     short loc_7C72F4; MEF v57 VERIFY 2026-10-08: V57-UNWIND-1 is a VERIFIED CONDITIONAL C++ unwind ownership mismatch. Isolated production PerfRankLights probe: normal cold splice balances refs; throwing remove or insert leaves exactly one extra held ref. Native state0 unwind9CE770 releases it. Stock recovery callback throw behavior remains UNKNOWN; not an ordinary-OOM or arbitrary-SEH claim. Correct by scoped native-equivalent ownership, propagate the exception and keep completed list side effects; never replay scoring/mutation after failure.
0x7C72A2: mov     ebp, [esp+3Ch+var_28]
0x7C72A6: lea     ecx, [esp+3Ch+position]
0x7C72AA: push    ecx; position
0x7C72AB: lea     edx, [esp+40h+result]
0x7C72AF: add     ebp, 0E4h ; 'ä'
0x7C72B5: push    edx; result
0x7C72B6: mov     ecx, ebp; self
0x7C72B8: call    NiTRefPointerList__RemovePosition; MEF v56 cold path deliberately preserves observed order-neutral predecessor remove/reinsert. Differential finite permutations, nonfinite/subnormal cases, net strong refs and emitted entry/fallback fixtures pass. Auxiliary counters are opt-in MEF_PERF_COUNTERS=1; no runtime FPS claim.
0x7C72BD: mov     eax, [esp+3Ch+result]
0x7C72C1: test    eax, eax
0x7C72C3: jz      short loc_7C72E3
0x7C72C5: mov     edi, eax
0x7C72C7: add     eax, 4
0x7C72CA: push    eax; lpAddend
0x7C72CB: call    dword ptr ds:0A2807Ch
0x7C72D1: test    eax, eax
0x7C72D3: jnz     short loc_7C72E3
0x7C72D5: test    edi, edi
0x7C72D7: jz      short loc_7C72E3
0x7C72D9: mov     eax, [edi]
0x7C72DB: mov     edx, [eax]
0x7C72DD: push    1
0x7C72DF: mov     ecx, edi
0x7C72E1: call    edx
0x7C72E3: mov     ecx, [esp+3Ch+position]
0x7C72E7: lea     eax, [esp+3Ch+var_24]
0x7C72EB: push    eax
0x7C72EC: push    ecx
0x7C72ED: mov     ecx, ebp
0x7C72EF: call    NiTRefPointerList_InsertBeforePosition
0x7C72F4: test    esi, esi; MEF v57 VERIFY 2026-10-08: V57-UNWIND-1 is a VERIFIED CONDITIONAL C++ unwind ownership mismatch. Isolated production PerfRankLights probe: normal cold splice balances refs; throwing remove or insert leaves exactly one extra held ref. Native state0 unwind9CE770 releases it. Stock recovery callback throw behavior remains UNKNOWN; not an ordinary-OOM or arbitrary-SEH claim. Correct by scoped native-equivalent ownership, propagate the exception and keep completed list side effects; never replay scoring/mutation after failure.
0x7C72F6: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x7C72FE: jz      short loc_7C7318
0x7C7300: lea     edx, [esi+4]
0x7C7303: push    edx; lpAddend
0x7C7304: call    dword ptr ds:0A2807Ch
0x7C730A: test    eax, eax
0x7C730C: jnz     short loc_7C7318
0x7C730E: mov     eax, [esi]
0x7C7310: mov     edx, [eax]
0x7C7312: push    1
0x7C7314: mov     ecx, esi
0x7C7316: call    edx
0x7C7318: test    ebx, ebx
0x7C731A: jnz     loc_7C7200
0x7C7320: mov     ecx, [esp+3Ch+var_C]
0x7C7324: mov     large fs:0, ecx
0x7C732B: pop     ecx
0x7C732C: pop     edi
0x7C732D: pop     esi
0x7C732E: pop     ebp
0x7C732F: pop     ebx
0x7C7330: add     esp, 28h
0x7C7333: retn    4
0x9CE770: lea     ecx, [ebp-24h]; slot
0x9CE773: jmp     NiPointerSlot_Release
0x9CE778: mov     edx, [esp+arg_4]
0x9CE77C: lea     eax, [edx-2Ch]
0x9CE77F: mov     ecx, [edx-30h]
0x9CE782: xor     ecx, eax
0x9CE784: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE789: mov     eax, offset stru_AF770C
0x9CE78E: jmp     ___CxxFrameHandler3
