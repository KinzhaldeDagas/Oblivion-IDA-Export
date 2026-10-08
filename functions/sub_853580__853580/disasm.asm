0x853580: push    0FFFFFFFFh
0x853582: push    offset SEH_853580
0x853587: mov     eax, large fs:0
0x85358D: push    eax
0x85358E: push    esi
0x85358F: mov     eax, ds:0B30AACh
0x853594: xor     eax, esp
0x853596: push    eax
0x853597: lea     eax, [esp+14h+var_C]
0x85359B: mov     large fs:0, eax
0x8535A1: mov     esi, ecx
0x8535A3: cmp     [esp+14h+arg_18], 0
0x8535A8: jnz     loc_853684
0x8535AE: cmp     [esp+14h+arg_1C], 0
0x8535B3: jnz     short loc_853601
0x8535B5: cmp     byte ptr [esp+14h+arg_10], 1
0x8535BA: jnz     loc_8536FA
0x8535C0: push    10h; Size
0x8535C2: call    FormHeapAlloc
0x8535C7: add     esp, 4
0x8535CA: mov     [esp+14h+arg_10], eax
0x8535CE: test    eax, eax
0x8535D0: mov     [esp+14h+var_4], 0
0x8535D8: jz      loc_8536C5
0x8535DE: mov     ecx, [esp+14h+arg_8]
0x8535E2: mov     edx, [esp+14h+arg_4]
0x8535E6: push    ecx
0x8535E7: mov     ecx, [esp+18h+vtable]
0x8535EB: push    edx
0x8535EC: push    2; lightCount
0x8535EE: push    1; byte6
0x8535F0: push    31h ; '1'; selector
0x8535F2: push    ecx; geometry
0x8535F3: push    eax; outPass
0x8535F4: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8535F9: add     esp, 1Ch
0x8535FC: jmp     loc_8536C7
0x853601: cmp     byte ptr [esp+14h+arg_10], 1
0x853606: jnz     short loc_853662
0x853608: push    10h; Size
0x85360A: call    FormHeapAlloc
0x85360F: add     esp, 4
0x853612: mov     [esp+14h+arg_10], eax
0x853616: test    eax, eax
0x853618: mov     [esp+14h+var_4], 1
0x853620: jz      short loc_853642
0x853622: mov     edx, [esp+14h+arg_8]
0x853626: mov     ecx, [esp+14h+arg_4]
0x85362A: push    edx
0x85362B: mov     edx, [esp+18h+vtable]
0x85362F: push    ecx
0x853630: push    2; lightCount
0x853632: push    1; byte6
0x853634: push    33h ; '3'; selector
0x853636: push    edx; geometry
0x853637: push    eax; outPass
0x853638: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85363D: add     esp, 1Ch
0x853640: jmp     short loc_853644
0x853642: xor     eax, eax
0x853644: mov     [esp+14h+arg_10], eax
0x853648: lea     eax, [esp+14h+arg_10]
0x85364C: push    eax
0x85364D: lea     ecx, [esi+28h]
0x853650: mov     [esp+18h+var_4], 0FFFFFFFFh
0x853658: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85365D: jmp     loc_853702
0x853662: mov     eax, [esp+14h+arg_C]
0x853666: mov     edx, [esp+14h+arg_14]
0x85366A: add     word ptr [eax], 1
0x85366E: mov     byte ptr [edx], 0
0x853671: mov     ecx, [esp+14h+var_C]
0x853675: mov     large fs:0, ecx
0x85367C: pop     ecx
0x85367D: pop     esi
0x85367E: add     esp, 0Ch
0x853681: retn    20h ; ' '
0x853684: cmp     byte ptr [esp+14h+arg_10], 1
0x853689: jnz     short loc_8536FA
0x85368B: push    10h; Size
0x85368D: call    FormHeapAlloc
0x853692: add     esp, 4
0x853695: mov     [esp+14h+arg_10], eax
0x853699: test    eax, eax
0x85369B: mov     [esp+14h+var_4], 2
0x8536A3: jz      short loc_8536C5
0x8536A5: mov     ecx, [esp+14h+arg_8]
0x8536A9: mov     edx, [esp+14h+arg_4]
0x8536AD: push    ecx
0x8536AE: mov     ecx, [esp+18h+vtable]
0x8536B2: push    edx
0x8536B3: push    2; lightCount
0x8536B5: push    1; byte6
0x8536B7: push    32h ; '2'; selector
0x8536B9: push    ecx; geometry
0x8536BA: push    eax; outPass
0x8536BB: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8536C0: add     esp, 1Ch
0x8536C3: jmp     short loc_8536C7
0x8536C5: xor     eax, eax
0x8536C7: lea     edx, [esp+14h+arg_10]
0x8536CB: push    edx
0x8536CC: lea     ecx, [esi+28h]
0x8536CF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8536D7: mov     [esp+18h+arg_10], eax
0x8536DB: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x8536E0: mov     eax, [esp+14h+arg_14]
0x8536E4: mov     byte ptr [eax], 0
0x8536E7: mov     ecx, [esp+14h+var_C]
0x8536EB: mov     large fs:0, ecx
0x8536F2: pop     ecx
0x8536F3: pop     esi
0x8536F4: add     esp, 0Ch
0x8536F7: retn    20h ; ' '
0x8536FA: mov     eax, [esp+14h+arg_C]
0x8536FE: add     word ptr [eax], 1
0x853702: mov     ecx, [esp+14h+arg_14]
0x853706: mov     byte ptr [ecx], 0
0x853709: mov     ecx, [esp+14h+var_C]
0x85370D: mov     large fs:0, ecx
0x853714: pop     ecx
0x853715: pop     esi
0x853716: add     esp, 0Ch
0x853719: retn    20h ; ' '
0x9D3790: mov     eax, [ebp+14h]
0x9D3793: push    eax
0x9D3794: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3799: pop     ecx
0x9D379A: retn
0x9D379B: mov     eax, [ebp+14h]
0x9D379E: push    eax
0x9D379F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D37A4: pop     ecx
0x9D37A5: retn
0x9D37A6: mov     eax, [ebp+14h]
0x9D37A9: push    eax
0x9D37AA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D37AF: pop     ecx
0x9D37B0: retn
0x9D37B1: mov     edx, [esp+arg_4]
0x9D37B5: lea     eax, [edx-4]
0x9D37B8: mov     ecx, [edx-8]
0x9D37BB: xor     ecx, eax
0x9D37BD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D37C2: mov     eax, offset stru_AFBB20
0x9D37C7: jmp     ___CxxFrameHandler3
