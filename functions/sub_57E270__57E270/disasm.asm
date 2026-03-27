0x57E270: push    ecx
0x57E271: mov     eax, [ecx+364h]
0x57E277: test    eax, eax
0x57E279: jz      short loc_57E2B0
0x57E27B: mov     eax, [eax+8]
0x57E27E: test    eax, eax
0x57E280: jz      short loc_57E29C
0x57E282: add     eax, 14h
0x57E285: jz      short loc_57E29C
0x57E287: mov     eax, [eax+1Ch]
0x57E28A: mov     [esp+4+var_4], eax
0x57E28D: lea     eax, [esp+4+var_4]
0x57E290: mov     ecx, [eax]
0x57E292: mov     eax, [esp+4+arg_0]
0x57E296: mov     [eax], ecx
0x57E298: pop     ecx
0x57E299: retn    4
0x57E29C: xor     eax, eax
0x57E29E: mov     [esp+4+var_4], eax
0x57E2A1: lea     eax, [esp+4+var_4]
0x57E2A4: mov     ecx, [eax]
0x57E2A6: mov     eax, [esp+4+arg_0]
0x57E2AA: mov     [eax], ecx
0x57E2AC: pop     ecx
0x57E2AD: retn    4
0x57E2B0: lea     eax, [esp+4+var_4]
0x57E2B3: mov     [esp+4+var_4], 0
0x57E2BA: mov     ecx, [eax]
0x57E2BC: mov     eax, [esp+4+arg_0]
0x57E2C0: mov     [eax], ecx
0x57E2C2: pop     ecx
0x57E2C3: retn    4
