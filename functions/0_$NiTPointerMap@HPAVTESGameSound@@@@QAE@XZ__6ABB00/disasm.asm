0x6ABB00: mov     eax, [esp+arg_0]
0x6ABB04: push    esi
0x6ABB05: mov     esi, ecx
0x6ABB07: xor     ecx, ecx
0x6ABB09: mov     [esi+4], eax
0x6ABB0C: mov     edx, 4
0x6ABB11: mul     edx
0x6ABB13: seto    cl
0x6ABB16: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESGameSound@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESGameSound *>::`vftable'
0x6ABB1C: mov     dword ptr [esi+0Ch], 0
0x6ABB23: neg     ecx
0x6ABB25: or      ecx, eax
0x6ABB27: push    ecx; Size
0x6ABB28: call    FormHeapAlloc
0x6ABB2D: mov     ecx, [esi+4]
0x6ABB30: add     ecx, ecx
0x6ABB32: add     ecx, ecx
0x6ABB34: push    ecx
0x6ABB35: push    0
0x6ABB37: push    eax
0x6ABB38: mov     [esi+8], eax
0x6ABB3B: call    __memset
0x6ABB40: add     esp, 10h
0x6ABB43: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESGameSound@@@@6B@; const NiTPointerMap<int,TESGameSound *>::`vftable'
0x6ABB49: mov     eax, esi
0x6ABB4B: pop     esi
0x6ABB4C: retn    4
