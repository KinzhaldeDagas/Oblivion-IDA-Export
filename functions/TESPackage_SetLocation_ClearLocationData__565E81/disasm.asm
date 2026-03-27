0x565E81: mov     edi, [esi+24h]
0x565E84: test    edi, edi
0x565E86: jz      short TESPackage_SetLocation___Done
0x565E88: mov     ecx, edi
0x565E8A: call    TESPackage_LocationData_destr
0x565E8F: push    edi
0x565E90: call    FormHeapFree
0x565E95: add     esp, 4
