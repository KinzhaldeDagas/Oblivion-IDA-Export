0x676E40: cmp     dword ptr [ecx+54h], 0
0x676E44: push    ebp
0x676E45: lea     ebp, [ecx+50h]
0x676E48: jnz     short loc_676E54
0x676E4A: cmp     dword ptr [ebp+0], 0
0x676E4E: jz      loc_676ED9
0x676E54: push    ebx
0x676E55: mov     ebx, ebp
0x676E57: test    ebx, ebx
0x676E59: push    esi
0x676E5A: mov     esi, ebx
0x676E5C: jz      short loc_676ED7
0x676E5E: push    edi
0x676E5F: nop
0x676E60: cmp     dword ptr [esi+4], 0
0x676E64: jnz     short loc_676E6B
0x676E66: cmp     dword ptr [esi], 0
