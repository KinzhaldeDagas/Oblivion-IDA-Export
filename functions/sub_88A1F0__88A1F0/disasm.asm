0x88A1F0: push    esi
0x88A1F1: mov     esi, ecx
0x88A1F3: mov     eax, [esi+4Ch]
0x88A1F6: test    eax, eax
0x88A1F8: jbe     loc_88A27A
0x88A1FE: cmp     eax, 0BB8h
0x88A203: jb      short loc_88A20C
0x88A205: mov     dword ptr [esi+4Ch], 0BB8h
0x88A20C: mov     eax, [esi]
0x88A20E: mov     edx, [eax+58h]
0x88A211: call    edx
0x88A213: test    eax, eax
0x88A215: jz      short loc_88A27A
0x88A217: mov     ecx, [esi+4Ch]
0x88A21A: mov     edx, [esi+48h]
0x88A21D: push    edi
0x88A21E: push    ecx
0x88A21F: push    edx
0x88A220: mov     ecx, eax
0x88A222: call    sub_89C8E0
0x88A227: xor     edi, edi
0x88A229: cmp     [esi+4Ch], edi
0x88A22C: jbe     short loc_88A25C
0x88A22E: mov     edi, edi
0x88A230: mov     eax, [esi+48h]
0x88A233: mov     eax, [eax+edi*4]
0x88A236: test    eax, eax
0x88A238: jz      short loc_88A23F
0x88A23A: mov     eax, [eax+0Ch]
0x88A23D: jmp     short loc_88A241
0x88A23F: xor     eax, eax
0x88A241: test    eax, eax
0x88A243: jz      short loc_88A249
0x88A245: and     dword ptr [eax+18h], 0FFFFFFDFh
0x88A249: mov     ecx, [esi+48h]
0x88A24C: mov     ecx, [ecx+edi*4]
0x88A24F: call    sub_8BC730
0x88A254: add     edi, 1
0x88A257: cmp     edi, [esi+4Ch]
0x88A25A: jb      short loc_88A230
0x88A25C: mov     edx, [esi+4Ch]
0x88A25F: mov     eax, [esi+48h]
0x88A262: add     edx, edx
0x88A264: add     edx, edx
0x88A266: push    edx
0x88A267: push    0
0x88A269: push    eax
0x88A26A: call    __memset
0x88A26F: add     esp, 0Ch
0x88A272: mov     dword ptr [esi+4Ch], 0
0x88A279: pop     edi
0x88A27A: pop     esi
0x88A27B: retn
