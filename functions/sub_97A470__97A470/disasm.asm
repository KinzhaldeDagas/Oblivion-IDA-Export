0x97A470: push    ebx
0x97A471: push    ebp
0x97A472: push    esi
0x97A473: mov     esi, [esp+0Ch+arg_0]
0x97A477: mov     eax, [esi]
0x97A479: xor     ebp, ebp
0x97A47B: xor     ebx, ebx
0x97A47D: test    eax, eax
0x97A47F: jz      short loc_97A4A7
0x97A481: mov     eax, [eax+0A8h]
0x97A487: test    eax, eax
0x97A489: jnz     short loc_97A498
0x97A48B: mov     eax, [esi+8]
0x97A48E: mov     eax, [eax+0A8h]
0x97A494: test    eax, eax
0x97A496: jz      short loc_97A4A7
0x97A498: mov     eax, [eax+38h]
0x97A49B: test    eax, eax
0x97A49D: jz      short loc_97A4A7
0x97A49F: push    esi
0x97A4A0: call    eax
0x97A4A2: add     esp, 4
0x97A4A5: mov     ebp, eax
0x97A4A7: mov     ecx, [esi+4]
0x97A4AA: test    ecx, ecx
0x97A4AC: jz      short loc_97A501
0x97A4AE: mov     eax, [ecx+0A8h]
0x97A4B4: test    eax, eax
0x97A4B6: jnz     short loc_97A4C5
0x97A4B8: mov     edx, [esi+0Ch]
0x97A4BB: mov     eax, [edx+0A8h]
0x97A4C1: test    eax, eax
0x97A4C3: jz      short loc_97A501
0x97A4C5: push    edi
0x97A4C6: mov     edi, [eax+38h]
0x97A4C9: test    edi, edi
0x97A4CB: jz      short loc_97A500
0x97A4CD: mov     eax, [esi]
0x97A4CF: mov     ebx, [esi+2Ch]
0x97A4D2: mov     edx, [esi+28h]
0x97A4D5: mov     [esi], ecx
0x97A4D7: mov     ecx, [esi+24h]
0x97A4DA: mov     [esi+4], eax
0x97A4DD: mov     eax, [esi+20h]
0x97A4E0: mov     [esi+20h], ebx
0x97A4E3: mov     ebx, [esi+30h]
0x97A4E6: mov     [esi+24h], ebx
0x97A4E9: mov     ebx, [esi+34h]
0x97A4EC: mov     [esi+2Ch], eax
0x97A4EF: mov     [esi+30h], ecx
0x97A4F2: push    esi
0x97A4F3: mov     [esi+28h], ebx
0x97A4F6: mov     [esi+34h], edx
0x97A4F9: call    edi
0x97A4FB: add     esp, 4
0x97A4FE: mov     ebx, eax
0x97A500: pop     edi
0x97A501: test    ebp, ebp
0x97A503: jnz     short loc_97A511
0x97A505: test    ebx, ebx
0x97A507: jnz     short loc_97A516
0x97A509: pop     esi
0x97A50A: pop     ebp
0x97A50B: xor     eax, eax
0x97A50D: pop     ebx
0x97A50E: retn    4
0x97A511: cmp     ebp, 2
0x97A514: jz      short loc_97A520
0x97A516: cmp     ebx, 2
0x97A519: mov     eax, 1
0x97A51E: jnz     short loc_97A525
0x97A520: mov     eax, 2
0x97A525: pop     esi
0x97A526: pop     ebp
0x97A527: pop     ebx
0x97A528: retn    4
