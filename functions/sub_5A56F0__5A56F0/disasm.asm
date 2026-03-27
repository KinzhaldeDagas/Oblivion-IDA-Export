0x5A56F0: push    esi
0x5A56F1: mov     esi, ecx
0x5A56F3: mov     eax, [esi+10h]
0x5A56F6: mov     ecx, [esi+0Ch]
0x5A56F9: cmp     eax, ecx
0x5A56FB: jz      loc_5A578E
0x5A5701: test    eax, eax
0x5A5703: push    edi
0x5A5704: jz      short loc_5A572D
0x5A5706: xor     edx, edx
0x5A5708: test    ecx, ecx
0x5A570A: jbe     short loc_5A572D
0x5A570C: xor     edi, edi
0x5A570E: mov     edi, edi
0x5A5710: mov     eax, [esi+4]
0x5A5713: mov     ecx, [eax+edx*4]
0x5A5716: test    ecx, ecx
0x5A5718: jz      short loc_5A5725
0x5A571A: cmp     [edi+eax], ecx
0x5A571D: jz      short loc_5A5722
0x5A571F: mov     [edi+eax], ecx
0x5A5722: add     edi, 4
0x5A5725: add     edx, 1
0x5A5728: cmp     edx, [esi+0Ch]
0x5A572B: jb      short loc_5A5710
0x5A572D: mov     eax, [esi+10h]
0x5A5730: test    eax, eax
0x5A5732: mov     edi, [esi+4]
0x5A5735: mov     [esi+0Ch], eax
0x5A5738: mov     [esi+8], eax
0x5A573B: jbe     short loc_5A577D
0x5A573D: xor     ecx, ecx
0x5A573F: mov     edx, 4
0x5A5744: mul     edx
0x5A5746: seto    cl
0x5A5749: neg     ecx
0x5A574B: or      ecx, eax
0x5A574D: push    ecx; Size
0x5A574E: call    FormHeapAlloc
0x5A5753: mov     [esi+4], eax
0x5A5756: xor     eax, eax
0x5A5758: add     esp, 4
0x5A575B: cmp     [esi+0Ch], eax
0x5A575E: jbe     short loc_5A5784
0x5A5760: mov     edx, [edi+eax*4]
0x5A5763: mov     ecx, [esi+4]
0x5A5766: mov     [ecx+eax*4], edx
0x5A5769: add     eax, 1
0x5A576C: cmp     eax, [esi+0Ch]
0x5A576F: jb      short loc_5A5760
0x5A5771: push    edi
0x5A5772: call    FormHeapFree
0x5A5777: add     esp, 4
0x5A577A: pop     edi
0x5A577B: pop     esi
0x5A577C: retn
0x5A577D: mov     dword ptr [esi+4], 0
0x5A5784: push    edi
0x5A5785: call    FormHeapFree
0x5A578A: add     esp, 4
0x5A578D: pop     edi
0x5A578E: pop     esi
0x5A578F: retn
