0x864830: push    0FFFFFFFFh; [Verified] GeometryDecalShaderProperty vtable slot 23 (vtable+0x5C) BuildRenderPasses. In render mode 5 it returns no list; otherwise it caches/clears the property pass list and emits selector 0x188. BSShaderProperty_GetRenderPassName maps 0x188 to BSSM_GEOMDECAL. This is the class's own geometry-decal pass, separate from inherited DECAL_DATA batching (0x18A/0x18B and Lighting30 0x152/0x153). Fallout's corresponding property path emits different selectors 0x1FF/0x1FE; exact feature equivalence remains Unknown.
0x864832: push    offset SEH_864830
0x864837: mov     eax, large fs:0
0x86483D: push    eax
0x86483E: push    esi
0x86483F: push    edi
0x864840: mov     eax, ds:0B30AACh
0x864845: xor     eax, esp
0x864847: push    eax
0x864848: lea     eax, [esp+18h+var_C]
0x86484C: mov     large fs:0, eax
0x864852: mov     esi, ecx
0x864854: cmp     word ptr ds:0B42EACh, 5
0x86485C: jnz     short loc_864874
0x86485E: xor     eax, eax
0x864860: mov     ecx, [esp+18h+var_C]
0x864864: mov     large fs:0, ecx
0x86486B: pop     ecx
0x86486C: pop     edi
0x86486D: pop     esi
0x86486E: add     esp, 0Ch
0x864871: retn    10h
0x864874: mov     edi, [esp+18h+renderFlags]
0x864878: cmp     [esi+24h], edi
0x86487B: jz      short loc_8648E1
0x86487D: call    BSShaderProperty_ClearRenderPassLists; Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
0x864882: push    10h; Size
0x864884: call    FormHeapAlloc
0x864889: add     esp, 4
0x86488C: mov     [esp+18h+renderFlags], eax
0x864890: test    eax, eax
0x864892: mov     [esp+18h+var_4], 0
0x86489A: jz      short loc_8648B7
0x86489C: mov     ecx, [esp+18h+vtable]
0x8648A0: push    0
0x8648A2: push    0; lightCount
0x8648A4: push    1; byte6
0x8648A6: push    188h; selector
0x8648AB: push    ecx; geometry
0x8648AC: push    eax; outPass
0x8648AD: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8648B2: add     esp, 18h
0x8648B5: jmp     short loc_8648B9
0x8648B7: xor     eax, eax
0x8648B9: lea     edx, [esp+18h+renderFlags]
0x8648BD: push    edx
0x8648BE: lea     ecx, [esi+28h]
0x8648C1: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8648C9: mov     [esp+1Ch+renderFlags], eax
0x8648CD: call    NiTList_AddHead; NiTList AddHead helper. Allocates a node, stores payload at +0x08, installs it as the list head, repairs the previous head/backlink or empty-list tail, and increments count. Repeated per-light calls reverse the source iterator order.
0x8648D2: movzx   eax, word ptr ds:0B42EACh
0x8648D9: shl     eax, 8
0x8648DC: or      eax, edi
0x8648DE: mov     [esi+24h], eax
0x8648E1: lea     eax, [esi+28h]
0x8648E4: mov     ecx, [esp+18h+var_C]
0x8648E8: mov     large fs:0, ecx
0x8648EF: pop     ecx
0x8648F0: pop     edi
0x8648F1: pop     esi
0x8648F2: add     esp, 0Ch
0x8648F5: retn    10h
0x9D7DE0: mov     eax, [ebp+8]
0x9D7DE3: push    eax
0x9D7DE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D7DE9: pop     ecx
0x9D7DEA: retn
0x9D7DEB: mov     edx, [esp+arg_4]
0x9D7DEF: lea     eax, [edx-8]
0x9D7DF2: mov     ecx, [edx-0Ch]
0x9D7DF5: xor     ecx, eax
0x9D7DF7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D7DFC: mov     eax, offset stru_B002B4
0x9D7E01: jmp     ___CxxFrameHandler3
