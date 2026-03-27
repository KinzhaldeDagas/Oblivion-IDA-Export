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
0x7B3924: call    FormHeapFree
0x7B3929: add     esp, 4
0x7B392C: mov     ecx, [esp+18h+var_C]
0x7B3930: mov     large fs:0, ecx
0x7B3937: pop     ecx
0x7B3938: pop     esi
0x7B3939: add     esp, 10h
0x7B393C: retn
