0x5D73C0: push    0FFFFFFFFh
0x5D73C2: push    offset ??0EnchantmentMenu@@QAE@XZ_SEH
0x5D73C7: mov     eax, large fs:0
0x5D73CD: push    eax
0x5D73CE: sub     esp, 8
0x5D73D1: push    ebx
0x5D73D2: push    esi
0x5D73D3: mov     eax, ds:0B30AACh
0x5D73D8: xor     eax, esp
0x5D73DA: push    eax
0x5D73DB: lea     eax, [esp+20h+var_C]
0x5D73DF: mov     large fs:0, eax
0x5D73E5: mov     esi, ecx
0x5D73E7: mov     [esp+20h+var_14], esi
0x5D73EB: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5D73F0: xor     ebx, ebx
0x5D73F2: push    44h ; 'D'; Size
0x5D73F4: mov     [esp+24h+var_4], ebx
0x5D73F8: mov     dword ptr [esi], offset ??_7SpellMakingMenu@@6B@; const SpellMakingMenu::`vftable'
0x5D73FE: mov     [esi+28h], ebx
0x5D7401: mov     [esi+2Ch], ebx
0x5D7404: mov     [esi+30h], ebx
0x5D7407: mov     [esi+34h], ebx
0x5D740A: mov     [esi+38h], ebx
0x5D740D: mov     [esi+3Ch], ebx
0x5D7410: mov     [esi+40h], ebx
0x5D7413: mov     [esi+44h], ebx
0x5D7416: mov     [esi+48h], ebx
0x5D7419: mov     [esi+4Ch], ebx
0x5D741C: mov     [esi+6Ch], bl
0x5D741F: call    FormHeapAlloc
0x5D7424: add     esp, 4
0x5D7427: mov     [esp+20h+var_10], eax
0x5D742B: cmp     eax, ebx
0x5D742D: mov     byte ptr [esp+20h+var_4], 1
0x5D7432: jz      short loc_5D743D
0x5D7434: mov     ecx, eax; this
0x5D7436: call    ??0SpellItem@@QAE@XZ; SpellItem::SpellItem(void)
0x5D743B: jmp     short loc_5D743F
0x5D743D: xor     eax, eax
0x5D743F: fldz
0x5D7441: push    28h ; '('; Size
0x5D7443: fst     dword ptr [esi+64h]
0x5D7446: mov     byte ptr [esp+24h+var_4], bl
0x5D744A: fstp    dword ptr [esi+68h]
0x5D744D: mov     [esi+74h], eax
0x5D7450: mov     [esi+5Ch], ebx
0x5D7453: mov     byte ptr [esi+60h], 0FFh
0x5D7457: mov     [esi+58h], ebx
0x5D745A: call    FormHeapAlloc
0x5D745F: add     esp, 4
0x5D7462: mov     [esp+20h+var_10], eax
0x5D7466: cmp     eax, ebx
0x5D7468: mov     byte ptr [esp+20h+var_4], 2
0x5D746D: jz      short loc_5D748D
0x5D746F: mov     ecx, eax
0x5D7471: call    sub_57FE70
0x5D7476: mov     [esi+70h], eax
0x5D7479: mov     eax, esi
0x5D747B: mov     ecx, [esp+20h+var_C]
0x5D747F: mov     large fs:0, ecx
0x5D7486: pop     ecx
0x5D7487: pop     esi
0x5D7488: pop     ebx
0x5D7489: add     esp, 14h
0x5D748C: retn
0x5D748D: mov     [esi+70h], ebx
0x5D7490: mov     eax, esi
0x5D7492: mov     ecx, [esp+20h+var_C]
0x5D7496: mov     large fs:0, ecx
0x5D749D: pop     ecx
0x5D749E: pop     esi
0x5D749F: pop     ebx
0x5D74A0: add     esp, 14h
0x5D74A3: retn
