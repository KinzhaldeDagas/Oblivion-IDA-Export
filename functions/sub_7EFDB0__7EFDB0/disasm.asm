0x7EFDB0: push    0FFFFFFFFh
0x7EFDB2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7EFDB7: mov     eax, large fs:0
0x7EFDBD: push    eax
0x7EFDBE: push    ecx
0x7EFDBF: push    ebx
0x7EFDC0: push    esi
0x7EFDC1: push    edi
0x7EFDC2: mov     eax, ds:0B30AACh
0x7EFDC7: xor     eax, esp
0x7EFDC9: push    eax
0x7EFDCA: lea     eax, [esp+20h+var_C]
0x7EFDCE: mov     large fs:0, eax
0x7EFDD4: mov     edi, ecx
0x7EFDD6: mov     eax, [esp+20h+arg_4]
0x7EFDDA: cmp     [edi+24h], eax
0x7EFDDD: jz      loc_7EFE6C
0x7EFDE3: call    BSShaderProperty_ClearRenderPassLists; Owner-side cleanup for all four BSShaderProperty RenderPass lists at +0x28/+0x38/+0x48/+0x58. For every node it unlinks the node, releases the node through the list allocator, destroys the payload's owned light array, and frees the 0x10-byte RenderPass. This is the ordinary payload owner; accumulator selector buckets do not perform this destruction.
0x7EFDE8: push    10h; Size
0x7EFDEA: call    FormHeapAlloc
0x7EFDEF: add     esp, 4
0x7EFDF2: mov     [esp+20h+var_10], eax
0x7EFDF6: test    eax, eax
0x7EFDF8: mov     [esp+20h+var_4], 0
0x7EFE00: jz      short loc_7EFE1F
0x7EFE02: mov     ecx, [esp+20h+vtable]
0x7EFE06: push    0
0x7EFE08: push    0; lightCount
0x7EFE0A: push    1; byte6
0x7EFE0C: push    19Bh; selector
0x7EFE11: push    ecx; geometry
0x7EFE12: push    eax; outPass
0x7EFE13: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x7EFE18: add     esp, 18h
0x7EFE1B: mov     ebx, eax
0x7EFE1D: jmp     short loc_7EFE21
0x7EFE1F: xor     ebx, ebx
0x7EFE21: mov     edx, [edi+28h]
0x7EFE24: mov     eax, [edx+4]
0x7EFE27: lea     esi, [edi+28h]
0x7EFE2A: mov     ecx, esi
0x7EFE2C: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EFE34: call    eax
0x7EFE36: mov     [eax+8], ebx
0x7EFE39: mov     dword ptr [eax+4], 0
0x7EFE40: mov     ecx, [esi+4]
0x7EFE43: mov     [eax], ecx
0x7EFE45: mov     ecx, [esi+4]
0x7EFE48: test    ecx, ecx
0x7EFE4A: jz      short loc_7EFE51
0x7EFE4C: mov     [ecx+4], eax
0x7EFE4F: jmp     short loc_7EFE54
0x7EFE51: mov     [esi+8], eax
0x7EFE54: add     dword ptr [esi+0Ch], 1
0x7EFE58: mov     [esi+4], eax
0x7EFE5B: movzx   edx, word ptr ds:0B42EACh
0x7EFE62: shl     edx, 8
0x7EFE65: or      edx, [esp+20h+arg_4]
0x7EFE69: mov     [edi+24h], edx
0x7EFE6C: lea     eax, [edi+28h]
0x7EFE6F: mov     ecx, [esp+20h+var_C]
0x7EFE73: mov     large fs:0, ecx
0x7EFE7A: pop     ecx
0x7EFE7B: pop     edi
0x7EFE7C: pop     esi
0x7EFE7D: pop     ebx
0x7EFE7E: add     esp, 10h
0x7EFE81: retn    10h
0x9CA420: mov     eax, [ebp-10h]
0x9CA423: push    eax
0x9CA424: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA429: pop     ecx
0x9CA42A: retn
0x9CA42B: mov     edx, [esp+arg_4]
0x9CA42F: lea     eax, [edx-10h]
0x9CA432: mov     ecx, [edx-14h]
0x9CA435: xor     ecx, eax
0x9CA437: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA43C: mov     eax, offset stru_AF2B24
0x9CA441: jmp     ___CxxFrameHandler3
