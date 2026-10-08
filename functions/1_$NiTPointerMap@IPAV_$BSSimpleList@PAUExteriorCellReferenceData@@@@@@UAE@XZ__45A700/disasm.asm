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
0x45A754: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45A759: add     esp, 4
0x45A75C: mov     ecx, [esp+18h+var_C]
0x45A760: mov     large fs:0, ecx
0x45A767: pop     ecx
0x45A768: pop     esi
0x45A769: add     esp, 10h
0x45A76C: retn
0x452AF0: push    esi
0x452AF1: mov     esi, ecx
0x452AF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAUExteriorCellReferenceData@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable'
0x452AF9: call    NiTMap_Clear
0x452AFE: mov     eax, [esi+8]
0x452B01: push    eax
0x452B02: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x452B07: add     esp, 4
0x452B0A: pop     esi
0x452B0B: retn
0x9AE1D0: mov     ecx, [ebp-10h]
0x9AE1D3: jmp     loc_452AF0
0x9AE1D8: mov     edx, [esp+arg_4]
0x9AE1DC: lea     eax, [edx-8]
0x9AE1DF: mov     ecx, [edx-0Ch]
0x9AE1E2: xor     ecx, eax
0x9AE1E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE1E9: mov     eax, offset stru_ADAA8C
0x9AE1EE: jmp     ___CxxFrameHandler3
