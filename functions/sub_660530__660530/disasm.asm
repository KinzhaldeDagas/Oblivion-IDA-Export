0x660530: push    esi
0x660531: mov     esi, ecx
0x660533: mov     eax, [esi+5ACh]
0x660539: test    eax, eax
0x66053B: jz      short loc_660559
0x66053D: xor     ecx, ecx
0x66053F: nop
0x660540: cmp     dword ptr [eax], 0
0x660543: jz      short loc_660548
0x660545: add     ecx, 1
0x660548: mov     eax, [eax+4]
0x66054B: test    eax, eax
0x66054D: jnz     short loc_660540
0x66054F: mov     [esi+7A0h], ecx
0x660555: mov     eax, ecx
0x660557: pop     esi
0x660558: retn
0x660559: push    0
0x66055B: push    0Ch
0x66055D: push    esi
0x66055E: mov     ecx, offset ActorProcessManager_ptr
0x660563: call    sub_6758E0
0x660568: test    eax, eax
0x66056A: jz      short loc_660589
0x66056C: xor     ecx, ecx
0x66056E: mov     edi, edi
0x660570: cmp     dword ptr [eax], 0
0x660573: jz      short loc_660578
0x660575: add     ecx, 1
0x660578: mov     eax, [eax+4]
0x66057B: test    eax, eax
0x66057D: jnz     short loc_660570
0x66057F: mov     [esi+7A0h], ecx
0x660585: mov     eax, ecx
0x660587: pop     esi
0x660588: retn
0x660589: mov     dword ptr [esi+7A0h], 0
0x660593: mov     eax, [esi+7A0h]
0x660599: pop     esi
0x66059A: retn
