0x854CD0: push    0FFFFFFFFh; Shared refraction RenderPass producer. Selector priority is RefractF -> 0x162, else passInfo bit 2 -> 0x161, else 0x160; count mode increments output, emit mode constructs and appends a property-owned pass.
0x854CD2: push    offset SEH_854CD0
0x854CD7: mov     eax, large fs:0
0x854CDD: push    eax
0x854CDE: push    esi
0x854CDF: push    edi
0x854CE0: mov     eax, ds:0B30AACh
0x854CE5: xor     eax, esp
0x854CE7: push    eax
0x854CE8: lea     eax, [esp+18h+var_C]
0x854CEC: mov     large fs:0, eax
0x854CF2: mov     edi, ecx
0x854CF4: cmp     [esp+18h+arg_14], 0
0x854CF9: jz      short loc_854D48
0x854CFB: cmp     byte ptr [esp+18h+arg_8], 1
0x854D00: jnz     loc_854E5E
0x854D06: push    10h; Size
0x854D08: call    FormHeapAlloc
0x854D0D: add     esp, 4
0x854D10: mov     [esp+18h+arg_8], eax
0x854D14: test    eax, eax
0x854D16: mov     esi, [esp+18h+arg_C]
0x854D1A: mov     [esp+18h+var_4], 0
0x854D22: jz      loc_854E2C
0x854D28: movzx   ecx, byte ptr [esi]
0x854D2B: mov     edx, [esp+18h+vtable]
0x854D2F: push    0
0x854D31: push    0; lightCount
0x854D33: push    ecx; byte6
0x854D34: push    162h; selector
0x854D39: push    edx; geometry
0x854D3A: push    eax; outPass
0x854D3B: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854D40: add     esp, 18h
0x854D43: jmp     loc_854E2E
0x854D48: cmp     [esp+18h+arg_10], 0
0x854D4D: jnz     loc_854DEA
0x854D53: cmp     byte ptr [esp+18h+arg_8], 1
0x854D58: jnz     short loc_854DC7
0x854D5A: push    10h; Size
0x854D5C: call    FormHeapAlloc
0x854D61: add     esp, 4
0x854D64: mov     [esp+18h+arg_8], eax
0x854D68: test    eax, eax
0x854D6A: mov     esi, [esp+18h+arg_C]
0x854D6E: mov     [esp+18h+var_4], 1
0x854D76: jz      short loc_854D95
0x854D78: movzx   edx, byte ptr [esi]
0x854D7B: mov     ecx, [esp+18h+vtable]
0x854D7F: push    0
0x854D81: push    0; lightCount
0x854D83: push    edx; byte6
0x854D84: push    160h; selector
0x854D89: push    ecx; geometry
0x854D8A: push    eax; outPass
0x854D8B: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854D90: add     esp, 18h
0x854D93: jmp     short loc_854D97
0x854D95: xor     eax, eax
0x854D97: lea     edx, [esp+18h+arg_8]
0x854D9B: push    edx
0x854D9C: lea     ecx, [edi+28h]
0x854D9F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854DA7: mov     [esp+1Ch+arg_8], eax
0x854DAB: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854DB0: mov     byte ptr [esi], 0
0x854DB3: mov     ecx, [esp+18h+var_C]
0x854DB7: mov     large fs:0, ecx
0x854DBE: pop     ecx
0x854DBF: pop     edi
0x854DC0: pop     esi
0x854DC1: add     esp, 0Ch
0x854DC4: retn    18h
0x854DC7: mov     eax, [esp+18h+arg_4]
0x854DCB: add     word ptr [eax], 1
0x854DCF: mov     eax, [esp+18h+arg_C]
0x854DD3: mov     byte ptr [eax], 0
0x854DD6: mov     ecx, [esp+18h+var_C]
0x854DDA: mov     large fs:0, ecx
0x854DE1: pop     ecx
0x854DE2: pop     edi
0x854DE3: pop     esi
0x854DE4: add     esp, 0Ch
0x854DE7: retn    18h
0x854DEA: cmp     byte ptr [esp+18h+arg_8], 1
0x854DEF: jnz     short loc_854E5E
0x854DF1: push    10h; Size
0x854DF3: call    FormHeapAlloc
0x854DF8: add     esp, 4
0x854DFB: mov     [esp+18h+arg_8], eax
0x854DFF: test    eax, eax
0x854E01: mov     esi, [esp+18h+arg_C]
0x854E05: mov     [esp+18h+var_4], 2
0x854E0D: jz      short loc_854E2C
0x854E0F: movzx   ecx, byte ptr [esi]
0x854E12: mov     edx, [esp+18h+vtable]
0x854E16: push    0
0x854E18: push    0; lightCount
0x854E1A: push    ecx; byte6
0x854E1B: push    161h; selector
0x854E20: push    edx; geometry
0x854E21: push    eax; outPass
0x854E22: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x854E27: add     esp, 18h
0x854E2A: jmp     short loc_854E2E
0x854E2C: xor     eax, eax
0x854E2E: mov     [esp+18h+arg_8], eax
0x854E32: lea     eax, [esp+18h+arg_8]
0x854E36: push    eax
0x854E37: lea     ecx, [edi+28h]
0x854E3A: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x854E42: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x854E47: mov     byte ptr [esi], 0
0x854E4A: mov     ecx, [esp+18h+var_C]
0x854E4E: mov     large fs:0, ecx
0x854E55: pop     ecx
0x854E56: pop     edi
0x854E57: pop     esi
0x854E58: add     esp, 0Ch
0x854E5B: retn    18h
0x854E5E: mov     eax, [esp+18h+arg_4]
0x854E62: mov     ecx, [esp+18h+arg_C]
0x854E66: add     word ptr [eax], 1
0x854E6A: mov     byte ptr [ecx], 0
0x854E6D: mov     ecx, [esp+18h+var_C]
0x854E71: mov     large fs:0, ecx
0x854E78: pop     ecx
0x854E79: pop     edi
0x854E7A: pop     esi
0x854E7B: add     esp, 0Ch
0x854E7E: retn    18h
0x9D3A70: mov     eax, [ebp+0Ch]
0x9D3A73: push    eax
0x9D3A74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3A79: pop     ecx
0x9D3A7A: retn
0x9D3A7B: mov     eax, [ebp+0Ch]
0x9D3A7E: push    eax
0x9D3A7F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3A84: pop     ecx
0x9D3A85: retn
0x9D3A86: mov     eax, [ebp+0Ch]
0x9D3A89: push    eax
0x9D3A8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3A8F: pop     ecx
0x9D3A90: retn
0x9D3A91: mov     edx, [esp+arg_4]
0x9D3A95: lea     eax, [edx-8]
0x9D3A98: mov     ecx, [edx-0Ch]
0x9D3A9B: xor     ecx, eax
0x9D3A9D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3AA2: mov     eax, offset stru_AFBD64
0x9D3AA7: jmp     ___CxxFrameHandler3
