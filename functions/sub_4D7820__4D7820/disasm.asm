0x4D7820: push    ecx
0x4D7821: push    ebx
0x4D7822: push    esi
0x4D7823: mov     esi, ecx
0x4D7825: mov     eax, [esi]
0x4D7827: mov     edx, [eax+170h]
0x4D782D: xor     ebx, ebx
0x4D782F: call    edx
0x4D7831: cmp     byte ptr [eax+4], 1Eh
0x4D7835: jnz     short loc_4D7873
0x4D7837: mov     eax, [esi]
0x4D7839: mov     edx, [eax+170h]
0x4D783F: push    edi
0x4D7840: mov     ecx, esi
0x4D7842: call    edx
0x4D7844: mov     edi, eax
0x4D7846: test    edi, edi
0x4D7848: jz      short loc_4D786C
0x4D784A: lea     ecx, [esi+44h]
0x4D784D: call    sub_41E990
0x4D7852: mov     byte ptr [esp+10h+var_4], al
0x4D7856: mov     ecx, [esp+10h+var_4]
0x4D785A: mov     eax, [edi]
0x4D785C: mov     edx, [eax+128h]
0x4D7862: push    ecx
0x4D7863: mov     ecx, edi
0x4D7865: call    edx
0x4D7867: pop     edi
0x4D7868: pop     esi
0x4D7869: pop     ebx
0x4D786A: pop     ecx
0x4D786B: retn
0x4D786C: pop     edi
0x4D786D: pop     esi
0x4D786E: mov     eax, ebx
0x4D7870: pop     ebx
0x4D7871: pop     ecx
0x4D7872: retn
0x4D7873: pop     esi
0x4D7874: mov     eax, ebx
0x4D7876: pop     ebx
0x4D7877: pop     ecx
0x4D7878: retn
