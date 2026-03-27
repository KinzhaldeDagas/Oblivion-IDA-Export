0x595080: push    esi
0x595081: mov     esi, ecx
0x595083: mov     ecx, [esi+0A0h]
0x595089: push    edi
0x59508A: call    sub_57D2F0
0x59508F: test    al, al
0x595091: mov     edi, [esp+8+arg_0]
0x595095: jz      short loc_5950A6
0x595097: mov     ecx, [esi+0A0h]
0x59509D: push    0
0x59509F: call    sub_57DD90
0x5950A4: jmp     short loc_5950B7
0x5950A6: cmp     edi, 2
0x5950A9: jz      short loc_5950B0
0x5950AB: cmp     edi, 3
0x5950AE: jnz     short loc_5950BE
0x5950B0: mov     ecx, esi
0x5950B2: call    sub_592FB0
0x5950B7: mov     ecx, esi
0x5950B9: call    sub_593710
0x5950BE: lea     eax, [edi-8]; switch 8 cases
0x5950C1: cmp     eax, 7
0x5950C4: ja      short AlchMenu_OnClick___def_5950C6; jumptable 005950C6 default case, cases 12,13
0x5950C6: jmp     ds:jpt_5950C6[eax*4]; switch jump
0x5950CD: call    sub_5932B0; jumptable 005950C6 case 15
0x5950D2: pop     edi
0x5950D3: pop     esi
0x5950D4: retn    8
0x5950D7: mov     ecx, esi; jumptable 005950C6 case 14
0x5950D9: call    AlchemyMenu_CreatePotion?
0x5950DE: pop     edi
0x5950DF: pop     esi
0x5950E0: retn    8
0x5950E3: mov     dword ptr ds:0B3B270h, 0; jumptable 005950C6 case 8
0x5950ED: jmp     short loc_595111
0x5950EF: mov     dword ptr ds:0B3B270h, 1; jumptable 005950C6 case 9
0x5950F9: jmp     short loc_595111
0x5950FB: mov     dword ptr ds:0B3B270h, 2; jumptable 005950C6 case 10
0x595105: jmp     short loc_595111
0x595107: mov     dword ptr ds:0B3B270h, 3; jumptable 005950C6 case 11
0x595111: push    0
0x595113: push    0
0x595115: push    0
0x595117: push    3
0x595119: call    sub_5D2070
0x59511E: add     esp, 10h
0x595121: pop     edi; jumptable 005950C6 default case, cases 12,13
0x595122: pop     esi
0x595123: retn    8
