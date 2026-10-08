0x4A2150: push    0FFFFFFFFh
0x4A2152: push    offset ??1?$NiTPointerMap@PBDV?$NiPointer@VNiTexture@@@@@@UAE@XZ_SEH
0x4A2157: mov     eax, large fs:0
0x4A215D: push    eax
0x4A215E: push    ecx
0x4A215F: push    esi
0x4A2160: mov     eax, ds:0B30AACh
0x4A2165: xor     eax, esp
0x4A2167: push    eax
0x4A2168: lea     eax, [esp+18h+var_C]
0x4A216C: mov     large fs:0, eax
0x4A2172: mov     esi, ecx
0x4A2174: mov     [esp+18h+var_10], esi
0x4A2178: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDV?$NiPointer@VNiTexture@@@@@@6B@; const NiTPointerMap<char const *,NiPointer<NiTexture>>::`vftable'
0x4A217E: mov     [esp+18h+var_4], 0
0x4A2186: call    NiTMap_Clear
0x4A218B: mov     ecx, esi
0x4A218D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A2195: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiTexture>>::`vftable'
0x4A219B: call    NiTMap_Clear
0x4A21A0: mov     eax, [esi+8]
0x4A21A3: push    eax
0x4A21A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A21A9: add     esp, 4
0x4A21AC: mov     ecx, [esp+18h+var_C]
0x4A21B0: mov     large fs:0, ecx
0x4A21B7: pop     ecx
0x4A21B8: pop     esi
0x4A21B9: add     esp, 10h
0x4A21BC: retn
0x4A1C30: push    esi
0x4A1C31: mov     esi, ecx
0x4A1C33: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDV?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPointer<NiTexture>>::`vftable'
0x4A1C39: call    NiTMap_Clear
0x4A1C3E: mov     eax, [esi+8]
0x4A1C41: push    eax
0x4A1C42: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A1C47: add     esp, 4
0x4A1C4A: pop     esi
0x4A1C4B: retn
0x9B22F0: mov     ecx, [ebp-10h]
0x9B22F3: jmp     loc_4A1C30
0x9B22F8: mov     edx, [esp+arg_4]
0x9B22FC: lea     eax, [edx-8]
0x9B22FF: mov     ecx, [edx-0Ch]
0x9B2302: xor     ecx, eax
0x9B2304: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2309: mov     eax, offset stru_ADE2F4
0x9B230E: jmp     ___CxxFrameHandler3
