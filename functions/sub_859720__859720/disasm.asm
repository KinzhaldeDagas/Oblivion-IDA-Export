0x859720: push    0FFFFFFFFh
0x859722: push    offset SEH_859720
0x859727: mov     eax, large fs:0
0x85972D: push    eax
0x85972E: push    esi
0x85972F: mov     eax, ds:0B30AACh
0x859734: xor     eax, esp
0x859736: push    eax
0x859737: lea     eax, [esp+14h+var_C]
0x85973B: mov     large fs:0, eax
0x859741: mov     esi, ecx
0x859743: cmp     byte ptr [esp+14h+arg_2C], 0
0x859748: jz      loc_859826
0x85974E: cmp     byte ptr [esp+14h+arg_14], 0
0x859753: jnz     short loc_85979B
0x859755: cmp     byte ptr [esp+14h+arg_C], 1
0x85975A: jnz     loc_85980B
0x859760: push    10h; Size
0x859762: call    FormHeapAlloc
0x859767: add     esp, 4
0x85976A: mov     [esp+14h+arg_2C], eax
0x85976E: test    eax, eax
0x859770: mov     [esp+14h+var_4], 0
0x859778: jz      short loc_8597DD
0x85977A: mov     ecx, [esp+14h+arg_10]
0x85977E: movzx   edx, byte ptr [ecx]
0x859781: mov     ecx, [esp+14h+vtable]
0x859785: push    0
0x859787: push    0; lightCount
0x859789: push    edx; byte6
0x85978A: push    10Dh; selector
0x85978F: push    ecx; geometry
0x859790: push    eax; outPass
0x859791: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x859796: add     esp, 18h
0x859799: jmp     short loc_8597DF
0x85979B: cmp     byte ptr [esp+14h+arg_C], 1
0x8597A0: jnz     short loc_85980B
0x8597A2: push    10h; Size
0x8597A4: call    FormHeapAlloc
0x8597A9: add     esp, 4
0x8597AC: mov     [esp+14h+arg_2C], eax
0x8597B0: test    eax, eax
0x8597B2: mov     [esp+14h+var_4], 1
0x8597BA: jz      short loc_8597DD
0x8597BC: mov     ecx, [esp+14h+arg_10]
0x8597C0: movzx   edx, byte ptr [ecx]
0x8597C3: mov     ecx, [esp+14h+vtable]
0x8597C7: push    0
0x8597C9: push    0; lightCount
0x8597CB: push    edx; byte6
0x8597CC: push    10Eh; selector
0x8597D1: push    ecx; geometry
0x8597D2: push    eax; outPass
0x8597D3: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8597D8: add     esp, 18h
0x8597DB: jmp     short loc_8597DF
0x8597DD: xor     eax, eax
0x8597DF: lea     edx, [esp+14h+arg_2C]
0x8597E3: push    edx
0x8597E4: lea     ecx, [esi+28h]
0x8597E7: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8597EF: mov     [esp+18h+arg_2C], eax
0x8597F3: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x8597F8: mov     ecx, [esp+14h+var_C]
0x8597FC: mov     large fs:0, ecx
0x859803: pop     ecx
0x859804: pop     esi
0x859805: add     esp, 0Ch
0x859808: retn    34h ; '4'
0x85980B: mov     eax, [esp+14h+arg_8]
0x85980F: add     word ptr [eax], 1
0x859813: mov     ecx, [esp+14h+var_C]
0x859817: mov     large fs:0, ecx
0x85981E: pop     ecx
0x85981F: pop     esi
0x859820: add     esp, 0Ch
0x859823: retn    34h ; '4'
0x859826: mov     eax, [esp+14h+arg_30]
0x85982A: mov     ecx, [esp+14h+arg_24]
0x85982E: mov     edx, [esp+14h+arg_20]
0x859832: push    eax
0x859833: mov     eax, [esp+18h+arg_1C]
0x859837: push    ecx
0x859838: mov     ecx, [esp+1Ch+arg_18]
0x85983C: push    edx
0x85983D: mov     edx, [esp+20h+arg_14]
0x859841: push    eax
0x859842: mov     eax, [esp+24h+arg_10]
0x859846: push    ecx
0x859847: mov     ecx, [esp+28h+arg_C]
0x85984B: push    edx
0x85984C: mov     edx, [esp+2Ch+arg_8]
0x859850: push    eax
0x859851: mov     eax, [esp+30h+arg_4]
0x859855: push    ecx
0x859856: mov     ecx, [esp+34h+vtable]
0x85985A: push    edx
0x85985B: push    eax
0x85985C: push    ecx
0x85985D: mov     ecx, esi
0x85985F: call    sub_853970
0x859864: mov     ecx, [esp+14h+var_C]
0x859868: mov     large fs:0, ecx
0x85986F: pop     ecx
0x859870: pop     esi
0x859871: add     esp, 0Ch
0x859874: retn    34h ; '4'
0x9D4310: mov     eax, [ebp+30h]
0x9D4313: push    eax
0x9D4314: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4319: pop     ecx
0x9D431A: retn
0x9D431B: mov     eax, [ebp+30h]
0x9D431E: push    eax
0x9D431F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4324: pop     ecx
0x9D4325: retn
0x9D4326: mov     edx, [esp+arg_4]
0x9D432A: lea     eax, [edx-4]
0x9D432D: mov     ecx, [edx-8]
0x9D4330: xor     ecx, eax
0x9D4332: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D4337: mov     eax, offset stru_AFC41C
0x9D433C: jmp     ___CxxFrameHandler3
