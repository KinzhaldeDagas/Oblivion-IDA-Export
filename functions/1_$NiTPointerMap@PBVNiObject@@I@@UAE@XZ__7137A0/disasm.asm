0x7137A0: push    0FFFFFFFFh
0x7137A2: push    offset ??1?$NiTPointerMap@PBVNiObject@@I@@UAE@XZ_SEH
0x7137A7: mov     eax, large fs:0
0x7137AD: push    eax
0x7137AE: push    ecx
0x7137AF: push    esi
0x7137B0: mov     eax, ds:0B30AACh
0x7137B5: xor     eax, esp
0x7137B7: push    eax
0x7137B8: lea     eax, [esp+18h+var_C]
0x7137BC: mov     large fs:0, eax
0x7137C2: mov     esi, ecx
0x7137C4: mov     [esp+18h+var_10], esi
0x7137C8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBVNiObject@@I@@6B@; const NiTPointerMap<NiObject const *,uint>::`vftable'
0x7137CE: mov     [esp+18h+var_4], 0
0x7137D6: call    NiTMap_Clear
0x7137DB: mov     ecx, esi
0x7137DD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x7137E5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVNiObject@@I@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject const *,uint>::`vftable'
0x7137EB: call    NiTMap_Clear
0x7137F0: mov     eax, [esi+8]
0x7137F3: push    eax
0x7137F4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7137F9: add     esp, 4
0x7137FC: mov     ecx, [esp+18h+var_C]
0x713800: mov     large fs:0, ecx
0x713807: pop     ecx
0x713808: pop     esi
0x713809: add     esp, 10h
0x71380C: retn
0x7127A0: push    esi
0x7127A1: mov     esi, ecx
0x7127A3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVNiObject@@I@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject const *,uint>::`vftable'
0x7127A9: call    NiTMap_Clear
0x7127AE: mov     eax, [esi+8]
0x7127B1: push    eax
0x7127B2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7127B7: add     esp, 4
0x7127BA: pop     esi
0x7127BB: retn
0x9C9C30: mov     ecx, [ebp-10h]
0x9C9C33: jmp     loc_7127A0
0x9C9C38: mov     edx, [esp+arg_4]
0x9C9C3C: lea     eax, [edx-8]
0x9C9C3F: mov     ecx, [edx-0Ch]
0x9C9C42: xor     ecx, eax
0x9C9C44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C9C49: mov     eax, offset stru_AF2440
0x9C9C4E: jmp     ___CxxFrameHandler3
