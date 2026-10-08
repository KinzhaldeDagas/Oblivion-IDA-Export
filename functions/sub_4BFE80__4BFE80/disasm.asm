0x4BFE80: push    ebx
0x4BFE81: push    esi
0x4BFE82: push    edi
0x4BFE83: mov     edi, ecx
0x4BFE85: call    BSShaderAccumulator_GetOrCreateGlobal
0x4BFE8A: mov     ecx, eax; this
0x4BFE8C: call    BSShaderAccumulator_ClearAccumulatedPasses; Reset transient BSShaderAccumulator storage. Iterates all 0x1A3 selector buckets at this+0x104 with stride 0x14, releases old free nodes, and moves active nodes to local free chains without destroying borrowed RenderPass payloads. Mode-5 flush uses this after drawing only buckets 6..9 and 0x154..0x155, so every other queued selector, including 0x177..0x17A, is discarded without draw. Separate accumulator-owned special pass lists later in this function explicitly call RenderPass_Destroy plus FormHeapFree.
0x4BFE91: xor     ebx, ebx
0x4BFE93: cmp     bl, 4
0x4BFE96: jnb     short loc_4BFEB1
0x4BFE98: mov     eax, [edi+24h]
0x4BFE9B: test    eax, eax
0x4BFE9D: jz      short loc_4BFEB1
0x4BFE9F: movzx   ecx, bl
0x4BFEA2: mov     eax, [eax+ecx*4+20h]
0x4BFEA6: test    eax, eax
0x4BFEA8: jz      short loc_4BFEB1
0x4BFEAA: mov     ecx, eax
0x4BFEAC: call    sub_4C9230
0x4BFEB1: xor     esi, esi
0x4BFEB3: cmp     bl, 4
0x4BFEB6: jnb     short loc_4BFEE7
0x4BFEB8: movzx   ecx, si
0x4BFEBB: cmp     cx, 8
0x4BFEBF: jnb     short loc_4BFEE7
0x4BFEC1: mov     eax, [edi+24h]
0x4BFEC4: test    eax, eax
0x4BFEC6: jz      short loc_4BFEE7
0x4BFEC8: movzx   edx, bl
0x4BFECB: cmp     dword ptr [eax+edx*4+30h], 0
0x4BFED0: lea     eax, [eax+edx*4+30h]
0x4BFED4: jz      short loc_4BFEE7
0x4BFED6: mov     edx, [eax]
0x4BFED8: movzx   ecx, cx
0x4BFEDB: mov     ecx, [edx+ecx*4]
0x4BFEDE: test    ecx, ecx
0x4BFEE0: jz      short loc_4BFEE7
0x4BFEE2: call    sub_4C9230
0x4BFEE7: add     esi, 1
0x4BFEEA: cmp     esi, 8
0x4BFEED: jl      short loc_4BFEB3
0x4BFEEF: add     ebx, 1
0x4BFEF2: cmp     ebx, 4
0x4BFEF5: jl      short loc_4BFE93
0x4BFEF7: pop     edi
0x4BFEF8: pop     esi
0x4BFEF9: pop     ebx
0x4BFEFA: retn
