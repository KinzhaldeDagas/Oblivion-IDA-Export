0x778BE0: mov     ecx, [esp+arg_0]
0x778BE4: mov     eax, [ecx+1Ch]
0x778BE7: test    eax, eax
0x778BE9: jnz     short loc_778BF0
0x778BEB: xor     al, al
0x778BED: retn    4
0x778BF0: push    esi
0x778BF1: mov     esi, [eax+4]
0x778BF4: mov     eax, [esi]
0x778BF6: mov     edx, [eax+0Ch]
0x778BF9: push    ecx
0x778BFA: mov     ecx, esi
0x778BFC: call    edx
0x778BFE: cmp     dword ptr [esi+4], 0
0x778C02: jnz     short loc_778C0C
0x778C04: mov     eax, [esi]
0x778C06: mov     edx, [eax]
0x778C08: mov     ecx, esi
0x778C0A: call    edx
0x778C0C: mov     al, 1
0x778C0E: pop     esi
0x778C0F: retn    4
