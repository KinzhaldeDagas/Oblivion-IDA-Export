0x4F1D20: mov     eax, [esp+arg_0]
0x4F1D24: push    esi
0x4F1D25: mov     esi, ecx
0x4F1D27: xor     ecx, ecx
0x4F1D29: mov     [esi+4], eax
0x4F1D2C: mov     edx, 4
0x4F1D31: mul     edx
0x4F1D33: seto    cl
0x4F1D36: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESObjectCELL@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESObjectCELL *>::`vftable'
0x4F1D3C: mov     dword ptr [esi+0Ch], 0
0x4F1D43: neg     ecx
0x4F1D45: or      ecx, eax
0x4F1D47: push    ecx; Size
0x4F1D48: call    FormHeapAlloc
0x4F1D4D: mov     ecx, [esi+4]
0x4F1D50: add     ecx, ecx
0x4F1D52: add     ecx, ecx
0x4F1D54: push    ecx
0x4F1D55: push    0
0x4F1D57: push    eax
0x4F1D58: mov     [esi+8], eax
0x4F1D5B: call    __memset
0x4F1D60: add     esp, 10h
0x4F1D63: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESObjectCELL@@@@6B@; const NiTPointerMap<int,TESObjectCELL *>::`vftable'
0x4F1D69: mov     eax, esi
0x4F1D6B: pop     esi
0x4F1D6C: retn    4
