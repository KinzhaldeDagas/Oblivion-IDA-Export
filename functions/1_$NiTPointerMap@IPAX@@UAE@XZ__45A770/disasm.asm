0x45A770: push    0FFFFFFFFh
0x45A772: push    offset ??1?$NiTPointerMap@IPAX@@UAE@XZ_SEH
0x45A777: mov     eax, large fs:0
0x45A77D: push    eax
0x45A77E: push    ecx
0x45A77F: push    esi
0x45A780: mov     eax, ds:0B30AACh
0x45A785: xor     eax, esp
0x45A787: push    eax
0x45A788: lea     eax, [esp+18h+var_C]
0x45A78C: mov     large fs:0, eax
0x45A792: mov     esi, ecx
0x45A794: mov     [esp+18h+var_10], esi
0x45A798: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAX@@6B@; const NiTPointerMap<uint,void *>::`vftable'
0x45A79E: mov     [esp+18h+var_4], 0
0x45A7A6: call    NiTMap_Clear
0x45A7AB: mov     ecx, esi
0x45A7AD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45A7B5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAX@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,void *>::`vftable'
0x45A7BB: call    NiTMap_Clear
0x45A7C0: mov     eax, [esi+8]
0x45A7C3: push    eax
0x45A7C4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x45A7C9: add     esp, 4
0x45A7CC: mov     ecx, [esp+18h+var_C]
0x45A7D0: mov     large fs:0, ecx
0x45A7D7: pop     ecx
0x45A7D8: pop     esi
0x45A7D9: add     esp, 10h
0x45A7DC: retn
0x452B10: push    esi
0x452B11: mov     esi, ecx
0x452B13: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAX@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,void *>::`vftable'
0x452B19: call    NiTMap_Clear
0x452B1E: mov     eax, [esi+8]
0x452B21: push    eax
0x452B22: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x452B27: add     esp, 4
0x452B2A: pop     esi
0x452B2B: retn
0x9AE200: mov     ecx, [ebp-10h]
0x9AE203: jmp     loc_452B10
0x9AE208: mov     edx, [esp+arg_4]
0x9AE20C: lea     eax, [edx-8]
0x9AE20F: mov     ecx, [edx-0Ch]
0x9AE212: xor     ecx, eax
0x9AE214: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE219: mov     eax, offset stru_ADAAB8
0x9AE21E: jmp     ___CxxFrameHandler3
