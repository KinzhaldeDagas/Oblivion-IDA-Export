0x51D540: mov     eax, [esp+arg_0]
0x51D544: lea     edx, [eax-0Ch]
0x51D547: cmp     edx, 6
0x51D54A: ja      short loc_51D557
0x51D54C: call    sub_51CC00
0x51D551: movzx   eax, al
0x51D554: retn    4
0x51D557: lea     edx, [eax-13h]
0x51D55A: cmp     edx, 6
0x51D55D: ja      short loc_51D56A
0x51D55F: call    sub_51CB80
0x51D564: movzx   eax, al
0x51D567: retn    4
0x51D56A: lea     edx, [eax-1Ah]
0x51D56D: cmp     edx, 6
0x51D570: ja      short loc_51D57D
0x51D572: call    sub_51CB00
0x51D577: movzx   eax, al
0x51D57A: retn    4
0x51D57D: mov     [esp+arg_0], eax
0x51D581: jmp     TESActorBase_GetAViBase
