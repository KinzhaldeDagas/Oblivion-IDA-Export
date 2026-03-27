0x70F910: push    ebx
0x70F911: mov     ebx, dword ptr [esp+4+ArgList]
0x70F915: push    esi
0x70F916: mov     eax, ebx
0x70F918: push    edi
0x70F919: lea     edx, [eax+1]
0x70F91C: lea     esp, [esp+0]
0x70F920: mov     cl, [eax]
0x70F922: add     eax, 1
0x70F925: test    cl, cl
0x70F927: jnz     short loc_70F920
0x70F929: sub     eax, edx
0x70F92B: lea     esi, [eax+9]
0x70F92E: push    esi; Size
0x70F92F: call    FormHeapAlloc
0x70F934: push    ebx; ArgList
0x70F935: push    offset aS_3; "--- %s ---"
0x70F93A: mov     edi, eax
0x70F93C: push    esi; SizeInBytes
0x70F93D: push    edi; DstBuf
0x70F93E: call    sub_6C5D40
0x70F943: add     esp, 14h
0x70F946: mov     eax, edi
0x70F948: pop     edi
0x70F949: pop     esi
0x70F94A: pop     ebx
0x70F94B: retn
