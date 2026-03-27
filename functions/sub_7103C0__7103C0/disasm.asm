0x7103C0: push    esi
0x7103C1: mov     esi, [esp+4+arg_0]
0x7103C5: push    esi
0x7103C6: call    sub_7102B0
0x7103CB: test    al, al
0x7103CD: mov     eax, esi
0x7103CF: jnz     short loc_7103ED
0x7103D1: fldz
0x7103D3: fst     dword ptr [esi]
0x7103D5: fst     dword ptr [esi+0Ch]
0x7103D8: fst     dword ptr [esi+18h]
0x7103DB: fst     dword ptr [esi+4]
0x7103DE: fst     dword ptr [esi+10h]
0x7103E1: fst     dword ptr [esi+1Ch]
0x7103E4: fst     dword ptr [esi+8]
0x7103E7: fst     dword ptr [esi+14h]
0x7103EA: fstp    dword ptr [esi+20h]
0x7103ED: pop     esi
0x7103EE: retn    4
