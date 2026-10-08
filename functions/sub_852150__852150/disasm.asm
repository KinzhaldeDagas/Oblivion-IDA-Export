0x852150: push    0FFFFFFFFh
0x852152: push    offset SEH_852150
0x852157: mov     eax, large fs:0
0x85215D: push    eax
0x85215E: push    esi
0x85215F: mov     eax, ds:0B30AACh
0x852164: xor     eax, esp
0x852166: push    eax
0x852167: lea     eax, [esp+14h+var_C]
0x85216B: mov     large fs:0, eax
0x852171: mov     esi, ecx
0x852173: cmp     [esp+14h+arg_14], 0
0x852178: jnz     loc_852301
0x85217E: cmp     [esp+14h+arg_18], 0
0x852183: jz      loc_85221E
0x852189: cmp     [esp+14h+arg_1C], 0
0x85218E: jz      short loc_8521D7
0x852190: cmp     byte ptr [esp+14h+arg_C], 1
0x852195: jnz     loc_852441
0x85219B: push    10h; Size
0x85219D: call    FormHeapAlloc
0x8521A2: add     esp, 4
0x8521A5: mov     [esp+14h+arg_C], eax
0x8521A9: test    eax, eax
0x8521AB: mov     [esp+14h+var_4], 0
0x8521B3: jz      loc_852424
0x8521B9: mov     ecx, [esp+14h+arg_4]
0x8521BD: mov     edx, [esp+14h+vtable]
0x8521C1: push    ecx
0x8521C2: push    1; lightCount
0x8521C4: push    1; byte6
0x8521C6: push    13h; selector
0x8521C8: push    edx; geometry
0x8521C9: push    eax; outPass
0x8521CA: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8521CF: add     esp, 18h
0x8521D2: jmp     loc_852426
0x8521D7: cmp     byte ptr [esp+14h+arg_C], 1
0x8521DC: jnz     loc_852441
0x8521E2: push    10h; Size
0x8521E4: call    FormHeapAlloc
0x8521E9: add     esp, 4
0x8521EC: mov     [esp+14h+arg_C], eax
0x8521F0: test    eax, eax
0x8521F2: mov     [esp+14h+var_4], 1
0x8521FA: jz      loc_852424
0x852200: mov     ecx, [esp+14h+arg_4]
0x852204: mov     edx, [esp+14h+vtable]
0x852208: push    ecx
0x852209: push    1; lightCount
0x85220B: push    1; byte6
0x85220D: push    12h; selector
0x85220F: push    edx; geometry
0x852210: push    eax; outPass
0x852211: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x852216: add     esp, 18h
0x852219: jmp     loc_852426
0x85221E: cmp     [esp+14h+arg_1C], 0
0x852223: jz      short loc_85226C
0x852225: cmp     byte ptr [esp+14h+arg_C], 1
0x85222A: jnz     loc_852441
0x852230: push    10h; Size
0x852232: call    FormHeapAlloc
0x852237: add     esp, 4
0x85223A: mov     [esp+14h+arg_C], eax
0x85223E: test    eax, eax
0x852240: mov     [esp+14h+var_4], 2
0x852248: jz      loc_852424
0x85224E: mov     ecx, [esp+14h+arg_4]
0x852252: mov     edx, [esp+14h+vtable]
0x852256: push    ecx
0x852257: push    1; lightCount
0x852259: push    1; byte6
0x85225B: push    11h; selector
0x85225D: push    edx; geometry
0x85225E: push    eax; outPass
0x85225F: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x852264: add     esp, 18h
0x852267: jmp     loc_852426
0x85226C: cmp     [esp+14h+arg_20], 0
0x852271: jnz     short loc_8522BA
0x852273: cmp     byte ptr [esp+14h+arg_C], 1
0x852278: jnz     loc_852441
0x85227E: push    10h; Size
0x852280: call    FormHeapAlloc
0x852285: add     esp, 4
0x852288: mov     [esp+14h+arg_C], eax
0x85228C: test    eax, eax
0x85228E: mov     [esp+14h+var_4], 3
0x852296: jz      loc_852424
0x85229C: mov     ecx, [esp+14h+arg_4]
0x8522A0: mov     edx, [esp+14h+vtable]
0x8522A4: push    ecx
0x8522A5: push    1; lightCount
0x8522A7: push    1; byte6
0x8522A9: push    10h; selector
0x8522AB: push    edx; geometry
0x8522AC: push    eax; outPass
0x8522AD: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8522B2: add     esp, 18h
0x8522B5: jmp     loc_852426
0x8522BA: cmp     byte ptr [esp+14h+arg_C], 1
0x8522BF: jnz     loc_852441
0x8522C5: push    10h; Size
0x8522C7: call    FormHeapAlloc
0x8522CC: add     esp, 4
0x8522CF: mov     [esp+14h+arg_C], eax
0x8522D3: test    eax, eax
0x8522D5: mov     [esp+14h+var_4], 4
0x8522DD: jz      loc_852424
0x8522E3: mov     ecx, [esp+14h+arg_4]
0x8522E7: mov     edx, [esp+14h+vtable]
0x8522EB: push    ecx
0x8522EC: push    1; lightCount
0x8522EE: push    1; byte6
0x8522F0: push    18h; selector
0x8522F2: push    edx; geometry
0x8522F3: push    eax; outPass
0x8522F4: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8522F9: add     esp, 18h
0x8522FC: jmp     loc_852426
0x852301: cmp     [esp+14h+arg_18], 0
0x852306: jz      loc_8523A1
0x85230C: cmp     [esp+14h+arg_1C], 0
0x852311: jz      short loc_85235A
0x852313: cmp     byte ptr [esp+14h+arg_C], 1
0x852318: jnz     loc_852441
0x85231E: push    10h; Size
0x852320: call    FormHeapAlloc
0x852325: add     esp, 4
0x852328: mov     [esp+14h+arg_C], eax
0x85232C: test    eax, eax
0x85232E: mov     [esp+14h+var_4], 5
0x852336: jz      loc_852424
0x85233C: mov     ecx, [esp+14h+arg_4]
0x852340: mov     edx, [esp+14h+vtable]
0x852344: push    ecx
0x852345: push    1; lightCount
0x852347: push    1; byte6
0x852349: push    17h; selector
0x85234B: push    edx; geometry
0x85234C: push    eax; outPass
0x85234D: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x852352: add     esp, 18h
0x852355: jmp     loc_852426
0x85235A: cmp     byte ptr [esp+14h+arg_C], 1
0x85235F: jnz     loc_852441
0x852365: push    10h; Size
0x852367: call    FormHeapAlloc
0x85236C: add     esp, 4
0x85236F: mov     [esp+14h+arg_C], eax
0x852373: test    eax, eax
0x852375: mov     [esp+14h+var_4], 6
0x85237D: jz      loc_852424
0x852383: mov     ecx, [esp+14h+arg_4]
0x852387: mov     edx, [esp+14h+vtable]
0x85238B: push    ecx
0x85238C: push    1; lightCount
0x85238E: push    1; byte6
0x852390: push    16h; selector
0x852392: push    edx; geometry
0x852393: push    eax; outPass
0x852394: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x852399: add     esp, 18h
0x85239C: jmp     loc_852426
0x8523A1: cmp     [esp+14h+arg_1C], 0
0x8523A6: jz      short loc_8523E8
0x8523A8: cmp     byte ptr [esp+14h+arg_C], 1
0x8523AD: jnz     loc_852441
0x8523B3: push    10h; Size
0x8523B5: call    FormHeapAlloc
0x8523BA: add     esp, 4
0x8523BD: mov     [esp+14h+arg_C], eax
0x8523C1: test    eax, eax
0x8523C3: mov     [esp+14h+var_4], 7
0x8523CB: jz      short loc_852424
0x8523CD: mov     ecx, [esp+14h+arg_4]
0x8523D1: mov     edx, [esp+14h+vtable]
0x8523D5: push    ecx
0x8523D6: push    1; lightCount
0x8523D8: push    1; byte6
0x8523DA: push    15h; selector
0x8523DC: push    edx; geometry
0x8523DD: push    eax; outPass
0x8523DE: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8523E3: add     esp, 18h
0x8523E6: jmp     short loc_852426
0x8523E8: cmp     byte ptr [esp+14h+arg_C], 1
0x8523ED: jnz     short loc_852441
0x8523EF: push    10h; Size
0x8523F1: call    FormHeapAlloc
0x8523F6: add     esp, 4
0x8523F9: mov     [esp+14h+arg_C], eax
0x8523FD: test    eax, eax
0x8523FF: mov     [esp+14h+var_4], 8
0x852407: jz      short loc_852424
0x852409: mov     ecx, [esp+14h+arg_4]
0x85240D: mov     edx, [esp+14h+vtable]
0x852411: push    ecx
0x852412: push    1; lightCount
0x852414: push    1; byte6
0x852416: push    14h; selector
0x852418: push    edx; geometry
0x852419: push    eax; outPass
0x85241A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85241F: add     esp, 18h
0x852422: jmp     short loc_852426
0x852424: xor     eax, eax
0x852426: mov     [esp+14h+arg_C], eax
0x85242A: lea     eax, [esp+14h+arg_C]
0x85242E: push    eax
0x85242F: lea     ecx, [esi+28h]
0x852432: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85243A: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85243F: jmp     short loc_852449
0x852441: mov     eax, [esp+14h+arg_8]
0x852445: add     word ptr [eax], 1
0x852449: mov     ecx, [esp+14h+arg_10]
0x85244D: mov     byte ptr [ecx], 0
0x852450: mov     ecx, [esp+14h+var_C]
0x852454: mov     large fs:0, ecx
0x85245B: pop     ecx
0x85245C: pop     esi
0x85245D: add     esp, 0Ch
0x852460: retn    24h ; '$'
0x9D3510: mov     eax, [ebp+10h]
0x9D3513: push    eax
0x9D3514: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3519: pop     ecx
0x9D351A: retn
0x9D351B: mov     eax, [ebp+10h]
0x9D351E: push    eax
0x9D351F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3524: pop     ecx
0x9D3525: retn
0x9D3526: mov     eax, [ebp+10h]
0x9D3529: push    eax
0x9D352A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D352F: pop     ecx
0x9D3530: retn
0x9D3531: mov     eax, [ebp+10h]
0x9D3534: push    eax
0x9D3535: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D353A: pop     ecx
0x9D353B: retn
0x9D353C: mov     eax, [ebp+10h]
0x9D353F: push    eax
0x9D3540: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3545: pop     ecx
0x9D3546: retn
0x9D3547: mov     eax, [ebp+10h]
0x9D354A: push    eax
0x9D354B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3550: pop     ecx
0x9D3551: retn
0x9D3552: mov     eax, [ebp+10h]
0x9D3555: push    eax
0x9D3556: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D355B: pop     ecx
0x9D355C: retn
0x9D355D: mov     eax, [ebp+10h]
0x9D3560: push    eax
0x9D3561: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3566: pop     ecx
0x9D3567: retn
0x9D3568: mov     eax, [ebp+10h]
0x9D356B: push    eax
0x9D356C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3571: pop     ecx
0x9D3572: retn
0x9D3573: mov     edx, [esp+arg_4]
0x9D3577: lea     eax, [edx-4]
0x9D357A: mov     ecx, [edx-8]
0x9D357D: xor     ecx, eax
0x9D357F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3584: mov     eax, offset stru_AFB918
0x9D3589: jmp     ___CxxFrameHandler3
