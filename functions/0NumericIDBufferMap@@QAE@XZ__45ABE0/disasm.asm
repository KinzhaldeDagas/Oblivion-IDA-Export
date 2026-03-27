0x45ABE0: push    esi
0x45ABE1: mov     esi, ecx
0x45ABE3: xor     ecx, ecx
0x45ABE5: mov     eax, 25h ; '%'
0x45ABEA: mov     [esi+4], eax
0x45ABED: mov     edx, 4
0x45ABF2: mul     edx
0x45ABF4: seto    cl
0x45ABF7: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAX@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,void *>::`vftable'
0x45ABFD: mov     dword ptr [esi+0Ch], 0
0x45AC04: neg     ecx
0x45AC06: or      ecx, eax
0x45AC08: push    ecx; Size
0x45AC09: call    FormHeapAlloc
0x45AC0E: mov     ecx, [esi+4]
0x45AC11: add     ecx, ecx
0x45AC13: add     ecx, ecx
0x45AC15: push    ecx
0x45AC16: push    0
0x45AC18: push    eax
0x45AC19: mov     [esi+8], eax
0x45AC1C: call    __memset
0x45AC21: add     esp, 10h
0x45AC24: mov     dword ptr [esi], offset ??_7NumericIDBufferMap@@6B@; const NumericIDBufferMap::`vftable'
0x45AC2A: mov     eax, esi
0x45AC2C: pop     esi
0x45AC2D: retn
