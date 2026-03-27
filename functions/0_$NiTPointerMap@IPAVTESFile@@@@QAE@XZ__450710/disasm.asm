0x450710: mov     eax, [esp+arg_0]
0x450714: push    esi
0x450715: mov     esi, ecx
0x450717: xor     ecx, ecx
0x450719: mov     [esi+4], eax
0x45071C: mov     edx, 4
0x450721: mul     edx
0x450723: seto    cl
0x450726: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVTESFile@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,TESFile *>::`vftable'
0x45072C: mov     dword ptr [esi+0Ch], 0
0x450733: neg     ecx
0x450735: or      ecx, eax
0x450737: push    ecx; Size
0x450738: call    FormHeapAlloc
0x45073D: mov     ecx, [esi+4]
0x450740: add     ecx, ecx
0x450742: add     ecx, ecx
0x450744: push    ecx
0x450745: push    0
0x450747: push    eax
0x450748: mov     [esi+8], eax
0x45074B: call    __memset
0x450750: add     esp, 10h
0x450753: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@IPAVTESFile@@@@6B@; const NiTPointerMap<uint,TESFile *>::`vftable'
0x450759: mov     eax, esi
0x45075B: pop     esi
0x45075C: retn    4
