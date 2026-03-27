0x72CDF0: push    ebx
0x72CDF1: push    ebp
0x72CDF2: mov     ebp, [esp+8+arg_0]
0x72CDF6: push    esi
0x72CDF7: xor     eax, eax
0x72CDF9: xor     esi, esi
0x72CDFB: cmp     [ebp+8], eax
0x72CDFE: push    edi
0x72CDFF: jbe     short loc_72CE41
0x72CE01: mov     edi, [ecx+8]
0x72CE04: cmp     eax, edi
0x72CE06: jnb     short loc_72CE25
0x72CE08: mov     edx, [ebp+0]
0x72CE0B: movzx   ebx, word ptr [edx+esi*2]
0x72CE0F: mov     edx, [ecx]
0x72CE11: lea     edx, [edx+eax*2]
0x72CE14: cmp     [edx], bx
0x72CE17: jnb     short loc_72CE23
0x72CE19: add     eax, 1
0x72CE1C: add     edx, 2
0x72CE1F: cmp     eax, edi
0x72CE21: jb      short loc_72CE14
0x72CE23: cmp     eax, edi
0x72CE25: jz      short loc_72CE4A
0x72CE27: mov     ebx, [ecx]
0x72CE29: mov     edx, [ebp+0]
0x72CE2C: mov     bx, [ebx+eax*2]
0x72CE30: cmp     bx, [edx+esi*2]
0x72CE34: jnz     short loc_72CE4A
0x72CE36: add     esi, 1
0x72CE39: add     eax, 1
0x72CE3C: cmp     esi, [ebp+8]
0x72CE3F: jb      short loc_72CE04
0x72CE41: pop     edi
0x72CE42: pop     esi
0x72CE43: pop     ebp
0x72CE44: mov     al, 1
0x72CE46: pop     ebx
0x72CE47: retn    4
0x72CE4A: pop     edi
0x72CE4B: pop     esi
0x72CE4C: pop     ebp
0x72CE4D: xor     al, al
0x72CE4F: pop     ebx
0x72CE50: retn    4
