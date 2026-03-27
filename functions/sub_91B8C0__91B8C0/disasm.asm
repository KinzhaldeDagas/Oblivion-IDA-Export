0x91B8C0: push    ebx
0x91B8C1: push    esi
0x91B8C2: mov     esi, ecx
0x91B8C4: test    esi, esi
0x91B8C6: push    edi
0x91B8C7: jz      short loc_91B8CE
0x91B8C9: lea     eax, [esi+28h]
0x91B8CC: jmp     short loc_91B8D0
0x91B8CE: xor     eax, eax
0x91B8D0: mov     edi, [esp+0Ch+arg_0]
0x91B8D4: push    eax
0x91B8D5: mov     eax, [esi+30h]
0x91B8D8: mov     ecx, [eax+edi*4]
0x91B8DB: mov     ecx, [ecx]
0x91B8DD: call    sub_8989E0
0x91B8E2: mov     eax, [esi+30h]
0x91B8E5: mov     ecx, [eax+edi*4]
0x91B8E8: mov     ecx, [ecx]
0x91B8EA: lea     edx, [esi+2Ch]
0x91B8ED: push    edx
0x91B8EE: call    sub_898A80
0x91B8F3: push    edi
0x91B8F4: mov     ecx, esi
0x91B8F6: call    sub_91B5E0
0x91B8FB: mov     edx, [esi+30h]
0x91B8FE: mov     ebx, [edx+edi*4]
0x91B901: test    ebx, ebx
0x91B903: jz      short loc_91B950
0x91B905: mov     eax, [ebx+0Ch]
0x91B908: test    eax, eax
0x91B90A: js      short loc_91B940
0x91B90C: mov     ecx, ds:0BA9DE4h
0x91B912: mov     edx, large fs:2Ch
0x91B919: mov     ecx, [edx+ecx*4]
0x91B91C: mov     ecx, [ecx+19Ch]
0x91B922: test    ecx, ecx
0x91B924: jnz     short loc_91B92C
0x91B926: mov     ecx, ds:0BA7D9Ch
0x91B92C: mov     edx, [ebx+4]
0x91B92F: and     eax, 3FFFFFFFh
0x91B934: push    14h
0x91B936: shl     eax, 2
0x91B939: push    eax
0x91B93A: push    edx
0x91B93B: call    sub_8A75D0
0x91B940: mov     ecx, ds:0BA7D98h
0x91B946: mov     eax, [ecx]
0x91B948: push    32h ; '2'
0x91B94A: push    10h
0x91B94C: push    ebx
0x91B94D: call    dword ptr [eax+14h]
0x91B950: mov     eax, [esi+34h]
0x91B953: dec     eax
0x91B954: mov     [esi+34h], eax
0x91B957: mov     esi, [esi+30h]
0x91B95A: mov     ecx, [esi+eax*4]
0x91B95D: mov     [esi+edi*4], ecx
0x91B960: pop     edi
0x91B961: pop     esi
0x91B962: pop     ebx
0x91B963: retn    4
