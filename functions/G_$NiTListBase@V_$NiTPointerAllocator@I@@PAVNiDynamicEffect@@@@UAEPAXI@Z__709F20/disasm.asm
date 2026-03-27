0x709F20: test    [esp+arg_0], 1
0x709F25: push    esi
0x709F26: mov     esi, ecx
0x709F28: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVNiDynamicEffect@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiDynamicEffect *>::`vftable'
0x709F2E: jz      short loc_709F39
0x709F30: push    esi
0x709F31: call    FormHeapFree
0x709F36: add     esp, 4
0x709F39: mov     eax, esi
0x709F3B: pop     esi
0x709F3C: retn    4
