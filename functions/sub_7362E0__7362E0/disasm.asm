0x7362E0: mov     eax, [esp+arg_4]
0x7362E4: shr     eax, 8
0x7362E7: cmp     al, 10h
0x7362E9: push    esi
0x7362EA: jz      short loc_73631A
0x7362EC: cmp     al, 18h
0x7362EE: jz      short loc_73633F
0x7362F0: cmp     al, 20h ; ' '
0x7362F2: mov     esi, [esp+4+arg_0]
0x7362F6: mov     ecx, esi
0x7362F8: jz      short loc_73630A
0x7362FA: lea     eax, [esp+4+arg_4]
0x7362FE: push    eax
0x7362FF: call    sub_70F010
0x736304: mov     eax, esi
0x736306: pop     esi
0x736307: retn    48h ; 'H'
0x73630A: push    offset unk_B25E00
0x73630F: call    sub_70F010
0x736314: mov     eax, esi
0x736316: pop     esi
0x736317: retn    48h ; 'H'
0x73631A: push    3
0x73631C: lea     ecx, [esp+8+arg_4]
0x736320: call    sub_700B60
0x736325: test    eax, eax
0x736327: jz      short loc_73633F
0x736329: mov     esi, [esp+4+arg_0]
0x73632D: push    offset unk_B25E00
0x736332: mov     ecx, esi
0x736334: call    sub_70F010
0x736339: mov     eax, esi
0x73633B: pop     esi
0x73633C: retn    48h ; 'H'
0x73633F: mov     esi, [esp+4+arg_0]
0x736343: push    offset unk_B25E48
0x736348: mov     ecx, esi
0x73634A: call    sub_70F010
0x73634F: mov     eax, esi
0x736351: pop     esi
0x736352: retn    48h ; 'H'
