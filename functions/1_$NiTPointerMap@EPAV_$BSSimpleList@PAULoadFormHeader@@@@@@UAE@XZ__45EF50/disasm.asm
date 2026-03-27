0x45EF50: push    0FFFFFFFFh
0x45EF52: push    offset ??1?$NiTPointerMap@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@UAE@XZ_SEH
0x45EF57: mov     eax, large fs:0
0x45EF5D: push    eax
0x45EF5E: push    ecx
0x45EF5F: push    esi
0x45EF60: mov     eax, ds:0B30AACh
0x45EF65: xor     eax, esp
0x45EF67: push    eax
0x45EF68: lea     eax, [esp+18h+var_C]
0x45EF6C: mov     large fs:0, eax
0x45EF72: mov     esi, ecx
0x45EF74: mov     [esp+18h+var_10], esi
0x45EF78: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45EF7E: mov     [esp+18h+var_4], 0
0x45EF86: call    NiTMap_Clear
0x45EF8B: mov     ecx, esi
0x45EF8D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45EF95: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45EF9B: call    NiTMap_Clear
0x45EFA0: mov     eax, [esi+8]
0x45EFA3: push    eax
0x45EFA4: call    FormHeapFree
0x45EFA9: add     esp, 4
0x45EFAC: mov     ecx, [esp+18h+var_C]
0x45EFB0: mov     large fs:0, ecx
0x45EFB7: pop     ecx
0x45EFB8: pop     esi
0x45EFB9: add     esp, 10h
0x45EFBC: retn
