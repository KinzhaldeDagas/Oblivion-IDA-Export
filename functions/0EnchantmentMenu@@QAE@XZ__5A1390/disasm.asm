0x5A1390: push    0FFFFFFFFh
0x5A1392: push    offset ??0EnchantmentMenu@@QAE@XZ_SEH
0x5A1397: mov     eax, large fs:0
0x5A139D: push    eax
0x5A139E: sub     esp, 8
0x5A13A1: push    ebx
0x5A13A2: push    esi
0x5A13A3: mov     eax, ds:0B30AACh
0x5A13A8: xor     eax, esp
0x5A13AA: push    eax
0x5A13AB: lea     eax, [esp+20h+var_C]
0x5A13AF: mov     large fs:0, eax
0x5A13B5: mov     esi, ecx
0x5A13B7: mov     [esp+20h+var_14], esi
0x5A13BB: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5A13C0: xor     ebx, ebx
0x5A13C2: push    44h ; 'D'; Size
0x5A13C4: mov     [esp+24h+var_4], ebx
0x5A13C8: mov     dword ptr [esi], offset ??_7EnchantmentMenu@@6B@; const EnchantmentMenu::`vftable'
0x5A13CE: mov     [esi+3Ch], ebx
0x5A13D1: mov     [esi+44h], ebx
0x5A13D4: mov     [esi+50h], ebx
0x5A13D7: mov     [esi+48h], ebx
0x5A13DA: mov     [esi+4Ch], ebx
0x5A13DD: mov     [esi+54h], ebx
0x5A13E0: mov     [esi+58h], ebx
0x5A13E3: mov     [esi+5Ch], ebx
0x5A13E6: mov     [esi+60h], ebx
0x5A13E9: mov     [esi+64h], ebx
0x5A13EC: mov     [esi+68h], ebx
0x5A13EF: mov     [esi+6Ch], ebx
0x5A13F2: mov     [esi+70h], ebx
0x5A13F5: mov     [esi+74h], ebx
0x5A13F8: mov     [esi+78h], ebx
0x5A13FB: mov     [esi+7Ch], ebx
0x5A13FE: mov     [esi+80h], ebx
0x5A1404: mov     [esi+84h], ebx
0x5A140A: mov     [esi+2Ch], ebx
0x5A140D: mov     [esi+30h], ebx
0x5A1410: mov     [esi+34h], ebx
0x5A1413: mov     byte ptr [esi+9Ch], 1
0x5A141A: mov     [esi+9Dh], bl
0x5A1420: mov     [esi+90h], ebx
0x5A1426: call    FormHeapAlloc
0x5A142B: add     esp, 4
0x5A142E: mov     [esp+20h+var_10], eax
0x5A1432: cmp     eax, ebx
0x5A1434: mov     byte ptr [esp+20h+var_4], 1
0x5A1439: jz      short loc_5A1444
0x5A143B: mov     ecx, eax; this
0x5A143D: call    ??0EnchantmentItem@@QAE@XZ; EnchantmentItem::EnchantmentItem(void)
0x5A1442: jmp     short loc_5A1446
0x5A1444: xor     eax, eax
0x5A1446: push    28h ; '('; Size
0x5A1448: mov     byte ptr [esp+24h+var_4], bl
0x5A144C: mov     [esi+28h], eax
0x5A144F: mov     [esi+94h], ebx
0x5A1455: mov     [esi+88h], ebx
0x5A145B: mov     [esi+8Ch], ebx
0x5A1461: call    FormHeapAlloc
0x5A1466: add     esp, 4
0x5A1469: mov     [esp+20h+var_10], eax
0x5A146D: cmp     eax, ebx
0x5A146F: mov     byte ptr [esp+20h+var_4], 2
0x5A1474: jz      short loc_5A147F
0x5A1476: mov     ecx, eax
0x5A1478: call    sub_57FE70
0x5A147D: jmp     short loc_5A1481
0x5A147F: xor     eax, eax
0x5A1481: mov     [esi+98h], eax
0x5A1487: mov     [esi+38h], ebx
0x5A148A: mov     eax, esi
0x5A148C: mov     ecx, [esp+20h+var_C]
0x5A1490: mov     large fs:0, ecx
0x5A1497: pop     ecx
0x5A1498: pop     esi
0x5A1499: pop     ebx
0x5A149A: add     esp, 14h
0x5A149D: retn
