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
0x4B84C4: call    FormHeapFree
0x4B84C9: add     esp, 4
0x4B84CC: mov     ecx, [esp+18h+var_C]
0x4B84D0: mov     large fs:0, ecx
0x4B84D7: pop     ecx
0x4B84D8: pop     esi
0x4B84D9: add     esp, 10h
0x4B84DC: retn
