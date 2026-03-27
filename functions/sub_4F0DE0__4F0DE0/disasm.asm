0x4F0DE0: mov     eax, [esp+arg_0]
0x4F0DE4: push    esi
0x4F0DE5: mov     esi, ecx
0x4F0DE7: xor     ecx, ecx
0x4F0DE9: mov     [esi+4], eax
0x4F0DEC: mov     edx, 4
0x4F0DF1: mul     edx
0x4F0DF3: seto    cl
0x4F0DF6: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F0DFC: mov     dword ptr [esi+0Ch], 0
0x4F0E03: neg     ecx
0x4F0E05: or      ecx, eax
0x4F0E07: push    ecx; Size
0x4F0E08: call    FormHeapAlloc
0x4F0E0D: mov     ecx, [esi+4]
0x4F0E10: add     ecx, ecx
0x4F0E12: add     ecx, ecx
0x4F0E14: push    ecx
0x4F0E15: push    0
0x4F0E17: push    eax
0x4F0E18: mov     [esi+8], eax
0x4F0E1B: call    __memset
0x4F0E20: add     esp, 10h
0x4F0E23: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAV?$BSSimpleList@PAVTESObjectREFR@@@@@@6B@; const NiTPointerMap<uint,BSSimpleList<TESObjectREFR *> *>::`vftable'
0x4F0E29: mov     eax, esi
0x4F0E2B: pop     esi
0x4F0E2C: retn    4
