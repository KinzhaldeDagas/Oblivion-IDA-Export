0x551E80: push    esi
0x551E81: mov     esi, ecx
0x551E83: mov     dword ptr [esi], offset ??_7BSFaceGenModelMap@@6B@; const BSFaceGenModelMap::`vftable'
0x551E89: xor     ecx, ecx
0x551E8B: mov     eax, 25h ; '%'
0x551E90: mov     [esi+8], eax
0x551E93: mov     edx, 4
0x551E98: mul     edx
0x551E9A: seto    cl
0x551E9D: mov     dword ptr [esi+4], offset ??_7?$NiTMapBase@V?$DFALL@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x551EA4: mov     dword ptr [esi+10h], 0
0x551EAB: neg     ecx
0x551EAD: or      ecx, eax
0x551EAF: push    ecx; Size
0x551EB0: call    FormHeapAlloc
0x551EB5: mov     ecx, [esi+8]
0x551EB8: add     ecx, ecx
0x551EBA: add     ecx, ecx
0x551EBC: push    ecx
0x551EBD: push    0
0x551EBF: push    eax
0x551EC0: mov     [esi+0Ch], eax
0x551EC3: call    __memset
0x551EC8: mov     eax, 10000000h
0x551ECD: mov     byte ptr [esi+14h], 1
0x551ED1: mov     dword ptr [esi+4], offset ??_7?$BSTCaseInsensitiveStringMap@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x551ED8: mov     [esi+18h], eax
0x551EDB: mov     [esi+1Ch], eax
0x551EDE: add     esp, 10h
0x551EE1: mov     eax, esi
0x551EE3: pop     esi
0x551EE4: retn
