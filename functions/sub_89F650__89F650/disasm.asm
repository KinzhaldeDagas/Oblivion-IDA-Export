0x89F650: sub     esp, 8
0x89F653: push    esi
0x89F654: push    edi
0x89F655: mov     edi, [esp+10h+arg_4]
0x89F659: test    edi, edi
0x89F65B: mov     esi, ecx
0x89F65D: jnz     short loc_89F664
0x89F65F: mov     edi, offset dword_B3FA80
0x89F664: push    edi
0x89F665: call    sub_890A10
0x89F66A: test    al, al
0x89F66C: jz      short loc_89F684
0x89F66E: test    esi, esi
0x89F670: jz      short loc_89F684
0x89F672: mov     ecx, [esi+8]
0x89F675: test    ecx, ecx
0x89F677: jz      short loc_89F684
0x89F679: push    edi
0x89F67A: lea     eax, [esp+14h+var_8]
0x89F67E: push    eax
0x89F67F: call    sub_8BC7B0
0x89F684: mov     edx, [esp+10h+arg_0]
0x89F688: test    edx, edx
0x89F68A: jz      short loc_89F6A1
0x89F68C: xor     eax, eax
0x89F68E: test    esi, esi
0x89F690: jz      short loc_89F6A1
0x89F692: mov     ecx, [esi+8]
0x89F695: test    ecx, ecx
0x89F697: jz      short loc_89F6A1
0x89F699: push    eax
0x89F69A: push    edx
0x89F69B: push    edi
0x89F69C: call    sub_8BC750
0x89F6A1: pop     edi
0x89F6A2: pop     esi
0x89F6A3: add     esp, 8
0x89F6A6: retn    8
