0x5E1030: push    esi
0x5E1031: mov     esi, ecx
0x5E1033: mov     eax, [esi]
0x5E1035: mov     edx, [eax+380h]
0x5E103B: push    edi
0x5E103C: call    edx
0x5E103E: mov     edi, eax
0x5E1040: test    edi, edi
0x5E1042: jz      short loc_5E1063
0x5E1044: cmp     dword ptr [esi+58h], 0
0x5E1048: jz      short loc_5E1063
0x5E104A: mov     ecx, [esi+58h]
0x5E104D: mov     eax, [ecx]
0x5E104F: mov     edx, [eax+36Ch]
0x5E1055: call    edx
0x5E1057: cmp     eax, 3
0x5E105A: jz      short loc_5E1068
0x5E105C: jle     short loc_5E1063
0x5E105E: cmp     eax, 5
0x5E1061: jle     short loc_5E1097
0x5E1063: pop     edi
0x5E1064: xor     al, al
0x5E1066: pop     esi
0x5E1067: retn
0x5E1068: cmp     dword ptr [edi+58h], 0
0x5E106C: jz      short loc_5E1063
0x5E106E: mov     ecx, [edi+58h]
0x5E1071: mov     eax, [ecx]
0x5E1073: mov     edx, [eax+2D0h]
0x5E1079: call    edx
0x5E107B: cmp     eax, 0Bh
0x5E107E: jnz     short loc_5E1063
0x5E1080: mov     eax, [edi]
0x5E1082: mov     edx, [eax+164h]
0x5E1088: mov     ecx, edi
0x5E108A: call    edx
0x5E108C: mov     ecx, eax
0x5E108E: call    sub_471210
0x5E1093: test    al, al
0x5E1095: jz      short loc_5E1063
0x5E1097: pop     edi
0x5E1098: mov     al, 1
0x5E109A: pop     esi
0x5E109B: retn
