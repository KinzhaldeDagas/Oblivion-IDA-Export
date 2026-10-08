0x4A2300: push    0FFFFFFFFh
0x4A2302: push    offset ??1?$NiTPointerMap@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@UAE@XZ_SEH
0x4A2307: mov     eax, large fs:0
0x4A230D: push    eax
0x4A230E: push    ecx
0x4A230F: push    esi
0x4A2310: mov     eax, ds:0B30AACh
0x4A2315: xor     eax, esp
0x4A2317: push    eax
0x4A2318: lea     eax, [esp+18h+var_C]
0x4A231C: mov     large fs:0, eax
0x4A2322: mov     esi, ecx
0x4A2324: mov     [esp+18h+var_10], esi
0x4A2328: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A232E: mov     [esp+18h+var_4], 0
0x4A2336: call    NiTMap_Clear
0x4A233B: mov     ecx, esi
0x4A233D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A2345: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A234B: call    NiTMap_Clear
0x4A2350: mov     eax, [esi+8]
0x4A2353: push    eax
0x4A2354: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A2359: add     esp, 4
0x4A235C: mov     ecx, [esp+18h+var_C]
0x4A2360: mov     large fs:0, ecx
0x4A2367: pop     ecx
0x4A2368: pop     esi
0x4A2369: add     esp, 10h
0x4A236C: retn
0x4A1C50: push    esi
0x4A1C51: mov     esi, ecx
0x4A1C53: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVBSFileEntry@@V?$NiPointer@VNiTexture@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,BSFileEntry const *,NiPointer<NiTexture>>::`vftable'
0x4A1C59: call    NiTMap_Clear
0x4A1C5E: mov     eax, [esi+8]
0x4A1C61: push    eax
0x4A1C62: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4A1C67: add     esp, 4
0x4A1C6A: pop     esi
0x4A1C6B: retn
0x9B2320: mov     ecx, [ebp-10h]
0x9B2323: jmp     loc_4A1C50
0x9B2328: mov     edx, [esp+arg_4]
0x9B232C: lea     eax, [edx-8]
0x9B232F: mov     ecx, [edx-0Ch]
0x9B2332: xor     ecx, eax
0x9B2334: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B2339: mov     eax, offset stru_ADE320
0x9B233E: jmp     ___CxxFrameHandler3
