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
0x6ABC64: call    FormHeapFree
0x6ABC69: add     esp, 4
0x6ABC6C: mov     ecx, [esp+18h+var_C]
0x6ABC70: mov     large fs:0, ecx
0x6ABC77: pop     ecx
0x6ABC78: pop     esi
0x6ABC79: add     esp, 10h
0x6ABC7C: retn
