0x853F80: push    0FFFFFFFFh
0x853F82: push    offset SEH_85AAC0
0x853F87: mov     eax, large fs:0
0x853F8D: push    eax
0x853F8E: push    esi
0x853F8F: push    edi
0x853F90: mov     eax, ds:0B30AACh
0x853F95: xor     eax, esp
0x853F97: push    eax
0x853F98: lea     eax, [esp+18h+var_C]
0x853F9C: mov     large fs:0, eax
0x853FA2: mov     edi, ecx
0x853FA4: cmp     [esp+18h+arg_10], 0
0x853FA9: jnz     loc_85407B
0x853FAF: cmp     [esp+18h+arg_14], 0
0x853FB4: jnz     short loc_85402E
0x853FB6: cmp     byte ptr [esp+18h+arg_8], 1
0x853FBB: jnz     loc_8540CB
0x853FC1: push    10h; Size
0x853FC3: call    FormHeapAlloc
0x853FC8: add     esp, 4
0x853FCB: mov     [esp+18h+arg_8], eax
0x853FCF: test    eax, eax
0x853FD1: mov     esi, [esp+18h+arg_C]
0x853FD5: mov     [esp+18h+var_4], 0
0x853FDD: jz      short loc_853FFC
0x853FDF: movzx   ecx, byte ptr [esi]
0x853FE2: mov     edx, [esp+18h+vtable]
0x853FE6: push    0
0x853FE8: push    0; lightCount
0x853FEA: push    ecx; byte6
0x853FEB: push    180h; selector
0x853FF0: push    edx; geometry
0x853FF1: push    eax; outPass
0x853FF2: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x853FF7: add     esp, 18h
0x853FFA: jmp     short loc_853FFE
0x853FFC: xor     eax, eax
0x853FFE: mov     [esp+18h+arg_8], eax
0x854002: lea     eax, [esp+18h+arg_8]
0x854006: push    eax
0x854007: lea     ecx, [edi+28h]
0x85400A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854012: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854017: mov     byte ptr [esi], 0
0x85401A: mov     ecx, [esp+18h+var_C]
0x85401E: mov     large fs:0, ecx
0x854025: pop     ecx
0x854026: pop     edi
0x854027: pop     esi
0x854028: add     esp, 0Ch
0x85402B: retn    18h
0x85402E: cmp     byte ptr [esp+18h+arg_8], 1
0x854033: jnz     loc_854162
0x854039: push    10h; Size
0x85403B: call    FormHeapAlloc
0x854040: add     esp, 4
0x854043: mov     [esp+18h+arg_8], eax
0x854047: test    eax, eax
0x854049: mov     esi, [esp+18h+arg_C]
0x85404D: mov     [esp+18h+var_4], 1
0x854055: jz      loc_854130
0x85405B: movzx   edx, byte ptr [esi]
0x85405E: mov     ecx, [esp+18h+vtable]
0x854062: push    0
0x854064: push    0; lightCount
0x854066: push    edx; byte6
0x854067: push    181h; selector
0x85406C: push    ecx; geometry
0x85406D: push    eax; outPass
0x85406E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854073: add     esp, 18h
0x854076: jmp     loc_854132
0x85407B: cmp     [esp+18h+arg_14], 0
0x854080: jnz     short loc_8540EE
0x854082: cmp     byte ptr [esp+18h+arg_8], 1
0x854087: jnz     short loc_8540CB
0x854089: push    10h; Size
0x85408B: call    FormHeapAlloc
0x854090: add     esp, 4
0x854093: mov     [esp+18h+arg_8], eax
0x854097: test    eax, eax
0x854099: mov     esi, [esp+18h+arg_C]
0x85409D: mov     [esp+18h+var_4], 2
0x8540A5: jz      loc_853FFC
0x8540AB: movzx   ecx, byte ptr [esi]
0x8540AE: mov     edx, [esp+18h+vtable]
0x8540B2: push    0
0x8540B4: push    0; lightCount
0x8540B6: push    ecx; byte6
0x8540B7: push    182h; selector
0x8540BC: push    edx; geometry
0x8540BD: push    eax; outPass
0x8540BE: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8540C3: add     esp, 18h
0x8540C6: jmp     loc_853FFE
0x8540CB: mov     eax, [esp+18h+arg_4]
0x8540CF: mov     ecx, [esp+18h+arg_C]
0x8540D3: add     word ptr [eax], 1
0x8540D7: mov     byte ptr [ecx], 0
0x8540DA: mov     ecx, [esp+18h+var_C]
0x8540DE: mov     large fs:0, ecx
0x8540E5: pop     ecx
0x8540E6: pop     edi
0x8540E7: pop     esi
0x8540E8: add     esp, 0Ch
0x8540EB: retn    18h
0x8540EE: cmp     byte ptr [esp+18h+arg_8], 1
0x8540F3: jnz     short loc_854162
0x8540F5: push    10h; Size
0x8540F7: call    FormHeapAlloc
0x8540FC: add     esp, 4
0x8540FF: mov     [esp+18h+arg_8], eax
0x854103: test    eax, eax
0x854105: mov     esi, [esp+18h+arg_C]
0x854109: mov     [esp+18h+var_4], 3
0x854111: jz      short loc_854130
0x854113: movzx   edx, byte ptr [esi]
0x854116: mov     ecx, [esp+18h+vtable]
0x85411A: push    0
0x85411C: push    0; lightCount
0x85411E: push    edx; byte6
0x85411F: push    183h; selector
0x854124: push    ecx; geometry
0x854125: push    eax; outPass
0x854126: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85412B: add     esp, 18h
0x85412E: jmp     short loc_854132
0x854130: xor     eax, eax
0x854132: lea     edx, [esp+18h+arg_8]
0x854136: push    edx
0x854137: lea     ecx, [edi+28h]
0x85413A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854142: mov     [esp+1Ch+arg_8], eax
0x854146: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85414B: mov     byte ptr [esi], 0
0x85414E: mov     ecx, [esp+18h+var_C]
0x854152: mov     large fs:0, ecx
0x854159: pop     ecx
0x85415A: pop     edi
0x85415B: pop     esi
0x85415C: add     esp, 0Ch
0x85415F: retn    18h
0x854162: mov     eax, [esp+18h+arg_4]
0x854166: add     word ptr [eax], 1
0x85416A: mov     eax, [esp+18h+arg_C]
0x85416E: mov     byte ptr [eax], 0
0x854171: mov     ecx, [esp+18h+var_C]
0x854175: mov     large fs:0, ecx
0x85417C: pop     ecx
0x85417D: pop     edi
0x85417E: pop     esi
0x85417F: add     esp, 0Ch
0x854182: retn    18h
0x9D3930: mov     eax, [ebp+0Ch]
0x9D3933: push    eax
0x9D3934: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3939: pop     ecx
0x9D393A: retn
0x9D393B: mov     eax, [ebp+0Ch]
0x9D393E: push    eax
0x9D393F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3944: pop     ecx
0x9D3945: retn
0x9D3946: mov     eax, [ebp+0Ch]
0x9D3949: push    eax
0x9D394A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D394F: pop     ecx
0x9D3950: retn
0x9D3951: mov     eax, [ebp+0Ch]
0x9D3954: push    eax
0x9D3955: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D395A: pop     ecx
0x9D395B: retn
0x9D395C: mov     edx, [esp+arg_4]
0x9D3960: lea     eax, [edx-8]
0x9D3963: mov     ecx, [edx-0Ch]
0x9D3966: xor     ecx, eax
0x9D3968: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D396D: mov     eax, offset stru_AFBC68
0x9D3972: jmp     ___CxxFrameHandler3
