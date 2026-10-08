0x7B3860: push    0FFFFFFFFh
0x7B3862: push    offset ??1?$NiTPointerMap@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@UAE@XZ_SEH
0x7B3867: mov     eax, large fs:0
0x7B386D: push    eax
0x7B386E: push    ecx
0x7B386F: push    esi
0x7B3870: mov     eax, ds:0B30AACh
0x7B3875: xor     eax, esp
0x7B3877: push    eax
0x7B3878: lea     eax, [esp+18h+var_C]
0x7B387C: mov     large fs:0, eax
0x7B3882: mov     esi, ecx
0x7B3884: mov     [esp+18h+var_10], esi
0x7B3888: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@6B@; const NiTPointerMap<uint,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'
0x7B388E: mov     [esp+18h+var_4], 0
0x7B3896: call    NiTMap_Clear
0x7B389B: mov     ecx, esi
0x7B389D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7B38A5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'
0x7B38AB: call    NiTMap_Clear
0x7B38B0: mov     eax, [esi+8]
0x7B38B3: push    eax
0x7B38B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7B38B9: add     esp, 4
0x7B38BC: mov     ecx, [esp+18h+var_C]
0x7B38C0: mov     large fs:0, ecx
0x7B38C7: pop     ecx
0x7B38C8: pop     esi
0x7B38C9: add     esp, 10h
0x7B38CC: retn
0x7B25C0: push    esi
0x7B25C1: mov     esi, ecx
0x7B25C3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVCachedDistantLOD@DistantLODShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'
0x7B25C9: call    NiTMap_Clear
0x7B25CE: mov     eax, [esi+8]
0x7B25D1: push    eax
0x7B25D2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7B25D7: add     esp, 4
0x7B25DA: pop     esi
0x7B25DB: retn
0x9CD9E0: mov     ecx, [ebp-10h]
0x9CD9E3: jmp     loc_7B25C0
0x9CD9E8: mov     edx, [esp+arg_4]
0x9CD9EC: lea     eax, [edx-8]
0x9CD9EF: mov     ecx, [edx-0Ch]
0x9CD9F2: xor     ecx, eax
0x9CD9F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CD9F9: mov     eax, offset stru_AF6BD0
0x9CD9FE: jmp     ___CxxFrameHandler3
