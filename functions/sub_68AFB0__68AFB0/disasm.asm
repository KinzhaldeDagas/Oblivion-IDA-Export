0x68AFB0: push    esi
0x68AFB1: mov     esi, [esp+4+arg_0]
0x68AFB5: test    esi, esi
0x68AFB7: push    edi
0x68AFB8: mov     edi, ecx
0x68AFBA: jz      short loc_68AFEE
0x68AFBC: mov     ecx, ds:0B3BF80h
0x68AFC2: push    esi
0x68AFC3: call    sub_6825C0
0x68AFC8: test    al, al
0x68AFCA: jz      short loc_68AFE2
0x68AFCC: mov     eax, [esp+8+arg_4]
0x68AFD0: mov     ecx, ds:0B3BF80h
0x68AFD6: push    eax
0x68AFD7: push    esi
0x68AFD8: call    sub_682640
0x68AFDD: pop     edi
0x68AFDE: pop     esi
0x68AFDF: retn    8
0x68AFE2: mov     ecx, [esp+8+arg_4]
0x68AFE6: push    ecx
0x68AFE7: mov     ecx, edi
0x68AFE9: call    sub_68AE20
0x68AFEE: pop     edi
0x68AFEF: pop     esi
0x68AFF0: retn    8
