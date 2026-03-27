0x90D260: mov     eax, [ecx+4]
0x90D263: test    eax, eax
0x90D265: push    esi
0x90D266: mov     esi, [ecx+1Ch]
0x90D269: jz      short loc_90D27C
0x90D26B: jmp     short loc_90D270
0x90D26D: align 10h
0x90D270: mov     edx, [eax+1Ch]
0x90D273: mov     eax, [eax+4]
0x90D276: add     esi, edx
0x90D278: test    eax, eax
0x90D27A: jnz     short loc_90D270
0x90D27C: mov     edx, [esp+4+arg_0]
0x90D280: mov     eax, ecx
0x90D282: sub     edx, esi
0x90D284: add     edx, [eax+1Ch]
0x90D287: jns     short loc_90D297
0x90D289: mov     eax, [eax+4]
0x90D28C: test    eax, eax
0x90D28E: jnz     short loc_90D284
0x90D290: mov     eax, [ecx+18h]
0x90D293: pop     esi
0x90D294: retn    4
0x90D297: lea     ecx, [edx+edx*4]
0x90D29A: mov     edx, [eax+18h]
0x90D29D: lea     eax, [edx+ecx*4]
0x90D2A0: pop     esi
0x90D2A1: retn    4
