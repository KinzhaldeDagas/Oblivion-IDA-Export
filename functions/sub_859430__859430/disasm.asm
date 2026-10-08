0x859430: push    0FFFFFFFFh;
0x859432: push    offset SEH_859430
0x859437: mov     eax, large fs:0
0x85943D: push    eax
0x85943E: push    esi
0x85943F: push    edi
0x859440: mov     eax, ds:0B30AACh
0x859445: xor     eax, esp
0x859447: push    eax
0x859448: lea     eax, [esp+18h+var_C]
0x85944C: mov     large fs:0, eax
0x859452: mov     edi, ecx
0x859454: cmp     [esp+18h+arg_1C], 0
0x859459: mov     esi, [esp+18h+arg_18]
0x85945D: jnz     loc_8595D8
0x859463: cmp     [esp+18h+arg_20], 0
0x859468: jnz     loc_859582
0x85946E: cmp     [esp+18h+arg_28], 0
0x859473: jnz     loc_85952C
0x859479: cmp     [esp+18h+arg_2C], 0
0x85947E: jnz     short loc_8594D6
0x859480: cmp     byte ptr [esp+18h+arg_14], 1
0x859485: jnz     loc_8596F7
0x85948B: push    10h; Size
0x85948D: call    FormHeapAlloc
0x859492: add     esp, 4
0x859495: mov     [esp+18h+arg_14], eax
0x859499: test    eax, eax
0x85949B: mov     [esp+18h+var_4], 0
0x8594A3: jz      loc_8596DA
0x8594A9: mov     ecx, [esp+18h+arg_C]
0x8594AD: mov     edx, [esp+18h+arg_8]
0x8594B1: push    ecx
0x8594B2: mov     ecx, [esp+1Ch+arg_4]
0x8594B6: push    edx
0x8594B7: movzx   edx, byte ptr [esi]
0x8594BA: push    ecx
0x8594BB: mov     ecx, [esp+24h+vtable]
0x8594BF: push    3; lightCount
0x8594C1: push    edx; byte6
0x8594C2: push    0F6h ; 'ö'; selector
0x8594C7: push    ecx; geometry
0x8594C8: push    eax; outPass
0x8594C9: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8594CE: add     esp, 20h
0x8594D1: jmp     loc_8596DC
0x8594D6: cmp     byte ptr [esp+18h+arg_14], 1
0x8594DB: jnz     loc_8596F7
0x8594E1: push    10h; Size
0x8594E3: call    FormHeapAlloc
0x8594E8: add     esp, 4
0x8594EB: mov     [esp+18h+arg_14], eax
0x8594EF: test    eax, eax
0x8594F1: mov     [esp+18h+var_4], 1
0x8594F9: jz      loc_8596DA
0x8594FF: mov     ecx, [esp+18h+arg_C]
0x859503: mov     edx, [esp+18h+arg_8]
0x859507: push    ecx
0x859508: mov     ecx, [esp+1Ch+arg_4]
0x85950C: push    edx
0x85950D: movzx   edx, byte ptr [esi]
0x859510: push    ecx
0x859511: mov     ecx, [esp+24h+vtable]
0x859515: push    3; lightCount
0x859517: push    edx; byte6
0x859518: push    0FCh ; 'ü'; selector
0x85951D: push    ecx; geometry
0x85951E: push    eax; outPass
0x85951F: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x859524: add     esp, 20h
0x859527: jmp     loc_8596DC
0x85952C: cmp     byte ptr [esp+18h+arg_14], 1
0x859531: jnz     loc_8596F7
0x859537: push    10h; Size
0x859539: call    FormHeapAlloc
0x85953E: add     esp, 4
0x859541: mov     [esp+18h+arg_14], eax
0x859545: test    eax, eax
0x859547: mov     [esp+18h+var_4], 2
0x85954F: jz      loc_8596DA
0x859555: mov     ecx, [esp+18h+arg_C]
0x859559: mov     edx, [esp+18h+arg_8]
0x85955D: push    ecx
0x85955E: mov     ecx, [esp+1Ch+arg_4]
0x859562: push    edx
0x859563: movzx   edx, byte ptr [esi]
0x859566: push    ecx
0x859567: mov     ecx, [esp+24h+vtable]
0x85956B: push    3; lightCount
0x85956D: push    edx; byte6
0x85956E: push    0F8h ; 'ø'; selector
0x859573: push    ecx; geometry
0x859574: push    eax; outPass
0x859575: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85957A: add     esp, 20h
0x85957D: jmp     loc_8596DC
0x859582: cmp     byte ptr [esp+18h+arg_14], 1
0x859587: jnz     loc_8596F7
0x85958D: push    10h; Size
0x85958F: call    FormHeapAlloc
0x859594: add     esp, 4
0x859597: mov     [esp+18h+arg_14], eax
0x85959B: test    eax, eax
0x85959D: mov     [esp+18h+var_4], 3
0x8595A5: jz      loc_8596DA
0x8595AB: mov     ecx, [esp+18h+arg_C]
0x8595AF: mov     edx, [esp+18h+arg_8]
0x8595B3: push    ecx
0x8595B4: mov     ecx, [esp+1Ch+arg_4]
0x8595B8: push    edx
0x8595B9: movzx   edx, byte ptr [esi]
0x8595BC: push    ecx
0x8595BD: mov     ecx, [esp+24h+vtable]
0x8595C1: push    3; lightCount
0x8595C3: push    edx; byte6
0x8595C4: push    0F7h ; '÷'; selector
0x8595C9: push    ecx; geometry
0x8595CA: push    eax; outPass
0x8595CB: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8595D0: add     esp, 20h
0x8595D3: jmp     loc_8596DC
0x8595D8: cmp     [esp+18h+arg_20], 0
0x8595DD: jnz     loc_85968F
0x8595E3: cmp     [esp+18h+arg_28], 0
0x8595E8: jnz     short loc_859640
0x8595EA: cmp     byte ptr [esp+18h+arg_14], 1
0x8595EF: jnz     loc_8596F7
0x8595F5: push    10h; Size
0x8595F7: call    FormHeapAlloc
0x8595FC: add     esp, 4
0x8595FF: mov     [esp+18h+arg_14], eax
0x859603: test    eax, eax
0x859605: mov     [esp+18h+var_4], 4
0x85960D: jz      loc_8596DA
0x859613: mov     ecx, [esp+18h+arg_C]
0x859617: mov     edx, [esp+18h+arg_8]
0x85961B: push    ecx
0x85961C: mov     ecx, [esp+1Ch+arg_4]
0x859620: push    edx
0x859621: movzx   edx, byte ptr [esi]
0x859624: push    ecx
0x859625: mov     ecx, [esp+24h+vtable]
0x859629: push    3; lightCount
0x85962B: push    edx; byte6
0x85962C: push    0F9h ; 'ù'; selector
0x859631: push    ecx; geometry
0x859632: push    eax; outPass
0x859633: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x859638: add     esp, 20h
0x85963B: jmp     loc_8596DC
0x859640: cmp     byte ptr [esp+18h+arg_14], 1
0x859645: jnz     loc_8596F7
0x85964B: push    10h; Size
0x85964D: call    FormHeapAlloc
0x859652: add     esp, 4
0x859655: mov     [esp+18h+arg_14], eax
0x859659: test    eax, eax
0x85965B: mov     [esp+18h+var_4], 5
0x859663: jz      short loc_8596DA
0x859665: mov     ecx, [esp+18h+arg_C]
0x859669: mov     edx, [esp+18h+arg_8]
0x85966D: push    ecx
0x85966E: mov     ecx, [esp+1Ch+arg_4]
0x859672: push    edx
0x859673: movzx   edx, byte ptr [esi]
0x859676: push    ecx
0x859677: mov     ecx, [esp+24h+vtable]
0x85967B: push    3; lightCount
0x85967D: push    edx; byte6
0x85967E: push    0FBh ; 'û'; selector
0x859683: push    ecx; geometry
0x859684: push    eax; outPass
0x859685: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85968A: add     esp, 20h
0x85968D: jmp     short loc_8596DC
0x85968F: cmp     byte ptr [esp+18h+arg_14], 1
0x859694: jnz     short loc_8596F7
0x859696: push    10h; Size
0x859698: call    FormHeapAlloc
0x85969D: add     esp, 4
0x8596A0: mov     [esp+18h+arg_14], eax
0x8596A4: test    eax, eax
0x8596A6: mov     [esp+18h+var_4], 6
0x8596AE: jz      short loc_8596DA
0x8596B0: mov     ecx, [esp+18h+arg_C]
0x8596B4: mov     edx, [esp+18h+arg_8]
0x8596B8: push    ecx
0x8596B9: mov     ecx, [esp+1Ch+arg_4]
0x8596BD: push    edx
0x8596BE: movzx   edx, byte ptr [esi]
0x8596C1: push    ecx
0x8596C2: mov     ecx, [esp+24h+vtable]
0x8596C6: push    3; lightCount
0x8596C8: push    edx; byte6
0x8596C9: push    0FAh ; 'ú'; selector
0x8596CE: push    ecx; geometry
0x8596CF: push    eax; outPass
0x8596D0: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8596D5: add     esp, 20h
0x8596D8: jmp     short loc_8596DC
0x8596DA: xor     eax, eax
0x8596DC: lea     edx, [esp+18h+arg_14]
0x8596E0: push    edx
0x8596E1: lea     ecx, [edi+28h]
0x8596E4: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x8596EC: mov     [esp+1Ch+arg_14], eax
0x8596F0: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x8596F5: jmp     short loc_8596FF
0x8596F7: mov     eax, [esp+18h+arg_10]
0x8596FB: add     word ptr [eax], 1
0x8596FF: mov     byte ptr [esi], 0
0x859702: mov     ecx, [esp+18h+var_C]
0x859706: mov     large fs:0, ecx
0x85970D: pop     ecx
0x85970E: pop     edi
0x85970F: pop     esi
0x859710: add     esp, 0Ch
0x859713: retn    30h ; '0'
0x9D42A0: mov     eax, [ebp+18h]
0x9D42A3: push    eax
0x9D42A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42A9: pop     ecx
0x9D42AA: retn
0x9D42AB: mov     eax, [ebp+18h]
0x9D42AE: push    eax
0x9D42AF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42B4: pop     ecx
0x9D42B5: retn
0x9D42B6: mov     eax, [ebp+18h]
0x9D42B9: push    eax
0x9D42BA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42BF: pop     ecx
0x9D42C0: retn
0x9D42C1: mov     eax, [ebp+18h]
0x9D42C4: push    eax
0x9D42C5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42CA: pop     ecx
0x9D42CB: retn
0x9D42CC: mov     eax, [ebp+18h]
0x9D42CF: push    eax
0x9D42D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42D5: pop     ecx
0x9D42D6: retn
0x9D42D7: mov     eax, [ebp+18h]
0x9D42DA: push    eax
0x9D42DB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42E0: pop     ecx
0x9D42E1: retn
0x9D42E2: mov     eax, [ebp+18h]
0x9D42E5: push    eax
0x9D42E6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D42EB: pop     ecx
0x9D42EC: retn
0x9D42ED: mov     edx, [esp+arg_4]
0x9D42F1: lea     eax, [edx-8]
0x9D42F4: mov     ecx, [edx-0Ch]
0x9D42F7: xor     ecx, eax
0x9D42F9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D42FE: mov     eax, offset stru_AFC3B0
0x9D4303: jmp     ___CxxFrameHandler3
