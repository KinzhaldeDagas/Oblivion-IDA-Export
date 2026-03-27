0x9429A0: mov     eax, [esp+arg_0]
0x9429A4: mov     edx, [ecx+8]
0x9429A7: inc     eax
0x9429A8: cmp     eax, edx
0x9429AA: jg      short locret_9429BE
0x9429AC: mov     ecx, [ecx]
0x9429AE: lea     ecx, [ecx+eax*4]
0x9429B1: cmp     dword ptr [ecx], 0FFFFFFFFh
0x9429B4: jnz     short locret_9429BE
0x9429B6: inc     eax
0x9429B7: add     ecx, 4
0x9429BA: cmp     eax, edx
0x9429BC: jle     short loc_9429B1
0x9429BE: retn    4
