0x859160: push    0FFFFFFFFh;
0x859162: push    offset SEH_859160
0x859167: mov     eax, large fs:0
0x85916D: push    eax
0x85916E: push    esi
0x85916F: push    edi
0x859170: mov     eax, ds:0B30AACh
0x859175: xor     eax, esp
0x859177: push    eax
0x859178: lea     eax, [esp+18h+var_C]
0x85917C: mov     large fs:0, eax
0x859182: mov     edi, ecx
0x859184: cmp     [esp+18h+arg_18], 0
0x859189: mov     esi, [esp+18h+arg_14]
0x85918D: jnz     loc_8592F4
0x859193: cmp     [esp+18h+arg_1C], 0
0x859198: jnz     loc_8592A3
0x85919E: cmp     [esp+18h+arg_24], 0
0x8591A3: jnz     loc_859252
0x8591A9: cmp     [esp+18h+arg_28], 0
0x8591AE: jnz     short loc_859201
0x8591B0: cmp     byte ptr [esp+18h+arg_10], 1
0x8591B5: jnz     loc_859404
0x8591BB: push    10h; Size
0x8591BD: call    FormHeapAlloc
0x8591C2: add     esp, 4
0x8591C5: mov     [esp+18h+arg_10], eax
0x8591C9: test    eax, eax
0x8591CB: mov     [esp+18h+var_4], 0
0x8591D3: jz      loc_8593E7
0x8591D9: mov     ecx, [esp+18h+arg_8]
0x8591DD: mov     edx, [esp+18h+arg_4]
0x8591E1: push    ecx
0x8591E2: movzx   ecx, byte ptr [esi]
0x8591E5: push    edx
0x8591E6: mov     edx, [esp+20h+vtable]
0x8591EA: push    2; lightCount
0x8591EC: push    ecx; byte6
0x8591ED: push    0E8h ; 'è'; selector
0x8591F2: push    edx; geometry
0x8591F3: push    eax; outPass
0x8591F4: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8591F9: add     esp, 1Ch
0x8591FC: jmp     loc_8593E9
0x859201: cmp     byte ptr [esp+18h+arg_10], 1
0x859206: jnz     loc_859404
0x85920C: push    10h; Size
0x85920E: call    FormHeapAlloc
0x859213: add     esp, 4
0x859216: mov     [esp+18h+arg_10], eax
0x85921A: test    eax, eax
0x85921C: mov     [esp+18h+var_4], 1
0x859224: jz      loc_8593E7
0x85922A: mov     ecx, [esp+18h+arg_8]
0x85922E: mov     edx, [esp+18h+arg_4]
0x859232: push    ecx
0x859233: movzx   ecx, byte ptr [esi]
0x859236: push    edx
0x859237: mov     edx, [esp+20h+vtable]
0x85923B: push    2; lightCount
0x85923D: push    ecx; byte6
0x85923E: push    0EEh ; 'î'; selector
0x859243: push    edx; geometry
0x859244: push    eax; outPass
0x859245: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85924A: add     esp, 1Ch
0x85924D: jmp     loc_8593E9
0x859252: cmp     byte ptr [esp+18h+arg_10], 1
0x859257: jnz     loc_859404
0x85925D: push    10h; Size
0x85925F: call    FormHeapAlloc
0x859264: add     esp, 4
0x859267: mov     [esp+18h+arg_10], eax
0x85926B: test    eax, eax
0x85926D: mov     [esp+18h+var_4], 2
0x859275: jz      loc_8593E7
0x85927B: mov     ecx, [esp+18h+arg_8]
0x85927F: mov     edx, [esp+18h+arg_4]
0x859283: push    ecx
0x859284: movzx   ecx, byte ptr [esi]
0x859287: push    edx
0x859288: mov     edx, [esp+20h+vtable]
0x85928C: push    2; lightCount
0x85928E: push    ecx; byte6
0x85928F: push    0EAh ; 'ê'; selector
0x859294: push    edx; geometry
0x859295: push    eax; outPass
0x859296: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85929B: add     esp, 1Ch
0x85929E: jmp     loc_8593E9
0x8592A3: cmp     byte ptr [esp+18h+arg_10], 1
0x8592A8: jnz     loc_859404
0x8592AE: push    10h; Size
0x8592B0: call    FormHeapAlloc
0x8592B5: add     esp, 4
0x8592B8: mov     [esp+18h+arg_10], eax
0x8592BC: test    eax, eax
0x8592BE: mov     [esp+18h+var_4], 3
0x8592C6: jz      loc_8593E7
0x8592CC: mov     ecx, [esp+18h+arg_8]
0x8592D0: mov     edx, [esp+18h+arg_4]
0x8592D4: push    ecx
0x8592D5: movzx   ecx, byte ptr [esi]
0x8592D8: push    edx
0x8592D9: mov     edx, [esp+20h+vtable]
0x8592DD: push    2; lightCount
0x8592DF: push    ecx; byte6
0x8592E0: push    0E9h ; 'é'; selector
0x8592E5: push    edx; geometry
0x8592E6: push    eax; outPass
0x8592E7: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8592EC: add     esp, 1Ch
0x8592EF: jmp     loc_8593E9
0x8592F4: cmp     [esp+18h+arg_1C], 0
0x8592F9: jnz     loc_8593A1
0x8592FF: cmp     [esp+18h+arg_24], 0
0x859304: jnz     short loc_859357
0x859306: cmp     byte ptr [esp+18h+arg_10], 1
0x85930B: jnz     loc_859404
0x859311: push    10h; Size
0x859313: call    FormHeapAlloc
0x859318: add     esp, 4
0x85931B: mov     [esp+18h+arg_10], eax
0x85931F: test    eax, eax
0x859321: mov     [esp+18h+var_4], 4
0x859329: jz      loc_8593E7
0x85932F: mov     ecx, [esp+18h+arg_8]
0x859333: mov     edx, [esp+18h+arg_4]
0x859337: push    ecx
0x859338: movzx   ecx, byte ptr [esi]
0x85933B: push    edx
0x85933C: mov     edx, [esp+20h+vtable]
0x859340: push    2; lightCount
0x859342: push    ecx; byte6
0x859343: push    0EBh ; 'ë'; selector
0x859348: push    edx; geometry
0x859349: push    eax; outPass
0x85934A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85934F: add     esp, 1Ch
0x859352: jmp     loc_8593E9
0x859357: cmp     byte ptr [esp+18h+arg_10], 1
0x85935C: jnz     loc_859404
0x859362: push    10h; Size
0x859364: call    FormHeapAlloc
0x859369: add     esp, 4
0x85936C: mov     [esp+18h+arg_10], eax
0x859370: test    eax, eax
0x859372: mov     [esp+18h+var_4], 5
0x85937A: jz      short loc_8593E7
0x85937C: mov     ecx, [esp+18h+arg_8]
0x859380: mov     edx, [esp+18h+arg_4]
0x859384: push    ecx
0x859385: movzx   ecx, byte ptr [esi]
0x859388: push    edx
0x859389: mov     edx, [esp+20h+vtable]
0x85938D: push    2; lightCount
0x85938F: push    ecx; byte6
0x859390: push    0EDh ; 'í'; selector
0x859395: push    edx; geometry
0x859396: push    eax; outPass
0x859397: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85939C: add     esp, 1Ch
0x85939F: jmp     short loc_8593E9
0x8593A1: cmp     byte ptr [esp+18h+arg_10], 1
0x8593A6: jnz     short loc_859404
0x8593A8: push    10h; Size
0x8593AA: call    FormHeapAlloc
0x8593AF: add     esp, 4
0x8593B2: mov     [esp+18h+arg_10], eax
0x8593B6: test    eax, eax
0x8593B8: mov     [esp+18h+var_4], 6
0x8593C0: jz      short loc_8593E7
0x8593C2: mov     ecx, [esp+18h+arg_8]
0x8593C6: mov     edx, [esp+18h+arg_4]
0x8593CA: push    ecx
0x8593CB: movzx   ecx, byte ptr [esi]
0x8593CE: push    edx
0x8593CF: mov     edx, [esp+20h+vtable]
0x8593D3: push    2; lightCount
0x8593D5: push    ecx; byte6
0x8593D6: push    0ECh ; 'ì'; selector
0x8593DB: push    edx; geometry
0x8593DC: push    eax; outPass
0x8593DD: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8593E2: add     esp, 1Ch
0x8593E5: jmp     short loc_8593E9
0x8593E7: xor     eax, eax
0x8593E9: mov     [esp+18h+arg_10], eax
0x8593ED: lea     eax, [esp+18h+arg_10]
0x8593F1: push    eax
0x8593F2: lea     ecx, [edi+28h]
0x8593F5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8593FD: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x859402: jmp     short loc_85940C
0x859404: mov     eax, [esp+18h+arg_C]
0x859408: add     word ptr [eax], 1
0x85940C: mov     byte ptr [esi], 0
0x85940F: mov     ecx, [esp+18h+var_C]
0x859413: mov     large fs:0, ecx
0x85941A: pop     ecx
0x85941B: pop     edi
0x85941C: pop     esi
0x85941D: add     esp, 0Ch
0x859420: retn    2Ch ; ','
0x9D4230: mov     eax, [ebp+14h]
0x9D4233: push    eax
0x9D4234: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4239: pop     ecx
0x9D423A: retn
0x9D423B: mov     eax, [ebp+14h]
0x9D423E: push    eax
0x9D423F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4244: pop     ecx
0x9D4245: retn
0x9D4246: mov     eax, [ebp+14h]
0x9D4249: push    eax
0x9D424A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D424F: pop     ecx
0x9D4250: retn
0x9D4251: mov     eax, [ebp+14h]
0x9D4254: push    eax
0x9D4255: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D425A: pop     ecx
0x9D425B: retn
0x9D425C: mov     eax, [ebp+14h]
0x9D425F: push    eax
0x9D4260: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4265: pop     ecx
0x9D4266: retn
0x9D4267: mov     eax, [ebp+14h]
0x9D426A: push    eax
0x9D426B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4270: pop     ecx
0x9D4271: retn
0x9D4272: mov     eax, [ebp+14h]
0x9D4275: push    eax
0x9D4276: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D427B: pop     ecx
0x9D427C: retn
0x9D427D: mov     edx, [esp+arg_4]
0x9D4281: lea     eax, [edx-8]
0x9D4284: mov     ecx, [edx-0Ch]
0x9D4287: xor     ecx, eax
0x9D4289: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D428E: mov     eax, offset stru_AFC354
0x9D4293: jmp     ___CxxFrameHandler3
