0x663340: mov     eax, ds:0B33398h
0x663345: sub     esp, 8
0x663348: cmp     byte ptr [eax+4], 0
0x66334C: push    esi; ArgList
0x66334D: mov     esi, ecx
0x66334F: jnz     loc_6634BD
0x663355: cmp     dword ptr [esi+70Ch], 0
0x66335C: jnz     short loc_663372
0x66335E: push    offset aPlayercharac_0; " PlayerCharacter::RestoreInitialState()"...
0x663363: call    PrintError
0x663368: add     esp, 4
0x66336B: pop     esi
0x66336C: add     esp, 8
0x66336F: retn    4
0x663372: mov     ecx, ds:0B33B00h
0x663378: push    ebp
0x663379: push    edi
0x66337A: call    sub_4523F0
0x66337F: mov     eax, ds:0B33B00h
0x663384: mov     cl, [eax+71h]
0x663387: mov     [eax+7Ch], cl
0x66338A: mov     ecx, ds:0B33B00h
0x663390: mov     byte ptr ds:0B3BB07h, 0
0x663397: call    sub_45A500
0x66339C: mov     ecx, ds:0B33B00h
0x6633A2: push    1
0x6633A4: mov     [esp+18h+var_4], al
0x6633A8: call    sub_45A530
0x6633AD: mov     ecx, ds:0B33B00h
0x6633B3: push    esi
0x6633B4: call    sub_459FA0
0x6633B9: mov     edx, ds:0B33B00h
0x6633BF: mov     edi, [esp+14h+arg_0]
0x6633C3: mov     dword ptr [edx+44h], 1FFFF000h
0x6633CA: mov     ecx, edi
0x6633CC: and     ecx, 1FFFF000h
0x6633D2: mov     ebp, eax
0x6633D4: mov     eax, [esi]
0x6633D6: mov     edx, [eax+60h]
0x6633D9: push    ecx
0x6633DA: mov     ecx, esi
0x6633DC: call    edx
0x6633DE: mov     ecx, ds:0B33B00h
0x6633E4: mov     eax, [esi+70Ch]
0x6633EA: push    4; a2
0x6633EC: lea     edx, [esp+18h+var_8]
0x6633F0: mov     [ecx+14h], eax
0x6633F3: push    edx; a1
0x6633F4: mov     ecx, esi
0x6633F6: call    TESForm_LoadDataFromCurrentSaveGame
0x6633FB: mov     eax, ds:0B33B00h
0x663400: mov     byte ptr [eax+7Dh], 0
0x663404: mov     edx, [esi]
0x663406: mov     eax, [esp+14h+var_8]
0x66340A: mov     edx, [edx+54h]
0x66340D: push    edi
0x66340E: push    eax
0x66340F: mov     ecx, esi
0x663411: call    edx
0x663413: mov     eax, ds:0B33B00h
0x663418: mov     dword ptr [eax+14h], 0
0x66341F: mov     ecx, ds:0B33B00h
0x663425: mov     dword ptr [ecx+44h], 60000000h
0x66342C: mov     edx, [esi]
0x66342E: mov     edx, [edx+60h]
0x663431: mov     eax, edi
0x663433: and     eax, 60000000h
0x663438: push    eax
0x663439: mov     ecx, esi
0x66343B: call    edx
0x66343D: mov     ecx, ds:0B33B00h
0x663443: push    ebp
0x663444: push    esi
0x663445: call    sub_45A020
0x66344A: mov     ecx, [esp+14h+var_8]
0x66344E: mov     eax, [esi]
0x663450: mov     edx, [eax+58h]
0x663453: push    edi
0x663454: push    ecx
0x663455: mov     ecx, esi
0x663457: call    edx
0x663459: mov     ecx, [esp+14h+var_8]
0x66345D: mov     eax, [esi]
0x66345F: mov     edx, [eax+5Ch]
0x663462: push    edi
0x663463: push    ecx
0x663464: mov     ecx, esi
0x663466: call    edx
0x663468: mov     ecx, ds:0B33B00h
0x66346E: push    0
0x663470: call    sub_461030
0x663475: mov     eax, ds:0B33B00h
0x66347A: mov     byte ptr [eax+7Dh], 1
0x66347E: mov     edx, [esi]
0x663480: mov     eax, [esp+14h+var_8]
0x663484: mov     edx, [edx+48h]
0x663487: push    eax
0x663488: mov     ecx, esi
0x66348A: call    edx
0x66348C: push    0FFFFFFFFh; a2
0x66348E: call    sub_57A6F0
0x663493: push    0Ah; a2
0x663495: call    sub_57A6F0
0x66349A: push    8; a2
0x66349C: call    sub_57A6F0
0x6634A1: push    9; a2
0x6634A3: call    sub_57A6F0
0x6634A8: mov     eax, dword ptr [esp+24h+var_4]
0x6634AC: mov     ecx, ds:0B33B00h
0x6634B2: add     esp, 10h
0x6634B5: push    eax
0x6634B6: call    sub_45A530
0x6634BB: pop     edi
0x6634BC: pop     ebp
0x6634BD: pop     esi
0x6634BE: add     esp, 8
0x6634C1: retn    4
