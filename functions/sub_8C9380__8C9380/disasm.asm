0x8C9380: push    ebp
0x8C9381: mov     ebp, esp
0x8C9383: and     esp, 0FFFFFFF0h
0x8C9386: sub     esp, 8
0x8C9389: push    esi
0x8C938A: push    edi
0x8C938B: mov     edi, [ebp+arg_0]
0x8C938E: push    edi
0x8C938F: mov     esi, ecx
0x8C9391: call    sub_8AEA60
0x8C9396: test    esi, esi
0x8C9398: jz      short loc_8C93A6
0x8C939A: mov     eax, [esi+8]
0x8C939D: test    eax, eax
0x8C939F: jz      short loc_8C93A6
0x8C93A1: mov     eax, [eax+10h]
0x8C93A4: jmp     short loc_8C93A8
0x8C93A6: xor     eax, eax
0x8C93A8: test    esi, esi
0x8C93AA: mov     [edi+8], eax
0x8C93AD: jz      short loc_8C93B9
0x8C93AF: mov     esi, [esi+8]
0x8C93B2: test    esi, esi
0x8C93B4: lea     eax, [esi+20h]
0x8C93B7: jnz     short loc_8C93BE
0x8C93B9: mov     eax, offset xmmword_B2F090
0x8C93BE: movaps  xmm0, xmmword ptr [eax]
0x8C93C1: movaps  xmmword ptr [edi+10h], xmm0
0x8C93C5: movaps  xmm0, xmmword ptr [eax+10h]
0x8C93C9: movaps  xmmword ptr [edi+20h], xmm0
0x8C93CD: movaps  xmm0, xmmword ptr [eax+20h]
0x8C93D1: movaps  xmmword ptr [edi+30h], xmm0
0x8C93D5: movaps  xmm0, xmmword ptr [eax+30h]
0x8C93D9: movaps  xmmword ptr [edi+40h], xmm0
0x8C93DD: pop     edi
0x8C93DE: pop     esi
0x8C93DF: mov     esp, ebp
0x8C93E1: pop     ebp
0x8C93E2: retn    4
