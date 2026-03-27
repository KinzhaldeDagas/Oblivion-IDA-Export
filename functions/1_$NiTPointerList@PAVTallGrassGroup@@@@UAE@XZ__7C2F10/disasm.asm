0x7C2F10: push    0FFFFFFFFh
0x7C2F12: push    offset ??1?$NiTPointerList@PAVTallGrassGroup@@@@UAE@XZ_SEH
0x7C2F17: mov     eax, large fs:0
0x7C2F1D: push    eax
0x7C2F1E: push    ecx
0x7C2F1F: push    esi
0x7C2F20: mov     eax, ds:0B30AACh
0x7C2F25: xor     eax, esp
0x7C2F27: push    eax
0x7C2F28: lea     eax, [esp+18h+var_C]
0x7C2F2C: mov     large fs:0, eax
0x7C2F32: mov     esi, ecx
0x7C2F34: mov     [esp+18h+var_10], esi
0x7C2F38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVTallGrassGroup@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,TallGrassGroup *>::`vftable'
0x7C2F3E: mov     [esp+18h+var_4], 0
0x7C2F46: call    NiTPointerList__FreeAllNodes
0x7C2F4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVTallGrassGroup@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,TallGrassGroup *>::`vftable'
0x7C2F51: mov     ecx, [esp+18h+var_C]
0x7C2F55: mov     large fs:0, ecx
0x7C2F5C: pop     ecx
0x7C2F5D: pop     esi
0x7C2F5E: add     esp, 10h
0x7C2F61: retn
