0x4BCC00: push    esi
0x4BCC01: mov     esi, ecx
0x4BCC03: mov     eax, [esi+4]
0x4BCC06: push    eax
0x4BCC07: mov     dword ptr [esi], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x4BCC0D: call    FormHeapFree
0x4BCC12: add     esp, 4
0x4BCC15: test    [esp+4+arg_0], 1
0x4BCC1A: jz      short loc_4BCC25
0x4BCC1C: push    esi
0x4BCC1D: call    FormHeapFree
0x4BCC22: add     esp, 4
0x4BCC25: mov     eax, esi
0x4BCC27: pop     esi
0x4BCC28: retn    4
