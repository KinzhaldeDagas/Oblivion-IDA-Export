0x75F370: push    esi
0x75F371: mov     esi, [esp+4+arg_0]
0x75F375: test    esi, esi
0x75F377: push    edi
0x75F378: mov     edi, ecx
0x75F37A: jz      short loc_75F3A8
0x75F37C: mov     eax, [esi]
0x75F37E: mov     edx, [eax+4]
0x75F381: mov     ecx, esi
0x75F383: call    edx
0x75F385: test    eax, eax
0x75F387: jz      short loc_75F39E
0x75F389: lea     esp, [esp+0]
0x75F390: cmp     eax, offset dword_B3E7E8
0x75F395: jz      short loc_75F3CA
0x75F397: mov     eax, [eax+4]
0x75F39A: test    eax, eax
0x75F39C: jnz     short loc_75F390
0x75F39E: xor     al, al
0x75F3A0: neg     al
0x75F3A2: sbb     eax, eax
0x75F3A4: and     eax, esi
0x75F3A6: mov     esi, eax
0x75F3A8: mov     eax, [edi]
0x75F3AA: mov     edx, [eax+0ACh]
0x75F3B0: lea     ecx, [esp+8+arg_0]
0x75F3B4: push    ecx
0x75F3B5: mov     ecx, edi
0x75F3B7: call    edx
0x75F3B9: mov     eax, [esp+8+arg_0]
0x75F3BD: push    eax
0x75F3BE: mov     ecx, esi
0x75F3C0: call    sub_6E80F0
0x75F3C5: pop     edi
0x75F3C6: pop     esi
0x75F3C7: retn    8
0x75F3CA: mov     al, 1
0x75F3CC: jmp     short loc_75F3A0
