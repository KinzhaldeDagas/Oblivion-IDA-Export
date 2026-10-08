0x854B70: push    0FFFFFFFFh; Verified (Oblivion): shared by PP-lighting class-1 and Hair pass builders. When renderStateClass's low byte is 1, constructs and appends a 0x10-byte RenderPass: passInfo bit 0x02 clear selects 0x18C, set selects 0x18D; otherwise it increments passCount and clears the pending pass flag. BSShaderProperty_GetRenderPassName maps these to "BSSM_TEXEFFECT" and "BSSM_TEXEFFECT_S". The PP-lighting caller invokes it only when TextureEffectData at +0xE0 is non-null. Fallout's AddTextureEffectPass_1x uses separate IDs 0x2E9/0x2EA and a direct abSkinned input; numeric pass IDs differ across versions.
0x854B72: push    offset SEH_854E90
0x854B77: mov     eax, large fs:0
0x854B7D: push    eax
0x854B7E: push    esi
0x854B7F: push    edi
0x854B80: mov     eax, ds:0B30AACh
0x854B85: xor     eax, esp
0x854B87: push    eax
0x854B88: lea     eax, [esp+18h+var_C]
0x854B8C: mov     large fs:0, eax
0x854B92: mov     edi, ecx
0x854B94: cmp     [esp+18h+bPassInfoBit2], 0
0x854B99: jz      loc_854C36
0x854B9F: cmp     byte ptr [esp+18h+renderStateClass], 1
0x854BA4: jnz     short loc_854C13
0x854BA6: push    10h; Size
0x854BA8: call    FormHeapAlloc
0x854BAD: add     esp, 4
0x854BB0: mov     [esp+18h+renderStateClass], eax
0x854BB4: test    eax, eax
0x854BB6: mov     esi, [esp+18h+passFlags]
0x854BBA: mov     [esp+18h+var_4], 0
0x854BC2: jz      short loc_854BE1
0x854BC4: movzx   ecx, byte ptr [esi]
0x854BC7: mov     edx, [esp+18h+vtable]
0x854BCB: push    0
0x854BCD: push    0; lightCount
0x854BCF: push    ecx; byte6
0x854BD0: push    18Dh; selector
0x854BD5: push    edx; geometry
0x854BD6: push    eax; outPass
0x854BD7: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854BDC: add     esp, 18h
0x854BDF: jmp     short loc_854BE3
0x854BE1: xor     eax, eax
0x854BE3: mov     [esp+18h+renderStateClass], eax
0x854BE7: lea     eax, [esp+18h+renderStateClass]
0x854BEB: push    eax
0x854BEC: lea     ecx, [edi+28h]
0x854BEF: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854BF7: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854BFC: mov     byte ptr [esi], 0
0x854BFF: mov     ecx, [esp+18h+var_C]
0x854C03: mov     large fs:0, ecx
0x854C0A: pop     ecx
0x854C0B: pop     edi
0x854C0C: pop     esi
0x854C0D: add     esp, 0Ch
0x854C10: retn    14h
0x854C13: mov     eax, [esp+18h+passCount]
0x854C17: mov     ecx, [esp+18h+passFlags]
0x854C1B: add     word ptr [eax], 1
0x854C1F: mov     byte ptr [ecx], 0
0x854C22: mov     ecx, [esp+18h+var_C]
0x854C26: mov     large fs:0, ecx
0x854C2D: pop     ecx
0x854C2E: pop     edi
0x854C2F: pop     esi
0x854C30: add     esp, 0Ch
0x854C33: retn    14h
0x854C36: cmp     byte ptr [esp+18h+renderStateClass], 1
0x854C3B: jnz     short loc_854CAA
0x854C3D: push    10h; Size
0x854C3F: call    FormHeapAlloc
0x854C44: add     esp, 4
0x854C47: mov     [esp+18h+renderStateClass], eax
0x854C4B: test    eax, eax
0x854C4D: mov     esi, [esp+18h+passFlags]
0x854C51: mov     [esp+18h+var_4], 1
0x854C59: jz      short loc_854C78
0x854C5B: movzx   edx, byte ptr [esi]
0x854C5E: mov     ecx, [esp+18h+vtable]
0x854C62: push    0
0x854C64: push    0; lightCount
0x854C66: push    edx; byte6
0x854C67: push    18Ch; selector
0x854C6C: push    ecx; geometry
0x854C6D: push    eax; outPass
0x854C6E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854C73: add     esp, 18h
0x854C76: jmp     short loc_854C7A
0x854C78: xor     eax, eax
0x854C7A: lea     edx, [esp+18h+renderStateClass]
0x854C7E: push    edx
0x854C7F: lea     ecx, [edi+28h]
0x854C82: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854C8A: mov     [esp+1Ch+renderStateClass], eax
0x854C8E: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854C93: mov     byte ptr [esi], 0
0x854C96: mov     ecx, [esp+18h+var_C]
0x854C9A: mov     large fs:0, ecx
0x854CA1: pop     ecx
0x854CA2: pop     edi
0x854CA3: pop     esi
0x854CA4: add     esp, 0Ch
0x854CA7: retn    14h
0x854CAA: mov     eax, [esp+18h+passCount]
0x854CAE: add     word ptr [eax], 1
0x854CB2: mov     eax, [esp+18h+passFlags]
0x854CB6: mov     byte ptr [eax], 0
0x854CB9: mov     ecx, [esp+18h+var_C]
0x854CBD: mov     large fs:0, ecx
0x854CC4: pop     ecx
0x854CC5: pop     edi
0x854CC6: pop     esi
0x854CC7: add     esp, 0Ch
0x854CCA: retn    14h
0x9D3AB0: mov     eax, [ebp+0Ch]
0x9D3AB3: push    eax
0x9D3AB4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3AB9: pop     ecx
0x9D3ABA: retn
0x9D3ABB: mov     eax, [ebp+0Ch]
0x9D3ABE: push    eax
0x9D3ABF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3AC4: pop     ecx
0x9D3AC5: retn
0x9D3AC6: mov     edx, [esp+passCount]
0x9D3ACA: lea     eax, [edx-8]
0x9D3ACD: mov     ecx, [edx-0Ch]
0x9D3AD0: xor     ecx, eax
0x9D3AD2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3AD7: mov     eax, offset stru_AFBD98
0x9D3ADC: jmp     ___CxxFrameHandler3
