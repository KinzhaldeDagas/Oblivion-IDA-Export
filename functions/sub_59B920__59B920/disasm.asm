0x59B920: push    ebx
0x59B921: mov     bl, 3
0x59B923: add     dword ptr [ecx+5Ch], 1
0x59B927: cmp     dword ptr [ecx+5Ch], 3
0x59B92B: jl      short loc_59B934
0x59B92D: mov     dword ptr [ecx+5Ch], 0
0x59B934: mov     eax, ds:0B33398h
0x59B939: mov     edx, [eax+20h]
0x59B93C: mov     eax, [ecx+5Ch]
0x59B93F: sub     eax, 0
0x59B942: jz      short loc_59B95D
0x59B944: sub     eax, 1
0x59B947: jz      short loc_59B956
0x59B949: sub     eax, 1
0x59B94C: jnz     short loc_59B969
0x59B94E: mov     eax, [edx+18F0h]
0x59B954: jmp     short loc_59B965
0x59B956: xor     eax, eax
0x59B958: cmp     [edx+2Ch], eax
0x59B95B: jmp     short loc_59B962
0x59B95D: xor     eax, eax
0x59B95F: cmp     [edx+28h], eax
0x59B962: setnz   al
0x59B965: test    eax, eax
0x59B967: jnz     short loc_59B96E
0x59B969: add     bl, 0FFh
0x59B96C: jnz     short loc_59B923
0x59B96E: xor     cl, cl
0x59B970: cmp     cl, bl
0x59B972: sbb     eax, eax
0x59B974: neg     eax
0x59B976: pop     ebx
0x59B977: retn
