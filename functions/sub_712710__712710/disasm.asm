0x712710: push    esi
0x712711: push    edi
0x712712: mov     esi, ecx
0x712714: xor     edi, edi
0x712716: cmp     [esi+210h], edi
0x71271C: jbe     short loc_71273C
0x71271E: mov     edi, edi
0x712720: mov     eax, [esi+208h]
0x712726: mov     ecx, [eax+edi*4]
0x712729: mov     edx, [ecx]
0x71272B: mov     eax, [edx+24h]
0x71272E: push    esi
0x71272F: call    eax
0x712731: add     edi, 1
0x712734: cmp     edi, [esi+210h]
0x71273A: jb      short loc_712720
0x71273C: pop     edi
0x71273D: pop     esi
0x71273E: retn
