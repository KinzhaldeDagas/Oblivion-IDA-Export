0x4B83B0: mov     eax, [esp+arg_0]
0x4B83B4: push    esi
0x4B83B5: mov     esi, ecx
0x4B83B7: xor     ecx, ecx
0x4B83B9: mov     [esi+4], eax
0x4B83BC: mov     edx, 4
0x4B83C1: mul     edx
0x4B83C3: seto    cl
0x4B83C6: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@H_N@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,bool>::`vftable'
0x4B83CC: mov     dword ptr [esi+0Ch], 0
0x4B83D3: neg     ecx
0x4B83D5: or      ecx, eax
0x4B83D7: push    ecx; Size
0x4B83D8: call    FormHeapAlloc
0x4B83DD: mov     ecx, [esi+4]
0x4B83E0: add     ecx, ecx
0x4B83E2: add     ecx, ecx
0x4B83E4: push    ecx
0x4B83E5: push    0
0x4B83E7: push    eax
0x4B83E8: mov     [esi+8], eax
0x4B83EB: call    __memset
0x4B83F0: add     esp, 10h
0x4B83F3: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@H_N@@6B@; const NiTPointerMap<int,bool>::`vftable'
0x4B83F9: mov     eax, esi
0x4B83FB: pop     esi
0x4B83FC: retn    4
