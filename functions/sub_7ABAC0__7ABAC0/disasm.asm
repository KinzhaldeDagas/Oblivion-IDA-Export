0x7ABAC0: push    ecx; Drain accumulated RenderPass entries through shader selector setup and final draw submission.
0x7ABAC1: push    esi
0x7ABAC2: mov     esi, [esp+8+self]
0x7ABAC6: test    esi, esi
0x7ABAC8: mov     [esp+8+var_4], ecx
0x7ABACC: jz      loc_7ABBB0
0x7ABAD2: cmp     dword ptr [esi+10h], 0
0x7ABAD6: jz      loc_7ABBB0
0x7ABADC: push    offset RenderPassNode_CompareSelectorAscending; compare
0x7ABAE1: mov     ecx, esi; self
0x7ABAE3: call    BSTPersistentRenderPassList_StableMergeSort; MEF PERF 2026-10-07 PASS5: PERF-15 caller: DrainRenderPassList invokes stable merge sort with selector comparator7A9A90 when persistent count+10 nonzero, then selector setup/draw and node recycling. Borrowed RenderPass payloads remain property-owned. Preserve draw order and drain even if sorting work is skipped.
0x7ABAE8: mov     eax, [esi+4]
0x7ABAEB: test    eax, eax
0x7ABAED: jz      loc_7ABB98
0x7ABAF3: push    ebx
0x7ABAF4: mov     ebx, [eax]
0x7ABAF6: lea     ecx, [eax+8]
0x7ABAF9: push    edi
0x7ABAFA: mov     edi, [ecx]
0x7ABAFC: test    edi, edi
0x7ABAFE: jz      loc_7ABB96
0x7ABB04: push    ebp
0x7ABB05: mov     eax, [edi]
0x7ABB07: mov     esi, [eax+0BCh]
0x7ABB0D: test    esi, esi
0x7ABB0F: movzx   ebp, word ptr [edi+4]
0x7ABB13: jz      short loc_7ABB70
0x7ABB15: mov     edx, [esi]
0x7ABB17: mov     eax, [edx+1Ch]
0x7ABB1A: mov     ecx, esi
0x7ABB1C: call    eax
0x7ABB1E: cmp     eax, 1
0x7ABB21: jl      short loc_7ABB3E
0x7ABB23: mov     edx, [esi]
0x7ABB25: mov     eax, [edx+1Ch]
0x7ABB28: mov     ecx, esi
0x7ABB2A: call    eax
0x7ABB2C: cmp     eax, 5
0x7ABB2F: jg      short loc_7ABB3E
0x7ABB31: mov     ecx, [esp+14h+arg_4]
0x7ABB35: push    ecx
0x7ABB36: push    ebp
0x7ABB37: call    sub_7D1320; MoonSugarEffect decode: native shader-id selector for standard shader property families. Updates program/pass render-state choices and constants for hardcoded IDs before object render.
0x7ABB3C: jmp     short loc_7ABB57
0x7ABB3E: mov     edx, [esi]
0x7ABB40: mov     eax, [edx+1Ch]
0x7ABB43: mov     ecx, esi
0x7ABB45: call    eax
0x7ABB47: cmp     eax, 1Bh
0x7ABB4A: jnz     short loc_7ABB70
0x7ABB4C: mov     ecx, [esp+14h+arg_4]
0x7ABB50: push    ecx
0x7ABB51: push    ebp
0x7ABB52: call    Lighting30Shader_SelectRenderPass; Oblivion Lighting30 selector activation. Selectors outside 0x15E/0x15F restore the main constant maps, derive row selector-0x12A, rewrite automatic vertex/pixel-constant enable flags from B46988/B46A60, and apply a route render-state group. SimpleShadow selectors 0x14E..0x151 use valid rows and route group 7. Stock one-light selectors 0x177..0x17A are not rejected here: they derive rows 0x4D..0x50 and use the generic route-group-0 path. The later per-geometry resolver is the actual validity gate; every later selector activation deterministically rewrites these flags before its draw.
0x7ABB57: mov     ecx, [esi+30h]
0x7ABB5A: mov     edx, [ecx]
0x7ABB5C: mov     eax, [edx+48h]
0x7ABB5F: add     esp, 8
0x7ABB62: call    eax
0x7ABB64: mov     ecx, [esi+2Ch]
0x7ABB67: mov     edx, [ecx]
0x7ABB69: mov     eax, [edx+48h]
0x7ABB6C: call    eax
0x7ABB6E: mov     edi, edi
0x7ABB70: cmp     bp, [edi+4]
0x7ABB74: jnz     short loc_7ABB05
0x7ABB76: mov     ecx, [esp+14h+var_4]
0x7ABB7A: push    ebp; selector
0x7ABB7B: push    edi; entry
0x7ABB7C: call    BSShaderAccumulator_DrawRenderPass; Submit one accumulated Oblivion RenderPass. Publishes selector/current entry, dispatches each light pointer, then invokes geometry render virtual +0x84 exactly once. It does not prevalidate the Lighting30 selector; invalid 0x177..0x17A records are suppressed later by SetupRenderPass leaving PassCount zero. Valid SimpleShadow compatibility records each have lightCount=1, so eligible lights remain separate receiver draws.
0x7ABB81: test    ebx, ebx
0x7ABB83: jz      short loc_7ABB91
0x7ABB85: mov     edi, [ebx+8]
0x7ABB88: test    edi, edi
0x7ABB8A: lea     eax, [ebx+8]
0x7ABB8D: mov     ebx, [ebx]
0x7ABB8F: jnz     short loc_7ABB70
0x7ABB91: mov     esi, [esp+14h+self]
0x7ABB95: pop     ebp
0x7ABB96: pop     edi
0x7ABB97: pop     ebx
0x7ABB98: mov     ecx, esi; this
0x7ABB9A: call    BSTPersistentList_ReleaseFreeNodesToGlobalPool; Drain helper recycles list nodes after drawing but never destroys the borrowed property RenderPass payloads.
0x7ABB9F: mov     ecx, [esi+4]
0x7ABBA2: xor     eax, eax
0x7ABBA4: mov     [esi+0Ch], ecx; MEF PERF 2026-10-07 PASS5: PERF-15 drain lifecycle: after draw/free-surplus helper, active head is assigned to freeHead+0C then head/tail/count cleared. This retains just-used nodes locally for reuse. Do not promote a generic repeated heap-churn claim based on ReleaseFreeNodesToGlobalPool name.
0x7ABBA7: mov     [esi+4], eax
0x7ABBAA: mov     [esi+8], eax
0x7ABBAD: mov     [esi+10h], eax
0x7ABBB0: pop     esi
0x7ABBB1: pop     ecx
0x7ABBB2: retn    8
