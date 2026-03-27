0x79ACC0: push    esi
0x79ACC1: xor     eax, eax
0x79ACC3: push    edi
0x79ACC4: mov     edi, [esp+8+arg_0]
0x79ACC8: cmp     edi, eax
0x79ACCA: mov     esi, ecx
0x79ACCC: mov     [esi+4], eax
0x79ACCF: mov     [esi+8], eax
0x79ACD2: mov     [esi+0Ch], eax
0x79ACD5: jnz     short loc_79ACDE
0x79ACD7: pop     edi
0x79ACD8: xor     al, al
0x79ACDA: pop     esi
0x79ACDB: retn    4
0x79ACDE: cmp     edi, 4924924h
0x79ACE4: jbe     short loc_79ACEB
0x79ACE6: call    sub_790B90
0x79ACEB: push    eax
0x79ACEC: push    edi; char *
0x79ACED: call    sub_799F30
0x79ACF2: lea     ecx, ds:0[edi*8]
0x79ACF9: sub     ecx, edi
0x79ACFB: add     esp, 8
0x79ACFE: lea     edx, [eax+ecx*8]
0x79AD01: mov     [esi+4], eax
0x79AD04: mov     [esi+8], eax
0x79AD07: pop     edi
0x79AD08: mov     [esi+0Ch], edx
0x79AD0B: mov     al, 1
0x79AD0D: pop     esi
0x79AD0E: retn    4
