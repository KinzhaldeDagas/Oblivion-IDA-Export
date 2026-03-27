0x558680: push    ebx
0x558681: mov     ebx, [esp+4+arg_8]
0x558685: push    ebp
0x558686: push    esi
0x558687: mov     esi, [esp+0Ch+arg_4]
0x55868B: push    edi
0x55868C: mov     edi, [esp+10h+arg_0]
0x558690: mov     eax, esi
0x558692: sub     eax, edi
0x558694: sar     eax, 6
0x558697: shl     eax, 6
0x55869A: mov     ebp, ebx
0x55869C: sub     ebp, eax
0x55869E: cmp     edi, esi
0x5586A0: jz      short loc_5586B4
0x5586A2: sub     ebx, esi
0x5586A4: sub     esi, 40h ; '@'
0x5586A7: push    esi
0x5586A8: lea     ecx, [ebx+esi]
0x5586AB: call    sub_557770
0x5586B0: cmp     esi, edi
0x5586B2: jnz     short loc_5586A4
0x5586B4: pop     edi
0x5586B5: pop     esi
0x5586B6: mov     eax, ebp
0x5586B8: pop     ebp
0x5586B9: pop     ebx
0x5586BA: retn
