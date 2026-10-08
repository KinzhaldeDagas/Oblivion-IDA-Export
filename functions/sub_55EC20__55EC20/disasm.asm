0x55EC20: push    0FFFFFFFFh; Verified BSTreeManager.modelCacheByTree at +0: lazily creates a 37-bucket NiTPointerMap<TESObjectTREE*, NiPointer<BSTreeModel>*> and gives each tree form a one-element smart-pointer array.
0x55EC22: push    offset Archive_GetFileByIndices_SEH
0x55EC27: mov     eax, large fs:0
0x55EC2D: push    eax
0x55EC2E: push    ecx
0x55EC2F: push    ebx
0x55EC30: push    esi
0x55EC31: push    edi
0x55EC32: mov     eax, ds:0B30AACh
0x55EC37: xor     eax, esp
0x55EC39: push    eax
0x55EC3A: lea     eax, [esp+20h+var_C]
0x55EC3E: mov     large fs:0, eax
0x55EC44: mov     edi, ecx
0x55EC46: mov     ebx, [esp+20h+a2]
0x55EC4A: xor     esi, esi
0x55EC4C: cmp     ebx, esi
0x55EC4E: mov     [esp+20h+var_10], esi
0x55EC52: jnz     short loc_55EC6B
0x55EC54: xor     eax, eax
0x55EC56: mov     ecx, [esp+20h+var_C]
0x55EC5A: mov     large fs:0, ecx
0x55EC61: pop     ecx
0x55EC62: pop     edi
0x55EC63: pop     esi
0x55EC64: pop     ebx
0x55EC65: add     esp, 10h
0x55EC68: retn    4
0x55EC6B: cmp     [edi], esi
0x55EC6D: jnz     short loc_55EC9C
0x55EC6F: push    10h; Size
0x55EC71: call    FormHeapAlloc
0x55EC76: add     esp, 4
0x55EC79: mov     [esp+20h+a2], eax
0x55EC7D: cmp     eax, esi
0x55EC7F: mov     [esp+20h+var_4], esi
0x55EC83: jz      short loc_55EC90
0x55EC85: push    25h ; '%'
0x55EC87: mov     ecx, eax
0x55EC89: call    ??0?$NiTPointerMap@PAVTESObjectTREE@@PAV?$NiPointer@VBSTreeModel@@@@@@QAE@XZ; NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(void)
0x55EC8E: jmp     short loc_55EC92
0x55EC90: xor     eax, eax
0x55EC92: mov     [esp+20h+var_4], 0FFFFFFFFh
0x55EC9A: mov     [edi], eax
0x55EC9C: mov     ecx, [edi]
0x55EC9E: lea     eax, [esp+20h+var_10]
0x55ECA2: push    eax
0x55ECA3: push    ebx
0x55ECA4: call    NiTMap_GetAt
0x55ECA9: test    al, al
0x55ECAB: jz      short loc_55ECC6
0x55ECAD: mov     eax, [esp+20h+var_10]
0x55ECB1: mov     ecx, [esp+20h+var_C]
0x55ECB5: mov     large fs:0, ecx
0x55ECBC: pop     ecx
0x55ECBD: pop     edi
0x55ECBE: pop     esi
0x55ECBF: pop     ebx
0x55ECC0: add     esp, 10h
0x55ECC3: retn    4
0x55ECC6: push    8; Size
0x55ECC8: call    FormHeapAlloc
0x55ECCD: add     esp, 4
0x55ECD0: mov     [esp+20h+a2], eax
0x55ECD4: cmp     eax, esi
0x55ECD6: mov     [esp+20h+var_4], 1
0x55ECDE: jz      short loc_55ECFD
0x55ECE0: push    offset NiPointerSlot_Release; a5
0x55ECE5: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x55ECEA: push    1; size
0x55ECEC: lea     esi, [eax+4]
0x55ECEF: push    4; a2
0x55ECF1: push    esi; a1
0x55ECF2: mov     dword ptr [eax], 1
0x55ECF8: call    ArrayConstructor
0x55ECFD: mov     ecx, [edi]; this
0x55ECFF: push    esi; a3
0x55ED00: push    ebx; a2
0x55ED01: mov     [esp+28h+var_4], 0FFFFFFFFh
0x55ED09: call    NiTMap_SetAt
0x55ED0E: mov     eax, esi
0x55ED10: mov     ecx, [esp+20h+var_C]
0x55ED14: mov     large fs:0, ecx
0x55ED1B: pop     ecx
0x55ED1C: pop     edi
0x55ED1D: pop     esi
0x55ED1E: pop     ebx
0x55ED1F: add     esp, 10h
0x55ED22: retn    4
0x9A9EE0: mov     eax, [ebp+4]
0x9A9EE3: push    eax
0x9A9EE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9EE9: pop     ecx
0x9A9EEA: retn
0x9A9EEB: mov     eax, [ebp+4]
0x9A9EEE: push    eax
0x9A9EEF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9A9EF4: pop     ecx
0x9A9EF5: retn
0x9A9EF6: mov     edx, [esp+arg_4]
0x9A9EFA: lea     eax, [edx-10h]
0x9A9EFD: mov     ecx, [edx-14h]
0x9A9F00: xor     ecx, eax
0x9A9F02: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9F07: mov     eax, offset stru_AD6F80
0x9A9F0C: jmp     ___CxxFrameHandler3
