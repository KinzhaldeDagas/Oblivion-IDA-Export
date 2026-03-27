0x414A70: push    ebx
0x414A71: push    esi
0x414A72: push    edi
0x414A73: mov     edi, [esp+0Ch+arg_0]
0x414A77: lea     eax, [edi+4]
0x414A7A: xor     esi, esi
0x414A7C: test    eax, eax
0x414A7E: jz      short loc_414A8F
0x414A80: cmp     dword ptr [eax], 0
0x414A83: jz      short loc_414A88
0x414A85: add     esi, 1
0x414A88: mov     eax, [eax+4]
0x414A8B: test    eax, eax
0x414A8D: jnz     short loc_414A80
0x414A8F: lea     ebx, [ecx+4]
0x414A92: mov     eax, ebx
0x414A94: xor     edx, edx
0x414A96: test    eax, eax
0x414A98: jz      short loc_414AAF
0x414A9A: lea     ebx, [ebx+0]
0x414AA0: cmp     dword ptr [eax], 0
0x414AA3: jz      short loc_414AA8
0x414AA5: add     edx, 1
0x414AA8: mov     eax, [eax+4]
0x414AAB: test    eax, eax
0x414AAD: jnz     short loc_414AA0
0x414AAF: cmp     esi, edx
0x414AB1: jz      short loc_414ABB
