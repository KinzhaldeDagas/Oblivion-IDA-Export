0x8A66A0: push    ebx
0x8A66A1: push    esi
0x8A66A2: mov     esi, ecx
0x8A66A4: mov     ecx, [esi+14h]
0x8A66A7: test    ecx, ecx
0x8A66A9: push    edi
0x8A66AA: mov     dword ptr [esi], offset off_A97598
0x8A66B0: jz      short loc_8A66CA
0x8A66B2: cmp     word ptr [ecx+4], 0
0x8A66B7: jz      short loc_8A66CA
0x8A66B9: dec     word ptr [ecx+6]
0x8A66BD: cmp     word ptr [ecx+6], 0
0x8A66C2: jnz     short loc_8A66CA
0x8A66C4: mov     eax, [ecx]
0x8A66C6: push    1
0x8A66C8: call    dword ptr [eax]
0x8A66CA: mov     eax, [esi+4Ch]
0x8A66CD: test    eax, eax
0x8A66CF: mov     edi, ds:0BA9DE4h
0x8A66D5: mov     ebx, large fs:2Ch
0x8A66DC: js      short loc_8A6705
0x8A66DE: mov     ecx, [ebx+edi*4]
0x8A66E1: mov     ecx, [ecx+19Ch]
0x8A66E7: test    ecx, ecx
0x8A66E9: jnz     short loc_8A66F1
0x8A66EB: mov     ecx, ds:0BA7D9Ch
0x8A66F1: mov     edx, [esi+44h]
0x8A66F4: and     eax, 3FFFFFFFh
0x8A66F9: push    14h
0x8A66FB: shl     eax, 4
0x8A66FE: push    eax
0x8A66FF: push    edx
0x8A6700: call    sub_8A75D0
0x8A6705: mov     eax, [esi+40h]
0x8A6708: test    eax, eax
0x8A670A: js      short loc_8A6733
0x8A670C: mov     ecx, [ebx+edi*4]
0x8A670F: mov     ecx, [ecx+19Ch]
0x8A6715: test    ecx, ecx
0x8A6717: jnz     short loc_8A671F
0x8A6719: mov     ecx, ds:0BA7D9Ch
0x8A671F: mov     edx, [esi+38h]
0x8A6722: and     eax, 3FFFFFFFh
0x8A6727: push    14h
0x8A6729: shl     eax, 3
0x8A672C: push    eax
0x8A672D: push    edx
0x8A672E: call    sub_8A75D0
0x8A6733: pop     edi
0x8A6734: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8A673A: pop     esi
0x8A673B: pop     ebx
0x8A673C: retn
