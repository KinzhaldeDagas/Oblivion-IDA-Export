0x5BE5C0: cmp     byte ptr [esp+arg_0], 0
0x5BE5C5: push    ebx
0x5BE5C6: push    esi
0x5BE5C7: mov     esi, ecx
0x5BE5C9: mov     ecx, [esi+48h]
0x5BE5CC: mov     edx, [esi+5Ch]
0x5BE5CF: push    edi; a3
0x5BE5D0: jnz     short loc_5BE5E6
0x5BE5D2: mov     eax, [esi+34h]
0x5BE5D5: mov     [esi+34h], ecx
0x5BE5D8: mov     ecx, [esi+70h]
0x5BE5DB: mov     [esi+48h], edx
0x5BE5DE: mov     [esi+5Ch], ecx
0x5BE5E1: mov     [esi+70h], eax
0x5BE5E4: jmp     short loc_5BE5F8
0x5BE5E6: mov     eax, [esi+70h]
0x5BE5E9: mov     [esi+70h], edx
0x5BE5EC: mov     edx, [esi+34h]
0x5BE5EF: mov     [esi+5Ch], ecx
0x5BE5F2: mov     [esi+48h], edx
0x5BE5F5: mov     [esi+34h], eax
0x5BE5F8: lea     edi, [esi+30h]
0x5BE5FB: mov     ebx, 4
0x5BE600: mov     eax, [edi+4]
0x5BE603: add     eax, 0FFFFFFE7h; switch 76 cases
0x5BE606: cmp     eax, 4Bh
0x5BE609: ja      short def_5BE612; jumptable 005BE612 default case, cases 26-49,51-74,76-99
0x5BE60B: movzx   eax, ds:byte_5BE6A4[eax]
0x5BE612: jmp     ds:jpt_5BE612[eax*4]; switch jump
0x5BE619: mov     ecx, [edi]; jumptable 005BE612 case 25
0x5BE61B: add     ecx, 1
0x5BE61E: mov     [esp+0Ch+arg_0], ecx
0x5BE622: fild    [esp+0Ch+arg_0]
0x5BE626: push    ecx
0x5BE627: mov     ecx, [esi+98h]
0x5BE62D: jmp     short loc_5BE66F
0x5BE62F: mov     edx, [edi]; jumptable 005BE612 case 50
0x5BE631: add     edx, 1
0x5BE634: mov     [esp+0Ch+arg_0], edx
0x5BE638: fild    [esp+0Ch+arg_0]
0x5BE63C: push    ecx
0x5BE63D: mov     ecx, [esi+9Ch]
0x5BE643: jmp     short loc_5BE66F
0x5BE645: mov     eax, [edi]; jumptable 005BE612 case 75
0x5BE647: add     eax, 1
0x5BE64A: mov     [esp+0Ch+arg_0], eax
0x5BE64E: fild    [esp+0Ch+arg_0]
0x5BE652: push    ecx
0x5BE653: mov     ecx, [esi+0A0h]
0x5BE659: jmp     short loc_5BE66F
0x5BE65B: mov     ecx, [edi]; jumptable 005BE612 case 100
0x5BE65D: add     ecx, 1
0x5BE660: mov     [esp+0Ch+arg_0], ecx
0x5BE664: fild    [esp+0Ch+arg_0]
0x5BE668: push    ecx
0x5BE669: mov     ecx, [esi+0A4h]; this
0x5BE66F: fstp    [esp+10h+a2]; a3
0x5BE672: push    0FAEh; a2
0x5BE677: call    Tile_SetFloat
0x5BE67C: add     edi, 14h; jumptable 005BE612 default case, cases 26-49,51-74,76-99
0x5BE67F: sub     ebx, 1
0x5BE682: jnz     loc_5BE600
0x5BE688: pop     edi
0x5BE689: pop     esi
0x5BE68A: pop     ebx
0x5BE68B: retn    4
