0x45A860: push    esi
0x45A861: mov     esi, ecx
0x45A863: xor     ecx, ecx
0x45A865: mov     eax, 13AFh
0x45A86A: mov     [esi+4], eax
0x45A86D: mov     edx, 4
0x45A872: mul     edx
0x45A874: seto    cl
0x45A877: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVChangeData@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,ChangeData *>::`vftable'
0x45A87D: mov     dword ptr [esi+0Ch], 0
0x45A884: neg     ecx
0x45A886: or      ecx, eax
0x45A888: push    ecx; Size
0x45A889: call    FormHeapAlloc
0x45A88E: mov     ecx, [esi+4]
0x45A891: add     ecx, ecx
0x45A893: add     ecx, ecx
0x45A895: push    ecx
0x45A896: push    0
0x45A898: push    eax
0x45A899: mov     [esi+8], eax
0x45A89C: call    __memset
0x45A8A1: add     esp, 10h
0x45A8A4: mov     dword ptr [esi], offset ??_7ChangesMap@@6B@; const ChangesMap::`vftable'
0x45A8AA: mov     eax, esi
0x45A8AC: pop     esi
0x45A8AD: retn
