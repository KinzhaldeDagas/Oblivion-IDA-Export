0x77DD20: push    1Ch; Size
0x77DD22: call    FormHeapAlloc
0x77DD27: add     esp, 4
0x77DD2A: test    eax, eax
0x77DD2C: jz      short loc_77DD35
0x77DD2E: mov     ecx, eax
0x77DD30: jmp     loc_77DC80
0x77DD35: xor     eax, eax
0x77DD37: retn
0x77DC80: push    esi
0x77DC81: mov     esi, ecx
0x77DC83: call    sub_7828D0
0x77DC88: mov     dword ptr [esi], offset ??_7NiStaticGeometryGroup@@6B@; const NiStaticGeometryGroup::`vftable'
0x77DC8E: xor     ecx, ecx
0x77DC90: mov     eax, 25h ; '%'
0x77DC95: mov     [esi+10h], eax
0x77DC98: mov     edx, 4
0x77DC9D: mul     edx
0x77DC9F: seto    cl
0x77DCA2: mov     dword ptr [esi+0Ch], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBSet@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBSet *>::`vftable'
0x77DCA9: mov     dword ptr [esi+18h], 0
0x77DCB0: neg     ecx
0x77DCB2: or      ecx, eax
0x77DCB4: push    ecx; Size
0x77DCB5: call    FormHeapAlloc
0x77DCBA: mov     ecx, [esi+10h]
0x77DCBD: add     ecx, ecx
0x77DCBF: add     ecx, ecx
0x77DCC1: push    ecx
0x77DCC2: push    0
0x77DCC4: push    eax
0x77DCC5: mov     [esi+14h], eax
0x77DCC8: call    __memset
0x77DCCD: add     esp, 10h
0x77DCD0: mov     dword ptr [esi+0Ch], offset ??_7?$NiTPointerMap@IPAVNiVBSet@@@@6B@; const NiTPointerMap<uint,NiVBSet *>::`vftable'
0x77DCD7: mov     eax, esi
0x77DCD9: pop     esi
0x77DCDA: retn
