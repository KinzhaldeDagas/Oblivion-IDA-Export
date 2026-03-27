0x4CA710: push    esi
0x4CA711: push    edi
0x4CA712: mov     edi, ecx
0x4CA714: mov     eax, [edi+3Ch]
0x4CA717: xor     esi, esi
0x4CA719: cmp     eax, esi
0x4CA71B: jz      short loc_4CA729
0x4CA71D: push    eax
0x4CA71E: call    FormHeapFree
0x4CA723: add     esp, 4
0x4CA726: mov     [edi+3Ch], esi
0x4CA729: test    byte ptr [edi+24h], 1
0x4CA72D: jz      short loc_4CA764
0x4CA72F: push    28h ; '('; Size
0x4CA731: call    FormHeapAlloc
0x4CA736: add     esp, 4
0x4CA739: cmp     eax, esi
0x4CA73B: jz      short loc_4CA77D
0x4CA73D: fldz
0x4CA73F: mov     [eax], esi
0x4CA741: fst     dword ptr [eax+0Ch]
0x4CA744: mov     [eax+4], esi
0x4CA747: fst     dword ptr [eax+10h]
0x4CA74A: mov     [eax+8], esi
0x4CA74D: fld1
0x4CA74F: mov     [eax+14h], esi
0x4CA752: fstp    dword ptr [eax+1Ch]
0x4CA755: mov     [eax+18h], esi
0x4CA758: mov     [eax+24h], esi
0x4CA75B: fstp    dword ptr [eax+20h]
0x4CA75E: mov     [edi+3Ch], eax
0x4CA761: pop     edi
0x4CA762: pop     esi
0x4CA763: retn
0x4CA764: push    8; Size
0x4CA766: call    FormHeapAlloc
0x4CA76B: add     esp, 4
0x4CA76E: cmp     eax, esi
0x4CA770: jz      short loc_4CA77D
0x4CA772: mov     [eax], esi
0x4CA774: mov     [eax+4], esi
0x4CA777: mov     [edi+3Ch], eax
0x4CA77A: pop     edi
0x4CA77B: pop     esi
0x4CA77C: retn
0x4CA77D: xor     eax, eax
0x4CA77F: mov     [edi+3Ch], eax
0x4CA782: pop     edi
0x4CA783: pop     esi
0x4CA784: retn
