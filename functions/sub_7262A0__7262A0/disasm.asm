0x7262A0: push    esi
0x7262A1: mov     si, [esp+4+arg_10]
0x7262A6: cmp     si, [ecx+0Ch]
0x7262AA: jz      short loc_7262B2
0x7262AC: xor     al, al
0x7262AE: pop     esi
0x7262AF: retn    1Ch
0x7262B2: mov     eax, [esp+4+arg_0]
0x7262B6: cmp     eax, [ecx+10h]
0x7262B9: jnb     short loc_7262AC
0x7262BB: mov     edx, [ecx+14h]
0x7262BE: test    edx, edx
0x7262C0: jz      short loc_7262AC
0x7262C2: push    edi
0x7262C3: movzx   edi, word ptr [ecx+26h]
0x7262C7: mov     ecx, [esp+8+arg_4]
0x7262CB: cmp     ecx, edi
0x7262CD: jbe     short loc_7262D6
0x7262CF: pop     edi
0x7262D0: xor     al, al
0x7262D2: pop     esi
0x7262D3: retn    1Ch
0x7262D6: lea     edi, ds:0[eax*8]
0x7262DD: sub     edi, eax
0x7262DF: lea     eax, [edx+edi*4]
0x7262E2: mov     edx, [esp+8+arg_C]
0x7262E6: mov     [eax+4], edx
0x7262E9: mov     edx, [esp+8+arg_8]
0x7262ED: mov     [eax+14h], ecx
0x7262F0: mov     ecx, [esp+8+arg_18]
0x7262F4: mov     [eax+18h], edx
0x7262F7: movzx   edx, si
0x7262FA: mov     [eax+10h], ecx
0x7262FD: mov     ecx, [esp+8+arg_14]
0x726301: imul    edx, ecx
0x726304: pop     edi
0x726305: mov     [eax+8], ecx
0x726308: mov     [eax+0Ch], edx
0x72630B: mov     al, 1
0x72630D: pop     esi
0x72630E: retn    1Ch
