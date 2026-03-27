0x8CA250: push    esi
0x8CA251: mov     esi, [ecx+34h]
0x8CA254: xor     eax, eax
0x8CA256: test    esi, esi
0x8CA258: jle     short loc_8CA298
0x8CA25A: mov     edx, [ecx+30h]
0x8CA25D: push    edi
0x8CA25E: mov     edi, [esp+8+arg_0]
0x8CA262: cmp     [edx], edi
0x8CA264: jz      short loc_8CA273
0x8CA266: inc     eax
0x8CA267: add     edx, 4
0x8CA26A: cmp     eax, esi
0x8CA26C: jl      short loc_8CA262
0x8CA26E: pop     edi
0x8CA26F: pop     esi
0x8CA270: retn    4
0x8CA273: test    eax, eax
0x8CA275: jl      short loc_8CA297
0x8CA277: mov     esi, [ecx+34h]
0x8CA27A: mov     edx, [ecx+30h]
0x8CA27D: dec     esi
0x8CA27E: mov     [ecx+34h], esi
0x8CA281: mov     esi, [edx+esi*4]
0x8CA284: mov     [edx+eax*4], esi
0x8CA287: mov     edx, [ecx+40h]
0x8CA28A: dec     edx
0x8CA28B: mov     [ecx+40h], edx
0x8CA28E: mov     ecx, [ecx+3Ch]
0x8CA291: mov     edx, [ecx+edx*4]
0x8CA294: mov     [ecx+eax*4], edx
0x8CA297: pop     edi
0x8CA298: pop     esi
0x8CA299: retn    4
