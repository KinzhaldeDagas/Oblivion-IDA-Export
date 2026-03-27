0x988D06: push    ebp
0x988D07: mov     ebp, esp
0x988D09: push    ecx
0x988D0A: push    ebx
0x988D0B: mov     ebx, [ebp+FullPath]
0x988D0E: push    esi
0x988D0F: push    edi; MaxCount
0x988D10: xor     edi, edi
0x988D12: cmp     ebx, edi
0x988D14: mov     [ebp+var_4], edi
0x988D17: jz      __splitpath_s___$error_einval$25420
0x988D1D: mov     ecx, [ebp+Drive]
0x988D20: cmp     ecx, edi
0x988D22: jnz     short loc_988D2F
0x988D24: cmp     [ebp+DriveSize], edi
0x988D27: jnz     __splitpath_s___$error_einval$25420
0x988D2D: jmp     short loc_988D38
0x988D2F: cmp     [ebp+DriveSize], edi
0x988D32: jz      __splitpath_s___$error_einval$25420
0x988D38: cmp     [ebp+Dir], edi
0x988D3B: jnz     short loc_988D44
0x988D3D: cmp     [ebp+DirSize], edi
0x988D40: jnz     short __splitpath_s___$error_einval$25420
0x988D42: jmp     short loc_988D49
0x988D44: cmp     [ebp+DirSize], edi
0x988D47: jz      short __splitpath_s___$error_einval$25420
0x988D49: cmp     [ebp+Filename], edi
0x988D4C: jnz     short loc_988D55
0x988D4E: cmp     [ebp+FilenameSize], edi
0x988D51: jnz     short __splitpath_s___$error_einval$25420
0x988D53: jmp     short loc_988D5A
0x988D55: cmp     [ebp+FilenameSize], edi
0x988D58: jz      short __splitpath_s___$error_einval$25420
0x988D5A: cmp     [ebp+Ext], edi
0x988D5D: jnz     short loc_988DB5
0x988D5F: cmp     [ebp+ExtSize], edi
0x988D62: jnz     short __splitpath_s___$error_einval$25420
0x988D64: cmp     byte ptr [ebx], 5Ch ; '\'
0x988D67: jnz     short loc_988D7E
0x988D69: cmp     byte ptr [ebx+1], 5Ch ; '\'
0x988D6D: jnz     short loc_988D7E
0x988D6F: cmp     byte ptr [ebx+2], 3Fh ; '?'
0x988D73: jnz     short loc_988D7E
0x988D75: cmp     byte ptr [ebx+3], 5Ch ; '\'
0x988D79: jnz     short loc_988D7E
0x988D7B: add     ebx, 4
0x988D7E: xor     eax, eax
0x988D80: inc     eax
0x988D81: mov     esi, ebx
0x988D83: cmp     byte ptr [esi], 0
0x988D86: jz      short loc_988D8E
0x988D88: dec     eax
0x988D89: inc     esi
0x988D8A: cmp     eax, edi
0x988D8C: ja      short loc_988D83
0x988D8E: cmp     byte ptr [esi], 3Ah ; ':'
0x988D91: jnz     short loc_988DC6
0x988D93: cmp     ecx, edi
0x988D95: jz      short loc_988DB0
0x988D97: cmp     [ebp+DriveSize], 3
0x988D9B: jb      __splitpath_s___$error_erange$25451
0x988DA1: push    2; Src
0x988DA3: push    ebx; Src
0x988DA4: push    [ebp+DriveSize]; SizeInBytes
0x988DA7: push    ecx; Dst
0x988DA8: call    _strncpy_s
0x988DAD: add     esp, 10h
0x988DB0: lea     ebx, [esi+1]
0x988DB3: jmp     short loc_988DCD
0x988DB5: cmp     [ebp+ExtSize], edi
0x988DB8: jnz     short loc_988D64
