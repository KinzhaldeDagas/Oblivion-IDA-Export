0x5E99C0: push    ebx
0x5E99C1: mov     ebx, [esp+4+arg_0]
0x5E99C5: test    ebx, ebx
0x5E99C7: push    esi
0x5E99C8: mov     esi, ecx
0x5E99CA: jz      loc_5E9A52
0x5E99D0: call    sub_578FE0
0x5E99D5: cmp     eax, 3EFh
0x5E99DA: jz      short loc_5E9A52
0x5E99DC: mov     ecx, [esp+8+arg_8]
0x5E99E0: mov     edx, [esp+8+arg_4]
0x5E99E4: mov     eax, ds:0B33398h
0x5E99E9: push    edi
0x5E99EA: mov     edi, [eax+24h]
0x5E99ED: push    ecx
0x5E99EE: push    edx
0x5E99EF: push    ebx
0x5E99F0: mov     ecx, esi
0x5E99F2: call    GetItemUpDownSound
0x5E99F7: cmp     esi, ds:0B333C4h
0x5E99FD: jnz     short loc_5E9A2A
0x5E99FF: push    0
0x5E9A01: push    121h
0x5E9A06: push    eax
0x5E9A07: mov     ecx, edi
0x5E9A09: call    PlaySound???
0x5E9A0E: mov     esi, eax
0x5E9A10: test    esi, esi
0x5E9A12: jz      short loc_5E9A51
0x5E9A14: mov     ecx, esi
0x5E9A16: call    sub_6B7260
0x5E9A1B: test    al, al
0x5E9A1D: jnz     short loc_5E9A3D
0x5E9A1F: push    0
0x5E9A21: mov     ecx, esi
0x5E9A23: call    sub_6B7190
0x5E9A28: jmp     short loc_5E9A3D
0x5E9A2A: push    1
0x5E9A2C: push    102h
0x5E9A31: push    0
0x5E9A33: push    eax
0x5E9A34: mov     ecx, esi
0x5E9A36: call    sub_65A970
0x5E9A3B: mov     esi, eax
0x5E9A3D: test    esi, esi
0x5E9A3F: jz      short loc_5E9A51
0x5E9A41: mov     ecx, esi; this
0x5E9A43: call    sub_6B73E0
0x5E9A48: push    esi
0x5E9A49: call    FormHeapFree
0x5E9A4E: add     esp, 4
0x5E9A51: pop     edi
0x5E9A52: pop     esi
0x5E9A53: pop     ebx
0x5E9A54: retn    0Ch
