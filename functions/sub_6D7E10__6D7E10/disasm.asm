0x6D7E10: push    ebx
0x6D7E11: push    edi
0x6D7E12: mov     edi, ecx
0x6D7E14: mov     eax, [edi+8]
0x6D7E17: push    eax
0x6D7E18: call    FormHeapFree
0x6D7E1D: mov     ebx, [esp+0Ch+Src]
0x6D7E21: add     esp, 4
0x6D7E24: test    ebx, ebx
0x6D7E26: mov     dword ptr [edi+8], 0
0x6D7E2D: jz      short loc_6D7E58
0x6D7E2F: mov     eax, ebx
0x6D7E31: lea     edx, [eax+1]
0x6D7E34: mov     cl, [eax]
0x6D7E36: add     eax, 1
0x6D7E39: test    cl, cl
0x6D7E3B: jnz     short loc_6D7E34
0x6D7E3D: sub     eax, edx
0x6D7E3F: push    esi
0x6D7E40: lea     esi, [eax+1]
0x6D7E43: push    esi; Size
0x6D7E44: call    FormHeapAlloc
0x6D7E49: push    ebx; Src
0x6D7E4A: push    esi; SizeInBytes
0x6D7E4B: push    eax; Dst
0x6D7E4C: mov     [edi+8], eax
0x6D7E4F: call    _strcpy_s
0x6D7E54: add     esp, 10h
0x6D7E57: pop     esi
0x6D7E58: pop     edi
0x6D7E59: pop     ebx
0x6D7E5A: retn    4
