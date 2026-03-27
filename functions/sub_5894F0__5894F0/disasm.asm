0x5894F0: push    esi
0x5894F1: mov     esi, [esp+4+arg_0]
0x5894F5: test    esi, esi
0x5894F7: jz      short loc_589516
0x5894F9: push    0FA8h
0x5894FE: mov     ecx, esi
0x589500: call    Tile_GetFloat
0x589505: fild    [esp+4+arg_4]
0x589509: fucompp
0x58950B: fnstsw  ax
0x58950D: test    ah, 44h
0x589510: jp      short loc_589516
0x589512: mov     eax, esi
0x589514: pop     esi
0x589515: retn
0x589516: mov     esi, [esi+34h]
0x589519: test    esi, esi
0x58951B: push    edi
0x58951C: jz      short loc_58953B
0x58951E: mov     edi, [esp+8+arg_4]
0x589522: lea     eax, [esi+8]
0x589525: mov     eax, [eax]
0x589527: mov     esi, [esi]
0x589529: push    edi
0x58952A: push    eax
0x58952B: call    sub_5894F0
0x589530: add     esp, 8
0x589533: test    eax, eax
0x589535: jnz     short loc_58953D
0x589537: test    esi, esi
0x589539: jnz     short loc_589522
0x58953B: xor     eax, eax
0x58953D: pop     edi
0x58953E: pop     esi
0x58953F: retn
