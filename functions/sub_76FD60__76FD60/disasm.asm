0x76FD60: mov     eax, [esp+arg_0]
0x76FD64: push    esi
0x76FD65: mov     esi, ecx
0x76FD67: cmp     eax, [esi+20h]
0x76FD6A: jb      short loc_76FD72
0x76FD6C: xor     al, al
0x76FD6E: pop     esi
0x76FD6F: retn    4
0x76FD72: shl     eax, 4
0x76FD75: add     eax, [esi+24h]
0x76FD78: xor     ecx, ecx
0x76FD7A: cmp     [esi+1Ch], ecx
0x76FD7D: push    edi
0x76FD7E: mov     edi, eax
0x76FD80: jbe     short loc_76FDA2
0x76FD82: xor     edx, edx
0x76FD84: mov     eax, [edi+8]
0x76FD87: add     eax, edx
0x76FD89: add     ecx, 1
0x76FD8C: mov     dword ptr [eax+8], 0FFFFFFFFh
0x76FD93: mov     dword ptr [eax+0Ch], 11h
0x76FD9A: add     edx, 1Ch
0x76FD9D: cmp     ecx, [esi+1Ch]
0x76FDA0: jb      short loc_76FD84
0x76FDA2: mov     eax, [esi+30h]
0x76FDA5: test    eax, eax
0x76FDA7: mov     byte ptr [esi+28h], 1
0x76FDAB: pop     edi
0x76FDAC: jz      short loc_76FDBD
0x76FDAE: mov     ecx, [eax]
0x76FDB0: mov     edx, [ecx+8]
0x76FDB3: push    eax
0x76FDB4: call    edx
0x76FDB6: mov     dword ptr [esi+30h], 0
0x76FDBD: mov     al, 1
0x76FDBF: pop     esi
0x76FDC0: retn    4
