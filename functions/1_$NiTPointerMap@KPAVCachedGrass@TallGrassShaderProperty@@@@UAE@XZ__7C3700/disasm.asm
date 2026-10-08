0x7C3700: push    0FFFFFFFFh
0x7C3702: push    offset ??1?$NiTPointerMap@KPAVCachedGrass@TallGrassShaderProperty@@@@UAE@XZ_SEH
0x7C3707: mov     eax, large fs:0
0x7C370D: push    eax
0x7C370E: push    ecx
0x7C370F: push    esi
0x7C3710: mov     eax, ds:0B30AACh
0x7C3715: xor     eax, esp
0x7C3717: push    eax
0x7C3718: lea     eax, [esp+18h+var_C]
0x7C371C: mov     large fs:0, eax
0x7C3722: mov     esi, ecx
0x7C3724: mov     [esp+18h+var_10], esi
0x7C3728: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@KPAVCachedGrass@TallGrassShaderProperty@@@@6B@; const NiTPointerMap<ulong,TallGrassShaderProperty::CachedGrass *>::`vftable'
0x7C372E: mov     [esp+18h+var_4], 0
0x7C3736: call    NiTMap_Clear
0x7C373B: mov     ecx, esi
0x7C373D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7C3745: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@KPAVCachedGrass@TallGrassShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ulong,TallGrassShaderProperty::CachedGrass *>::`vftable'
0x7C374B: call    NiTMap_Clear
0x7C3750: mov     eax, [esi+8]
0x7C3753: push    eax
0x7C3754: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C3759: add     esp, 4
0x7C375C: mov     ecx, [esp+18h+var_C]
0x7C3760: mov     large fs:0, ecx
0x7C3767: pop     ecx
0x7C3768: pop     esi
0x7C3769: add     esp, 10h
0x7C376C: retn
0x7C2FD0: push    esi
0x7C2FD1: mov     esi, ecx
0x7C2FD3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@KPAVCachedGrass@TallGrassShaderProperty@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,ulong,TallGrassShaderProperty::CachedGrass *>::`vftable'
0x7C2FD9: call    NiTMap_Clear
0x7C2FDE: mov     eax, [esi+8]
0x7C2FE1: push    eax
0x7C2FE2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7C2FE7: add     esp, 4
0x7C2FEA: pop     esi
0x7C2FEB: retn
0x9CE4C0: mov     ecx, [ebp-10h]
0x9CE4C3: jmp     loc_7C2FD0
0x9CE4C8: mov     edx, [esp+arg_4]
0x9CE4CC: lea     eax, [edx-8]
0x9CE4CF: mov     ecx, [edx-0Ch]
0x9CE4D2: xor     ecx, eax
0x9CE4D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE4D9: mov     eax, offset stru_AF74BC
0x9CE4DE: jmp     ___CxxFrameHandler3
