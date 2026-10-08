0x7E2700: push    0FFFFFFFFh
0x7E2702: push    offset SEH_864830
0x7E2707: mov     eax, large fs:0
0x7E270D: push    eax
0x7E270E: push    esi
0x7E270F: push    edi
0x7E2710: mov     eax, ds:0B30AACh
0x7E2715: xor     eax, esp
0x7E2717: push    eax
0x7E2718: lea     eax, [esp+18h+var_C]
0x7E271C: mov     large fs:0, eax
0x7E2722: mov     esi, ecx
0x7E2724: mov     eax, ds:0B42EACh
0x7E2729: cmp     ax, 5
0x7E272D: jnz     short loc_7E2746
0x7E272F: lea     eax, [esi+38h]
0x7E2732: mov     ecx, [esp+18h+var_C]
0x7E2736: mov     large fs:0, ecx
0x7E273D: pop     ecx
0x7E273E: pop     edi
0x7E273F: pop     esi
0x7E2740: add     esp, 0Ch
0x7E2743: retn    10h
0x7E2746: cmp     ax, 6
0x7E274A: jnz     short loc_7E2763
0x7E274C: lea     eax, [esi+48h]
0x7E274F: mov     ecx, [esp+18h+var_C]
0x7E2753: mov     large fs:0, ecx
0x7E275A: pop     ecx
0x7E275B: pop     edi
0x7E275C: pop     esi
0x7E275D: add     esp, 0Ch
0x7E2760: retn    10h
0x7E2763: mov     edi, [esp+18h+arg_4]
0x7E2767: cmp     [esi+24h], edi
0x7E276A: jz      short loc_7E27CD
0x7E276C: call    BSShaderProperty_ClearRenderPassLists; Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
0x7E2771: push    10h; Size
0x7E2773: call    FormHeapAlloc
0x7E2778: add     esp, 4
0x7E277B: mov     [esp+18h+arg_4], eax
0x7E277F: test    eax, eax
0x7E2781: mov     [esp+18h+var_4], 0
0x7E2789: jz      short loc_7E27A3
0x7E278B: mov     ecx, [esp+18h+vtable]
0x7E278F: push    0
0x7E2791: push    0; lightCount
0x7E2793: push    1; byte6
0x7E2795: push    0; selector
0x7E2797: push    ecx; geometry
0x7E2798: push    eax; outPass
0x7E2799: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x7E279E: add     esp, 18h
0x7E27A1: jmp     short loc_7E27A5
0x7E27A3: xor     eax, eax
0x7E27A5: lea     edx, [esp+18h+arg_4]
0x7E27A9: push    edx
0x7E27AA: lea     ecx, [esi+28h]
0x7E27AD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7E27B5: mov     [esp+1Ch+arg_4], eax
0x7E27B9: call    NiTList_AddHead; NiTList AddHead helper. Allocates a node, stores payload at +0x08, installs it as the list head, repairs the previous head/backlink or empty-list tail, and increments count. Repeated per-light calls reverse the source iterator order.
0x7E27BE: movzx   eax, word ptr ds:0B42EACh
0x7E27C5: shl     eax, 8
0x7E27C8: or      eax, edi
0x7E27CA: mov     [esi+24h], eax
0x7E27CD: lea     eax, [esi+28h]
0x7E27D0: mov     ecx, [esp+18h+var_C]
0x7E27D4: mov     large fs:0, ecx
0x7E27DB: pop     ecx
0x7E27DC: pop     edi
0x7E27DD: pop     esi
0x7E27DE: add     esp, 0Ch
0x7E27E1: retn    10h
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
