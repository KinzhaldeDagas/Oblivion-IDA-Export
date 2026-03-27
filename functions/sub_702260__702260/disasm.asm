0x702260: push    esi
0x702261: push    edi
0x702262: mov     edi, [esp+8+arg_0]
0x702266: push    edi
0x702267: mov     esi, ecx
0x702269: call    sub_6D7DF0
0x70226E: mov     ecx, edi
0x702270: call    sub_7124D0
0x702275: test    eax, eax
0x702277: jz      short loc_702289
0x702279: mov     ecx, edi
0x70227B: call    sub_7124A0
0x702280: push    eax; a2
0x702281: lea     ecx, [esi+3Ch]; this
0x702284: call    NiSmartPointer_Set??
0x702289: pop     edi
0x70228A: pop     esi
0x70228B: retn    4
