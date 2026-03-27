0x9184A0: mov     al, [esp+arg_4]
0x9184A4: push    esi
0x9184A5: mov     esi, ecx
0x9184A7: mov     word ptr [esi+6], 1
0x9184AD: mov     dword ptr [esi], offset off_A9D1B8
0x9184B3: mov     [esi+0Ch], al
0x9184B6: mov     ecx, ds:0BA7D98h
0x9184BC: mov     edx, [ecx]
0x9184BE: push    17h
0x9184C0: push    14h
0x9184C2: call    dword ptr [edx+10h]
0x9184C5: mov     ecx, [esp+4+arg_0]
0x9184C9: push    1
0x9184CB: push    ecx
0x9184CC: mov     ecx, eax
0x9184CE: mov     word ptr [eax+4], 14h
0x9184D4: call    sub_8BC030
0x9184D9: mov     [esi+8], eax
0x9184DC: mov     eax, esi
0x9184DE: pop     esi
0x9184DF: retn    8
