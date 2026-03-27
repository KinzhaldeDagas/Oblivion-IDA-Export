0x6DF010: push    ebx
0x6DF011: push    edi
0x6DF012: mov     edi, ecx
0x6DF014: mov     eax, [edi+14h]
0x6DF017: push    eax
0x6DF018: call    FormHeapFree
0x6DF01D: mov     ebx, [esp+0Ch+Src]
0x6DF021: add     esp, 4
0x6DF024: test    ebx, ebx
0x6DF026: mov     dword ptr [edi+14h], 0
0x6DF02D: jz      short loc_6DF058
0x6DF02F: mov     eax, ebx
0x6DF031: lea     edx, [eax+1]
0x6DF034: mov     cl, [eax]
0x6DF036: add     eax, 1
0x6DF039: test    cl, cl
0x6DF03B: jnz     short loc_6DF034
0x6DF03D: sub     eax, edx
0x6DF03F: push    esi
0x6DF040: lea     esi, [eax+1]
0x6DF043: push    esi; Size
0x6DF044: call    FormHeapAlloc
0x6DF049: push    ebx; Src
0x6DF04A: push    esi; SizeInBytes
0x6DF04B: push    eax; Dst
0x6DF04C: mov     [edi+14h], eax
0x6DF04F: call    _strcpy_s
0x6DF054: add     esp, 10h
0x6DF057: pop     esi
0x6DF058: pop     edi
0x6DF059: pop     ebx
0x6DF05A: retn    4
