0x6B0BE0: push    0FFFFFFFFh
0x6B0BE2: push    offset ??1?$NiTPointerMap@HI@@UAE@XZ_SEH
0x6B0BE7: mov     eax, large fs:0
0x6B0BED: push    eax
0x6B0BEE: push    ecx
0x6B0BEF: push    esi
0x6B0BF0: mov     eax, ds:0B30AACh
0x6B0BF5: xor     eax, esp
0x6B0BF7: push    eax
0x6B0BF8: lea     eax, [esp+18h+var_C]
0x6B0BFC: mov     large fs:0, eax
0x6B0C02: mov     esi, ecx
0x6B0C04: mov     [esp+18h+var_10], esi
0x6B0C08: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HI@@6B@; const NiTPointerMap<int,uint>::`vftable'
0x6B0C0E: mov     [esp+18h+var_4], 0
0x6B0C16: call    NiTMap_Clear
0x6B0C1B: mov     ecx, esi
0x6B0C1D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6B0C25: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HI@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,uint>::`vftable'
0x6B0C2B: call    NiTMap_Clear
0x6B0C30: mov     eax, [esi+8]
0x6B0C33: push    eax
0x6B0C34: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6B0C39: add     esp, 4
0x6B0C3C: mov     ecx, [esp+18h+var_C]
0x6B0C40: mov     large fs:0, ecx
0x6B0C47: pop     ecx
0x6B0C48: pop     esi
0x6B0C49: add     esp, 10h
0x6B0C4C: retn
0x6AF800: push    esi
0x6AF801: mov     esi, ecx
0x6AF803: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HI@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,uint>::`vftable'
0x6AF809: call    NiTMap_Clear
0x6AF80E: mov     eax, [esi+8]
0x6AF811: push    eax
0x6AF812: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AF817: add     esp, 4
0x6AF81A: pop     esi
0x6AF81B: retn
0x9C68C0: mov     ecx, [ebp-10h]
0x9C68C3: jmp     loc_6AF800
0x9C68C8: mov     edx, [esp+arg_4]
0x9C68CC: lea     eax, [edx-8]
0x9C68CF: mov     ecx, [edx-0Ch]
0x9C68D2: xor     ecx, eax
0x9C68D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C68D9: mov     eax, offset stru_AEEDC8
0x9C68DE: jmp     ___CxxFrameHandler3
