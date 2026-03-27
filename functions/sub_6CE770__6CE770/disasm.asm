0x6CE770: push    esi
0x6CE771: push    edi
0x6CE772: mov     edi, [esp+8+arg_0]
0x6CE776: push    edi
0x6CE777: mov     esi, ecx
0x6CE779: call    sub_6CCD10
0x6CE77E: test    al, al
0x6CE780: jnz     short loc_6CE787
0x6CE782: pop     edi
0x6CE783: pop     esi
0x6CE784: retn    4
0x6CE787: add     edi, 30h ; '0'
0x6CE78A: push    edi
0x6CE78B: lea     ecx, [esi+30h]
0x6CE78E: call    sub_6CE450
0x6CE793: test    al, al
0x6CE795: pop     edi
0x6CE796: setnz   al
0x6CE799: pop     esi
0x6CE79A: retn    4
