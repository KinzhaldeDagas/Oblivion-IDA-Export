0x70FAA0: push    ebx
0x70FAA1: mov     ebx, dword ptr [esp+4+ArgList]
0x70FAA5: push    esi
0x70FAA6: mov     eax, ebx
0x70FAA8: push    edi
0x70FAA9: lea     edx, [eax+1]
0x70FAAC: lea     esp, [esp+0]
0x70FAB0: mov     cl, [eax]
0x70FAB2: add     eax, 1
0x70FAB5: test    cl, cl
0x70FAB7: jnz     short loc_70FAB0
0x70FAB9: sub     eax, edx
0x70FABB: lea     esi, [eax+9]
0x70FABE: push    esi; Size
0x70FABF: call    FormHeapAlloc
0x70FAC4: mov     edi, eax
0x70FAC6: movzx   eax, [esp+10h+arg_4]
0x70FACB: push    eax
0x70FACC: push    ebx; ArgList
0x70FACD: push    offset aSHu; "%s = %hu"
0x70FAD2: push    esi; SizeInBytes
0x70FAD3: push    edi; DstBuf
0x70FAD4: call    sub_6C5D40
0x70FAD9: add     esp, 18h
0x70FADC: mov     eax, edi
0x70FADE: pop     edi
0x70FADF: pop     esi
0x70FAE0: pop     ebx
0x70FAE1: retn
