0x953680: mov     eax, [ecx+14h]
0x953683: push    ebx
0x953684: mov     ebx, [esp+4+arg_4]
0x953688: push    ebp
0x953689: mov     ebp, [esp+8+arg_8]
0x95368D: push    esi
0x95368E: lea     esi, [ecx+0Ch]
0x953691: mov     ecx, [esi+4]
0x953694: and     eax, 3FFFFFFFh
0x953699: cmp     ecx, eax
0x95369B: push    edi
0x95369C: mov     edi, [esp+10h+arg_0]
0x9536A0: jnz     short loc_9536AD
0x9536A2: push    0Ch
0x9536A4: push    esi
0x9536A5: call    sub_8A6EE0
0x9536AA: add     esp, 8
0x9536AD: mov     eax, [esi+4]
0x9536B0: mov     edx, [esi]
0x9536B2: lea     ecx, [eax+eax*2]
0x9536B5: lea     eax, [edx+ecx*4]
0x9536B8: mov     [eax], edi
0x9536BA: mov     [eax+4], ebx
0x9536BD: mov     [eax+8], ebp
0x9536C0: mov     eax, [esi+4]
0x9536C3: pop     edi
0x9536C4: inc     eax
0x9536C5: mov     [esi+4], eax
0x9536C8: pop     esi
0x9536C9: pop     ebp
0x9536CA: pop     ebx
0x9536CB: retn    0Ch
