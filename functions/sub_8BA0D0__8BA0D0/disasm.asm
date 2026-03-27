0x8BA0D0: push    ebx
0x8BA0D1: push    esi
0x8BA0D2: mov     ebx, ecx
0x8BA0D4: push    edi
0x8BA0D5: mov     dword ptr [ebx], offset off_A981DC
0x8BA0DB: lea     esi, [ebx+8]
0x8BA0DE: mov     edi, 0Bh
0x8BA0E3: mov     ecx, [esi]
0x8BA0E5: test    ecx, ecx
0x8BA0E7: jz      short loc_8BA107
0x8BA0E9: cmp     word ptr [ecx+4], 0
0x8BA0EE: jz      short loc_8BA101
0x8BA0F0: dec     word ptr [ecx+6]
0x8BA0F4: cmp     word ptr [ecx+6], 0
0x8BA0F9: jnz     short loc_8BA101
0x8BA0FB: mov     eax, [ecx]
0x8BA0FD: push    1
0x8BA0FF: call    dword ptr [eax]
0x8BA101: mov     dword ptr [esi], 0
0x8BA107: add     esi, 4
0x8BA10A: dec     edi
0x8BA10B: jnz     short loc_8BA0E3
0x8BA10D: pop     edi
0x8BA10E: pop     esi
0x8BA10F: mov     dword ptr [ebx], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8BA115: pop     ebx
0x8BA116: retn
