0x4E5FC0: push    0FFFFFFFFh
0x4E5FC2: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@UAE@XZ_SEH
0x4E5FC7: mov     eax, large fs:0
0x4E5FCD: push    eax
0x4E5FCE: push    ecx
0x4E5FCF: push    esi
0x4E5FD0: mov     eax, ds:0B30AACh
0x4E5FD5: xor     eax, esp
0x4E5FD7: push    eax
0x4E5FD8: lea     eax, [esp+18h+var_C]
0x4E5FDC: mov     large fs:0, eax
0x4E5FE2: mov     esi, ecx
0x4E5FE4: mov     [esp+18h+var_10], esi
0x4E5FE8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E5FEE: mov     [esp+18h+var_4], 0
0x4E5FF6: call    NiTMap_Clear
0x4E5FFB: mov     ecx, esi
0x4E5FFD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4E6005: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESPathGridPoint@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESPathGridPoint *> *>::`vftable'
0x4E600B: call    NiTMap_Clear
0x4E6010: mov     eax, [esi+8]
0x4E6013: push    eax
0x4E6014: call    FormHeapFree
0x4E6019: add     esp, 4
0x4E601C: mov     ecx, [esp+18h+var_C]
0x4E6020: mov     large fs:0, ecx
0x4E6027: pop     ecx
0x4E6028: pop     esi
0x4E6029: add     esp, 10h
0x4E602C: retn
