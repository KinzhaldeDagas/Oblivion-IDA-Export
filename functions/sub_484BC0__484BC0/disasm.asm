0x484BC0: mov     eax, [ecx]
0x484BC2: test    eax, eax
0x484BC4: jz      short locret_484BE5
0x484BC6: push    esi
0x484BC7: mov     esi, [eax]
0x484BC9: test    esi, esi
0x484BCB: jz      short loc_484BE4
0x484BCD: mov     ecx, esi
0x484BCF: call    sub_422C40
0x484BD4: cmp     al, 0FFh
0x484BD6: jz      short loc_484BE4
0x484BD8: mov     eax, [esp+4+arg_0]
0x484BDC: push    eax
0x484BDD: mov     ecx, esi
0x484BDF: call    sub_422BA0
0x484BE4: pop     esi
0x484BE5: retn    4
