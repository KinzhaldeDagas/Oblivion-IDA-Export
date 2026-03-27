0x6DEDD0: push    esi
0x6DEDD1: mov     esi, [esp+4+arg_0]
0x6DEDD5: push    edi
0x6DEDD6: push    esi
0x6DEDD7: mov     edi, ecx
0x6DEDD9: call    sub_6ECB70
0x6DEDDE: cmp     dword ptr [esi+0D8h], 0A000102h
0x6DEDE8: jnb     short loc_6DEDFF
0x6DEDEA: mov     ax, [esi+25Ah]
0x6DEDF1: shr     ax, 5
0x6DEDF5: and     ax, 0FFh
0x6DEDF9: mov     [edi+40h], ax
0x6DEDFD: jmp     short loc_6DEE23
0x6DEDFF: mov     eax, [esi+21Ch]
0x6DEE05: mov     edx, [eax+4]
0x6DEE08: push    1
0x6DEE0A: lea     ecx, [esp+0Ch+arg_0]
0x6DEE0E: push    ecx
0x6DEE0F: push    2
0x6DEE11: add     edi, 40h ; '@'
0x6DEE14: push    edi
0x6DEE15: push    eax
0x6DEE16: mov     [esp+1Ch+arg_0], 2
0x6DEE1E: call    edx
0x6DEE20: add     esp, 14h
0x6DEE23: cmp     dword ptr [esi+0D8h], 0A010068h
0x6DEE2D: jnb     short loc_6DEE36
0x6DEE2F: mov     ecx, esi
0x6DEE31: call    sub_712A20
0x6DEE36: pop     edi
0x6DEE37: pop     esi
0x6DEE38: retn    4
