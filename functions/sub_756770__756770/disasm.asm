0x756770: push    esi
0x756771: push    edi
0x756772: mov     edi, [esp+8+arg_0]
0x756776: push    edi
0x756777: mov     esi, ecx
0x756779: call    sub_75E600
0x75677E: test    al, al
0x756780: jz      short loc_7567A8
0x756782: mov     esi, [esi+40h]
0x756785: lea     eax, [esp+8+arg_0]
0x756789: push    eax
0x75678A: push    esi
0x75678B: lea     ecx, [edi+0D4h]
0x756791: call    NiTMap_GetAt
0x756796: test    al, al
0x756798: jz      short loc_7567A8
0x75679A: cmp     [esp+8+arg_0], 0
0x75679F: jz      short loc_7567A8
0x7567A1: pop     edi
0x7567A2: mov     al, 1
0x7567A4: pop     esi
0x7567A5: retn    4
0x7567A8: pop     edi
0x7567A9: xor     al, al
0x7567AB: pop     esi
0x7567AC: retn    4
