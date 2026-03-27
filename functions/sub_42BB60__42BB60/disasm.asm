0x42BB60: push    esi
0x42BB61: mov     esi, ecx
0x42BB63: mov     eax, [esi+4]
0x42BB66: push    eax
0x42BB67: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVBSHash@@@@6B@; const NiTArray<BSHash *>::`vftable'
0x42BB6D: call    FormHeapFree
0x42BB72: add     esp, 4
0x42BB75: test    [esp+4+arg_0], 1
0x42BB7A: jz      short loc_42BB85
0x42BB7C: push    esi
0x42BB7D: call    FormHeapFree
0x42BB82: add     esp, 4
0x42BB85: mov     eax, esi
0x42BB87: pop     esi
0x42BB88: retn    4
