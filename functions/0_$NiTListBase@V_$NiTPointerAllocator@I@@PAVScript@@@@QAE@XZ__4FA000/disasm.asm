0x4FA000: test    [esp+arg_0], 1
0x4FA005: push    esi
0x4FA006: mov     esi, ecx
0x4FA008: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVScript@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,Script *>::`vftable'
0x4FA00E: jz      short loc_4FA019
0x4FA010: push    esi
0x4FA011: call    FormHeapFree
0x4FA016: add     esp, 4
0x4FA019: mov     eax, esi
0x4FA01B: pop     esi
0x4FA01C: retn    4
