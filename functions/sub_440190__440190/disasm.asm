0x440190: push    esi
0x440191: mov     esi, ecx
0x440193: mov     ecx, [esi+5Ch]
0x440196: cmp     dword ptr [ecx+0DCh], 0
0x44019D: jz      short loc_4401C9
0x44019F: push    edi
0x4401A0: mov     edi, [esp+8+arg_0]
0x4401A4: test    edi, edi
0x4401A6: jz      short loc_4401E8
0x4401A8: mov     ecx, edi; this
0x4401AA: call    TESObjectCELL_IsInterior
0x4401AF: test    al, al
0x4401B1: jz      short loc_4401D9
0x4401B3: mov     ecx, edi
0x4401B5: call    sub_4C9820
0x4401BA: test    al, al
0x4401BC: mov     ecx, [esi+5Ch]
0x4401BF: jz      short loc_4401CD
0x4401C1: push    2
0x4401C3: call    sub_543BB0
0x4401C8: pop     edi
0x4401C9: pop     esi
0x4401CA: retn    4
0x4401CD: push    1
0x4401CF: call    sub_543BB0
0x4401D4: pop     edi
0x4401D5: pop     esi
0x4401D6: retn    4
0x4401D9: mov     ecx, [esi+5Ch]
0x4401DC: push    3
0x4401DE: call    sub_543BB0
0x4401E3: pop     edi
0x4401E4: pop     esi
0x4401E5: retn    4
0x4401E8: pop     edi
0x4401E9: pop     esi
0x4401EA: mov     [esp+arg_0], 3
0x4401F2: jmp     sub_543BB0
