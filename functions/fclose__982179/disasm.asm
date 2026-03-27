0x982179: push    0Ch
0x98217B: push    offset stru_AFF960
0x982180: call    __SEH_prolog4
0x982185: or      [ebp+var_1C], 0FFFFFFFFh
0x982189: xor     eax, eax
0x98218B: mov     esi, [ebp+File]
0x98218E: xor     edi, edi
0x982190: cmp     esi, edi
0x982192: setnz   al
0x982195: cmp     eax, edi
0x982197: jnz     short loc_9821B6
0x982199: call    __errno
0x98219E: mov     dword ptr [eax], 16h
0x9821A4: push    edi
0x9821A5: push    edi
0x9821A6: push    edi
0x9821A7: push    edi
0x9821A8: push    edi
0x9821A9: call    __invalid_parameter
0x9821AE: add     esp, 14h
0x9821B1: or      eax, 0FFFFFFFFh
0x9821B4: jmp     short loc_9821C2
0x9821B6: test    byte ptr [esi+0Ch], 40h
0x9821BA: jz      short loc_9821C8
0x9821BC: mov     [esi+0Ch], edi
