0x478400: mov     eax, [esp+arg_0]
0x478404: push    esi
0x478405: mov     esi, ecx
0x478407: xor     ecx, ecx
0x478409: mov     [esi+4], eax
0x47840C: mov     edx, 4
0x478411: mul     edx
0x478413: seto    cl
0x478416: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVNiObject@@PAV2@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject *,NiObject *>::`vftable'
0x47841C: mov     dword ptr [esi+0Ch], 0
0x478423: neg     ecx
0x478425: or      ecx, eax
0x478427: push    ecx; Size
0x478428: call    FormHeapAlloc
0x47842D: mov     ecx, [esi+4]
0x478430: add     ecx, ecx
0x478432: add     ecx, ecx
0x478434: push    ecx
0x478435: push    0
0x478437: push    eax
0x478438: mov     [esi+8], eax
0x47843B: call    __memset
0x478440: add     esp, 10h
0x478443: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVNiObject@@PAV1@@@6B@; const NiTPointerMap<NiObject *,NiObject *>::`vftable'
0x478449: mov     eax, esi
0x47844B: pop     esi
0x47844C: retn    4
