0x780E60: push    ebx
0x780E61: mov     ebx, [esp+4+Src]
0x780E65: push    ebp
0x780E66: mov     ebp, ecx
0x780E68: mov     eax, [ebp+2Ch]
0x780E6B: cmp     eax, ebx
0x780E6D: jz      short loc_780EBA
0x780E6F: push    eax
0x780E70: call    FormHeapFree
0x780E75: add     esp, 4
0x780E78: test    ebx, ebx
0x780E7A: jz      short loc_780EB3
0x780E7C: cmp     byte ptr [ebx], 0
0x780E7F: jz      short loc_780EB3
0x780E81: mov     eax, ebx
0x780E83: lea     edx, [eax+1]
0x780E86: mov     cl, [eax]
0x780E88: add     eax, 1
0x780E8B: test    cl, cl
0x780E8D: jnz     short loc_780E86
0x780E8F: push    esi
0x780E90: sub     eax, edx
0x780E92: lea     esi, [eax+1]
0x780E95: push    edi
0x780E96: push    esi; Size
0x780E97: call    FormHeapAlloc
0x780E9C: push    ebx; Src
0x780E9D: mov     edi, eax
0x780E9F: push    esi; SizeInBytes
0x780EA0: push    edi; Dst
0x780EA1: call    _strcpy_s
0x780EA6: add     esp, 10h
0x780EA9: mov     [ebp+2Ch], edi
0x780EAC: pop     edi
0x780EAD: pop     esi
0x780EAE: pop     ebp
0x780EAF: pop     ebx
0x780EB0: retn    4
0x780EB3: mov     dword ptr [ebp+2Ch], 0
0x780EBA: pop     ebp
0x780EBB: pop     ebx
0x780EBC: retn    4
