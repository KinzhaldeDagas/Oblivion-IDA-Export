0x75FD90: push    ebp
0x75FD91: push    esi
0x75FD92: push    edi
0x75FD93: mov     edi, ecx
0x75FD95: mov     ecx, [edi+58h]
0x75FD98: xor     ebp, ebp
0x75FD9A: test    ecx, ecx
0x75FD9C: jz      short loc_75FDBF
0x75FD9E: mov     eax, ds:0B42040h
0x75FDA3: mov     esi, [eax]
0x75FDA5: mov     edx, [ecx]
0x75FDA7: mov     eax, [edx+50h]
0x75FDAA: add     esi, 0ECh ; 'ì'
0x75FDB0: call    eax
0x75FDB2: mov     ecx, ds:0B42040h
0x75FDB8: mov     edx, [esi]
0x75FDBA: push    eax
0x75FDBB: call    edx
0x75FDBD: jmp     short loc_75FDD4
0x75FDBF: mov     ecx, ds:0B42040h
0x75FDC5: movzx   edx, byte ptr [edi+5Ch]
0x75FDC9: mov     eax, [ecx]
0x75FDCB: mov     eax, [eax+0ECh]
0x75FDD1: push    edx
0x75FDD2: call    eax
0x75FDD4: mov     ecx, [edi+30h]; this
0x75FDD7: test    ecx, ecx
0x75FDD9: jz      short loc_75FDE0
0x75FDDB: call    NiD3DRenderStateGroup__SetRenderStates
0x75FDE0: push    ebx
0x75FDE1: movzx   ebx, word ptr [edi+2Ah]
0x75FDE5: xor     esi, esi
0x75FDE7: test    ebx, ebx
0x75FDE9: jbe     short loc_75FE09
0x75FDEB: jmp     short loc_75FDF0
0x75FDED: align 10h
0x75FDF0: mov     ecx, [edi+24h]
0x75FDF3: mov     ecx, [ecx+esi*4]
0x75FDF6: test    ecx, ecx
0x75FDF8: jz      short loc_75FE09
0x75FDFA: call    sub_772400
0x75FDFF: add     esi, 1
0x75FE02: cmp     esi, ebx
0x75FE04: movzx   ebp, al
0x75FE07: jb      short loc_75FDF0
0x75FE09: cmp     esi, ds:0B28CB8h
0x75FE0F: pop     ebx
0x75FE10: jnb     short loc_75FE1B
0x75FE12: push    esi
0x75FE13: call    sub_771790
0x75FE18: add     esp, 4
0x75FE1B: pop     edi
0x75FE1C: pop     esi
0x75FE1D: mov     eax, ebp
0x75FE1F: pop     ebp
0x75FE20: retn    20h ; ' '
