0x4B2EF0: push    0FFFFFFFFh
0x4B2EF2: push    offset ??1?$NiTPointerMap@IPAVTESTextureList@@@@UAE@XZ_SEH
0x4B2EF7: mov     eax, large fs:0
0x4B2EFD: push    eax
0x4B2EFE: push    ecx
0x4B2EFF: push    esi
0x4B2F00: mov     eax, ds:0B30AACh
0x4B2F05: xor     eax, esp
0x4B2F07: push    eax
0x4B2F08: lea     eax, [esp+18h+var_C]
0x4B2F0C: mov     large fs:0, eax
0x4B2F12: mov     esi, ecx
0x4B2F14: mov     [esp+18h+var_10], esi
0x4B2F18: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESTextureList@@@@6B@; const NiTPointerMap<uint,TESTextureList *>::`vftable'
0x4B2F1E: mov     [esp+18h+var_4], 0
0x4B2F26: call    NiTMap_Clear
0x4B2F2B: mov     ecx, esi
0x4B2F2D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4B2F35: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESTextureList@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESTextureList *>::`vftable'
0x4B2F3B: call    NiTMap_Clear
0x4B2F40: mov     eax, [esi+8]
0x4B2F43: push    eax
0x4B2F44: call    FormHeapFree
0x4B2F49: add     esp, 4
0x4B2F4C: mov     ecx, [esp+18h+var_C]
0x4B2F50: mov     large fs:0, ecx
0x4B2F57: pop     ecx
0x4B2F58: pop     esi
0x4B2F59: add     esp, 10h
0x4B2F5C: retn
