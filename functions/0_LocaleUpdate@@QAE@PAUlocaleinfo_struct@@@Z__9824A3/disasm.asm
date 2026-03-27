0x9824A3: mov     eax, [esp+arg_0]
0x9824A7: test    eax, eax
0x9824A9: push    esi
0x9824AA: mov     esi, ecx
0x9824AC: mov     byte ptr [esi+0Ch], 0
0x9824B0: jnz     short loc_982515
0x9824B2: call    __getptd
0x9824B7: mov     [esi+8], eax
0x9824BA: mov     ecx, [eax+6Ch]
0x9824BD: mov     [esi], ecx
0x9824BF: mov     ecx, [eax+68h]
0x9824C2: mov     [esi+4], ecx
0x9824C5: mov     ecx, [esi]
0x9824C7: cmp     ecx, ds:0B31998h
0x9824CD: jz      short loc_9824E1
0x9824CF: mov     ecx, ds:0B318B0h
0x9824D5: test    [eax+70h], ecx
0x9824D8: jnz     short loc_9824E1
0x9824DA: call    ___updatetlocinfo
0x9824DF: mov     [esi], eax
0x9824E1: mov     eax, [esi+4]
0x9824E4: cmp     eax, ds:0B317B8h
0x9824EA: jz      short loc_982502
0x9824EC: mov     eax, [esi+8]
0x9824EF: mov     ecx, ds:0B318B0h
0x9824F5: test    [eax+70h], ecx
0x9824F8: jnz     short loc_982502
0x9824FA: call    ___updatetmbcinfo
0x9824FF: mov     [esi+4], eax
0x982502: mov     eax, [esi+8]
0x982505: test    byte ptr [eax+70h], 2
0x982509: jnz     short loc_98251F
0x98250B: or      dword ptr [eax+70h], 2
0x98250F: mov     byte ptr [esi+0Ch], 1
0x982513: jmp     short loc_98251F
0x982515: mov     ecx, [eax]
0x982517: mov     [esi], ecx
0x982519: mov     eax, [eax+4]
0x98251C: mov     [esi+4], eax
0x98251F: mov     eax, esi
0x982521: pop     esi
0x982522: retn    4
