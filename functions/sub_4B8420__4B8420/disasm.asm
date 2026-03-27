0x4B8420: mov     eax, [esp+arg_0]
0x4B8424: push    esi
0x4B8425: mov     esi, ecx
0x4B8427: xor     ecx, ecx
0x4B8429: mov     [esi+4], eax
0x4B842C: mov     edx, 4
0x4B8431: mul     edx
0x4B8433: seto    cl
0x4B8436: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESObjectCELL@@_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESObjectCELL *,bool>::`vftable'
0x4B843C: mov     dword ptr [esi+0Ch], 0
0x4B8443: neg     ecx
0x4B8445: or      ecx, eax
0x4B8447: push    ecx; Size
0x4B8448: call    FormHeapAlloc
0x4B844D: mov     ecx, [esi+4]
0x4B8450: add     ecx, ecx
0x4B8452: add     ecx, ecx
0x4B8454: push    ecx
0x4B8455: push    0
0x4B8457: push    eax
0x4B8458: mov     [esi+8], eax
0x4B845B: call    __memset
0x4B8460: add     esp, 10h
0x4B8463: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESObjectCELL@@_N@@6B@; const NiTPointerMap<TESObjectCELL *,bool>::`vftable'
0x4B8469: mov     eax, esi
0x4B846B: pop     esi
0x4B846C: retn    4
