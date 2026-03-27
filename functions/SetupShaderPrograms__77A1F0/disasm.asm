0x77A1F0: push    ebx
0x77A1F1: push    ebp
0x77A1F2: push    esi
0x77A1F3: push    edi
0x77A1F4: mov     edi, [esp+10h+arg_0]
0x77A1F8: xor     ebx, ebx
0x77A1FA: cmp     edi, ebx
0x77A1FC: mov     esi, ecx
0x77A1FE: jz      short loc_77A217
0x77A200: mov     eax, ds:0B29F84h
0x77A205: push    eax
0x77A206: mov     ecx, edi
0x77A208: call    NiObjectNET_GetExtraData
0x77A20D: cmp     eax, ebx
0x77A20F: jz      short loc_77A217
0x77A211: mov     [eax+14h], ebx
0x77A214: mov     [eax+18h], ebx
0x77A217: mov     eax, [esi+34h]
0x77A21A: mov     ebx, [esp+10h+arg_1C]
0x77A21E: mov     ebp, [esp+10h+arg_18]
0x77A222: mov     ecx, [esi+3Ch]
0x77A225: mov     edx, [ecx]
0x77A227: push    eax
0x77A228: mov     eax, [esp+14h+arg_14]
0x77A22C: mov     edx, [edx+4]
0x77A22F: push    ebx
0x77A230: push    ebp
0x77A231: push    eax
0x77A232: mov     eax, [esp+20h+arg_10]
0x77A236: push    eax
0x77A237: mov     eax, [esp+24h+arg_C]
0x77A23B: push    eax
0x77A23C: mov     eax, [esp+28h+arg_8]
0x77A240: push    eax
0x77A241: mov     eax, [esp+2Ch+arg_4]
0x77A245: push    eax
0x77A246: push    edi
0x77A247: call    edx
0x77A249: mov     ecx, [esi+2Ch]
0x77A24C: test    ecx, ecx
0x77A24E: mov     [esp+10h+arg_0], eax
0x77A252: jz      short loc_77A290
0x77A254: mov     eax, [esi+3Ch]
0x77A257: mov     eax, [eax+44h]
0x77A25A: test    eax, eax
0x77A25C: mov     [esp+10h+arg_1C], eax
0x77A260: jz      short loc_77A290
0x77A262: mov     eax, [esi+34h]
0x77A265: mov     edx, [ecx]
0x77A267: push    1
0x77A269: push    eax
0x77A26A: mov     eax, [esp+18h+arg_14]
0x77A26E: mov     edx, [edx+40h]
0x77A271: push    ebx
0x77A272: push    ebp
0x77A273: push    eax
0x77A274: mov     eax, [esp+24h+arg_10]
0x77A278: push    eax
0x77A279: mov     eax, [esp+28h+arg_C]
0x77A27D: push    eax
0x77A27E: mov     eax, [esp+2Ch+arg_8]
0x77A282: push    eax
0x77A283: mov     eax, [esp+30h+arg_4]
0x77A287: push    eax
0x77A288: mov     eax, [esp+34h+arg_1C]
0x77A28C: push    edi
0x77A28D: push    eax
0x77A28E: call    edx
0x77A290: mov     ecx, [esi+30h]
0x77A293: test    ecx, ecx
0x77A295: jz      short loc_77A2D3
0x77A297: mov     eax, [esi+3Ch]
0x77A29A: mov     eax, [eax+58h]
0x77A29D: test    eax, eax
0x77A29F: mov     [esp+10h+arg_1C], eax
0x77A2A3: jz      short loc_77A2D3
0x77A2A5: mov     eax, [esi+34h]
0x77A2A8: mov     edx, [ecx]
0x77A2AA: push    1
0x77A2AC: push    eax
0x77A2AD: mov     eax, [esp+18h+arg_14]
0x77A2B1: mov     edx, [edx+40h]
0x77A2B4: push    ebx
0x77A2B5: push    ebp
0x77A2B6: push    eax
0x77A2B7: mov     eax, [esp+24h+arg_10]
0x77A2BB: push    eax
0x77A2BC: mov     eax, [esp+28h+arg_C]
0x77A2C0: push    eax
0x77A2C1: mov     eax, [esp+2Ch+arg_8]
0x77A2C5: push    eax
0x77A2C6: mov     eax, [esp+30h+arg_4]
0x77A2CA: push    eax
0x77A2CB: mov     eax, [esp+34h+arg_1C]
0x77A2CF: push    edi
0x77A2D0: push    eax
0x77A2D1: call    edx
0x77A2D3: cmp     dword ptr [esi+34h], 0
0x77A2D7: jnz     short loc_77A2FA
0x77A2D9: mov     ecx, [esi+24h]
0x77A2DC: test    ecx, ecx
0x77A2DE: jz      short loc_77A2FA
0x77A2E0: mov     eax, [esi+18h]
0x77A2E3: mov     edx, [ecx]
0x77A2E5: mov     edi, [eax]
0x77A2E7: mov     eax, [edx+74h]
0x77A2EA: push    0
0x77A2EC: call    eax
0x77A2EE: mov     ecx, [esi+18h]
0x77A2F1: mov     edx, [edi+0A8h]
0x77A2F7: push    eax
0x77A2F8: call    edx
0x77A2FA: mov     eax, [esp+10h+arg_0]
0x77A2FE: pop     edi
0x77A2FF: pop     esi
0x77A300: pop     ebp
0x77A301: pop     ebx
0x77A302: retn    20h ; ' '
