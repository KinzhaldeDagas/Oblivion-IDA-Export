0x6B0BE0: push    0FFFFFFFFh
0x6B0BE2: push    offset ??1?$NiTPointerMap@HI@@UAE@XZ_SEH
0x6B0BE7: mov     eax, large fs:0
0x6B0BED: push    eax
0x6B0BEE: push    ecx
0x6B0BEF: push    esi
0x6B0BF0: mov     eax, ds:0B30AACh
0x6B0BF5: xor     eax, esp
0x6B0BF7: push    eax
0x6B0BF8: lea     eax, [esp+18h+var_C]
0x6B0BFC: mov     large fs:0, eax
0x6B0C02: mov     esi, ecx
0x6B0C04: mov     [esp+18h+var_10], esi
0x6B0C08: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HI@@6B@; const NiTPointerMap<int,uint>::`vftable'
0x6B0C0E: mov     [esp+18h+var_4], 0
0x6B0C16: call    NiTMap_Clear
0x6B0C1B: mov     ecx, esi
0x6B0C1D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6B0C25: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HI@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,uint>::`vftable'
0x6B0C2B: call    NiTMap_Clear
0x6B0C30: mov     eax, [esi+8]
0x6B0C33: push    eax
0x6B0C34: call    FormHeapFree
0x6B0C39: add     esp, 4
0x6B0C3C: mov     ecx, [esp+18h+var_C]
0x6B0C40: mov     large fs:0, ecx
0x6B0C47: pop     ecx
0x6B0C48: pop     esi
0x6B0C49: add     esp, 10h
0x6B0C4C: retn
