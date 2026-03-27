0x77C8E0: push    ecx
0x77C8E1: mov     edx, [esp+4+arg_0]
0x77C8E5: mov     ecx, [ecx+20h]
0x77C8E8: push    esi
0x77C8E9: lea     eax, [esp+8+var_4]
0x77C8ED: push    eax
0x77C8EE: push    edx
0x77C8EF: mov     [esp+10h+var_4], 0
0x77C8F7: call    sub_4A1AB0
0x77C8FC: test    al, al
0x77C8FE: mov     esi, [esp+8+var_4]
0x77C902: jz      short loc_77C927
0x77C904: test    esi, esi
0x77C906: jz      short loc_77C920
0x77C908: lea     eax, [esi+4]
0x77C90B: push    eax; lpAddend
0x77C90C: call    dword ptr ds:0A2807Ch
0x77C912: test    eax, eax
0x77C914: jnz     short loc_77C920
0x77C916: mov     edx, [esi]
0x77C918: mov     eax, [edx]
0x77C91A: push    1
0x77C91C: mov     ecx, esi
0x77C91E: call    eax
0x77C920: mov     eax, esi
0x77C922: pop     esi
0x77C923: pop     ecx
0x77C924: retn    4
0x77C927: test    esi, esi
0x77C929: jz      short loc_77C943
0x77C92B: lea     ecx, [esi+4]
0x77C92E: push    ecx; lpAddend
0x77C92F: call    dword ptr ds:0A2807Ch
0x77C935: test    eax, eax
0x77C937: jnz     short loc_77C943
0x77C939: mov     edx, [esi]
0x77C93B: mov     eax, [edx]
0x77C93D: push    1
0x77C93F: mov     ecx, esi
0x77C941: call    eax
0x77C943: xor     eax, eax
0x77C945: pop     esi
0x77C946: pop     ecx
0x77C947: retn    4
