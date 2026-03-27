0x699050: push    esi
0x699051: mov     esi, ecx
0x699053: mov     eax, [esi]
0x699055: mov     edx, [eax+20h]
0x699058: call    edx
0x69905A: test    eax, eax
0x69905C: jz      short loc_699073
0x69905E: mov     edx, [eax]
0x699060: mov     ecx, eax
0x699062: mov     eax, [edx+190h]
0x699068: call    eax
0x69906A: test    al, al
0x69906C: jz      short loc_699073
0x69906E: lea     eax, [esi-5Ch]
0x699071: pop     esi
0x699072: retn
0x699073: xor     eax, eax
0x699075: pop     esi
0x699076: retn
