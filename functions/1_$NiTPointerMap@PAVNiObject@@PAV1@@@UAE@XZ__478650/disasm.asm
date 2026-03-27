0x478650: push    0FFFFFFFFh
0x478652: push    offset ??1?$NiTPointerMap@PAVNiObject@@PAV1@@@UAE@XZ_SEH
0x478657: mov     eax, large fs:0
0x47865D: push    eax
0x47865E: push    ecx
0x47865F: push    esi
0x478660: mov     eax, ds:0B30AACh
0x478665: xor     eax, esp
0x478667: push    eax
0x478668: lea     eax, [esp+18h+var_C]
0x47866C: mov     large fs:0, eax
0x478672: mov     esi, ecx
0x478674: mov     [esp+18h+var_10], esi
0x478678: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiObject@@PAV1@@@6B@; const NiTPointerMap<NiObject *,NiObject *>::`vftable'
0x47867E: mov     [esp+18h+var_4], 0
0x478686: call    NiTMap_Clear
0x47868B: mov     ecx, esi
0x47868D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x478695: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@PAV2@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,NiObject *>::`vftable'
0x47869B: call    NiTMap_Clear
0x4786A0: mov     eax, [esi+8]
0x4786A3: push    eax
0x4786A4: call    FormHeapFree
0x4786A9: add     esp, 4
0x4786AC: mov     ecx, [esp+18h+var_C]
0x4786B0: mov     large fs:0, ecx
0x4786B7: pop     ecx
0x4786B8: pop     esi
0x4786B9: add     esp, 10h
0x4786BC: retn
