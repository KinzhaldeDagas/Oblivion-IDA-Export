0x780F80: push    ebx
0x780F81: mov     ebx, [esp+4+Src]
0x780F85: push    ebp
0x780F86: mov     ebp, ecx
0x780F88: mov     eax, [ebp+38h]
0x780F8B: cmp     eax, ebx
0x780F8D: jz      short loc_780FDA
0x780F8F: push    eax
0x780F90: call    FormHeapFree
0x780F95: add     esp, 4
0x780F98: test    ebx, ebx
0x780F9A: jz      short loc_780FD3
0x780F9C: cmp     byte ptr [ebx], 0
0x780F9F: jz      short loc_780FD3
0x780FA1: mov     eax, ebx
0x780FA3: lea     edx, [eax+1]
0x780FA6: mov     cl, [eax]
0x780FA8: add     eax, 1
0x780FAB: test    cl, cl
0x780FAD: jnz     short loc_780FA6
0x780FAF: push    esi
0x780FB0: sub     eax, edx
0x780FB2: lea     esi, [eax+1]
0x780FB5: push    edi
0x780FB6: push    esi; Size
0x780FB7: call    FormHeapAlloc
0x780FBC: push    ebx; Src
0x780FBD: mov     edi, eax
0x780FBF: push    esi; SizeInBytes
0x780FC0: push    edi; Dst
0x780FC1: call    _strcpy_s
0x780FC6: add     esp, 10h
0x780FC9: mov     [ebp+38h], edi
0x780FCC: pop     edi
0x780FCD: pop     esi
0x780FCE: pop     ebp
0x780FCF: pop     ebx
0x780FD0: retn    4
0x780FD3: mov     dword ptr [ebp+38h], 0
0x780FDA: pop     ebp
0x780FDB: pop     ebx
0x780FDC: retn    4
