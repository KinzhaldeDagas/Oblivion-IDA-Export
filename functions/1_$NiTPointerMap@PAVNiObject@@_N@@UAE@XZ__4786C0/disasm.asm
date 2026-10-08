0x4786C0: push    0FFFFFFFFh
0x4786C2: push    offset ??1?$NiTPointerMap@PAVNiObject@@_N@@UAE@XZ_SEH
0x4786C7: mov     eax, large fs:0
0x4786CD: push    eax
0x4786CE: push    ecx
0x4786CF: push    esi
0x4786D0: mov     eax, ds:0B30AACh
0x4786D5: xor     eax, esp
0x4786D7: push    eax
0x4786D8: lea     eax, [esp+18h+var_C]
0x4786DC: mov     large fs:0, eax
0x4786E2: mov     esi, ecx
0x4786E4: mov     [esp+18h+var_10], esi
0x4786E8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiObject@@_N@@6B@; const NiTPointerMap<NiObject *,bool>::`vftable'
0x4786EE: mov     [esp+18h+var_4], 0
0x4786F6: call    NiTMap_Clear
0x4786FB: mov     ecx, esi
0x4786FD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x478705: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,bool>::`vftable'
0x47870B: call    NiTMap_Clear
0x478710: mov     eax, [esi+8]
0x478713: push    eax
0x478714: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x478719: add     esp, 4
0x47871C: mov     ecx, [esp+18h+var_C]
0x478720: mov     large fs:0, ecx
0x478727: pop     ecx
0x478728: pop     esi
0x478729: add     esp, 10h
0x47872C: retn
0x477FF0: push    esi
0x477FF1: mov     esi, ecx
0x477FF3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,bool>::`vftable'
0x477FF9: call    NiTMap_Clear
0x477FFE: mov     eax, [esi+8]
0x478001: push    eax
0x478002: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x478007: add     esp, 4
0x47800A: pop     esi
0x47800B: retn
0x9AF000: mov     ecx, [ebp-10h]
0x9AF003: jmp     loc_477FF0
0x9AF008: mov     edx, [esp+arg_4]
0x9AF00C: lea     eax, [edx-8]
0x9AF00F: mov     ecx, [edx-0Ch]
0x9AF012: xor     ecx, eax
0x9AF014: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF019: mov     eax, offset stru_ADB6A8
0x9AF01E: jmp     ___CxxFrameHandler3
