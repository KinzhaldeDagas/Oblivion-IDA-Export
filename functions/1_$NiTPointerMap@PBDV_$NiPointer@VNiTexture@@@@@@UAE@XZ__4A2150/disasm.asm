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
0x4A21A4: call    FormHeapFree
0x4A21A9: add     esp, 4
0x4A21AC: mov     ecx, [esp+18h+var_C]
0x4A21B0: mov     large fs:0, ecx
0x4A21B7: pop     ecx
0x4A21B8: pop     esi
0x4A21B9: add     esp, 10h
0x4A21BC: retn
