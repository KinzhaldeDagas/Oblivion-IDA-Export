0x4FA1E0: push    ebx
0x4FA1E1: push    esi
0x4FA1E2: mov     ebx, ecx
0x4FA1E4: mov     ecx, ds:0B33B00h
0x4FA1EA: push    edi
0x4FA1EB: xor     edi, edi
0x4FA1ED: call    sub_45A170
0x4FA1F2: test    al, al
0x4FA1F4: jz      short loc_4FA1FB
0x4FA1F6: mov     edi, 6
0x4FA1FB: mov     esi, [ebx+0Ch]
0x4FA1FE: add     edi, 2
0x4FA201: test    esi, esi
0x4FA203: jz      short loc_4FA242
0x4FA205: fldz
