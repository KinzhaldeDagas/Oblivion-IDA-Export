0x4C16E0: push    0FFFFFFFFh
0x4C16E2: push    offset ??1?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@UAE@XZ_SEH
0x4C16E7: mov     eax, large fs:0
0x4C16ED: push    eax
0x4C16EE: push    ecx
0x4C16EF: push    esi
0x4C16F0: mov     eax, ds:0B30AACh
0x4C16F5: xor     eax, esp
0x4C16F7: push    eax
0x4C16F8: lea     eax, [esp+18h+var_C]
0x4C16FC: mov     large fs:0, eax
0x4C1702: mov     esi, ecx
0x4C1704: mov     [esp+18h+var_10], esi
0x4C1708: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@6B@; const NiTPointerMap<uint,TESGrassAreaParam * *>::`vftable'
0x4C170E: mov     [esp+18h+var_4], 0
0x4C1716: call    NiTMap_Clear
0x4C171B: mov     ecx, esi
0x4C171D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4C1725: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAPAVTESGrassAreaParam@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGrassAreaParam * *>::`vftable'
0x4C172B: call    NiTMap_Clear
0x4C1730: mov     eax, [esi+8]
0x4C1733: push    eax
0x4C1734: call    FormHeapFree
0x4C1739: add     esp, 4
0x4C173C: mov     ecx, [esp+18h+var_C]
0x4C1740: mov     large fs:0, ecx
0x4C1747: pop     ecx
0x4C1748: pop     esi
0x4C1749: add     esp, 10h
0x4C174C: retn
