0x446D20: push    esi
0x446D21: mov     esi, ecx
0x446D23: mov     eax, [esi+4]
0x446D26: push    eax
0x446D27: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAVTESForm@@@@6B@; const NiTLargeArray<TESForm *>::`vftable'
0x446D2D: call    FormHeapFree
0x446D32: add     esp, 4
0x446D35: test    [esp+4+arg_0], 1
0x446D3A: jz      short loc_446D45
0x446D3C: push    esi
0x446D3D: call    FormHeapFree
0x446D42: add     esp, 4
0x446D45: mov     eax, esi
0x446D47: pop     esi
0x446D48: retn    4
