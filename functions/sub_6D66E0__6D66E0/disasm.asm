0x6D66E0: push    0FFFFFFFFh
0x6D66E2: push    offset SEH_8C8970
0x6D66E7: mov     eax, large fs:0
0x6D66ED: push    eax
0x6D66EE: push    ecx
0x6D66EF: push    esi
0x6D66F0: push    edi
0x6D66F1: mov     eax, ds:0B30AACh
0x6D66F6: xor     eax, esp
0x6D66F8: push    eax
0x6D66F9: lea     eax, [esp+1Ch+var_C]
0x6D66FD: mov     large fs:0, eax
0x6D6703: push    38h ; '8'; Size
0x6D6705: call    FormHeapAlloc
0x6D670A: mov     esi, eax
0x6D670C: add     esp, 4
0x6D670F: mov     [esp+1Ch+var_10], esi
0x6D6713: xor     edi, edi
0x6D6715: cmp     esi, edi
0x6D6717: mov     [esp+1Ch+var_4], edi
0x6D671B: jz      short loc_6D6792
0x6D671D: mov     ecx, esi
0x6D671F: call    sub_6EC220
0x6D6724: mov     dword ptr [esi], offset ??_7NiTransformInterpolator@@6B@; const NiTransformInterpolator::`vftable'
0x6D672A: mov     eax, ds:0B24260h
0x6D672F: mov     [esi+0Ch], eax
0x6D6732: mov     ecx, ds:0B24264h
0x6D6738: mov     [esi+10h], ecx
0x6D673B: mov     edx, ds:0B24268h
0x6D6741: mov     [esi+14h], edx
0x6D6744: mov     eax, ds:0B3CBA4h
0x6D6749: mov     [esi+18h], eax
0x6D674C: mov     ecx, ds:0B3CBA8h
0x6D6752: mov     [esi+1Ch], ecx
0x6D6755: mov     edx, ds:0B3CBACh
0x6D675B: mov     [esi+20h], edx
0x6D675E: mov     eax, ds:0B3CBB0h
0x6D6763: mov     [esi+24h], eax
0x6D6766: fld     dword ptr ds:0A79E10h
0x6D676C: fstp    dword ptr [esi+28h]
0x6D676F: mov     [esi+2Ch], edi
0x6D6772: mov     [esi+30h], di
0x6D6776: mov     [esi+32h], di
0x6D677A: mov     [esi+34h], di
0x6D677E: mov     eax, esi
0x6D6780: mov     ecx, [esp+1Ch+var_C]
0x6D6784: mov     large fs:0, ecx
0x6D678B: pop     ecx
0x6D678C: pop     edi
0x6D678D: pop     esi
0x6D678E: add     esp, 10h
0x6D6791: retn
0x6D6792: xor     eax, eax
0x6D6794: mov     ecx, [esp+1Ch+var_C]
0x6D6798: mov     large fs:0, ecx
0x6D679F: pop     ecx
0x6D67A0: pop     edi
0x6D67A1: pop     esi
0x6D67A2: add     esp, 10h
0x6D67A5: retn
