0x4CA1D0: test    [esp+arg_0], 1
0x4CA1D5: push    esi
0x4CA1D6: mov     esi, ecx
0x4CA1D8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CA1DE: jz      short loc_4CA1E9
0x4CA1E0: push    esi
0x4CA1E1: call    FormHeapFree
0x4CA1E6: add     esp, 4
0x4CA1E9: mov     eax, esi
0x4CA1EB: pop     esi
0x4CA1EC: retn    4
