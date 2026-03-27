0x8E8270: push    ecx
0x8E8271: push    esi
0x8E8272: mov     esi, [esp+8+arg_4]
0x8E8276: xor     eax, eax
0x8E8278: test    esi, esi
0x8E827A: jz      loc_8E8302
0x8E8280: mov     eax, [esi+24h]
0x8E8283: push    edi
0x8E8284: mov     edi, [esp+0Ch+arg_0]
0x8E8288: push    1
0x8E828A: lea     ecx, [esp+10h+var_4]
0x8E828E: push    ecx
0x8E828F: mov     [esp+14h+arg_4], eax
0x8E8293: mov     eax, [edi+220h]
0x8E8299: push    4
0x8E829B: lea     edx, [esp+18h+arg_4]
0x8E829F: push    edx
0x8E82A0: push    eax
0x8E82A1: mov     eax, [eax+8]
0x8E82A4: mov     [esp+20h+var_4], 4
0x8E82AC: call    eax
0x8E82AE: mov     eax, [edi+220h]
0x8E82B4: push    1
0x8E82B6: lea     ecx, [esp+24h+var_4]
0x8E82BA: push    ecx
0x8E82BB: push    10h
0x8E82BD: lea     edx, [esi+10h]
0x8E82C0: push    edx
0x8E82C1: push    eax
0x8E82C2: mov     eax, [eax+8]
0x8E82C5: mov     [esp+34h+var_4], 10h
0x8E82CD: call    eax
0x8E82CF: mov     eax, [esp+34h+arg_4]
0x8E82D3: add     esp, 28h
0x8E82D6: test    eax, eax
0x8E82D8: jz      short loc_8E8301
0x8E82DA: mov     edx, [esi+20h]
0x8E82DD: mov     edi, [edi+220h]
0x8E82E3: push    1
0x8E82E5: lea     ecx, [esp+10h+var_4]
0x8E82E9: push    ecx
0x8E82EA: push    eax
0x8E82EB: mov     eax, [edi+8]
0x8E82EE: push    edx
0x8E82EF: push    edi
0x8E82F0: mov     [esp+20h+var_4], 1
0x8E82F8: call    eax
0x8E82FA: mov     eax, [esp+20h+arg_4]
0x8E82FE: add     esp, 14h
0x8E8301: pop     edi
0x8E8302: pop     esi
0x8E8303: pop     ecx
0x8E8304: retn
