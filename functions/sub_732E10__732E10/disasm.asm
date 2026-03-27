0x732E10: push    esi
0x732E11: push    edi
0x732E12: mov     edi, [esp+8+arg_0]
0x732E16: push    edi
0x732E17: mov     esi, ecx
0x732E19: call    sub_728F90
0x732E1E: test    al, al
0x732E20: jnz     short loc_732E27
0x732E22: pop     edi
0x732E23: pop     esi
0x732E24: retn    4
0x732E27: mov     ax, [esi+40h]
0x732E2B: cmp     ax, [edi+40h]
0x732E2F: pop     edi
0x732E30: setz    al
0x732E33: pop     esi
0x732E34: retn    4
