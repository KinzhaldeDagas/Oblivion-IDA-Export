0x43BC20: sub     esp, 11Ch
0x43BC26: mov     eax, ___security_cookie
0x43BC2B: xor     eax, esp
0x43BC2D: mov     [esp+11Ch+var_4], eax
0x43BC34: mov     eax, [esp+11Ch+arg_0]
0x43BC3B: push    ebx
0x43BC3C: push    ebp
0x43BC3D: mov     ebp, [esp+124h+arg_C]
0x43BC44: push    edi
0x43BC45: mov     ebx, ecx
0x43BC47: mov     ecx, [esp+128h+arg_4]
0x43BC4E: xor     edi, edi
0x43BC50: test    eax, eax
0x43BC52: mov     [esp+128h+var_114], ecx
0x43BC56: mov     [esp+128h+var_11C], eax
0x43BC5A: mov     [esp+128h+var_118], edi
0x43BC5E: jz      loc_43BD82
0x43BC64: push    esi
0x43BC65: mov     edx, [esp+12Ch+var_11C]
0x43BC69: mov     eax, [edx]
0x43BC6B: test    eax, eax
0x43BC6D: jz      loc_43BD67
0x43BC73: mov     ecx, [esp+12Ch+arg_10]
0x43BC7A: test    ecx, ecx
0x43BC7C: jz      short loc_43BCC6
0x43BC7E: lea     esi, [esp+12Ch+var_108]
0x43BC82: sub     esi, ecx
0x43BC84: mov     dl, [ecx]
0x43BC86: mov     [esi+ecx], dl
0x43BC89: add     ecx, 1
0x43BC8C: test    dl, dl
0x43BC8E: jnz     short loc_43BC84
0x43BC90: mov     edx, eax
0x43BC92: mov     cl, [eax]
0x43BC94: add     eax, 1
0x43BC97: test    cl, cl
0x43BC99: jnz     short loc_43BC92
0x43BC9B: lea     edi, [esp+12Ch+var_108]
0x43BC9F: sub     eax, edx
0x43BCA1: add     edi, 0FFFFFFFFh
0x43BCA4: mov     cl, [edi+1]
0x43BCA7: add     edi, 1
0x43BCAA: test    cl, cl
0x43BCAC: jnz     short loc_43BCA4
0x43BCAE: mov     ecx, eax
0x43BCB0: shr     ecx, 2
0x43BCB3: mov     esi, edx
0x43BCB5: rep movsd
0x43BCB7: mov     ecx, eax
0x43BCB9: and     ecx, 3
0x43BCBC: rep movsb
0x43BCBE: mov     edi, [esp+12Ch+var_118]
0x43BCC2: lea     eax, [esp+12Ch+var_108]
0x43BCC6: mov     ecx, [esp+12Ch+var_114]
0x43BCCA: test    ecx, ecx
0x43BCCC: jz      short loc_43BD23
0x43BCCE: cmp     edi, [ecx]
0x43BCD0: jnb     short loc_43BCDA
0x43BCD2: mov     ecx, [ecx+4]
0x43BCD5: mov     ecx, [ecx+edi*4]
0x43BCD8: jmp     short loc_43BCDC
0x43BCDA: xor     ecx, ecx
0x43BCDC: mov     edx, [esp+12Ch+arg_8]
0x43BCE3: push    0
0x43BCE5: push    1
0x43BCE7: push    0
0x43BCE9: push    0
0x43BCEB: push    ebp
0x43BCEC: push    edx
0x43BCED: push    ecx
0x43BCEE: push    eax
0x43BCEF: lea     eax, [esp+14Ch+var_10C]
0x43BCF3: push    eax
0x43BCF4: mov     ecx, ebx
0x43BCF6: call    sub_43B5E0
0x43BCFB: mov     eax, [esp+12Ch+var_10C]
0x43BCFF: test    eax, eax
0x43BD01: jz      short loc_43BD67
0x43BD03: mov     esi, eax
0x43BD05: add     eax, 8
0x43BD08: push    eax; lpAddend
0x43BD09: call    ds:InterlockedDecrement
0x43BD0F: test    eax, eax
0x43BD11: jnz     short loc_43BD67
0x43BD13: test    esi, esi
0x43BD15: jz      short loc_43BD67
0x43BD17: mov     edx, [esi]
0x43BD19: mov     eax, [edx]
0x43BD1B: push    1
0x43BD1D: mov     ecx, esi
0x43BD1F: call    eax
0x43BD21: jmp     short loc_43BD67
0x43BD23: mov     ecx, [esp+12Ch+arg_8]
0x43BD2A: push    0
0x43BD2C: push    1
0x43BD2E: push    0
0x43BD30: push    0
0x43BD32: push    ebp
0x43BD33: push    ecx
0x43BD34: push    eax
0x43BD35: lea     edx, [esp+148h+var_110]
0x43BD39: push    edx
0x43BD3A: mov     ecx, ebx
0x43BD3C: call    sub_43B420
0x43BD41: mov     eax, [esp+12Ch+var_110]
0x43BD45: test    eax, eax
0x43BD47: jz      short loc_43BD67
0x43BD49: mov     esi, eax
0x43BD4B: add     eax, 8
0x43BD4E: push    eax; lpAddend
0x43BD4F: call    ds:InterlockedDecrement
0x43BD55: test    eax, eax
0x43BD57: jnz     short loc_43BD67
0x43BD59: test    esi, esi
0x43BD5B: jz      short loc_43BD67
0x43BD5D: mov     eax, [esi]
0x43BD5F: mov     edx, [eax]
0x43BD61: push    1
0x43BD63: mov     ecx, esi
0x43BD65: call    edx
0x43BD67: mov     eax, [esp+12Ch+var_11C]
0x43BD6B: mov     eax, [eax+4]
0x43BD6E: add     edi, 1
0x43BD71: test    eax, eax
0x43BD73: mov     [esp+12Ch+var_118], edi
0x43BD77: mov     [esp+12Ch+var_11C], eax
0x43BD7B: jnz     loc_43BC65
0x43BD81: pop     esi
0x43BD82: mov     ecx, [esp+128h+var_4]
0x43BD89: pop     edi
0x43BD8A: pop     ebp
0x43BD8B: pop     ebx
0x43BD8C: xor     ecx, esp
0x43BD8E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x43BD93: add     esp, 11Ch
0x43BD99: retn    14h
