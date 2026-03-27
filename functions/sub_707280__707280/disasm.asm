0x707280: push    ebx
0x707281: push    ebp
0x707282: mov     ebp, dword ptr [esp+8+ArgList]
0x707286: push    esi
0x707287: mov     eax, ebp
0x707289: push    edi
0x70728A: mov     esi, ecx
0x70728C: lea     edx, [eax+1]
0x70728F: nop
0x707290: mov     cl, [eax]
0x707292: add     eax, 1
0x707295: test    cl, cl
0x707297: jnz     short loc_707290
0x707299: sub     eax, edx
0x70729B: lea     edi, [eax+40h]
0x70729E: push    edi; Size
0x70729F: call    FormHeapAlloc
0x7072A4: fld     dword ptr [esi+8]
0x7072A7: sub     esp, 14h
0x7072AA: fstp    [esp+28h+var_18]
0x7072AE: mov     ebx, eax
0x7072B0: fld     dword ptr [esi+4]
0x7072B3: fstp    [esp+28h+var_20]
0x7072B7: fld     dword ptr [esi]
0x7072B9: fstp    [esp+28h+var_28]
0x7072BC: push    ebp; ArgList
0x7072BD: push    offset aSGGG; "%s = (%g,%g,%g)"
0x7072C2: push    edi; SizeInBytes
0x7072C3: push    ebx; DstBuf
0x7072C4: call    sub_6C5D40
0x7072C9: add     esp, 28h
0x7072CC: pop     edi
0x7072CD: pop     esi
0x7072CE: pop     ebp
0x7072CF: mov     eax, ebx
0x7072D1: pop     ebx
0x7072D2: retn    4
