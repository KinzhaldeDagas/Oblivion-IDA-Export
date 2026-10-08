0x7B38D0: push    0FFFFFFFFh
0x7B38D2: push    offset ??1?$NiTPointerMap@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@UAE@XZ_SEH
0x7B38D7: mov     eax, large fs:0
0x7B38DD: push    eax
0x7B38DE: push    ecx
0x7B38DF: push    esi
0x7B38E0: mov     eax, ds:0B30AACh
0x7B38E5: xor     eax, esp
0x7B38E7: push    eax
0x7B38E8: lea     eax, [esp+18h+var_C]
0x7B38EC: mov     large fs:0, eax
0x7B38F2: mov     esi, ecx
0x7B38F4: mov     [esp+18h+var_10], esi
0x7B38F8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@6B@; const NiTPointerMap<uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'
0x7B38FE: mov     [esp+18h+var_4], 0
0x7B3906: call    NiTMap_Clear
0x7B390B: mov     ecx, esi
0x7B390D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7B3915: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'
0x7B391B: call    NiTMap_Clear
0x7B3920: mov     eax, [esi+8]
0x7B3923: push    eax
0x7B3924: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7B3929: add     esp, 4
0x7B392C: mov     ecx, [esp+18h+var_C]
0x7B3930: mov     large fs:0, ecx
0x7B3937: pop     ecx
0x7B3938: pop     esi
0x7B3939: add     esp, 10h
0x7B393C: retn
0x7B25E0: push    esi
0x7B25E1: mov     esi, ecx
0x7B25E3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IV?$NiPointer@VCachedGeometry@DistantLODShaderProperty@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'
0x7B25E9: call    NiTMap_Clear
0x7B25EE: mov     eax, [esi+8]
0x7B25F1: push    eax
0x7B25F2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7B25F7: add     esp, 4
0x7B25FA: pop     esi
0x7B25FB: retn
0x9CDA10: mov     ecx, [ebp-10h]
0x9CDA13: jmp     loc_7B25E0
0x9CDA18: mov     edx, [esp+arg_4]
0x9CDA1C: lea     eax, [edx-8]
0x9CDA1F: mov     ecx, [edx-0Ch]
0x9CDA22: xor     ecx, eax
0x9CDA24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CDA29: mov     eax, offset stru_AF6BFC
0x9CDA2E: jmp     ___CxxFrameHandler3
