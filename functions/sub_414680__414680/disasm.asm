0x414680: push    esi
0x414681: xor     eax, eax
0x414683: mov     esi, ecx
0x414685: push    0FFFFFFFFh
0x414687: mov     [esi+14h], eax
0x41468A: mov     dword ptr [esi+18h], 0Fh
0x414691: push    eax
0x414692: mov     [esi+4], al
0x414695: mov     eax, [esp+0Ch+arg_0]
0x414699: push    eax
0x41469A: call    sub_414420
0x41469F: mov     eax, esi
0x4146A1: pop     esi
0x4146A2: retn    4
