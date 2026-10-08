0x7756F0: mov     edx, [ecx+0Ch]
0x7756F3: sub     esp, 0Ch
0x7756F6: push    esi
0x7756F7: lea     esi, [ecx+8]
0x7756FA: xor     eax, eax
0x7756FC: test    edx, edx
0x7756FE: push    edi
0x7756FF: jbe     short loc_775715
0x775701: mov     edi, [esi+8]
0x775704: mov     ecx, edi
0x775706: cmp     dword ptr [ecx], 0
0x775709: jnz     short loc_775776
0x77570B: add     eax, 1
0x77570E: add     ecx, 4
0x775711: cmp     eax, edx
0x775713: jb      short loc_775706
0x775715: xor     eax, eax
0x775717: test    eax, eax
0x775719: mov     [esp+14h+position], eax
0x77571D: jz      short loc_77574A
0x77571F: nop
0x775720: lea     eax, [esp+14h+valueOut]
0x775724: push    eax; valueOut
0x775725: lea     ecx, [esp+18h+keyOut]
0x775729: push    ecx; keyOut
0x77572A: lea     edx, [esp+1Ch+position]
0x77572E: push    edx; position
0x77572F: mov     ecx, esi; self
0x775731: call    NiTMap_U32Pointer_GetNextEntry
0x775736: mov     eax, [esp+14h+valueOut]
0x77573A: push    eax
0x77573B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x775740: add     esp, 4
0x775743: cmp     [esp+14h+position], 0
0x775748: jnz     short loc_775720
0x77574A: mov     ecx, esi
0x77574C: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTPointerMap<_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x775752: call    NiTMap_Clear
0x775757: mov     ecx, esi
0x775759: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@W4_D3DFORMAT@@PAVRenderTargetInfo@DisplayFormatInfo@NiDX9DeviceDesc@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,_D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'
0x77575F: call    NiTMap_Clear
0x775764: mov     ecx, [esi+8]
0x775767: push    ecx
0x775768: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x77576D: add     esp, 4
0x775770: pop     edi
0x775771: pop     esi
0x775772: add     esp, 0Ch
0x775775: retn
0x775776: mov     eax, [edi+eax*4]
0x775779: jmp     short loc_775717
