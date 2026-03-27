0x74D210: push    esi
0x74D211: push    edi
0x74D212: mov     edi, [esp+8+arg_0]
0x74D216: push    edi
0x74D217: mov     esi, ecx
0x74D219: call    sub_753080
0x74D21E: test    al, al
0x74D220: jz      short loc_74D256
0x74D222: fld     dword ptr [esi+54h]
0x74D225: fld     dword ptr [edi+54h]
0x74D228: fucompp
0x74D22A: fnstsw  ax
0x74D22C: test    ah, 44h
0x74D22F: jp      short loc_74D256
0x74D231: fld     dword ptr [esi+58h]
0x74D234: fld     dword ptr [edi+58h]
0x74D237: fucompp
0x74D239: fnstsw  ax
0x74D23B: test    ah, 44h
0x74D23E: jp      short loc_74D256
0x74D240: fld     dword ptr [esi+5Ch]
0x74D243: fld     dword ptr [edi+5Ch]
0x74D246: fucompp
0x74D248: fnstsw  ax
0x74D24A: test    ah, 44h
0x74D24D: jp      short loc_74D256
0x74D24F: pop     edi
0x74D250: mov     al, 1
0x74D252: pop     esi
0x74D253: retn    4
0x74D256: pop     edi
0x74D257: xor     al, al
0x74D259: pop     esi
0x74D25A: retn    4
