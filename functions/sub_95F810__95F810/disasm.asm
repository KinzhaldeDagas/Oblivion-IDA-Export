0x95F810: push    esi
0x95F811: mov     esi, ecx
0x95F813: mov     dword ptr [esi], offset ??_7NiUnionBV@@6B@; const NiUnionBV::`vftable'
0x95F819: xor     ecx, ecx
0x95F81B: mov     eax, 2
0x95F820: mov     [esi+0Ch], ax
0x95F824: mov     edx, 4
0x95F829: mul     edx
0x95F82B: seto    cl
0x95F82E: mov     dword ptr [esi+4], offset ??_7?$NiTArray@PAVNiBoundingVolume@@@@6B@; const NiTArray<NiBoundingVolume *>::`vftable'
0x95F835: mov     word ptr [esi+12h], 1
0x95F83B: mov     word ptr [esi+0Eh], 0
0x95F841: mov     word ptr [esi+10h], 0
0x95F847: neg     ecx
0x95F849: or      ecx, eax
0x95F84B: push    ecx; Size
0x95F84C: call    FormHeapAlloc
0x95F851: mov     [esi+8], eax
0x95F854: add     esp, 4
0x95F857: mov     dword ptr [esi+14h], 0
0x95F85E: mov     eax, esi
0x95F860: pop     esi
0x95F861: retn
