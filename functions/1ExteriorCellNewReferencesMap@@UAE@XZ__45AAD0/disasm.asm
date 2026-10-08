0x45AAD0: push    0FFFFFFFFh
0x45AAD2: push    offset ??1ExteriorCellNewReferencesMap@@UAE@XZ_SEH
0x45AAD7: mov     eax, large fs:0
0x45AADD: push    eax
0x45AADE: sub     esp, 10h
0x45AAE1: push    ebx
0x45AAE2: push    esi
0x45AAE3: push    edi
0x45AAE4: mov     eax, ds:0B30AACh
0x45AAE9: xor     eax, esp
0x45AAEB: push    eax
0x45AAEC: lea     eax, [esp+2Ch+var_C]
0x45AAF0: mov     large fs:0, eax
0x45AAF6: mov     ebx, ecx
0x45AAF8: mov     [esp+2Ch+var_14], ebx
0x45AAFC: mov     dword ptr [ebx], offset ??_7ExteriorCellNewReferencesMap@@6B@; Verified vtable layout from raw RTTI and function pointers: +0x0 Deleting destructor, +0x4 key hash, +0x8 key equality, +0xC set key/value, +0x10 clear value no-op, +0x14 node-pool allocate, +0x18 node-pool release. Fallout constructor homologs: interior 82601B90, exterior 82601C58; both use 37 buckets, matching Oblivion constructors 45A940/45AA80. Fallout nested-list ownership and exterior record payload differ.
0x45AB02: xor     eax, eax
0x45AB04: cmp     [ebx+4], eax
0x45AB07: mov     [esp+2Ch+var_4], 0
0x45AB0F: jbe     short loc_45AB2A
0x45AB11: mov     edx, [ebx+8]
0x45AB14: mov     ecx, edx
0x45AB16: cmp     dword ptr [ecx], 0
0x45AB19: jnz     loc_45ABD5
0x45AB1F: add     eax, 1
0x45AB22: add     ecx, 4
0x45AB25: cmp     eax, [ebx+4]
0x45AB28: jb      short loc_45AB16
0x45AB2A: xor     eax, eax
0x45AB2C: test    eax, eax
0x45AB2E: mov     [esp+2Ch+position], eax
0x45AB32: jz      short loc_45ABAC
0x45AB34: lea     eax, [esp+2Ch+valueOut]
0x45AB38: push    eax; valueOut
0x45AB39: lea     ecx, [esp+30h+keyOut]
0x45AB3D: push    ecx; keyOut
0x45AB3E: lea     edx, [esp+34h+position]
0x45AB42: push    edx; position
0x45AB43: mov     ecx, ebx; self
0x45AB45: mov     [esp+38h+valueOut], 0
0x45AB4D: call    NiTMap_U32Pointer_GetNextEntry
0x45AB52: mov     esi, [esp+2Ch+valueOut]
0x45AB56: test    esi, esi
0x45AB58: mov     edi, esi
0x45AB5A: jz      short loc_45ABA5
0x45AB5C: lea     esp, [esp+0]
0x45AB60: mov     eax, [edi]
0x45AB62: test    eax, eax
0x45AB64: jz      short loc_45AB6F
0x45AB66: push    eax
0x45AB67: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45AB6C: add     esp, 4
0x45AB6F: mov     edi, [edi+4]
0x45AB72: test    edi, edi
0x45AB74: jnz     short loc_45AB60
0x45AB76: cmp     [esi+4], edi
0x45AB79: jz      short loc_45AB96
0x45AB7B: jmp     short loc_45AB80
0x45AB80: mov     eax, [esi+4]
0x45AB83: mov     edi, [eax+4]
0x45AB86: push    eax
0x45AB87: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45AB8C: add     esp, 4
0x45AB8F: test    edi, edi
0x45AB91: mov     [esi+4], edi
0x45AB94: jnz     short loc_45AB80
0x45AB96: push    esi
0x45AB97: mov     dword ptr [esi], 0
0x45AB9D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45ABA2: add     esp, 4
0x45ABA5: cmp     [esp+2Ch+position], 0
0x45ABAA: jnz     short loc_45AB34
0x45ABAC: mov     ecx, ebx
0x45ABAE: call    NiTMap_Clear
0x45ABB3: mov     ecx, ebx
0x45ABB5: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x45ABBD: call    ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>(void)
0x45ABC2: mov     ecx, [esp+2Ch+var_C]
0x45ABC6: mov     large fs:0, ecx
0x45ABCD: pop     ecx
0x45ABCE: pop     edi
0x45ABCF: pop     esi
0x45ABD0: pop     ebx
0x45ABD1: add     esp, 1Ch
0x45ABD4: retn
0x45ABD5: mov     eax, [edx+eax*4]
0x45ABD8: jmp     loc_45AB2C
0x9AE260: mov     ecx, [ebp-14h]
0x9AE263: jmp     ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@UAE@XZ; NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>::~NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>(void)
0x9AE268: mov     edx, [esp+arg_4]
0x9AE26C: lea     eax, [edx-1Ch]
0x9AE26F: mov     ecx, [edx-20h]
0x9AE272: xor     ecx, eax
0x9AE274: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE279: mov     eax, offset stru_ADAB10
0x9AE27E: jmp     ___CxxFrameHandler3
