0x4B8470: push    0FFFFFFFFh
0x4B8472: push    offset ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ_SEH
0x4B8477: mov     eax, large fs:0
0x4B847D: push    eax
0x4B847E: push    ecx
0x4B847F: push    esi
0x4B8480: mov     eax, ds:0B30AACh
0x4B8485: xor     eax, esp
0x4B8487: push    eax
0x4B8488: lea     eax, [esp+18h+var_C]
0x4B848C: mov     large fs:0, eax
0x4B8492: mov     esi, ecx
0x4B8494: mov     [esp+18h+var_10], esi
0x4B8498: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectCELL@@_N@@6B@; const NiTPointerMap<TESObjectCELL *,bool>::`vftable'
0x4B849E: mov     [esp+18h+var_4], 0
0x4B84A6: call    NiTMap_Clear
0x4B84AB: mov     ecx, esi
0x4B84AD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4B84B5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectCELL@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectCELL *,bool>::`vftable'
0x4B84BB: call    NiTMap_Clear
0x4B84C0: mov     eax, [esi+8]
0x4B84C3: push    eax
0x4B84C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B84C9: add     esp, 4
0x4B84CC: mov     ecx, [esp+18h+var_C]
0x4B84D0: mov     large fs:0, ecx
0x4B84D7: pop     ecx
0x4B84D8: pop     esi
0x4B84D9: add     esp, 10h
0x4B84DC: retn
0x4B79A0: push    esi
0x4B79A1: mov     esi, ecx
0x4B79A3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectCELL@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectCELL *,bool>::`vftable'
0x4B79A9: call    NiTMap_Clear
0x4B79AE: mov     eax, [esi+8]
0x4B79B1: push    eax
0x4B79B2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B79B7: add     esp, 4
0x4B79BA: pop     esi
0x4B79BB: retn
0x9B3BD0: mov     ecx, [ebp-10h]
0x9B3BD3: jmp     loc_4B79A0
0x9B3BD8: mov     edx, [esp+arg_4]
0x9B3BDC: lea     eax, [edx-8]
0x9B3BDF: mov     ecx, [edx-0Ch]
0x9B3BE2: xor     ecx, eax
0x9B3BE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3BE9: mov     eax, offset stru_ADF54C
0x9B3BEE: jmp     ___CxxFrameHandler3
