0x4A7998: lea     edx, [eax+1]
0x4A799B: jmp     short loc_4A79A0
0x4A799D: align 10h
0x4A79A0: mov     cl, [eax]
0x4A79A2: add     eax, 1
0x4A79A5: test    cl, cl
0x4A79A7: jnz     short loc_4A79A0
0x4A79A9: sub     eax, edx
0x4A79AB: lea     ebx, [eax+1]
0x4A79AE: jmp     short Setting_SetStringValue___CheckValue
