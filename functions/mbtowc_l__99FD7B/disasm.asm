0x99FD7B: push    ebp
0x99FD7C: mov     ebp, esp
0x99FD7E: sub     esp, 10h
0x99FD81: push    ebx
0x99FD82: push    esi
0x99FD83: mov     esi, [ebp+SrcCh]
0x99FD86: xor     ebx, ebx
0x99FD88: cmp     esi, ebx
0x99FD8A: jz      short loc_99FD9F
0x99FD8C: cmp     [ebp+SrcSizeInBytes], ebx
0x99FD8F: jz      short loc_99FD9F
0x99FD91: cmp     [esi], bl
0x99FD93: jnz     short loc_99FDA5
0x99FD95: mov     eax, [ebp+DstCh]
0x99FD98: cmp     eax, ebx
0x99FD9A: jz      short loc_99FD9F
0x99FD9C: mov     [eax], bx
0x99FD9F: xor     eax, eax
0x99FDA1: pop     esi
0x99FDA2: pop     ebx
0x99FDA3: leave
0x99FDA4: retn
0x99FDA5: push    [ebp+Locale]; struct localeinfo_struct *
0x99FDA8: lea     ecx, [ebp+var_10]; this
0x99FDAB: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x99FDB0: mov     eax, [ebp+var_10.locinfo]
0x99FDB3: cmp     [eax+14h], ebx
0x99FDB6: jnz     short loc_99FDD7
0x99FDB8: mov     eax, [ebp+DstCh]
0x99FDBB: cmp     eax, ebx
0x99FDBD: jz      short loc_99FDC6
0x99FDBF: movzx   cx, byte ptr [esi]
0x99FDC3: mov     [eax], cx
0x99FDC6: cmp     [ebp+var_4], bl
0x99FDC9: jz      short loc_99FDD2
0x99FDCB: mov     eax, [ebp+var_8]
0x99FDCE: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FDD2: xor     eax, eax
0x99FDD4: inc     eax
0x99FDD5: jmp     short loc_99FDA1
0x99FDD7: lea     eax, [ebp+var_10]
0x99FDDA: push    eax; Locale
0x99FDDB: movzx   eax, byte ptr [esi]
0x99FDDE: push    eax; C
0x99FDDF: call    __isleadbyte_l
0x99FDE4: test    eax, eax
0x99FDE6: pop     ecx
0x99FDE7: pop     ecx
0x99FDE8: jz      short loc_99FE67
0x99FDEA: mov     eax, [ebp+var_10.locinfo]
0x99FDED: mov     ecx, [eax+0ACh]
0x99FDF3: cmp     ecx, 1
0x99FDF6: jle     short loc_99FE1D
0x99FDF8: cmp     [ebp+SrcSizeInBytes], ecx
0x99FDFB: jl      short loc_99FE1D
0x99FDFD: xor     edx, edx
0x99FDFF: cmp     [ebp+DstCh], ebx
0x99FE02: setnz   dl
0x99FE05: push    edx; cchWideChar
0x99FE06: push    [ebp+DstCh]; lpWideCharStr
0x99FE09: push    ecx; cbMultiByte
0x99FE0A: push    esi; lpMultiByteStr
0x99FE0B: push    9; dwFlags
0x99FE0D: push    dword ptr [eax+4]; CodePage
0x99FE10: call    ds:MultiByteToWideChar
0x99FE16: test    eax, eax
0x99FE18: mov     eax, [ebp+var_10.locinfo]
0x99FE1B: jnz     short loc_99FE2D
0x99FE1D: mov     ecx, [ebp+SrcSizeInBytes]
0x99FE20: cmp     ecx, [eax+0ACh]
0x99FE26: jb      short loc_99FE48
0x99FE28: cmp     [esi+1], bl
0x99FE2B: jz      short loc_99FE48
0x99FE2D: cmp     [ebp+var_4], bl
0x99FE30: mov     eax, [eax+0ACh]
0x99FE36: jz      loc_99FDA1
0x99FE3C: mov     ecx, [ebp+var_8]
0x99FE3F: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x99FE43: jmp     loc_99FDA1
0x99FE48: call    __errno
0x99FE4D: mov     dword ptr [eax], 2Ah ; '*'
0x99FE53: cmp     [ebp+var_4], bl
0x99FE56: jz      short loc_99FE5F
0x99FE58: mov     eax, [ebp+var_8]
0x99FE5B: and     dword ptr [eax+70h], 0FFFFFFFDh
0x99FE5F: or      eax, 0FFFFFFFFh
0x99FE62: jmp     loc_99FDA1
0x99FE67: xor     eax, eax
0x99FE69: cmp     [ebp+DstCh], ebx
0x99FE6C: setnz   al
0x99FE6F: push    eax; cchWideChar
0x99FE70: push    [ebp+DstCh]; lpWideCharStr
0x99FE73: mov     eax, [ebp+var_10.locinfo]
0x99FE76: push    1; cbMultiByte
0x99FE78: push    esi; lpMultiByteStr
0x99FE79: push    9; dwFlags
0x99FE7B: push    dword ptr [eax+4]; CodePage
0x99FE7E: call    ds:MultiByteToWideChar
0x99FE84: test    eax, eax
0x99FE86: jnz     loc_99FDC6
0x99FE8C: jmp     short loc_99FE48
