0x724F40: push    esi
0x724F41: mov     esi, ecx
0x724F43: mov     eax, [esi+24h]
0x724F46: push    eax
0x724F47: mov     dword ptr [esi], offset ??_7NiRangeLODData@@6B@; const NiRangeLODData::`vftable'
0x724F4D: call    FormHeapFree
0x724F52: add     esp, 4
0x724F55: mov     ecx, esi
0x724F57: call    sub_738790
0x724F5C: test    [esp+4+arg_0], 1
0x724F61: jz      short loc_724F6C
0x724F63: push    esi
0x724F64: call    FormHeapFree
0x724F69: add     esp, 4
0x724F6C: mov     eax, esi
0x724F6E: pop     esi
0x724F6F: retn    4
