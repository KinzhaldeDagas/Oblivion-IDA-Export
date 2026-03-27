0x446D50: push    esi
0x446D51: mov     esi, ecx
0x446D53: mov     eax, [esi+4]
0x446D56: push    eax
0x446D57: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAVTESObjectCELL@@@@6B@; const NiTLargeArray<TESObjectCELL *>::`vftable'
0x446D5D: call    FormHeapFree
0x446D62: add     esp, 4
0x446D65: test    [esp+4+arg_0], 1
0x446D6A: jz      short loc_446D75
0x446D6C: push    esi
0x446D6D: call    FormHeapFree
0x446D72: add     esp, 4
0x446D75: mov     eax, esi
0x446D77: pop     esi
0x446D78: retn    4
