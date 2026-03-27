0x589D60: push    esi
0x589D61: mov     esi, ecx
0x589D63: mov     eax, [esi+24h]
0x589D66: test    eax, eax
0x589D68: push    edi
0x589D69: jz      short loc_589DAD
0x589D6B: cmp     word ptr [eax+0B6h], 0
0x589D73: ja      short loc_589D79
0x589D75: xor     edi, edi
0x589D77: jmp     short loc_589D81
0x589D79: mov     eax, [eax+0B0h]
0x589D7F: mov     edi, [eax]
0x589D81: mov     edx, [esi]
0x589D83: mov     eax, [edx+0Ch]
0x589D86: call    eax
0x589D88: cmp     eax, 386h
0x589D8D: jnz     short loc_589DAD
0x589D8F: test    edi, edi
0x589D91: jz      short loc_589DAD
0x589D93: push    6
0x589D95: mov     ecx, edi
0x589D97: call    NiNode_GetNiPropertyByID
0x589D9C: test    eax, eax
0x589D9E: jz      short loc_589DAD
0x589DA0: push    0
0x589DA2: mov     ecx, eax
0x589DA4: call    NiTexturingProperty__SetUnk08
0x589DA9: or      dword ptr [esi+2Ch], 20h
0x589DAD: mov     esi, [esi+34h]
0x589DB0: test    esi, esi
0x589DB2: jz      short loc_589DE4
0x589DB4: mov     edi, [esi+8]
0x589DB7: lea     eax, [esi+8]
0x589DBA: mov     esi, [esi]
0x589DBC: call    sub_5A8260
0x589DC1: cmp     edi, eax
0x589DC3: jz      short loc_589DE0
0x589DC5: call    sub_5A8270
0x589DCA: cmp     edi, eax
0x589DCC: jz      short loc_589DE0
0x589DCE: call    sub_5A8280
0x589DD3: cmp     edi, eax
0x589DD5: jz      short loc_589DE0
0x589DD7: mov     edx, [edi]
0x589DD9: mov     eax, [edx+18h]
0x589DDC: mov     ecx, edi
0x589DDE: call    eax
0x589DE0: test    esi, esi
0x589DE2: jnz     short loc_589DB4
0x589DE4: pop     edi
0x589DE5: pop     esi
0x589DE6: retn
