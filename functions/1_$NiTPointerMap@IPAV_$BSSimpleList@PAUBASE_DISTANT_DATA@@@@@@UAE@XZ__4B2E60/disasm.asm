0x4B2E60: push    0FFFFFFFFh
0x4B2E62: push    offset ??1?$NiTPointerMap@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@UAE@XZ_SEH
0x4B2E67: mov     eax, large fs:0
0x4B2E6D: push    eax
0x4B2E6E: push    ecx
0x4B2E6F: push    esi
0x4B2E70: mov     eax, ds:0B30AACh
0x4B2E75: xor     eax, esp
0x4B2E77: push    eax
0x4B2E78: lea     eax, [esp+18h+var_C]
0x4B2E7C: mov     large fs:0, eax
0x4B2E82: mov     esi, ecx
0x4B2E84: mov     [esp+18h+var_10], esi
0x4B2E88: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'
0x4B2E8E: mov     [esp+18h+var_4], 0
0x4B2E96: call    NiTMap_Clear
0x4B2E9B: mov     ecx, esi
0x4B2E9D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4B2EA5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUBASE_DISTANT_DATA@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<BASE_DISTANT_DATA *> *>::`vftable'
0x4B2EAB: call    NiTMap_Clear
0x4B2EB0: mov     eax, [esi+8]
0x4B2EB3: push    eax
0x4B2EB4: call    FormHeapFree
0x4B2EB9: add     esp, 4
0x4B2EBC: mov     ecx, [esp+18h+var_C]
0x4B2EC0: mov     large fs:0, ecx
0x4B2EC7: pop     ecx
0x4B2EC8: pop     esi
0x4B2EC9: add     esp, 10h
0x4B2ECC: retn
