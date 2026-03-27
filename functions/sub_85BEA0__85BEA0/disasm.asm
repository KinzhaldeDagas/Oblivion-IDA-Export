0x85BEA0: sub     esp, 10h
0x85BEA3: cmp     [esp+10h+arg_4], 0
0x85BEA8: fld1
0x85BEAA: mov     edx, ds:0B25AD8h
0x85BEB0: mov     eax, ds:0B25AD0h
0x85BEB5: mov     ecx, ds:0B25AD4h
0x85BEBB: mov     [esp+10h+var_10], eax
0x85BEBE: fst     [esp+10h+var_10]
0x85BEC1: mov     [esp+10h+var_8], edx
0x85BEC5: mov     edx, ds:0B25ADCh
0x85BECB: push    esi
0x85BECC: jz      short loc_85BED8
0x85BECE: fstp    [esp+14h+var_C]
0x85BED2: mov     ecx, [esp+14h+var_C]
0x85BED6: jmp     short loc_85BEDA
0x85BED8: fstp    st
0x85BEDA: mov     eax, [esp+14h+arg_8]
0x85BEDE: test    eax, eax
0x85BEE0: jz      short loc_85BEE7
0x85BEE2: fld     dword ptr [eax+4Ch]
0x85BEE5: jmp     short loc_85BEED
0x85BEE7: fld     dword ptr ds:0A37CC8h
0x85BEED: mov     esi, [esp+14h+var_10]
0x85BEF1: fstp    [esp+14h+var_8]
0x85BEF5: sub     esp, 10h
0x85BEF8: mov     eax, esp
0x85BEFA: mov     [eax], esi
0x85BEFC: mov     [eax+4], ecx
0x85BEFF: mov     ecx, [esp+24h+var_8]
0x85BF03: mov     [eax+8], ecx
0x85BF06: push    1Fh
0x85BF08: mov     [eax+0Ch], edx
0x85BF0B: call    sub_7ECAE0
0x85BF10: add     esp, 14h
0x85BF13: pop     esi
0x85BF14: add     esp, 10h
0x85BF17: retn    0Ch
