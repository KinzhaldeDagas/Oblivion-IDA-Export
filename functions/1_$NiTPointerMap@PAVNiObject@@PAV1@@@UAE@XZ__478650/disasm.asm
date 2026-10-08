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
0x4786A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4786A9: add     esp, 4
0x4786AC: mov     ecx, [esp+18h+var_C]
0x4786B0: mov     large fs:0, ecx
0x4786B7: pop     ecx
0x4786B8: pop     esi
0x4786B9: add     esp, 10h
0x4786BC: retn
0x477FD0: push    esi
0x477FD1: mov     esi, ecx
0x477FD3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@PAV2@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,NiObject *>::`vftable'
0x477FD9: call    NiTMap_Clear
0x477FDE: mov     eax, [esi+8]
0x477FE1: push    eax
0x477FE2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x477FE7: add     esp, 4
0x477FEA: pop     esi
0x477FEB: retn
0x9AEFD0: mov     ecx, [ebp-10h]
0x9AEFD3: jmp     loc_477FD0
0x9AEFD8: mov     edx, [esp+arg_4]
0x9AEFDC: lea     eax, [edx-8]
0x9AEFDF: mov     ecx, [edx-0Ch]
0x9AEFE2: xor     ecx, eax
0x9AEFE4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEFE9: mov     eax, offset stru_ADB67C
0x9AEFEE: jmp     ___CxxFrameHandler3
