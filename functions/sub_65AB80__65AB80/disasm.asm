0x65AB80: push    ebx
0x65AB81: push    esi
0x65AB82: mov     esi, ecx
0x65AB84: mov     eax, [esi]
0x65AB86: mov     edx, [eax+1C8h]
0x65AB8C: call    edx
0x65AB8E: mov     esi, [esi+3Ch]
0x65AB91: test    esi, esi
0x65AB93: mov     bl, al
0x65AB95: jz      short loc_65ABA7
0x65AB97: push    0
0x65AB99: push    1
0x65AB9B: push    esi
0x65AB9C: call    sub_88CD50
0x65ABA1: add     esp, 0Ch
0x65ABA4: or      bl, 1
0x65ABA7: pop     esi
0x65ABA8: mov     al, bl
0x65ABAA: pop     ebx
0x65ABAB: retn
