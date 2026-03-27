0x7EAC80: push    0FFFFFFFFh
0x7EAC82: push    offset SEH_7EAC80
0x7EAC87: mov     eax, large fs:0
0x7EAC8D: push    eax
0x7EAC8E: sub     esp, 8
0x7EAC91: push    ebx
0x7EAC92: push    ebp
0x7EAC93: push    esi
0x7EAC94: push    edi
0x7EAC95: mov     eax, ds:0B30AACh
0x7EAC9A: xor     eax, esp
0x7EAC9C: push    eax
0x7EAC9D: lea     eax, [esp+28h+var_C]
0x7EACA1: mov     large fs:0, eax
0x7EACA7: mov     esi, ecx
0x7EACA9: mov     eax, [esi]
0x7EACAB: mov     edx, [eax+80h]
0x7EACB1: call    edx
0x7EACB3: xor     ecx, ecx
0x7EACB5: mov     [esp+28h+var_14], ecx
0x7EACB9: mov     eax, [esi+70h]
0x7EACBC: mov     eax, [eax+24h]
0x7EACBF: mov     eax, [eax]
0x7EACC1: cmp     eax, ecx
0x7EACC3: lea     ebp, [esi+70h]
0x7EACC6: mov     [esp+28h+var_4], ecx
0x7EACCA: jz      short loc_7EACD4
0x7EACCC: add     dword ptr [eax+5Ch], 1
0x7EACD0: mov     [esp+28h+var_14], eax
0x7EACD4: mov     ecx, [esi+7Ch]; this
0x7EACD7: call    BSRenderedTexture__GetInnerTexture
0x7EACDC: mov     ecx, [esp+28h+var_14]
0x7EACE0: mov     edi, [ecx+4]
0x7EACE3: mov     ebx, eax
0x7EACE5: cmp     edi, ebx
0x7EACE7: jz      short loc_7EAD1E
0x7EACE9: test    edi, edi
0x7EACEB: jz      short loc_7EAD09
0x7EACED: lea     edx, [edi+4]
0x7EACF0: push    edx; lpAddend
0x7EACF1: call    dword ptr ds:0A2807Ch
0x7EACF7: test    eax, eax
0x7EACF9: jnz     short loc_7EAD09
0x7EACFB: test    edi, edi
0x7EACFD: jz      short loc_7EAD09
0x7EACFF: mov     eax, [edi]
0x7EAD01: mov     edx, [eax]
0x7EAD03: push    1
0x7EAD05: mov     ecx, edi
0x7EAD07: call    edx
0x7EAD09: test    ebx, ebx
0x7EAD0B: mov     eax, [esp+28h+var_14]
0x7EAD0F: mov     [eax+4], ebx
0x7EAD12: jz      short loc_7EAD1E
0x7EAD14: add     ebx, 4
0x7EAD17: push    ebx; lpAddend
0x7EAD18: call    dword ptr ds:0A28078h
0x7EAD1E: mov     eax, [ebp+0]
0x7EAD21: mov     ecx, [esi+90h]
0x7EAD27: mov     ebx, [esi+ecx*4+94h]
0x7EAD2E: mov     edi, [eax+58h]
0x7EAD31: cmp     edi, ebx
0x7EAD33: mov     [esp+28h+var_10], eax
0x7EAD37: jz      short loc_7EAD6E
0x7EAD39: test    edi, edi
0x7EAD3B: jz      short loc_7EAD59
0x7EAD3D: lea     edx, [edi+4]
0x7EAD40: push    edx; lpAddend
0x7EAD41: call    dword ptr ds:0A2807Ch
0x7EAD47: test    eax, eax
0x7EAD49: jnz     short loc_7EAD59
0x7EAD4B: test    edi, edi
0x7EAD4D: jz      short loc_7EAD59
0x7EAD4F: mov     eax, [edi]
0x7EAD51: mov     edx, [eax]
0x7EAD53: push    1
0x7EAD55: mov     ecx, edi
0x7EAD57: call    edx
0x7EAD59: test    ebx, ebx
0x7EAD5B: mov     eax, [esp+28h+var_10]
0x7EAD5F: mov     [eax+58h], ebx
0x7EAD62: jz      short loc_7EAD6E
0x7EAD64: add     ebx, 4
0x7EAD67: push    ebx; lpAddend
0x7EAD68: call    dword ptr ds:0A28078h
0x7EAD6E: mov     eax, [ebp+0]
0x7EAD71: mov     ecx, [esi+90h]
0x7EAD77: mov     ebx, [esi+ecx*4+0A8h]
0x7EAD7E: mov     edi, [eax+44h]
0x7EAD81: cmp     edi, ebx
0x7EAD83: mov     [esp+28h+var_10], eax
0x7EAD87: jz      short loc_7EADBE
0x7EAD89: test    edi, edi
0x7EAD8B: jz      short loc_7EADA9
0x7EAD8D: lea     edx, [edi+4]
0x7EAD90: push    edx; lpAddend
0x7EAD91: call    dword ptr ds:0A2807Ch
0x7EAD97: test    eax, eax
0x7EAD99: jnz     short loc_7EADA9
0x7EAD9B: test    edi, edi
0x7EAD9D: jz      short loc_7EADA9
0x7EAD9F: mov     eax, [edi]
0x7EADA1: mov     edx, [eax]
0x7EADA3: push    1
0x7EADA5: mov     ecx, edi
0x7EADA7: call    edx
0x7EADA9: test    ebx, ebx
0x7EADAB: mov     eax, [esp+28h+var_10]
0x7EADAF: mov     [eax+44h], ebx
0x7EADB2: jz      short loc_7EADBE
0x7EADB4: add     ebx, 4
0x7EADB7: push    ebx; lpAddend
0x7EADB8: call    dword ptr ds:0A28078h
0x7EADBE: cmp     dword ptr [esi+0BCh], 3
0x7EADC5: mov     edi, [ebp+0]
0x7EADC8: jnz     short loc_7EAE1E
0x7EADCA: cmp     dword ptr [edi+30h], 0
0x7EADCE: jnz     short loc_7EADD8
0x7EADD0: call    sub_772DF0
0x7EADD5: mov     [edi+30h], eax
0x7EADD8: mov     ecx, [edi+30h]
0x7EADDB: push    0
0x7EADDD: push    1
0x7EADDF: push    1Bh
0x7EADE1: call    sub_772CD0
0x7EADE6: mov     edi, [ebp+0]
0x7EADE9: cmp     dword ptr [edi+30h], 0
0x7EADED: jnz     short loc_7EADF7
0x7EADEF: call    sub_772DF0
0x7EADF4: mov     [edi+30h], eax
0x7EADF7: mov     ecx, [edi+30h]
0x7EADFA: push    0
0x7EADFC: push    2
0x7EADFE: push    13h
0x7EAE00: call    sub_772CD0
0x7EAE05: mov     edi, [ebp+0]
0x7EAE08: cmp     dword ptr [edi+30h], 0
0x7EAE0C: jnz     short loc_7EAE16
0x7EAE0E: call    sub_772DF0
0x7EAE13: mov     [edi+30h], eax
0x7EAE16: push    0
0x7EAE18: push    2
0x7EAE1A: push    14h
0x7EAE1C: jmp     short loc_7EAE32
0x7EAE1E: cmp     dword ptr [edi+30h], 0
0x7EAE22: jnz     short loc_7EAE2C
0x7EAE24: call    sub_772DF0
0x7EAE29: mov     [edi+30h], eax
0x7EAE2C: push    0
0x7EAE2E: push    0
0x7EAE30: push    1Bh
0x7EAE32: mov     ecx, [edi+30h]
0x7EAE35: call    sub_772CD0
0x7EAE3A: mov     ecx, [esi+38h]
0x7EAE3D: push    ebp
0x7EAE3E: push    ecx
0x7EAE3F: lea     ecx, [esi+40h]
0x7EAE42: call    sub_76CE40
0x7EAE47: mov     ecx, [esp+28h+var_14]
0x7EAE4B: add     dword ptr [esi+38h], 1
0x7EAE4F: or      eax, 0FFFFFFFFh
0x7EAE52: test    ecx, ecx
0x7EAE54: mov     [esp+28h+var_4], eax
0x7EAE58: jz      short loc_7EAE64
0x7EAE5A: add     [ecx+5Ch], eax
0x7EAE5D: jnz     short loc_7EAE64
0x7EAE5F: call    sub_772560
0x7EAE64: xor     eax, eax
0x7EAE66: mov     ecx, dword ptr [esp+28h+var_C]
0x7EAE6A: mov     large fs:0, ecx
0x7EAE71: pop     ecx
0x7EAE72: pop     edi
0x7EAE73: pop     esi
0x7EAE74: pop     ebp
0x7EAE75: pop     ebx
0x7EAE76: add     esp, 14h
0x7EAE79: retn    1Ch
