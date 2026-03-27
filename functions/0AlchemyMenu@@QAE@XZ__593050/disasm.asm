0x593050: push    0FFFFFFFFh
0x593052: push    offset ??0EnchantmentMenu@@QAE@XZ_SEH
0x593057: mov     eax, large fs:0
0x59305D: push    eax
0x59305E: sub     esp, 8
0x593061: push    ebx
0x593062: push    esi
0x593063: mov     eax, ds:0B30AACh
0x593068: xor     eax, esp
0x59306A: push    eax
0x59306B: lea     eax, [esp+20h+var_C]
0x59306F: mov     large fs:0, eax
0x593075: mov     esi, ecx
0x593077: mov     [esp+20h+var_14], esi
0x59307B: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x593080: fldz
0x593082: xor     ebx, ebx
0x593084: mov     dword ptr [esi], offset ??_7AlchemyMenu@@6B@; const AlchemyMenu::`vftable'
0x59308A: mov     [esi+0A8h], ebx
0x593090: mov     [esi+0ACh], ebx
0x593096: mov     [esi+28h], ebx
0x593099: mov     [esi+2Ch], ebx
0x59309C: mov     [esi+30h], ebx
0x59309F: mov     [esi+34h], ebx
0x5930A2: mov     [esi+38h], ebx
0x5930A5: mov     [esi+3Ch], ebx
0x5930A8: mov     [esi+40h], ebx
0x5930AB: mov     [esi+0B0h], ebx
0x5930B1: mov     [esi+68h], ebx
0x5930B4: mov     [esi+44h], ebx
0x5930B7: mov     [esi+0B4h], ebx
0x5930BD: mov     [esi+6Ch], ebx
0x5930C0: mov     [esi+48h], ebx
0x5930C3: mov     [esi+0B8h], ebx
0x5930C9: mov     [esi+70h], ebx
0x5930CC: mov     [esi+4Ch], ebx
0x5930CF: mov     [esi+0BCh], ebx
0x5930D5: mov     [esi+74h], ebx
0x5930D8: fstp    dword ptr [esi+8Ch]
0x5930DE: push    80h ; '€'; Size
0x5930E3: mov     [esp+24h+var_4], ebx
0x5930E7: mov     [esi+50h], ebx
0x5930EA: mov     [esi+54h], ebx
0x5930ED: mov     [esi+58h], ebx
0x5930F0: mov     [esi+5Ch], ebx
0x5930F3: mov     [esi+60h], ebx
0x5930F6: mov     [esi+64h], ebx
0x5930F9: mov     [esi+78h], ebx
0x5930FC: mov     [esi+7Ch], ebx
0x5930FF: mov     [esi+80h], ebx
0x593105: mov     [esi+84h], ebx
0x59310B: mov     [esi+90h], ebx
0x593111: mov     byte ptr [esi+0A6h], 0FFh
0x593118: call    FormHeapAlloc
0x59311D: add     esp, 4
0x593120: mov     [esp+20h+var_10], eax
0x593124: cmp     eax, ebx
0x593126: mov     byte ptr [esp+20h+var_4], 1
0x59312B: jz      short loc_593136
0x59312D: mov     ecx, eax; this
0x59312F: call    ??0AlchemyItem@@QAE@XZ; AlchemyItem::AlchemyItem(void)
0x593134: jmp     short loc_593138
0x593136: xor     eax, eax
0x593138: fldz
0x59313A: push    28h ; '('; Size
0x59313C: fst     dword ptr [esi+88h]
0x593142: mov     byte ptr [esp+24h+var_4], bl
0x593146: fstp    dword ptr [esi+98h]
0x59314C: mov     [esi+94h], eax
0x593152: mov     [esi+9Ch], ebx
0x593158: mov     [esi+0A4h], bl
0x59315E: call    FormHeapAlloc
0x593163: add     esp, 4
0x593166: mov     [esp+20h+var_10], eax
0x59316A: cmp     eax, ebx
0x59316C: mov     byte ptr [esp+20h+var_4], 2
0x593171: jz      short loc_593194
0x593173: mov     ecx, eax
0x593175: call    sub_57FE70
0x59317A: mov     [esi+0A0h], eax
0x593180: mov     eax, esi
0x593182: mov     ecx, [esp+20h+var_C]
0x593186: mov     large fs:0, ecx
0x59318D: pop     ecx
0x59318E: pop     esi
0x59318F: pop     ebx
0x593190: add     esp, 14h
0x593193: retn
0x593194: mov     [esi+0A0h], ebx
0x59319A: mov     eax, esi
0x59319C: mov     ecx, [esp+20h+var_C]
0x5931A0: mov     large fs:0, ecx
0x5931A7: pop     ecx
0x5931A8: pop     esi
0x5931A9: pop     ebx
0x5931AA: add     esp, 14h
0x5931AD: retn
