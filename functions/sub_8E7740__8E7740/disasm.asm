0x8E7740: sub     esp, 8
0x8E7743: mov     ecx, [esp+8+arg_4]
0x8E7747: mov     eax, [ecx+48h]
0x8E774A: push    ebx
0x8E774B: mov     ebx, [esp+0Ch+arg_8]
0x8E774F: push    esi
0x8E7750: cmp     eax, [ebx+48h]
0x8E7753: setle   al
0x8E7756: test    al, al
0x8E7758: push    edi
0x8E7759: mov     [esp+14h+var_4], al
0x8E775D: jz      short loc_8E7761
0x8E775F: mov     ebx, ecx
0x8E7761: mov     edi, [ebx+48h]
0x8E7764: xor     al, al
0x8E7766: xor     edx, edx
0x8E7768: test    edi, edi
0x8E776A: mov     [esp+14h+var_8], al
0x8E776E: jle     short loc_8E7799
0x8E7770: mov     esi, [ebx+44h]
0x8E7773: push    ebp
0x8E7774: mov     ebp, [esp+18h+arg_0]
0x8E7778: mov     ecx, [esi]
0x8E777A: cmp     ecx, ebp
0x8E777C: ja      short loc_8E7788
0x8E777E: movzx   eax, word ptr [ebx+5Ah]
0x8E7782: add     eax, ecx
0x8E7784: cmp     ebp, eax
0x8E7786: jb      short loc_8E7796
0x8E7788: inc     edx
0x8E7789: add     esi, 4
0x8E778C: cmp     edx, edi
0x8E778E: jl      short loc_8E7778
0x8E7790: mov     al, [esp+18h+var_8]
0x8E7794: jmp     short loc_8E7798
0x8E7796: mov     al, 1
0x8E7798: pop     ebp
0x8E7799: mov     dl, [esp+14h+var_4]
0x8E779D: test    al, al
0x8E779F: mov     eax, [esp+14h+arg_8]
0x8E77A3: setnz   cl
0x8E77A6: test    dl, dl
0x8E77A8: pop     edi
0x8E77A9: setnz   dl
0x8E77AC: xor     cl, dl
0x8E77AE: pop     esi
0x8E77AF: pop     ebx
0x8E77B0: jnz     short loc_8E77B6
0x8E77B2: mov     eax, [esp+8+arg_4]
0x8E77B6: add     esp, 8
0x8E77B9: retn
