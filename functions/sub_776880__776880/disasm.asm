0x776880: push    esi
0x776881: mov     esi, ecx
0x776883: mov     ecx, [esp+4+arg_4]
0x776887: movzx   eax, byte ptr [ecx+18h]
0x77688B: shr     eax, 1
0x77688D: and     eax, 7
0x776890: mov     [esi+34h], eax
0x776893: mov     ecx, [ecx+20h]
0x776896: mov     ecx, [ecx]
0x776898: test    ecx, ecx
0x77689A: jz      short loc_7768C1
0x77689C: cmp     dword ptr [ecx+8], 0
0x7768A0: jz      short loc_7768C1
0x7768A2: test    eax, eax
0x7768A4: jnz     short loc_7768C1
0x7768A6: mov     ecx, [esi+24h]
0x7768A9: mov     edx, [ecx]
0x7768AB: pop     esi
0x7768AC: mov     [esp+arg_8], eax
0x7768B0: mov     [esp+arg_4], eax
0x7768B4: mov     [esp+arg_0], 89h ; '‰'
0x7768BC: mov     eax, [edx+64h]
0x7768BF: jmp     eax
0x7768C1: mov     ecx, [esp+4+arg_8]
0x7768C5: movzx   eax, word ptr [ecx+18h]
0x7768C9: push    edi
0x7768CA: mov     edi, eax
0x7768CC: shr     edi, 4
0x7768CF: and     edi, 3
0x7768D2: test    al, 8
0x7768D4: jnz     short loc_776942
0x7768D6: mov     eax, edi
0x7768D8: sub     eax, 0
0x7768DB: jz      short loc_7768EF
0x7768DD: sub     eax, 1
0x7768E0: jz      loc_776A0B
0x7768E6: sub     eax, 1
0x7768E9: jnz     loc_776A0B
0x7768EF: cmp     dword ptr [esi+38h], 1
0x7768F3: mov     byte ptr [esi+31h], 0
0x7768F7: jnz     loc_7769CA
0x7768FD: mov     ecx, [esi+24h]
0x776900: mov     edx, [ecx]
0x776902: mov     eax, [edx+64h]
0x776905: push    0
0x776907: push    0
0x776909: push    94h ; '”'
0x77690E: call    eax
0x776910: mov     ecx, [esi+24h]
0x776913: mov     edx, [ecx]
0x776915: mov     eax, [edx+64h]
0x776918: push    0
0x77691A: push    0
0x77691C: push    93h ; '“'
0x776921: call    eax
0x776923: mov     ecx, [esi+24h]
0x776926: mov     edx, [ecx]
0x776928: mov     eax, [edx+64h]
0x77692B: push    0
0x77692D: push    0
0x77692F: push    91h ; '‘'
0x776934: call    eax
0x776936: mov     dword ptr [esi+38h], 0
0x77693D: jmp     loc_7769CA
0x776942: cmp     edi, [esi+38h]
0x776945: jz      short loc_7769C6
0x776947: mov     eax, edi
0x776949: sub     eax, 0
0x77694C: jz      short loc_77698A
0x77694E: sub     eax, 1
0x776951: jz      short loc_776984
0x776953: sub     eax, 1
0x776956: jnz     short loc_7769C3
0x776958: mov     ecx, [esi+24h]
0x77695B: mov     edx, [ecx]
0x77695D: mov     eax, [edx+64h]
0x776960: push    0
0x776962: push    0
0x776964: push    94h ; '”'
0x776969: call    eax
0x77696B: mov     ecx, [esi+24h]
0x77696E: mov     edx, [ecx]
0x776970: mov     eax, [edx+64h]
0x776973: push    0
0x776975: push    1
0x776977: push    93h ; '“'
0x77697C: call    eax
0x77697E: push    0
0x776980: push    1
0x776982: jmp     short loc_7769B4
0x776984: push    0
0x776986: push    1
0x776988: jmp     short loc_77698E
0x77698A: push    0
0x77698C: push    0
0x77698E: mov     ecx, [esi+24h]
0x776991: mov     edx, [ecx]
0x776993: mov     eax, [edx+64h]
0x776996: push    94h ; '”'
0x77699B: call    eax
0x77699D: mov     ecx, [esi+24h]
0x7769A0: mov     edx, [ecx]
0x7769A2: mov     eax, [edx+64h]
0x7769A5: push    0
0x7769A7: push    0
0x7769A9: push    93h ; '“'
0x7769AE: call    eax
0x7769B0: push    0
0x7769B2: push    0
0x7769B4: mov     ecx, [esi+24h]
0x7769B7: mov     edx, [ecx]
0x7769B9: mov     eax, [edx+64h]
0x7769BC: push    91h ; '‘'
0x7769C1: call    eax
0x7769C3: mov     [esi+38h], edi
0x7769C6: mov     byte ptr [esi+31h], 1
0x7769CA: mov     ecx, [esi+24h]
0x7769CD: mov     edx, [ecx]
0x7769CF: mov     eax, [edx+64h]
0x7769D2: push    0
0x7769D4: push    1
0x7769D6: push    89h ; '‰'
0x7769DB: call    eax
0x7769DD: mov     eax, [esi+2Ch]
0x7769E0: cmp     eax, [esi+28h]
0x7769E3: mov     edi, [esp+8+arg_0]
0x7769E7: jz      short loc_7769F5
0x7769E9: cmp     edi, eax
0x7769EB: jnz     short loc_7769F5
0x7769ED: mov     cl, [esi+31h]
0x7769F0: cmp     cl, [esi+30h]
0x7769F3: jz      short loc_776A06
0x7769F5: push    edi
0x7769F6: mov     ecx, esi
0x7769F8: call    sub_7763A0
0x7769FD: mov     dl, [esi+31h]
0x776A00: mov     [esi+2Ch], edi
0x776A03: mov     [esi+30h], dl
0x776A06: pop     edi
0x776A07: pop     esi
0x776A08: retn    0Ch
0x776A0B: mov     ecx, [esi+24h]
0x776A0E: mov     eax, [ecx]
0x776A10: mov     edx, [eax+64h]
0x776A13: pop     edi
0x776A14: pop     esi
0x776A15: mov     [esp+arg_8], 0
0x776A1D: mov     [esp+arg_4], 0
0x776A25: mov     [esp+arg_0], 89h ; '‰'
0x776A2D: jmp     edx
