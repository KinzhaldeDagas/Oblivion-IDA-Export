0x73BD30: mov     eax, [esp+arg_4]
0x73BD34: push    ebx
0x73BD35: push    ebp
0x73BD36: mov     ebp, [esp+8+arg_0]
0x73BD3A: push    esi
0x73BD3B: push    edi
0x73BD3C: push    eax
0x73BD3D: push    ebp
0x73BD3E: mov     ebx, ecx
0x73BD40: call    sub_708B00
0x73BD45: mov     esi, [ebp+13Ch]
0x73BD4B: cmp     esi, [ebx+13Ch]
0x73BD51: jz      short loc_73BD8D
0x73BD53: test    esi, esi
0x73BD55: jz      short loc_73BD73
0x73BD57: lea     ecx, [esi+4]
0x73BD5A: push    ecx; lpAddend
0x73BD5B: call    dword ptr ds:0A2807Ch
0x73BD61: test    eax, eax
0x73BD63: jnz     short loc_73BD73
0x73BD65: test    esi, esi
0x73BD67: jz      short loc_73BD73
0x73BD69: mov     edx, [esi]
0x73BD6B: mov     eax, [edx]
0x73BD6D: push    1
0x73BD6F: mov     ecx, esi
0x73BD71: call    eax
0x73BD73: mov     eax, [ebx+13Ch]
0x73BD79: test    eax, eax
0x73BD7B: mov     [ebp+13Ch], eax
0x73BD81: jz      short loc_73BD8D
0x73BD83: add     eax, 4
0x73BD86: push    eax; lpAddend
0x73BD87: call    dword ptr ds:0A28078h
0x73BD8D: lea     esi, [ebx+0DCh]
0x73BD93: lea     edi, [ebp+0DCh]
0x73BD99: mov     ecx, 9
0x73BD9E: rep movsd
0x73BDA0: mov     ecx, [ebx+100h]
0x73BDA6: mov     [ebp+100h], ecx
0x73BDAC: mov     edx, [ebx+104h]
0x73BDB2: mov     [ebp+104h], edx
0x73BDB8: mov     eax, [ebx+108h]
0x73BDBE: mov     [ebp+108h], eax
0x73BDC4: mov     ecx, [ebx+140h]
0x73BDCA: mov     [ebp+140h], ecx
0x73BDD0: mov     edx, [ebx+144h]
0x73BDD6: mov     [ebp+144h], edx
0x73BDDC: mov     eax, [ebx+148h]
0x73BDE2: mov     [ebp+148h], eax
0x73BDE8: mov     ecx, [ebx+14Ch]
0x73BDEE: mov     [ebp+14Ch], ecx
0x73BDF4: mov     dl, [ebx+150h]
0x73BDFA: mov     [ebp+150h], dl
0x73BE00: mov     eax, [ebx+154h]
0x73BE06: mov     [ebp+154h], eax
0x73BE0C: mov     ecx, [ebx+158h]
0x73BE12: mov     [ebp+158h], ecx
0x73BE18: mov     edx, [ebx+15Ch]
0x73BE1E: mov     [ebp+15Ch], edx
0x73BE24: mov     eax, [ebx+160h]
0x73BE2A: mov     [ebp+160h], eax
0x73BE30: mov     edx, [ebx+164h]
0x73BE36: lea     eax, [ebx+164h]
0x73BE3C: lea     ecx, [ebp+164h]
0x73BE42: mov     [ecx], edx
0x73BE44: mov     edx, [eax+4]
0x73BE47: mov     [ecx+4], edx
0x73BE4A: mov     edx, [eax+8]
0x73BE4D: pop     edi
0x73BE4E: pop     esi
0x73BE4F: mov     [ecx+8], edx
0x73BE52: mov     eax, [eax+0Ch]
0x73BE55: pop     ebp
0x73BE56: mov     [ecx+0Ch], eax
0x73BE59: pop     ebx
0x73BE5A: retn    8
