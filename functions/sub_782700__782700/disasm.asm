0x782700: mov     edx, [ecx+30h]
0x782703: push    ebx
0x782704: mov     ebx, [esp+4+arg_0]
0x782708: push    ebp
0x782709: push    esi
0x78270A: mov     esi, [edx+ebx*4]
0x78270D: xor     ebp, ebp
0x78270F: xor     eax, eax
0x782711: cmp     esi, ebp
0x782713: jz      short loc_782793
0x782715: mov     eax, [ecx+20h]
0x782718: push    edi
0x782719: mov     edi, [esi+14h]
0x78271C: sub     eax, edi
0x78271E: cmp     eax, [esi+0Ch]
0x782721: mov     [esp+10h+arg_0], edi
0x782725: jnz     short loc_782754
0x782727: cmp     ebx, ebp
0x782729: mov     [ecx+20h], ebp
0x78272C: jbe     short loc_782754
0x78272E: mov     edi, edx
0x782730: mov     ebp, ebx
0x782732: mov     edx, [edi]
0x782734: test    edx, edx
0x782736: jz      short loc_782746
0x782738: mov     eax, [edx+14h]
0x78273B: add     eax, [edx+0Ch]
0x78273E: cmp     eax, [ecx+20h]
0x782741: jbe     short loc_782746
0x782743: mov     [ecx+20h], eax
0x782746: add     edi, 4
0x782749: sub     ebp, 1
0x78274C: jnz     short loc_782732
0x78274E: mov     edi, [esp+10h+arg_0]
0x782752: xor     ebp, ebp
0x782754: mov     edx, [ecx+0Ch]
0x782757: sub     edx, [ecx+20h]
0x78275A: add     [ecx+28h], edi
0x78275D: lea     eax, [esp+10h+arg_0]
0x782761: push    eax
0x782762: mov     [ecx+24h], edx
0x782765: push    ebx
0x782766: add     ecx, 2Ch ; ','
0x782769: mov     [esp+18h+arg_0], ebp
0x78276D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x782772: mov     [esi+1Ch], ebp
0x782775: mov     ecx, ds:0B428D4h
0x78277B: mov     [esi+18h], ecx
0x78277E: mov     eax, ds:0B428D4h
0x782783: cmp     eax, ebp
0x782785: jz      short loc_78278A
0x782787: mov     [eax+1Ch], esi
0x78278A: mov     eax, edi
0x78278C: mov     ds:0B428D4h, esi
0x782792: pop     edi
0x782793: pop     esi
0x782794: pop     ebp
0x782795: pop     ebx
0x782796: retn    4
