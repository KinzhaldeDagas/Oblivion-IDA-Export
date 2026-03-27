0x77C8B0: push    esi
0x77C8B1: mov     esi, [esp+4+arg_0]
0x77C8B5: test    esi, esi
0x77C8B7: push    edi
0x77C8B8: mov     edi, ecx
0x77C8BA: jz      short loc_77C8DB
0x77C8BC: push    ecx
0x77C8BD: mov     eax, esp
0x77C8BF: mov     [eax], esi
0x77C8C1: lea     eax, [esi+4]
0x77C8C4: push    eax; lpAddend
0x77C8C5: call    dword ptr ds:0A28078h
0x77C8CB: mov     ecx, esi
0x77C8CD: call    sub_452A60
0x77C8D2: mov     ecx, [edi+20h]
0x77C8D5: push    eax
0x77C8D6: call    sub_77C5E0
0x77C8DB: pop     edi
0x77C8DC: pop     esi
0x77C8DD: retn    4
