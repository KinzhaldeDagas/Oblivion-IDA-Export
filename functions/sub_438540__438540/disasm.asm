0x438540: push    ecx
0x438541: push    esi
0x438542: push    edi
0x438543: mov     edi, [esp+0Ch+arg_0]
0x438547: mov     esi, ecx
0x438549: mov     ecx, [esi+4]
0x43854C: lea     edx, [esp+0Ch+var_4]
0x438550: mov     [esp+0Ch+var_4], 0
0x438558: mov     eax, [ecx]
0x43855A: mov     eax, [eax+4]
0x43855D: push    edx
0x43855E: push    edi
0x43855F: call    eax
0x438561: test    al, al
0x438563: jz      short loc_4385A7
0x438565: mov     ecx, [esp+0Ch+var_4]
0x438569: add     ecx, 0Ch
0x43856C: push    ecx; lpAddend
0x43856D: call    ds:InterlockedDecrement
0x438573: cmp     [esp+0Ch+arg_4], 0
0x438578: jz      short loc_4385A7
0x43857A: mov     edx, [esp+0Ch+var_4]
0x43857E: cmp     dword ptr [edx+0Ch], 0
0x438582: jnz     short loc_4385A7
0x438584: mov     ecx, [esi+4]
0x438587: mov     eax, [ecx]
0x438589: mov     edx, [eax+10h]
0x43858C: push    edi
0x43858D: call    edx
0x43858F: mov     ecx, [esp+0Ch+var_4]
0x438593: test    ecx, ecx
0x438595: mov     esi, ecx
0x438597: jz      short loc_4385A7
0x438599: call    sub_436CB0
0x43859E: push    esi
0x43859F: call    FormHeapFree
0x4385A4: add     esp, 4
0x4385A7: pop     edi
0x4385A8: pop     esi
0x4385A9: pop     ecx
0x4385AA: retn    8
