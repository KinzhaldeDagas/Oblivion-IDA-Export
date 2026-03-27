0x658550: push    ebx
0x658551: push    ebp
0x658552: mov     ebp, [esp+8+arg_0]
0x658556: push    esi
0x658557: mov     esi, ecx
0x658559: push    edi
0x65855A: mov     edi, [esi+0E4h]
0x658560: xor     ebx, ebx
0x658562: cmp     edi, ebp
0x658564: jz      short loc_6585B8
0x658566: cmp     edi, ebx
0x658568: jz      short loc_65857A
0x65856A: mov     ecx, edi
0x65856C: call    ContainerEntryExtraData_DestroyDataTable
0x658571: push    edi
0x658572: call    FormHeapFree
0x658577: add     esp, 4
0x65857A: cmp     ebp, ebx
0x65857C: mov     [esi+0E4h], ebp
0x658582: mov     [esi+0F4h], bl
0x658588: mov     [esi+0F5h], bl
0x65858E: jz      short loc_6585B8
0x658590: mov     ebp, [ebp+8]
0x658593: cmp     ebp, ebx
0x658595: jz      short loc_6585B8
0x658597: movsx   eax, byte ptr [ebp+90h]
0x65859E: sub     eax, 4
0x6585A1: jz      short loc_6585B1
0x6585A3: sub     eax, 1
0x6585A6: jnz     short loc_6585B8
0x6585A8: mov     byte ptr [esi+0F4h], 1
0x6585AF: jmp     short loc_6585B8
0x6585B1: mov     byte ptr [esi+0F5h], 1
0x6585B8: mov     eax, [esi+17Ch]
0x6585BE: cmp     eax, ebx
0x6585C0: jz      short loc_658631
0x6585C2: cmp     [esi+0E4h], ebx
0x6585C8: jz      short loc_658631
0x6585CA: mov     ecx, [eax+4]
0x6585CD: cmp     ecx, ebx
0x6585CF: jz      short loc_6585DB
0x6585D1: mov     eax, [eax+98h]
0x6585D7: push    ecx
0x6585D8: push    eax
0x6585D9: jmp     short loc_6585E1
0x6585DB: mov     ecx, [esp+10h+arg_4]
0x6585DF: push    ecx
0x6585E0: push    ebx
0x6585E1: mov     ecx, esi
0x6585E3: call    sub_6541A0
0x6585E8: mov     ecx, ds:0B333C4h; this
0x6585EE: push    ebx; a2
0x6585EF: call    Player_GetAnimData
0x6585F4: cmp     [esi+17Ch], eax
0x6585FA: jnz     short loc_658628
0x6585FC: mov     ecx, ds:0B333C4h; this
0x658602: push    1; a2
0x658604: call    Player_GetAnimData
0x658609: mov     ecx, ds:0B333C4h; this
0x65860F: mov     edi, [eax+4]
0x658612: push    1; a2
0x658614: call    Player_GetAnimData
0x658619: mov     edx, [eax+98h]
0x65861F: push    edi
0x658620: push    edx
0x658621: mov     ecx, esi
0x658623: call    sub_6541A0
0x658628: mov     al, 1
0x65862A: pop     edi
0x65862B: pop     esi
0x65862C: pop     ebp
0x65862D: pop     ebx
0x65862E: retn    8
0x658631: mov     [esi+0FCh], ebx
0x658637: mov     [esi+100h], ebx
0x65863D: mov     [esi+104h], ebx
0x658643: mov     [esi+108h], ebx
0x658649: mov     [esi+10Ch], ebx
0x65864F: mov     [esi+110h], ebx
0x658655: mov     eax, ds:0B333C4h
0x65865A: cmp     eax, ebx
0x65865C: jz      short loc_658628
0x65865E: cmp     [eax+58h], esi
0x658661: mov     al, 1
0x658663: jnz     short loc_65862A
0x658665: pop     edi
0x658666: pop     esi
0x658667: pop     ebp
0x658668: mov     ds:0B3BA84h, ebx
0x65866E: mov     ds:0B3BA88h, ebx
0x658674: mov     ds:0B3BA8Ch, ebx
0x65867A: mov     ds:0B3BA90h, ebx
0x658680: mov     ds:0B3BA94h, ebx
0x658686: mov     ds:0B3BA98h, ebx
0x65868C: pop     ebx
0x65868D: retn    8
