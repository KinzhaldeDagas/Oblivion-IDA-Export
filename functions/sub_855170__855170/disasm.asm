0x855170: push    0FFFFFFFFh; Lighting30 helper that emits selector 0xA or 0xB into the secondary pass list when emit mode is active.
0x855172: push    offset SEH_855170
0x855177: mov     eax, large fs:0
0x85517D: push    eax
0x85517E: push    esi
0x85517F: mov     eax, ds:0B30AACh
0x855184: xor     eax, esp
0x855186: push    eax
0x855187: lea     eax, [esp+14h+var_C]
0x85518B: mov     large fs:0, eax
0x855191: mov     esi, ecx
0x855193: cmp     [esp+14h+arg_C], 0
0x855198: jnz     short loc_8551D7
0x85519A: cmp     byte ptr [esp+14h+arg_8], 1
0x85519F: jnz     loc_85522B
0x8551A5: push    10h; Size
0x8551A7: call    FormHeapAlloc
0x8551AC: add     esp, 4
0x8551AF: mov     [esp+14h+arg_8], eax
0x8551B3: test    eax, eax
0x8551B5: mov     [esp+14h+var_4], 0
0x8551BD: jz      short loc_855210
0x8551BF: mov     ecx, [esp+14h+vtable]
0x8551C3: push    0
0x8551C5: push    0; lightCount
0x8551C7: push    0; byte6
0x8551C9: push    0Ah; selector
0x8551CB: push    ecx; geometry
0x8551CC: push    eax; outPass
0x8551CD: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8551D2: add     esp, 18h
0x8551D5: jmp     short loc_855212
0x8551D7: cmp     byte ptr [esp+14h+arg_8], 1
0x8551DC: jnz     short loc_85522B
0x8551DE: push    10h; Size
0x8551E0: call    FormHeapAlloc
0x8551E5: add     esp, 4
0x8551E8: mov     [esp+14h+arg_8], eax
0x8551EC: test    eax, eax
0x8551EE: mov     [esp+14h+var_4], 1
0x8551F6: jz      short loc_855210
0x8551F8: mov     ecx, [esp+14h+vtable]
0x8551FC: push    0
0x8551FE: push    0; lightCount
0x855200: push    0; byte6
0x855202: push    0Bh; selector
0x855204: push    ecx; geometry
0x855205: push    eax; outPass
0x855206: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85520B: add     esp, 18h
0x85520E: jmp     short loc_855212
0x855210: xor     eax, eax
0x855212: lea     edx, [esp+14h+arg_8]
0x855216: push    edx
0x855217: lea     ecx, [esi+58h]
0x85521A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x855222: mov     [esp+18h+arg_8], eax
0x855226: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85522B: mov     ecx, [esp+14h+var_C]
0x85522F: mov     large fs:0, ecx
0x855236: pop     ecx
0x855237: pop     esi
0x855238: add     esp, 0Ch
0x85523B: retn    10h
0x9D3B30: mov     eax, [ebp+0Ch]
0x9D3B33: push    eax
0x9D3B34: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B39: pop     ecx
0x9D3B3A: retn
0x9D3B3B: mov     eax, [ebp+0Ch]
0x9D3B3E: push    eax
0x9D3B3F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B44: pop     ecx
0x9D3B45: retn
0x9D3B46: mov     edx, [esp+arg_4]
0x9D3B4A: lea     eax, [edx-4]
0x9D3B4D: mov     ecx, [edx-8]
0x9D3B50: xor     ecx, eax
0x9D3B52: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3B57: mov     eax, offset stru_AFBE00
0x9D3B5C: jmp     ___CxxFrameHandler3
