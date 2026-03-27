0x45A700: push    0FFFFFFFFh
0x45A702: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@UAE@XZ_SEH
0x45A707: mov     eax, large fs:0
0x45A70D: push    eax
0x45A70E: push    ecx
0x45A70F: push    esi
0x45A710: mov     eax, ds:0B30AACh
0x45A715: xor     eax, esp
0x45A717: push    eax
0x45A718: lea     eax, [esp+18h+var_C]
0x45A71C: mov     large fs:0, eax
0x45A722: mov     esi, ecx
0x45A724: mov     [esp+18h+var_10], esi
0x45A728: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'
0x45A72E: mov     [esp+18h+var_4], 0
0x45A736: call    NiTMap_Clear
0x45A73B: mov     ecx, esi
0x45A73D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45A745: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'
0x45A74B: call    NiTMap_Clear
0x45A750: mov     eax, [esi+8]
0x45A753: push    eax
0x45A754: call    FormHeapFree
0x45A759: add     esp, 4
0x45A75C: mov     ecx, [esp+18h+var_C]
0x45A760: mov     large fs:0, ecx
0x45A767: pop     ecx
0x45A768: pop     esi
0x45A769: add     esp, 10h
0x45A76C: retn
