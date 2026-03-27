0x450760: push    0FFFFFFFFh
0x450762: push    offset ??1?$NiTPointerMap@IPAVTESFile@@@@UAE@XZ_SEH
0x450767: mov     eax, large fs:0
0x45076D: push    eax
0x45076E: push    ecx
0x45076F: push    esi
0x450770: mov     eax, ds:0B30AACh
0x450775: xor     eax, esp
0x450777: push    eax
0x450778: lea     eax, [esp+18h+var_C]
0x45077C: mov     large fs:0, eax
0x450782: mov     esi, ecx
0x450784: mov     [esp+18h+var_10], esi
0x450788: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESFile@@@@6B@; const NiTPointerMap<uint,TESFile *>::`vftable'
0x45078E: mov     [esp+18h+var_4], 0
0x450796: call    NiTMap_Clear
0x45079B: mov     ecx, esi
0x45079D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4507A5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESFile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESFile *>::`vftable'
0x4507AB: call    NiTMap_Clear
0x4507B0: mov     eax, [esi+8]
0x4507B3: push    eax
0x4507B4: call    FormHeapFree
0x4507B9: add     esp, 4
0x4507BC: mov     ecx, [esp+18h+var_C]
0x4507C0: mov     large fs:0, ecx
0x4507C7: pop     ecx
0x4507C8: pop     esi
0x4507C9: add     esp, 10h
0x4507CC: retn
