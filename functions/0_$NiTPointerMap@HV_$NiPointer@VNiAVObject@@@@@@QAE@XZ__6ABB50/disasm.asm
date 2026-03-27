0x6ABB50: mov     eax, [esp+arg_0]
0x6ABB54: push    esi
0x6ABB55: mov     esi, ecx
0x6ABB57: xor     ecx, ecx
0x6ABB59: mov     [esi+4], eax
0x6ABB5C: mov     edx, 4
0x6ABB61: mul     edx
0x6ABB63: seto    cl
0x6ABB66: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,NiPointer<NiAVObject>>::`vftable'
0x6ABB6C: mov     dword ptr [esi+0Ch], 0
0x6ABB73: neg     ecx
0x6ABB75: or      ecx, eax
0x6ABB77: push    ecx; Size
0x6ABB78: call    FormHeapAlloc
0x6ABB7D: mov     ecx, [esi+4]
0x6ABB80: add     ecx, ecx
0x6ABB82: add     ecx, ecx
0x6ABB84: push    ecx
0x6ABB85: push    0
0x6ABB87: push    eax
0x6ABB88: mov     [esi+8], eax
0x6ABB8B: call    __memset
0x6ABB90: add     esp, 10h
0x6ABB93: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HV?$NiPointer@VNiAVObject@@@@@@6B@; const NiTPointerMap<int,NiPointer<NiAVObject>>::`vftable'
0x6ABB99: mov     eax, esi
0x6ABB9B: pop     esi
0x6ABB9C: retn    4
