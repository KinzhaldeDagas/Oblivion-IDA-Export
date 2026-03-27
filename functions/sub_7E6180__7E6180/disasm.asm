0x7E6180: push    esi
0x7E6181: push    edi
0x7E6182: mov     edi, [esp+8+arg_C]
0x7E6186: mov     edx, [edi+1Ch]
0x7E6189: mov     esi, ecx
0x7E618B: mov     ecx, [esi+18h]
0x7E618E: mov     eax, [ecx]
0x7E6190: mov     eax, [eax+20h]
0x7E6193: push    edx
0x7E6194: call    eax
0x7E6196: mov     ecx, [esi+18h]
0x7E6199: mov     edx, [ecx]
0x7E619B: mov     eax, [edi+2Ch]
0x7E619E: mov     edx, [edx+28h]
0x7E61A1: push    eax
0x7E61A2: call    edx
0x7E61A4: mov     ecx, [esi+18h]
0x7E61A7: mov     eax, [ecx]
0x7E61A9: mov     edx, [edi+28h]
0x7E61AC: mov     eax, [eax+24h]
0x7E61AF: push    edx
0x7E61B0: call    eax
0x7E61B2: pop     edi
0x7E61B3: xor     eax, eax
0x7E61B5: pop     esi
0x7E61B6: retn    1Ch
