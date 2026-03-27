0x6B8460: mov     eax, [ecx+10h]
0x6B8463: push    esi
0x6B8464: lea     esi, [eax+1]
0x6B8467: mov     dl, [eax]
0x6B8469: add     eax, 1
0x6B846C: test    dl, dl
0x6B846E: jnz     short loc_6B8467
0x6B8470: sub     eax, esi
0x6B8472: movzx   dx, al
0x6B8476: mov     eax, [ecx]
0x6B8478: lea     esi, [eax+1]
0x6B847B: jmp     short loc_6B8480
0x6B847D: align 10h
0x6B8480: mov     cl, [eax]
0x6B8482: add     eax, 1
0x6B8485: test    cl, cl
0x6B8487: jnz     short loc_6B8480
0x6B8489: sub     eax, esi
0x6B848B: movzx   ax, al
0x6B848F: add     ax, dx
0x6B8492: add     ax, 0Ah
0x6B8496: pop     esi
0x6B8497: retn
