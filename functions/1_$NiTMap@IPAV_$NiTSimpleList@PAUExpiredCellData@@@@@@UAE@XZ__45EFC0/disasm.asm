0x45EFC0: push    0FFFFFFFFh
0x45EFC2: push    offset ??1?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@UAE@XZ_SEH
0x45EFC7: mov     eax, large fs:0
0x45EFCD: push    eax
0x45EFCE: push    ecx
0x45EFCF: push    esi
0x45EFD0: mov     eax, ds:0B30AACh
0x45EFD5: xor     eax, esp
0x45EFD7: push    eax
0x45EFD8: lea     eax, [esp+18h+var_C]
0x45EFDC: mov     large fs:0, eax
0x45EFE2: mov     esi, ecx
0x45EFE4: mov     [esp+18h+var_10], esi
0x45EFE8: mov     dword ptr [esi], offset ??_7?$NiTMap@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMap<uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x45EFEE: mov     [esp+18h+var_4], 0
0x45EFF6: call    NiTMap_Clear
0x45EFFB: mov     ecx, esi
0x45EFFD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45F005: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@PAV?$NiTSimpleList@PAUExpiredCellData@@@@@@IPAV?$NiTSimpleList@PAUExpiredCellData@@@@@@6B@; const NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,uint,NiTSimpleList<ExpiredCellData *> *>::`vftable'
0x45F00B: call    NiTMap_Clear
0x45F010: mov     eax, [esi+8]
0x45F013: push    eax
0x45F014: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45F019: add     esp, 4
0x45F01C: mov     ecx, [esp+18h+var_C]
0x45F020: mov     large fs:0, ecx
0x45F027: pop     ecx
0x45F028: pop     esi
0x45F029: add     esp, 10h
0x45F02C: retn
0x9AE4B0: mov     ecx, [ebp-10h]
0x9AE4B3: jmp     sub_45A5A0
0x9AE4B8: mov     edx, [esp+arg_4]
0x9AE4BC: lea     eax, [edx-8]
0x9AE4BF: mov     ecx, [edx-0Ch]
0x9AE4C2: xor     ecx, eax
0x9AE4C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE4C9: mov     eax, offset stru_ADACEC
0x9AE4CE: jmp     ___CxxFrameHandler3
