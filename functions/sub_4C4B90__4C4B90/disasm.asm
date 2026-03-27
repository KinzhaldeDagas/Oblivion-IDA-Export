0x4C4B90: push    esi
0x4C4B91: mov     esi, ecx
0x4C4B93: xor     ecx, ecx
0x4C4B95: mov     eax, 25h ; '%'
0x4C4B9A: mov     [esi+4], eax
0x4C4B9D: mov     edx, 4
0x4C4BA2: mul     edx
0x4C4BA4: seto    cl
0x4C4BA7: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAPAVTESGrassAreaParam@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESGrassAreaParam * *>::`vftable'
0x4C4BAD: mov     dword ptr [esi+0Ch], 0
0x4C4BB4: neg     ecx
0x4C4BB6: or      ecx, eax
0x4C4BB8: push    ecx; Size
0x4C4BB9: call    FormHeapAlloc
0x4C4BBE: mov     ecx, [esi+4]
0x4C4BC1: add     ecx, ecx
0x4C4BC3: add     ecx, ecx
0x4C4BC5: push    ecx
0x4C4BC6: push    0
0x4C4BC8: push    eax
0x4C4BC9: mov     [esi+8], eax
0x4C4BCC: call    __memset
0x4C4BD1: add     esp, 10h
0x4C4BD4: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@6B@; const NiTPointerMap<uint,TESGrassAreaParam * *>::`vftable'
0x4C4BDA: pop     esi
0x4C4BDB: retn
