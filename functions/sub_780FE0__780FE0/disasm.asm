0x780FE0: push    ebx
0x780FE1: mov     ebx, [esp+4+Src]
0x780FE5: push    ebp
0x780FE6: mov     ebp, ecx
0x780FE8: mov     eax, [ebp+3Ch]
0x780FEB: cmp     eax, ebx
0x780FED: jz      short loc_78102E
0x780FEF: push    eax
0x780FF0: call    FormHeapFree
0x780FF5: add     esp, 4
0x780FF8: test    ebx, ebx
0x780FFA: jz      short loc_78102E
0x780FFC: cmp     byte ptr [ebx], 0
0x780FFF: jz      short loc_78102E
0x781001: mov     eax, ebx
0x781003: lea     edx, [eax+1]
0x781006: mov     cl, [eax]
0x781008: add     eax, 1
0x78100B: test    cl, cl
0x78100D: jnz     short loc_781006
0x78100F: push    esi
0x781010: sub     eax, edx
0x781012: lea     esi, [eax+1]
0x781015: push    edi
0x781016: push    esi; Size
0x781017: call    FormHeapAlloc
0x78101C: push    ebx; Src
0x78101D: mov     edi, eax
0x78101F: push    esi; SizeInBytes
0x781020: push    edi; Dst
0x781021: call    _strcpy_s
0x781026: add     esp, 10h
0x781029: mov     [ebp+3Ch], edi
0x78102C: pop     edi
0x78102D: pop     esi
0x78102E: pop     ebp
0x78102F: pop     ebx
0x781030: retn    4
