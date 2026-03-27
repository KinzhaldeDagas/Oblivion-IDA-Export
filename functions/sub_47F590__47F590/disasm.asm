0x47F590: sub     esp, 0Ch
0x47F593: push    esi
0x47F594: mov     esi, [esp+10h+arg_0]
0x47F598: test    esi, esi
0x47F59A: jz      loc_47F64F
0x47F5A0: push    ebx
0x47F5A1: mov     ebx, [esi+60h]
0x47F5A4: push    edi
0x47F5A5: mov     edi, 1
0x47F5AA: cmp     ebx, edi
0x47F5AC: mov     [esp+18h+var_4], ebx
0x47F5B0: jbe     loc_47F649
0x47F5B6: mov     dl, 0FFh
0x47F5B8: push    ebp
0x47F5B9: lea     esp, [esp+0]
0x47F5C0: mov     eax, [esi+54h]
0x47F5C3: mov     ecx, [esi+58h]
0x47F5C6: mov     ebp, [eax+edi*4]
0x47F5C9: mov     eax, [ecx+edi*4]
0x47F5CC: mov     ecx, [esi+5Ch]
0x47F5CF: mov     ecx, [ecx+edi*4]
0x47F5D2: add     ecx, [esi+50h]
0x47F5D5: test    eax, eax
0x47F5D7: jbe     short loc_47F63D
0x47F5D9: mov     [esp+1Ch+var_C], 0
0x47F5E1: mov     [esp+1Ch+var_8], eax
0x47F5E5: test    ebp, ebp
0x47F5E7: mov     eax, [esp+1Ch+var_C]
0x47F5EB: jbe     short loc_47F627
0x47F5ED: lea     ebx, [edi-1]
0x47F5F0: mov     esi, ebp
0x47F5F2: cmp     ebx, 5; switch 6 cases
0x47F5F5: ja      short def_47F5F7
0x47F5F7: jmp     ds:jpt_47F5F7[ebx*4]; switch jump
0x47F5FE: mov     [eax+ecx+1], dl; jumptable 0047F5F7 case 1
0x47F602: jmp     short def_47F5F7
0x47F604: mov     [eax+ecx+1], dl; jumptable 0047F5F7 case 3
0x47F608: jmp     short loc_47F618; jumptable 0047F5F7 case 0
0x47F60A: mov     [eax+ecx+1], dl; jumptable 0047F5F7 case 4
0x47F60E: mov     [eax+ecx+2], dl; jumptable 0047F5F7 case 2
0x47F612: jmp     short def_47F5F7
0x47F614: mov     [eax+ecx+2], dl; jumptable 0047F5F7 case 5
0x47F618: mov     [eax+ecx], dl; jumptable 0047F5F7 case 0
