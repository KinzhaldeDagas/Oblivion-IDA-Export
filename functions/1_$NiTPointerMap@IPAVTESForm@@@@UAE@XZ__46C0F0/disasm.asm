0x46C0F0: push    0FFFFFFFFh
0x46C0F2: push    offset ??1?$NiTPointerMap@IPAVTESForm@@@@UAE@XZ_SEH
0x46C0F7: mov     eax, large fs:0
0x46C0FD: push    eax
0x46C0FE: push    ecx
0x46C0FF: push    esi
0x46C100: mov     eax, ds:0B30AACh
0x46C105: xor     eax, esp
0x46C107: push    eax
0x46C108: lea     eax, [esp+18h+var_C]
0x46C10C: mov     large fs:0, eax
0x46C112: mov     esi, ecx
0x46C114: mov     [esp+18h+var_10], esi
0x46C118: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESForm@@@@6B@; const NiTPointerMap<uint,TESForm *>::`vftable'
0x46C11E: mov     [esp+18h+var_4], 0
0x46C126: call    NiTMap_Clear
0x46C12B: mov     ecx, esi
0x46C12D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x46C135: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESForm@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESForm *>::`vftable'
0x46C13B: call    NiTMap_Clear
0x46C140: mov     eax, [esi+8]
0x46C143: push    eax
0x46C144: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46C149: add     esp, 4
0x46C14C: mov     ecx, [esp+18h+var_C]
0x46C150: mov     large fs:0, ecx
0x46C157: pop     ecx
0x46C158: pop     esi
0x46C159: add     esp, 10h
0x46C15C: retn
0x46AFF0: push    esi
0x46AFF1: mov     esi, ecx
0x46AFF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESForm@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESForm *>::`vftable'
0x46AFF9: call    NiTMap_Clear
0x46AFFE: mov     eax, [esi+8]
0x46B001: push    eax
0x46B002: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x46B007: add     esp, 4
0x46B00A: pop     esi
0x46B00B: retn
0x9AEA90: mov     ecx, [ebp-10h]
0x9AEA93: jmp     loc_46AFF0
0x9AEA98: mov     edx, [esp+arg_4]
0x9AEA9C: lea     eax, [edx-8]
0x9AEA9F: mov     ecx, [edx-0Ch]
0x9AEAA2: xor     ecx, eax
0x9AEAA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEAA9: mov     eax, offset stru_ADB1B4
0x9AEAAE: jmp     ___CxxFrameHandler3
