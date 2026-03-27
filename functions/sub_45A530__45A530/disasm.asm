0x45A530: mov     eax, ds:0B33398h
0x45A535: push    esi
0x45A536: push    edi
0x45A537: mov     edi, [eax+10h]
0x45A53A: mov     esi, ecx
0x45A53C: call    dword ptr ds:0A2808Ch
0x45A542: cmp     eax, edi
0x45A544: jnz     short loc_45A55F
0x45A546: cmp     [esp+8+arg_0], 0
0x45A54B: jz      short loc_45A556
0x45A54D: or      dword ptr [esi+18h], 1
0x45A551: pop     edi
0x45A552: pop     esi
0x45A553: retn    4
0x45A556: and     dword ptr [esi+18h], 0FFFFFFFEh
0x45A55A: pop     edi
0x45A55B: pop     esi
0x45A55C: retn    4
0x45A55F: cmp     [esp+8+arg_0], 0
0x45A564: jz      short loc_45A572
0x45A566: or      dword ptr [esi+18h], 40000h
0x45A56D: pop     edi
0x45A56E: pop     esi
0x45A56F: retn    4
0x45A572: and     dword ptr [esi+18h], 0FFFBFFFFh
0x45A579: pop     edi
0x45A57A: pop     esi
0x45A57B: retn    4
