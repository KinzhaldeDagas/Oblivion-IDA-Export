0x85ABD0: push    0FFFFFFFFh
0x85ABD2: push    offset SEH_85ABD0
0x85ABD7: mov     eax, large fs:0
0x85ABDD: push    eax
0x85ABDE: push    esi
0x85ABDF: mov     eax, ds:0B30AACh
0x85ABE4: xor     eax, esp
0x85ABE6: push    eax
0x85ABE7: lea     eax, [esp+14h+var_C]
0x85ABEB: mov     large fs:0, eax
0x85ABF1: mov     esi, ecx
0x85ABF3: mov     eax, [esi+54h]
0x85ABF6: test    eax, eax
0x85ABF8: jnz     loc_85ACAA
0x85ABFE: push    10h; Size
0x85AC00: call    FormHeapAlloc
0x85AC05: add     esp, 4
0x85AC08: cmp     byte ptr [esp+14h+arg_8], 0
0x85AC0D: mov     [esp+14h+arg_8], eax
0x85AC11: jz      short loc_85AC3A
0x85AC13: test    eax, eax
0x85AC15: mov     [esp+14h+var_4], 0
0x85AC1D: jz      short loc_85AC8F
0x85AC1F: mov     ecx, [esp+14h+vtable]
0x85AC23: push    0
0x85AC25: push    0; lightCount
0x85AC27: push    1; byte6
0x85AC29: push    167h; selector
0x85AC2E: push    ecx; geometry
0x85AC2F: push    eax; outPass
0x85AC30: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85AC35: add     esp, 18h
0x85AC38: jmp     short loc_85AC91
0x85AC3A: cmp     byte ptr [esp+14h+arg_4], 0
0x85AC3F: jnz     short loc_85AC68
0x85AC41: test    eax, eax
0x85AC43: mov     [esp+14h+var_4], 1
0x85AC4B: jz      short loc_85AC8F
0x85AC4D: mov     ecx, [esp+14h+vtable]
0x85AC51: push    0
0x85AC53: push    0; lightCount
0x85AC55: push    1; byte6
0x85AC57: push    165h; selector
0x85AC5C: push    ecx; geometry
0x85AC5D: push    eax; outPass
0x85AC5E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85AC63: add     esp, 18h
0x85AC66: jmp     short loc_85AC91
0x85AC68: test    eax, eax
0x85AC6A: mov     [esp+14h+var_4], 2
0x85AC72: jz      short loc_85AC8F
0x85AC74: mov     ecx, [esp+14h+vtable]
0x85AC78: push    0
0x85AC7A: push    0; lightCount
0x85AC7C: push    1; byte6
0x85AC7E: push    166h; selector
0x85AC83: push    ecx; geometry
0x85AC84: push    eax; outPass
0x85AC85: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85AC8A: add     esp, 18h
0x85AC8D: jmp     short loc_85AC91
0x85AC8F: xor     eax, eax
0x85AC91: lea     edx, [esp+14h+arg_8]
0x85AC95: push    edx
0x85AC96: lea     ecx, [esi+48h]
0x85AC99: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85ACA1: mov     [esp+18h+arg_8], eax
0x85ACA5: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x85ACAA: mov     ecx, [esp+14h+var_C]
0x85ACAE: mov     large fs:0, ecx
0x85ACB5: pop     ecx
0x85ACB6: pop     esi
0x85ACB7: add     esp, 0Ch
0x85ACBA: retn    0Ch
0x9D4500: mov     eax, [ebp+0Ch]
0x9D4503: push    eax
0x9D4504: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4509: pop     ecx
0x9D450A: retn
0x9D450B: mov     eax, [ebp+0Ch]
0x9D450E: push    eax
0x9D450F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D4514: pop     ecx
0x9D4515: retn
0x9D4516: mov     eax, [ebp+0Ch]
0x9D4519: push    eax
0x9D451A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D451F: pop     ecx
0x9D4520: retn
0x9D4521: mov     edx, [esp+arg_4]
0x9D4525: lea     eax, [edx-4]
0x9D4528: mov     ecx, [edx-8]
0x9D452B: xor     ecx, eax
0x9D452D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D4532: mov     eax, offset stru_AFC5AC
0x9D4537: jmp     ___CxxFrameHandler3
