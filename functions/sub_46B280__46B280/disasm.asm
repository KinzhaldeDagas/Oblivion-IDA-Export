0x46B280: push    ecx
0x46B281: mov     eax, [esp+4+arg_0]
0x46B285: test    eax, eax
0x46B287: mov     [esp+4+var_4], 0
0x46B28E: jz      short loc_46B2AD
0x46B290: cmp     byte ptr [eax], 0
0x46B293: jz      short loc_46B2AD
0x46B295: lea     ecx, [esp+4+var_4]
0x46B298: push    ecx
0x46B299: push    eax
0x46B29A: mov     ecx, offset off_B06164
0x46B29F: call    NiTMap_GetAt
0x46B2A4: test    al, al
0x46B2A6: jz      short loc_46B2AD
0x46B2A8: mov     eax, [esp+4+var_4]
0x46B2AB: pop     ecx
0x46B2AC: retn
0x46B2AD: xor     eax, eax
0x46B2AF: pop     ecx
0x46B2B0: retn
