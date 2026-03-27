0x88B580: push    ebx
0x88B581: push    esi
0x88B582: mov     esi, ecx
0x88B584: mov     eax, [esi]
0x88B586: mov     edx, [eax+58h]
0x88B589: xor     bl, bl
0x88B58B: call    edx
0x88B58D: test    eax, eax
0x88B58F: jz      short loc_88B5EF
0x88B591: push    edi
0x88B592: mov     edi, [esp+0Ch+arg_0]
0x88B596: test    edi, edi
0x88B598: jz      short loc_88B5EE
0x88B59A: cmp     dword ptr [esi+20h], 0
0x88B59E: mov     ebx, 1
0x88B5A3: jbe     short loc_88B5E6
0x88B5A5: cmp     dword ptr [esi+3Ch], 64h ; 'd'
0x88B5A9: jb      short loc_88B5C7
0x88B5AB: mov     ecx, esi
0x88B5AD: call    sub_88A440
0x88B5B2: mov     ecx, esi
0x88B5B4: call    sub_88A3A0
0x88B5B9: mov     ecx, esi
0x88B5BB: call    sub_88A310
0x88B5C0: mov     ecx, esi
0x88B5C2: call    sub_88A280
0x88B5C7: cmp     word ptr [edi+4], 0
0x88B5CC: jz      short loc_88B5D2
0x88B5CE: add     [edi+6], bx
0x88B5D2: mov     eax, [esi+3Ch]
0x88B5D5: mov     ecx, [esi+38h]
0x88B5D8: mov     [ecx+eax*4], edi
0x88B5DB: add     [esi+3Ch], ebx
0x88B5DE: pop     edi
0x88B5DF: pop     esi
0x88B5E0: mov     al, bl
0x88B5E2: pop     ebx
0x88B5E3: retn    4
0x88B5E6: push    edi
0x88B5E7: mov     ecx, eax
0x88B5E9: call    sub_89CCC0
0x88B5EE: pop     edi
0x88B5EF: pop     esi
0x88B5F0: mov     al, bl
0x88B5F2: pop     ebx
0x88B5F3: retn    4
