0x75B740: push    esi
0x75B741: push    edi
0x75B742: push    38h ; '8'; Size
0x75B744: mov     edi, ecx
0x75B746: call    FormHeapAlloc
0x75B74B: mov     esi, eax
0x75B74D: add     esp, 4
0x75B750: test    esi, esi
0x75B752: jz      short loc_75B79A
0x75B754: mov     ecx, esi
0x75B756: call    sub_752BF0
0x75B75B: fldz
0x75B75D: mov     dword ptr [esi], offset ??_7NiPSysBombModifier@@6B@; const NiPSysBombModifier::`vftable'
0x75B763: mov     dword ptr [esi+18h], 0
0x75B76A: mov     eax, ds:0B258D0h
0x75B76F: mov     [esi+1Ch], eax
0x75B772: mov     ecx, ds:0B258D4h
0x75B778: mov     [esi+20h], ecx
0x75B77B: mov     edx, ds:0B258D8h
0x75B781: fst     dword ptr [esi+28h]
0x75B784: fstp    dword ptr [esi+2Ch]
0x75B787: mov     [esi+24h], edx
0x75B78A: mov     dword ptr [esi+30h], 0
0x75B791: mov     dword ptr [esi+34h], 0
0x75B798: jmp     short loc_75B79C
0x75B79A: xor     esi, esi
0x75B79C: mov     eax, [esp+8+arg_0]
0x75B7A0: push    eax
0x75B7A1: push    esi
0x75B7A2: mov     ecx, edi
0x75B7A4: call    sub_752C40
0x75B7A9: mov     ecx, [edi+1Ch]
0x75B7AC: mov     [esi+1Ch], ecx
0x75B7AF: mov     edx, [edi+20h]
0x75B7B2: mov     [esi+20h], edx
0x75B7B5: mov     eax, [edi+24h]
0x75B7B8: mov     [esi+24h], eax
0x75B7BB: fld     dword ptr [edi+28h]
0x75B7BE: fstp    dword ptr [esi+28h]
0x75B7C1: mov     eax, esi
0x75B7C3: fld     dword ptr [edi+2Ch]
0x75B7C6: fstp    dword ptr [esi+2Ch]
0x75B7C9: mov     ecx, [edi+30h]
0x75B7CC: mov     [esi+30h], ecx
0x75B7CF: mov     edx, [edi+34h]
0x75B7D2: pop     edi
0x75B7D3: mov     [esi+34h], edx
0x75B7D6: pop     esi
0x75B7D7: retn    4
