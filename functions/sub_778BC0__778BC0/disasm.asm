0x778BC0: mov     eax, [esp+arg_4]
0x778BC4: cmp     dword ptr [eax+1Ch], 0
0x778BC8: jz      short loc_778BCF
0x778BCA: xor     al, al
0x778BCC: retn    8
0x778BCF: mov     ecx, [esp+arg_0]
0x778BD3: mov     edx, [ecx]
0x778BD5: push    eax
0x778BD6: mov     eax, [edx+4]
0x778BD9: call    eax
0x778BDB: mov     al, 1
0x778BDD: retn    8
