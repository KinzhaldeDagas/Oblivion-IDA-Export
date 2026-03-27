0x646572: and     al, 40h
0x646574: push    edx
0x646575: push    ebp
0x646576: mov     [eax+8], ecx
0x646579: mov     ecx, ds:0B3BF80h
0x64657F: push    edi
0x646580: call    sub_6836E0
0x646585: mov     ecx, ds:0B3BF80h
0x64658B: lea     eax, [esp-10h+arg_28]
0x64658F: push    eax
0x646590: push    edi
0x646591: mov     [esp-8+arg_28], 0
0x646596: call    sub_682820
0x64659B: test    al, al
0x64659D: jz      short loc_6465B4
0x64659F: cmp     [esp-10h+arg_28], 0
0x6465A4: jz      short loc_6465EA
0x6465A6: mov     ecx, [esi+34h]
0x6465A9: push    edi
0x6465AA: mov     [esp-0Ch+arg_1F], 1
0x6465AF: call    sub_689DC0
0x6465B4: mov     ecx, [esi+34h]
0x6465B7: test    ecx, ecx
0x6465B9: jz      short loc_6465C4
0x6465BB: mov     eax, [ecx]
0x6465BD: mov     edx, [eax+30h]
0x6465C0: push    0
0x6465C2: call    edx
0x6465C4: mov     al, [esp-0Ch+arg_1B]
0x6465C8: pop     edi
0x6465C9: pop     esi
0x6465CA: pop     ebp
0x6465CB: pop     ebx
0x6465CC: add     esp, 8
0x6465CF: retn    18h
0x6465D2: mov     ecx, [esp-10h+arg_3C]
0x6465D6: push    ecx
0x6465D7: mov     ecx, [esi+34h]
0x6465DA: push    ebp
0x6465DB: lea     edx, [esp-8+arg_2C]
0x6465DF: push    edx
0x6465E0: push    edi
0x6465E1: call    sub_68B030
0x6465E6: test    al, al
0x6465E8: jmp     short loc_6465A4
0x6465EA: push    0; int
0x6465EC: push    0; int
0x6465EE: mov     ecx, edi; int
0x6465F0: call    sub_5F7CF0
0x6465F5: jmp     short loc_6465B4
