0x43DD80: push    esi
0x43DD81: mov     esi, ecx
0x43DD83: mov     ecx, [esi+20h]
0x43DD86: mov     eax, [ecx]
0x43DD88: mov     edx, [eax+170h]
0x43DD8E: push    edi
0x43DD8F: call    edx
0x43DD91: test    eax, eax
0x43DD93: jz      short loc_43DD9D
0x43DD95: lea     edi, [eax+0ACh]
0x43DD9B: jmp     short loc_43DD9F
0x43DD9D: xor     edi, edi
0x43DD9F: mov     eax, [esi+20h]
0x43DDA2: mov     edx, [esi+14h]
0x43DDA5: push    0
0x43DDA7: push    1
0x43DDA9: push    eax
0x43DDAA: mov     eax, [esi+10h]
0x43DDAD: push    esi
0x43DDAE: mov     cl, 10h
0x43DDB0: call    __allshr
0x43DDB5: movzx   ecx, al
0x43DDB8: push    ecx
0x43DDB9: mov     ecx, ModelLoaderPtr
0x43DDBF: push    edi
0x43DDC0: call    sub_43D000
0x43DDC5: mov     edx, [esi+20h]
0x43DDC8: mov     eax, [esi+10h]
0x43DDCB: push    edx
0x43DDCC: mov     edx, [esi+14h]
0x43DDCF: push    esi
0x43DDD0: mov     cl, 10h
0x43DDD2: call    __allshr
0x43DDD7: mov     ecx, ModelLoaderPtr
0x43DDDD: movzx   eax, al
0x43DDE0: push    eax
0x43DDE1: push    edi
0x43DDE2: call    sub_43CDE0
0x43DDE7: mov     ecx, [esi+20h]
0x43DDEA: call    sub_5E4DD0
0x43DDEF: pop     edi
0x43DDF0: mov     ecx, esi
0x43DDF2: pop     esi
0x43DDF3: jmp     sub_43C9B0
