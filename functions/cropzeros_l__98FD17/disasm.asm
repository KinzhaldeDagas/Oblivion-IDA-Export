0x98FD17: push    ebp
0x98FD18: mov     ebp, esp
0x98FD1A: sub     esp, 10h
0x98FD1D: push    esi
0x98FD1E: push    [ebp+arg_4]; struct localeinfo_struct *
0x98FD21: lea     ecx, [ebp+var_10]; this
0x98FD24: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x98FD29: mov     eax, [ebp+arg_0]
0x98FD2C: mov     cl, [eax]
0x98FD2E: test    cl, cl
0x98FD30: mov     esi, [ebp+var_10]
0x98FD33: jz      short loc_98FD4A
0x98FD35: mov     edx, [esi+0BCh]
0x98FD3B: mov     edx, [edx]
0x98FD3D: mov     dl, [edx]
0x98FD3F: cmp     cl, dl
0x98FD41: jz      short loc_98FD4A
0x98FD43: inc     eax
0x98FD44: mov     cl, [eax]
0x98FD46: test    cl, cl
0x98FD48: jnz     short loc_98FD3F
0x98FD4A: mov     cl, [eax]
0x98FD4C: inc     eax
0x98FD4D: test    cl, cl
0x98FD4F: jz      short loc_98FD87
0x98FD51: jmp     short loc_98FD5E
0x98FD53: cmp     cl, 65h ; 'e'
0x98FD56: jz      short loc_98FD64
0x98FD58: cmp     cl, 45h ; 'E'
0x98FD5B: jz      short loc_98FD64
0x98FD5D: inc     eax
0x98FD5E: mov     cl, [eax]
0x98FD60: test    cl, cl
0x98FD62: jnz     short loc_98FD53
0x98FD64: mov     edx, eax
0x98FD66: dec     eax
0x98FD67: cmp     byte ptr [eax], 30h ; '0'
0x98FD6A: jz      short loc_98FD66
0x98FD6C: mov     ecx, [esi+0BCh]
0x98FD72: mov     ecx, [ecx]
0x98FD74: push    ebx
0x98FD75: mov     bl, [eax]
0x98FD77: cmp     bl, [ecx]
0x98FD79: pop     ebx
0x98FD7A: jnz     short loc_98FD7D
0x98FD7C: dec     eax
0x98FD7D: mov     cl, [edx]
0x98FD7F: inc     eax
0x98FD80: inc     edx
0x98FD81: test    cl, cl
0x98FD83: mov     [eax], cl
0x98FD85: jnz     short loc_98FD7D
0x98FD87: cmp     [ebp+var_4], 0
0x98FD8B: pop     esi
0x98FD8C: jz      short locret_98FD95
0x98FD8E: mov     eax, [ebp+var_8]
0x98FD91: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98FD95: leave
0x98FD96: retn
