0x90C8D0: push    esi
0x90C8D1: push    edi
0x90C8D2: mov     edi, [esp+8+arg_0]
0x90C8D6: push    edi
0x90C8D7: mov     esi, ecx
0x90C8D9: call    sub_929DD0
0x90C8DE: test    edi, edi
0x90C8E0: mov     dword ptr [esi], offset off_A9C4D4
0x90C8E6: jz      short loc_90C939
0x90C8E8: mov     eax, [esi+28h]
0x90C8EB: xor     edx, edx
0x90C8ED: test    eax, eax
0x90C8EF: jle     short loc_90C939
0x90C8F1: push    ebx
0x90C8F2: push    ebp
0x90C8F3: xor     edi, edi
0x90C8F5: mov     bl, 1
0x90C8F7: mov     ecx, [esi+40h]
0x90C8FA: mov     eax, [esi+24h]
0x90C8FD: mov     ecx, [ecx+edx*4]
0x90C900: mov     ebp, [ecx]
0x90C902: add     eax, edi
0x90C904: cmp     [eax+10h], bl
0x90C907: mov     [eax], ebp
0x90C909: jnz     short loc_90C910
0x90C90B: mov     ebp, [ecx+0Ch]
0x90C90E: jmp     short loc_90C913
0x90C910: mov     ebp, [ecx+18h]
0x90C913: cmp     [eax+11h], bl
0x90C916: mov     [eax+0Ch], ebp
0x90C919: jnz     short loc_90C920
0x90C91B: mov     ebp, [ecx+24h]
0x90C91E: jmp     short loc_90C923
0x90C920: mov     ebp, [ecx+3Ch]
0x90C923: mov     [eax+1Ch], ebp
0x90C926: mov     ecx, [ecx+30h]
0x90C929: mov     [eax+24h], ecx
0x90C92C: mov     eax, [esi+28h]
0x90C92F: inc     edx
0x90C930: add     edi, 30h ; '0'
0x90C933: cmp     edx, eax
0x90C935: jl      short loc_90C8F7
0x90C937: pop     ebp
0x90C938: pop     ebx
0x90C939: pop     edi
0x90C93A: mov     eax, esi
0x90C93C: pop     esi
0x90C93D: retn    4
