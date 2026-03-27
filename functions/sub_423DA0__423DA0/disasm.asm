0x423DA0: push    ebx
0x423DA1: push    esi
0x423DA2: push    13h; a2
0x423DA4: mov     esi, ecx
0x423DA6: call    BaseExtraList_GetExtraData
0x423DAB: test    eax, eax
0x423DAD: mov     ebx, [esp+8+arg_0]
0x423DB1: jnz     short loc_423DCB
0x423DB3: cmp     ebx, 1
0x423DB6: jz      short loc_423DC6
0x423DB8: mov     ecx, esi
0x423DBA: call    sub_41EB90
0x423DBF: test    eax, eax
0x423DC1: jz      short loc_423DC6
0x423DC3: mov     [eax+0Ch], bl
0x423DC6: pop     esi
0x423DC7: pop     ebx
0x423DC8: retn    4
0x423DCB: cmp     ebx, 1
0x423DCE: jnz     short loc_423DBF
0x423DD0: cmp     dword ptr [eax+10h], 0
0x423DD4: jnz     short loc_423DBF
0x423DD6: push    ebx
0x423DD7: push    eax
0x423DD8: mov     ecx, esi
0x423DDA: call    BaseExtraList_RemoveExtraByPtr
0x423DDF: pop     esi
0x423DE0: pop     ebx
0x423DE1: retn    4
