0x45EF00: mov     eax, [esp+arg_0]
0x45EF04: push    esi
0x45EF05: mov     esi, ecx
0x45EF07: xor     ecx, ecx
0x45EF09: mov     [esi+4], eax
0x45EF0C: mov     edx, 4
0x45EF11: mul     edx
0x45EF13: seto    cl
0x45EF16: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45EF1C: mov     dword ptr [esi+0Ch], 0
0x45EF23: neg     ecx
0x45EF25: or      ecx, eax
0x45EF27: push    ecx; Size
0x45EF28: call    FormHeapAlloc
0x45EF2D: mov     ecx, [esi+4]
0x45EF30: add     ecx, ecx
0x45EF32: add     ecx, ecx
0x45EF34: push    ecx
0x45EF35: push    0
0x45EF37: push    eax
0x45EF38: mov     [esi+8], eax
0x45EF3B: call    __memset
0x45EF40: add     esp, 10h
0x45EF43: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@6B@; const NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>::`vftable'
0x45EF49: mov     eax, esi
0x45EF4B: pop     esi
0x45EF4C: retn    4
