0x51C6E0: push    esi
0x51C6E1: mov     esi, [esp+4+arg_0]
0x51C6E5: push    esi
0x51C6E6: call    TESActorBase_GetModifiedSize
0x51C6EB: test    esi, 200h
0x51C6F1: movzx   eax, ax
0x51C6F4: jz      short loc_51C6F9
0x51C6F6: add     eax, 3
0x51C6F9: test    esi, 400h
0x51C6FF: pop     esi
0x51C700: jz      short locret_51C705
0x51C702: add     eax, 4
0x51C705: retn    4
