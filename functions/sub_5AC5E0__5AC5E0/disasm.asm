0x5AC5E0: push    esi
0x5AC5E1: mov     esi, ecx
0x5AC5E3: mov     eax, [esi]
0x5AC5E5: mov     edx, [eax+34h]
0x5AC5E8: push    edi
0x5AC5E9: call    edx
0x5AC5EB: mov     edi, eax
0x5AC5ED: call    sub_578FE0
0x5AC5F2: cmp     eax, edi
0x5AC5F4: jnz     short loc_5AC625
0x5AC5F6: cmp     [esp+8+arg_0], 0Ah
0x5AC5FB: jnz     short loc_5AC625
0x5AC5FD: cmp     dword ptr [esi+2Ch], 0
0x5AC601: jle     short loc_5AC625
0x5AC603: mov     eax, ds:0B38CF0h
0x5AC608: mov     ecx, ds:0B383A0h
0x5AC60E: push    0
0x5AC610: push    eax
0x5AC611: push    1
0x5AC613: push    0
0x5AC615: push    ecx
0x5AC616: call    ShowUIMessageBox
0x5AC61B: add     esp, 14h
0x5AC61E: pop     edi
0x5AC61F: mov     al, 1
0x5AC621: pop     esi
0x5AC622: retn    8
0x5AC625: pop     edi
0x5AC626: xor     al, al
0x5AC628: pop     esi
0x5AC629: retn    8
