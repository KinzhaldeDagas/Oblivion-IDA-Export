0x6C4FE0: push    0FFFFFFFFh
0x6C4FE2: push    offset ??1?$NiTPointerMap@PBDPAVNiControllerSequence@@@@UAE@XZ_SEH
0x6C4FE7: mov     eax, large fs:0
0x6C4FED: push    eax
0x6C4FEE: push    ecx
0x6C4FEF: push    esi
0x6C4FF0: mov     eax, ds:0B30AACh
0x6C4FF5: xor     eax, esp
0x6C4FF7: push    eax
0x6C4FF8: lea     eax, [esp+18h+var_C]
0x6C4FFC: mov     large fs:0, eax
0x6C5002: mov     esi, ecx
0x6C5004: mov     [esp+18h+var_10], esi
0x6C5008: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiControllerSequence@@@@6B@; const NiTPointerMap<char const *,NiControllerSequence *>::`vftable'
0x6C500E: mov     [esp+18h+var_4], 0
0x6C5016: call    NiTMap_Clear
0x6C501B: mov     ecx, esi
0x6C501D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6C5025: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiControllerSequence@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiControllerSequence *>::`vftable'
0x6C502B: call    NiTMap_Clear
0x6C5030: mov     eax, [esi+8]
0x6C5033: push    eax
0x6C5034: call    FormHeapFree
0x6C5039: add     esp, 4
0x6C503C: mov     ecx, [esp+18h+var_C]
0x6C5040: mov     large fs:0, ecx
0x6C5047: pop     ecx
0x6C5048: pop     esi
0x6C5049: add     esp, 10h
0x6C504C: retn
