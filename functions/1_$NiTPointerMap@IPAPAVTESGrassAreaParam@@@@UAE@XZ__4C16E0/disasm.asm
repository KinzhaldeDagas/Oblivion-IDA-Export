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
0x4C1734: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4C1739: add     esp, 4
0x4C173C: mov     ecx, [esp+18h+var_C]
0x4C1740: mov     large fs:0, ecx
0x4C1747: pop     ecx
0x4C1748: pop     esi
0x4C1749: add     esp, 10h
0x4C174C: retn
0x4BFCC0: push    esi
0x4BFCC1: mov     esi, ecx
0x4BFCC3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAPAVTESGrassAreaParam@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGrassAreaParam * *>::`vftable'
0x4BFCC9: call    NiTMap_Clear
0x4BFCCE: mov     eax, [esi+8]
0x4BFCD1: push    eax
0x4BFCD2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BFCD7: add     esp, 4
0x4BFCDA: pop     esi
0x4BFCDB: retn
0x9B46D0: mov     ecx, [ebp-10h]
0x9B46D3: jmp     loc_4BFCC0
0x9B46D8: mov     edx, [esp+arg_4]
0x9B46DC: lea     eax, [edx-8]
0x9B46DF: mov     ecx, [edx-0Ch]
0x9B46E2: xor     ecx, eax
0x9B46E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B46E9: mov     eax, offset stru_ADFD38
0x9B46EE: jmp     ___CxxFrameHandler3
