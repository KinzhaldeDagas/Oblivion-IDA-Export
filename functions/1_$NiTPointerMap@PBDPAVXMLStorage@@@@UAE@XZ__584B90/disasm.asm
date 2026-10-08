0x584B90: push    0FFFFFFFFh
0x584B92: push    offset ??1?$NiTPointerMap@PBDPAVXMLStorage@@@@UAE@XZ_SEH
0x584B97: mov     eax, large fs:0
0x584B9D: push    eax
0x584B9E: push    ecx
0x584B9F: push    esi
0x584BA0: mov     eax, ds:0B30AACh
0x584BA5: xor     eax, esp
0x584BA7: push    eax
0x584BA8: lea     eax, [esp+18h+var_C]
0x584BAC: mov     large fs:0, eax
0x584BB2: mov     esi, ecx
0x584BB4: mov     [esp+18h+var_10], esi
0x584BB8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVXMLStorage@@@@6B@; const NiTPointerMap<char const *,XMLStorage *>::`vftable'
0x584BBE: mov     [esp+18h+var_4], 0
0x584BC6: call    NiTMap_Clear
0x584BCB: mov     ecx, esi
0x584BCD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x584BD5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVXMLStorage@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,XMLStorage *>::`vftable'
0x584BDB: call    NiTMap_Clear
0x584BE0: mov     eax, [esi+8]
0x584BE3: push    eax
0x584BE4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x584BE9: add     esp, 4
0x584BEC: mov     ecx, [esp+18h+var_C]
0x584BF0: mov     large fs:0, ecx
0x584BF7: pop     ecx
0x584BF8: pop     esi
0x584BF9: add     esp, 10h
0x584BFC: retn
0x584410: push    esi
0x584411: mov     esi, ecx
0x584413: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVXMLStorage@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,XMLStorage *>::`vftable'
0x584419: call    NiTMap_Clear
0x58441E: mov     eax, [esi+8]
0x584421: push    eax
0x584422: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x584427: add     esp, 4
0x58442A: pop     esi
0x58442B: retn
0x9BF150: mov     ecx, [ebp-10h]
0x9BF153: jmp     loc_584410
0x9BF158: mov     edx, [esp+arg_4]
0x9BF15C: lea     eax, [edx-8]
0x9BF15F: mov     ecx, [edx-0Ch]
0x9BF162: xor     ecx, eax
0x9BF164: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF169: mov     eax, offset stru_AE8774
0x9BF16E: jmp     ___CxxFrameHandler3
