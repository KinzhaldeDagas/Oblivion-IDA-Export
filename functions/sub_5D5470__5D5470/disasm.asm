0x5D5470: push    esi
0x5D5471: mov     esi, ecx
0x5D5473: mov     ecx, [esi+74h]
0x5D5476: push    edi
0x5D5477: call    sub_57D2F0
0x5D547C: test    al, al
0x5D547E: mov     edi, [esp+8+arg_0]
0x5D5482: jz      short loc_5D5490
0x5D5484: mov     ecx, [esi+74h]
0x5D5487: push    0
0x5D5489: call    sub_57DD90
0x5D548E: jmp     short loc_5D54A1
0x5D5490: cmp     edi, 2
0x5D5493: jz      short loc_5D549A
0x5D5495: cmp     edi, 18h
0x5D5498: jnz     short loc_5D54B7
0x5D549A: mov     ecx, esi
0x5D549C: call    sub_5D40C0
0x5D54A1: mov     ecx, [esi+74h]
0x5D54A4: call    sub_580120
0x5D54A9: mov     ecx, [esi+30h]
0x5D54AC: push    eax
0x5D54AD: push    0FDEh
0x5D54B2: call    Tile_SetString
0x5D54B7: mov     eax, edi
0x5D54B9: sub     eax, 0Eh
0x5D54BC: jz      short loc_5D5505
0x5D54BE: sub     eax, 1
0x5D54C1: jz      short loc_5D54EC
0x5D54C3: sub     eax, 5
0x5D54C6: jnz     short loc_5D550C
0x5D54C8: push    0
0x5D54CA: push    0
0x5D54CC: push    0
0x5D54CE: push    6
0x5D54D0: call    sub_5D2070
0x5D54D5: mov     ecx, [esp+18h+arg_4]
0x5D54D9: mov     eax, [esi]
0x5D54DB: mov     edx, [eax+14h]
0x5D54DE: add     esp, 10h
0x5D54E1: push    ecx
0x5D54E2: push    edi
0x5D54E3: mov     ecx, esi
0x5D54E5: call    edx
0x5D54E7: pop     edi
0x5D54E8: pop     esi
0x5D54E9: retn    8
0x5D54EC: call    sub_5D41E0
0x5D54F1: mov     ecx, [esp+8+arg_4]
0x5D54F5: mov     eax, [esi]
0x5D54F7: mov     edx, [eax+14h]
0x5D54FA: push    ecx
0x5D54FB: push    edi
0x5D54FC: mov     ecx, esi
0x5D54FE: call    edx
0x5D5500: pop     edi
0x5D5501: pop     esi
0x5D5502: retn    8
0x5D5505: mov     ecx, esi
0x5D5507: call    SigilStoneMenu_CreateItem?
0x5D550C: mov     ecx, [esp+8+arg_4]
0x5D5510: mov     eax, [esi]
0x5D5512: mov     edx, [eax+14h]
0x5D5515: push    ecx
0x5D5516: push    edi
0x5D5517: mov     ecx, esi
0x5D5519: call    edx
0x5D551B: pop     edi
0x5D551C: pop     esi
0x5D551D: retn    8
