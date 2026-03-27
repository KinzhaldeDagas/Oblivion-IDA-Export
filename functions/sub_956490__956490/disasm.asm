0x956490: push    esi
0x956491: mov     esi, ecx
0x956493: push    edi
0x956494: mov     edi, [esp+8+arg_0]
0x956498: mov     word ptr [esi+6], 1
0x95649E: mov     dword ptr [esi], offset off_AA3558
0x9564A4: mov     ecx, ds:0BA7D98h
0x9564AA: mov     eax, [ecx]
0x9564AC: push    25h ; '%'
0x9564AE: push    edi
0x9564AF: call    dword ptr [eax]
0x9564B1: mov     [esi+8], edi
0x9564B4: mov     [esi+10h], eax
0x9564B7: pop     edi
0x9564B8: mov     dword ptr [esi+0Ch], 0
0x9564BF: mov     eax, esi
0x9564C1: pop     esi
0x9564C2: retn    4
