0x583DD0: mov     eax, [esp+arg_0]
0x583DD4: push    esi
0x583DD5: mov     esi, ecx
0x583DD7: add     eax, 0FFFFFFFBh
0x583DDA: mov     [esi+0Ch], eax
0x583DDD: jns     short loc_583DEC
0x583DDF: call    sub_57D7A0
0x583DE4: call    Double_To_SInt32
0x583DE9: mov     [esi+0Ch], eax
0x583DEC: pop     esi
0x583DED: retn    4
