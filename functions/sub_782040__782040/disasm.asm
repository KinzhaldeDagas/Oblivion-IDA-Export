0x782040: push    esi
0x782041: mov     esi, [esp+4+arg_0]
0x782045: mov     eax, [esi]
0x782047: mov     edx, [eax+18h]
0x78204A: push    edi
0x78204B: mov     edi, ecx
0x78204D: mov     ecx, esi
0x78204F: call    edx
0x782051: test    eax, eax
0x782053: jnz     short loc_78205C
0x782055: pop     edi
0x782056: xor     al, al
0x782058: pop     esi
0x782059: retn    4
0x78205C: push    eax
0x78205D: mov     ecx, edi
0x78205F: call    sub_783C30
0x782064: test    eax, eax
0x782066: jz      short loc_782055
0x782068: mov     edx, [esi]
0x78206A: push    eax
0x78206B: mov     eax, [edx+3Ch]
0x78206E: mov     ecx, esi
0x782070: call    eax
0x782072: pop     edi
0x782073: mov     al, 1
0x782075: pop     esi
0x782076: retn    4
