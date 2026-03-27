0x4415C0: push    esi
0x4415C1: push    edi
0x4415C2: mov     edi, ecx
0x4415C4: xor     esi, esi
0x4415C6: cmp     esi, ds:0B051DCh
0x4415CC: jnb     short loc_4415E2
0x4415CE: mov     eax, [edi+3Ch]
0x4415D1: mov     ecx, [eax+esi*4]
0x4415D4: test    ecx, ecx
0x4415D6: jz      short loc_4415DD
0x4415D8: call    sub_4CCDA0
0x4415DD: add     esi, 1
0x4415E0: jmp     short loc_4415C6
0x4415E2: xor     esi, esi
0x4415E4: cmp     esi, ds:0B051D4h
0x4415EA: jnb     short loc_441600
0x4415EC: mov     ecx, [edi+38h]
0x4415EF: mov     ecx, [ecx+esi*4]
0x4415F2: test    ecx, ecx
0x4415F4: jz      short loc_4415FB
0x4415F6: call    sub_4CCDA0
0x4415FB: add     esi, 1
0x4415FE: jmp     short loc_4415E4
0x441600: pop     edi
0x441601: pop     esi
0x441602: retn
