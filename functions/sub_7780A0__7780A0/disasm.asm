0x7780A0: mov     eax, [esp+arg_0]
0x7780A4: push    esi
0x7780A5: mov     esi, ecx
0x7780A7: mov     [esi+8], eax
0x7780AA: mov     eax, [esi+0Ch]
0x7780AD: test    eax, eax
0x7780AF: jz      short loc_7780C0
0x7780B1: mov     ecx, [eax]
0x7780B3: mov     edx, [ecx+8]
0x7780B6: push    eax
0x7780B7: call    edx
0x7780B9: mov     dword ptr [esi+0Ch], 0
0x7780C0: pop     esi
0x7780C1: retn    4
