0x5E1B30: push    ebx
0x5E1B31: push    esi
0x5E1B32: mov     esi, ecx
0x5E1B34: mov     eax, [esi]
0x5E1B36: mov     edx, [eax+170h]
0x5E1B3C: push    edi
0x5E1B3D: xor     ebx, ebx
0x5E1B3F: call    edx
0x5E1B41: mov     edi, eax
0x5E1B43: test    edi, edi
0x5E1B45: jz      short loc_5E1B59
0x5E1B47: mov     eax, [esi]
0x5E1B49: mov     edx, [eax+190h]
0x5E1B4F: mov     ecx, esi
0x5E1B51: call    edx
0x5E1B53: test    al, al
0x5E1B55: jz      short loc_5E1B59
0x5E1B57: mov     ebx, edi
0x5E1B59: mov     eax, [ebx+24h]
0x5E1B5C: mov     edx, [eax+30h]
0x5E1B5F: lea     ecx, [ebx+24h]
0x5E1B62: call    edx
0x5E1B64: test    al, al
0x5E1B66: jz      short loc_5E1BA3
0x5E1B68: mov     eax, [esi]
0x5E1B6A: mov     edx, [eax+170h]
0x5E1B70: mov     ecx, esi
0x5E1B72: xor     ebx, ebx
0x5E1B74: call    edx
0x5E1B76: mov     edi, eax
0x5E1B78: test    edi, edi
0x5E1B7A: jz      short loc_5E1B8E
0x5E1B7C: mov     eax, [esi]
0x5E1B7E: mov     edx, [eax+190h]
0x5E1B84: mov     ecx, esi
0x5E1B86: call    edx
0x5E1B88: test    al, al
0x5E1B8A: jz      short loc_5E1B8E
0x5E1B8C: mov     ebx, edi
0x5E1B8E: mov     eax, [ebx+24h]
0x5E1B91: mov     edx, [eax+28h]
0x5E1B94: lea     ecx, [ebx+24h]
0x5E1B97: call    edx
0x5E1B99: test    al, al
0x5E1B9B: jz      short loc_5E1BA3
0x5E1B9D: pop     edi
0x5E1B9E: pop     esi
0x5E1B9F: xor     eax, eax
0x5E1BA1: pop     ebx
0x5E1BA2: retn
0x5E1BA3: pop     edi
0x5E1BA4: pop     esi
0x5E1BA5: mov     eax, 1
0x5E1BAA: pop     ebx
0x5E1BAB: retn
