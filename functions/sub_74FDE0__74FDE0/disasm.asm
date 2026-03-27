0x74FDE0: push    ebx
0x74FDE1: push    esi
0x74FDE2: push    64h ; 'd'; Size
0x74FDE4: call    FormHeapAlloc
0x74FDE9: mov     esi, eax
0x74FDEB: xor     ebx, ebx
0x74FDED: add     esp, 4
0x74FDF0: cmp     esi, ebx
0x74FDF2: jz      short loc_74FE20
0x74FDF4: mov     ecx, esi
0x74FDF6: call    sub_75E540
0x74FDFB: mov     dword ptr [esi], offset ??_7NiPSysEmitterCtlr@@6B@; const NiPSysEmitterCtlr::`vftable'
0x74FE01: mov     [esi+48h], ebx
0x74FE04: fld     dword ptr ds:0A7DEB4h
0x74FE0A: mov     [esi+54h], bl
0x74FE0D: fchs
0x74FE0F: fstp    dword ptr [esi+50h]
0x74FE12: mov     [esi+58h], ebx
0x74FE15: mov     [esi+5Ch], ebx
0x74FE18: mov     [esi+60h], ebx
0x74FE1B: mov     eax, esi
0x74FE1D: pop     esi
0x74FE1E: pop     ebx
0x74FE1F: retn
0x74FE20: pop     esi
0x74FE21: xor     eax, eax
0x74FE23: pop     ebx
0x74FE24: retn
