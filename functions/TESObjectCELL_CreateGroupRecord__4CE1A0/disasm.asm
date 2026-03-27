0x4CE1A0: push    ebp
0x4CE1A1: push    esi
0x4CE1A2: mov     esi, [esp+8+arg_0]
0x4CE1A6: xor     ebp, ebp
0x4CE1A8: cmp     esi, ebp
0x4CE1AA: push    edi
0x4CE1AB: mov     edi, ecx
0x4CE1AD: jz      loc_4CE318
0x4CE1B3: mov     ecx, 1
0x4CE1B8: mov     [esi], ebp
0x4CE1BA: test    [edi+24h], cl
0x4CE1BD: push    ebx
0x4CE1BE: mov     ebx, [esp+10h+arg_4]
0x4CE1C2: jnz     loc_4CE28B
0x4CE1C8: cmp     ebx, ebp
0x4CE1CA: jz      loc_4CE317
0x4CE1D0: mov     eax, [ebx+0Ch]
0x4CE1D3: sub     eax, ebp
0x4CE1D5: jz      short loc_4CE254
0x4CE1D7: sub     eax, ecx
0x4CE1D9: jz      short loc_4CE226
0x4CE1DB: sub     eax, 3
0x4CE1DE: jnz     loc_4CE317
0x4CE1E4: mov     ecx, edi
0x4CE1E6: call    sub_4CA5F0
0x4CE1EB: cmp     [ebx+8], eax
0x4CE1EE: jnz     loc_4CE317
0x4CE1F4: test    dword ptr [edi+8], 400h
0x4CE1FB: jnz     loc_4CE317
0x4CE201: mov     eax, ds:0B05E20h
0x4CE206: mov     ecx, edi
0x4CE208: mov     [esi], eax
0x4CE20A: mov     dword ptr [esi+0Ch], 5
0x4CE211: call    sub_4CA640
0x4CE216: pop     ebx
0x4CE217: pop     edi
0x4CE218: mov     [esi+10h], ebp
0x4CE21B: mov     [esi+4], ebp
0x4CE21E: mov     [esi+8], eax
0x4CE221: pop     esi
0x4CE222: pop     ebp
0x4CE223: retn    8
0x4CE226: mov     eax, [edi+50h]
0x4CE229: mov     ecx, [ebx+8]
0x4CE22C: cmp     ecx, [eax+0Ch]
0x4CE22F: jnz     loc_4CE317
0x4CE235: test    dword ptr [edi+8], 400h
0x4CE23C: jnz     loc_4CE317
0x4CE242: mov     edx, ds:0B05E20h
0x4CE248: mov     dword ptr [esi+0Ch], 4
0x4CE24F: jmp     loc_4CE305
0x4CE254: mov     eax, [ebx+8]
0x4CE257: cmp     eax, ds:0B06084h
0x4CE25D: jnz     loc_4CE317
0x4CE263: mov     edx, ds:0B05E20h
0x4CE269: mov     [esi], edx
0x4CE26B: mov     [esi+0Ch], ecx
0x4CE26E: xor     eax, eax
0x4CE270: test    [edi+24h], cl
0x4CE273: jnz     short loc_4CE278
0x4CE275: mov     eax, [edi+50h]
0x4CE278: mov     eax, [eax+0Ch]
0x4CE27B: pop     ebx
0x4CE27C: pop     edi
0x4CE27D: mov     [esi+10h], ebp
0x4CE280: mov     [esi+4], ebp
0x4CE283: mov     [esi+8], eax
0x4CE286: pop     esi
0x4CE287: pop     ebp
0x4CE288: retn    8
0x4CE28B: cmp     ebx, ebp
0x4CE28D: jnz     short loc_4CE2B0
0x4CE28F: mov     ecx, ds:0B05E20h
0x4CE295: mov     [esi+0Ch], ebp
0x4CE298: pop     ebx
0x4CE299: mov     [esi], ecx
0x4CE29B: mov     edx, ds:0B06048h
0x4CE2A1: pop     edi
0x4CE2A2: mov     [esi+10h], ebp
0x4CE2A5: mov     [esi+4], ebp
0x4CE2A8: mov     [esi+8], edx
0x4CE2AB: pop     esi
0x4CE2AC: pop     ebp
0x4CE2AD: retn    8
0x4CE2B0: mov     eax, [ebx+0Ch]
0x4CE2B3: sub     eax, ebp
0x4CE2B5: jz      short loc_4CE2ED
0x4CE2B7: sub     eax, 2
0x4CE2BA: jnz     short loc_4CE317
0x4CE2BC: mov     ecx, edi
0x4CE2BE: call    sub_4CA5F0
0x4CE2C3: cmp     [ebx+8], eax
0x4CE2C6: jnz     short loc_4CE317
0x4CE2C8: mov     eax, ds:0B05E20h
0x4CE2CD: mov     ecx, edi
0x4CE2CF: mov     [esi], eax
0x4CE2D1: mov     dword ptr [esi+0Ch], 3
0x4CE2D8: call    sub_4CA640
0x4CE2DD: pop     ebx
0x4CE2DE: pop     edi
0x4CE2DF: mov     [esi+10h], ebp
0x4CE2E2: mov     [esi+4], ebp
0x4CE2E5: mov     [esi+8], eax
0x4CE2E8: pop     esi
0x4CE2E9: pop     ebp
0x4CE2EA: retn    8
0x4CE2ED: mov     ecx, [ebx+8]
0x4CE2F0: cmp     ecx, ds:0B06048h
0x4CE2F6: jnz     short loc_4CE317
0x4CE2F8: mov     edx, ds:0B05E20h
0x4CE2FE: mov     dword ptr [esi+0Ch], 2
0x4CE305: mov     ecx, edi
0x4CE307: mov     [esi], edx
0x4CE309: call    sub_4CA5F0
0x4CE30E: mov     [esi+8], eax
0x4CE311: mov     [esi+10h], ebp
0x4CE314: mov     [esi+4], ebp
0x4CE317: pop     ebx
0x4CE318: pop     edi
0x4CE319: pop     esi
0x4CE31A: pop     ebp
0x4CE31B: retn    8
