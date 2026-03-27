0x6FDF10: push    esi
0x6FDF11: mov     esi, ecx
0x6FDF13: mov     eax, [esi+8]
0x6FDF16: push    edi
0x6FDF17: push    eax
0x6FDF18: call    FormHeapFree
0x6FDF1D: mov     edi, [esp+0Ch+arg_0]
0x6FDF21: add     esp, 4
0x6FDF24: test    edi, edi
0x6FDF26: mov     dword ptr [esi+8], 0
0x6FDF2D: jz      short loc_6FDF64
0x6FDF2F: mov     eax, edi
0x6FDF31: lea     edx, [eax+1]
0x6FDF34: mov     cl, [eax]
0x6FDF36: add     eax, 1
0x6FDF39: test    cl, cl
0x6FDF3B: jnz     short loc_6FDF34
0x6FDF3D: sub     eax, edx
0x6FDF3F: add     eax, 1
0x6FDF42: push    eax; Size
0x6FDF43: call    FormHeapAlloc
0x6FDF48: add     esp, 4
0x6FDF4B: test    eax, eax
0x6FDF4D: mov     [esi+8], eax
0x6FDF50: jz      short loc_6FDF64
0x6FDF52: mov     ecx, edi
0x6FDF54: mov     edx, eax
0x6FDF56: mov     al, [ecx]
0x6FDF58: mov     [edx], al
0x6FDF5A: add     ecx, 1
0x6FDF5D: add     edx, 1
0x6FDF60: test    al, al
0x6FDF62: jnz     short loc_6FDF56
0x6FDF64: pop     edi
0x6FDF65: pop     esi
0x6FDF66: retn    4
