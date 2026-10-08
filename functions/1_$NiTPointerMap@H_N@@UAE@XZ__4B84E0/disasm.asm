0x4B84E0: push    0FFFFFFFFh
0x4B84E2: push    offset ??1?$NiTPointerMap@H_N@@UAE@XZ_SEH
0x4B84E7: mov     eax, large fs:0
0x4B84ED: push    eax
0x4B84EE: push    ecx
0x4B84EF: push    esi
0x4B84F0: mov     eax, ds:0B30AACh
0x4B84F5: xor     eax, esp
0x4B84F7: push    eax
0x4B84F8: lea     eax, [esp+18h+var_C]
0x4B84FC: mov     large fs:0, eax
0x4B8502: mov     esi, ecx
0x4B8504: mov     [esp+18h+var_10], esi
0x4B8508: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@H_N@@6B@; const NiTPointerMap<int,bool>::`vftable'
0x4B850E: mov     [esp+18h+var_4], 0
0x4B8516: call    NiTMap_Clear
0x4B851B: mov     ecx, esi
0x4B851D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4B8525: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@H_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,bool>::`vftable'
0x4B852B: call    NiTMap_Clear
0x4B8530: mov     eax, [esi+8]
0x4B8533: push    eax
0x4B8534: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B8539: add     esp, 4
0x4B853C: mov     ecx, [esp+18h+var_C]
0x4B8540: mov     large fs:0, ecx
0x4B8547: pop     ecx
0x4B8548: pop     esi
0x4B8549: add     esp, 10h
0x4B854C: retn
0x4B7980: push    esi
0x4B7981: mov     esi, ecx
0x4B7983: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@H_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,bool>::`vftable'
0x4B7989: call    NiTMap_Clear
0x4B798E: mov     eax, [esi+8]
0x4B7991: push    eax
0x4B7992: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B7997: add     esp, 4
0x4B799A: pop     esi
0x4B799B: retn
0x9B3C00: mov     ecx, [ebp-10h]
0x9B3C03: jmp     loc_4B7980
0x9B3C08: mov     edx, [esp+arg_4]
0x9B3C0C: lea     eax, [edx-8]
0x9B3C0F: mov     ecx, [edx-0Ch]
0x9B3C12: xor     ecx, eax
0x9B3C14: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B3C19: mov     eax, offset stru_ADF578
0x9B3C1E: jmp     ___CxxFrameHandler3
