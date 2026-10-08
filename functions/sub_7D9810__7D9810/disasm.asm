0x7D9810: push    0FFFFFFFFh; [Verified] BSShaderPPLightingProperty vtable slot +0x18 (slot 6) CreateClone. Allocates/constructs 0xF0 bytes, then delegates to BSShaderPPLightingProperty_CopyCloneMembers. The derived copier calls the base copier and copies the PP-lighting fields, but neither it nor the base copier copies the inherited DECAL_DATA* list at +0x80. Whether a later path rebuilds that list is Unknown.
0x7D9812: push    offset SEH_8C8970
0x7D9817: mov     eax, large fs:0
0x7D981D: push    eax
0x7D981E: push    ecx
0x7D981F: push    esi
0x7D9820: push    edi
0x7D9821: mov     eax, ds:0B30AACh
0x7D9826: xor     eax, esp
0x7D9828: push    eax
0x7D9829: lea     eax, [esp+1Ch+var_C]
0x7D982D: mov     large fs:0, eax
0x7D9833: mov     edi, ecx
0x7D9835: push    0F0h ; 'ð'; Size
0x7D983A: call    FormHeapAlloc
0x7D983F: add     esp, 4
0x7D9842: mov     [esp+1Ch+var_10], eax
0x7D9846: xor     esi, esi
0x7D9848: cmp     eax, esi
0x7D984A: mov     [esp+1Ch+var_4], esi
0x7D984E: jz      short loc_7D9859
0x7D9850: mov     ecx, eax; this
0x7D9852: call    ??0BSShaderPPLightingProperty@@QAE@XZ; Verified (Oblivion): BSShaderPPLightingProperty constructor initializes the reference-counted TextureEffectData slot at this+0xE0 (DWORD index 0x38) to null. TextureEffectProperty_SetData replaces that same offset; BSShaderPPLightingProperty destructor releases and clears it before chaining to BSShaderLightingProperty. Fallout's typed property layout calls the member spTexEffectData at the same +0xE0 offset.
0x7D9857: mov     esi, eax
0x7D9859: mov     eax, [esp+1Ch+cloneProcess]
0x7D985D: push    eax; cloneProcess
0x7D985E: push    esi; clone
0x7D985F: mov     ecx, edi; this
0x7D9861: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7D9869: call    BSShaderPPLightingProperty_CopyCloneMembers; [Verified] BSShaderPPLightingProperty clone-field copier. Calls BSShaderProperty_CopyCloneMembers, resizes/copies the three NiPointer arrays and scalar fields in the PP-lighting extension, and retains refcounted members. It does not copy the inherited BSShaderLightingProperty decal list at +0x80.
0x7D986E: mov     eax, esi
0x7D9870: mov     ecx, [esp+1Ch+var_C]
0x7D9874: mov     large fs:0, ecx
0x7D987B: pop     ecx
0x7D987C: pop     edi
0x7D987D: pop     esi
0x7D987E: add     esp, 10h
0x7D9881: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
