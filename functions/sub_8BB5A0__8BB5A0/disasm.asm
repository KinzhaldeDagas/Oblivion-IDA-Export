0x8BB5A0: mov     al, byte ptr [esp+arg_4]
0x8BB5A4: add     ecx, 8
0x8BB5A7: test    al, al
0x8BB5A9: jz      short loc_8BB5B8
0x8BB5AB: mov     eax, [esp+arg_0]
0x8BB5AF: push    eax
0x8BB5B0: call    sub_8B1570
0x8BB5B5: retn    8
0x8BB5B8: mov     [esp+arg_4], 1
0x8BB5C0: jmp     sub_8B0E80
