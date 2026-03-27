0x4D82E0: push    esi
0x4D82E1: push    edi
0x4D82E2: mov     edi, [esp+8+arg_0]
0x4D82E6: cmp     edi, 4
0x4D82E9: mov     esi, ecx
0x4D82EB: jnz     short loc_4D833D
0x4D82ED: mov     ecx, ds:0B33B00h
0x4D82F3: push    0
0x4D82F5: push    esi
0x4D82F6: call    sub_4533F0
0x4D82FB: test    eax, 40000h
0x4D8300: push    8
0x4D8302: lea     ecx, [esi+44h]
0x4D8305: jz      short loc_4D8313
0x4D8307: call    sub_41F830
0x4D830C: test    al, al
0x4D830E: setz    al
0x4D8311: jmp     short loc_4D8318
0x4D8313: call    sub_41F830
0x4D8318: test    al, al
0x4D831A: mov     eax, [esi]
0x4D831C: push    80000h
0x4D8321: mov     ecx, esi
0x4D8323: jz      short loc_4D8338
0x4D8325: mov     edx, [eax+40h]
0x4D8328: call    edx
0x4D832A: push    edi
0x4D832B: lea     ecx, [esi+44h]
0x4D832E: call    sub_423E50
0x4D8333: pop     edi
0x4D8334: pop     esi
0x4D8335: retn    4
0x4D8338: mov     edx, [eax+44h]
0x4D833B: call    edx
0x4D833D: push    edi
0x4D833E: lea     ecx, [esi+44h]
0x4D8341: call    sub_423E50
0x4D8346: pop     edi
0x4D8347: pop     esi
0x4D8348: retn    4
