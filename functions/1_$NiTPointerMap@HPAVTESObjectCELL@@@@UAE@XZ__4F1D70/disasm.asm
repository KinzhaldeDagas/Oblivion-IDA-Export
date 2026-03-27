0x4F1D70: push    0FFFFFFFFh
0x4F1D72: push    offset ??1?$NiTPointerMap@HPAVTESObjectCELL@@@@UAE@XZ_SEH
0x4F1D77: mov     eax, large fs:0
0x4F1D7D: push    eax
0x4F1D7E: push    ecx
0x4F1D7F: push    esi
0x4F1D80: mov     eax, ds:0B30AACh
0x4F1D85: xor     eax, esp
0x4F1D87: push    eax
0x4F1D88: lea     eax, [esp+18h+var_C]
0x4F1D8C: mov     large fs:0, eax
0x4F1D92: mov     esi, ecx
0x4F1D94: mov     [esp+18h+var_10], esi
0x4F1D98: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESObjectCELL@@@@6B@; const NiTPointerMap<int,TESObjectCELL *>::`vftable'
0x4F1D9E: mov     [esp+18h+var_4], 0
0x4F1DA6: call    NiTMap_Clear
0x4F1DAB: mov     ecx, esi
0x4F1DAD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4F1DB5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESObjectCELL@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESObjectCELL *>::`vftable'
0x4F1DBB: call    NiTMap_Clear
0x4F1DC0: mov     eax, [esi+8]
0x4F1DC3: push    eax
0x4F1DC4: call    FormHeapFree
0x4F1DC9: add     esp, 4
0x4F1DCC: mov     ecx, [esp+18h+var_C]
0x4F1DD0: mov     large fs:0, ecx
0x4F1DD7: pop     ecx
0x4F1DD8: pop     esi
0x4F1DD9: add     esp, 10h
0x4F1DDC: retn
