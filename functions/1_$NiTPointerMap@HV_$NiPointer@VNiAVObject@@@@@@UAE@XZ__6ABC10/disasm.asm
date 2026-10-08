0x6ABC10: push    0FFFFFFFFh
0x6ABC12: push    offset ??1?$NiTPointerMap@HV?$NiPointer@VNiAVObject@@@@@@UAE@XZ_SEH
0x6ABC17: mov     eax, large fs:0
0x6ABC1D: push    eax
0x6ABC1E: push    ecx
0x6ABC1F: push    esi
0x6ABC20: mov     eax, ds:0B30AACh
0x6ABC25: xor     eax, esp
0x6ABC27: push    eax
0x6ABC28: lea     eax, [esp+18h+var_C]
0x6ABC2C: mov     large fs:0, eax
0x6ABC32: mov     esi, ecx
0x6ABC34: mov     [esp+18h+var_10], esi
0x6ABC38: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTPointerMap<int,NiPointer<NiAVObject>>::`vftable'
0x6ABC3E: mov     [esp+18h+var_4], 0
0x6ABC46: call    NiTMap_Clear
0x6ABC4B: mov     ecx, esi
0x6ABC4D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6ABC55: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,NiPointer<NiAVObject>>::`vftable'
0x6ABC5B: call    NiTMap_Clear
0x6ABC60: mov     eax, [esi+8]
0x6ABC63: push    eax
0x6ABC64: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6ABC69: add     esp, 4
0x6ABC6C: mov     ecx, [esp+18h+var_C]
0x6ABC70: mov     large fs:0, ecx
0x6ABC77: pop     ecx
0x6ABC78: pop     esi
0x6ABC79: add     esp, 10h
0x6ABC7C: retn
0x6AA390: push    esi
0x6AA391: mov     esi, ecx
0x6AA393: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,NiPointer<NiAVObject>>::`vftable'
0x6AA399: call    NiTMap_Clear
0x6AA39E: mov     eax, [esi+8]
0x6AA3A1: push    eax
0x6AA3A2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AA3A7: add     esp, 4
0x6AA3AA: pop     esi
0x6AA3AB: retn
0x9C6410: mov     ecx, [ebp-10h]
0x9C6413: jmp     loc_6AA390
0x9C6418: mov     edx, [esp+arg_4]
0x9C641C: lea     eax, [edx-8]
0x9C641F: mov     ecx, [edx-0Ch]
0x9C6422: xor     ecx, eax
0x9C6424: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6429: mov     eax, offset stru_AEE9C0
0x9C642E: jmp     ___CxxFrameHandler3
