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
0x45A7C4: call    FormHeapFree
0x45A7C9: add     esp, 4
0x45A7CC: mov     ecx, [esp+18h+var_C]
0x45A7D0: mov     large fs:0, ecx
0x45A7D7: pop     ecx
0x45A7D8: pop     esi
0x45A7D9: add     esp, 10h
0x45A7DC: retn
