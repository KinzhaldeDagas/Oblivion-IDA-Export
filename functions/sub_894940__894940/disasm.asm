0x894940: push    esi
0x894941: push    edi
0x894942: mov     edi, [esp+8+arg_0]
0x894946: mov     esi, ecx
0x894948: cmp     [esi+36Ch], edi
0x89494E: jz      short loc_8949AF
0x894950: cmp     edi, 2
0x894953: jge     short loc_8949AF
0x894955: cmp     dword ptr [esi+edi*4+374h], 0
0x89495D: jz      short loc_8949AF
0x89495F: push    ebx
0x894960: mov     ebx, [esi+1F4h]
0x894966: shr     ebx, 0Fh
0x894969: and     bl, 1
0x89496C: jz      short loc_894973
0x89496E: call    sub_893950
0x894973: mov     ecx, [esi+8]
0x894976: test    ecx, ecx
0x894978: mov     [esi+36Ch], edi
0x89497E: jz      short loc_894987
0x894980: call    sub_8AC070
0x894985: jmp     short loc_89498C
0x894987: mov     eax, offset stru_BA7A40
0x89498C: push    eax
0x89498D: mov     ecx, esi
0x89498F: call    sub_890BA0
0x894994: push    eax
0x894995: mov     ecx, esi
0x894997: call    sub_890660
0x89499C: test    bl, bl
0x89499E: pop     ebx
0x89499F: jz      short loc_8949AF
0x8949A1: mov     eax, [esi]
0x8949A3: mov     edx, [eax+88h]
0x8949A9: push    0
0x8949AB: mov     ecx, esi
0x8949AD: call    edx
0x8949AF: pop     edi
0x8949B0: pop     esi
0x8949B1: retn    4
