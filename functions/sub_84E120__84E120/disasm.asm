0x84E120: push    0FFFFFFFFh
0x84E122: push    offset SEH_84D2B0
0x84E127: mov     eax, large fs:0
0x84E12D: push    eax
0x84E12E: sub     esp, 8
0x84E131: push    ebx
0x84E132: push    ebp
0x84E133: push    esi
0x84E134: push    edi
0x84E135: mov     eax, ds:0B30AACh
0x84E13A: xor     eax, esp
0x84E13C: push    eax
0x84E13D: lea     eax, [esp+28h+var_C]
0x84E141: mov     large fs:0, eax
0x84E147: mov     [esp+28h+var_10], ecx
0x84E14B: mov     eax, [esp+28h+arg_8]
0x84E14F: mov     eax, [eax+10h]
0x84E152: mov     esi, ds:0B45654h
0x84E158: push    eax
0x84E159: mov     [esp+2Ch+var_14], esi
0x84E15D: call    sub_848C40
0x84E162: mov     ecx, [esi+24h]
0x84E165: mov     esi, [esp+28h+arg_C]
0x84E169: mov     edx, [esi]
0x84E16B: mov     ebp, [ecx]
0x84E16D: mov     eax, [edx+88h]
0x84E173: push    0
0x84E175: mov     ecx, esi
0x84E177: call    eax
0x84E179: mov     edi, [ebp+4]
0x84E17C: mov     ebx, eax
0x84E17E: cmp     edi, ebx
0x84E180: jz      short loc_84E1B3
0x84E182: test    edi, edi
0x84E184: jz      short loc_84E1A2
0x84E186: lea     ecx, [edi+4]
0x84E189: push    ecx; lpAddend
0x84E18A: call    dword ptr ds:0A2807Ch
0x84E190: test    eax, eax
0x84E192: jnz     short loc_84E1A2
0x84E194: test    edi, edi
0x84E196: jz      short loc_84E1A2
0x84E198: mov     edx, [edi]
0x84E19A: mov     eax, [edx]
0x84E19C: push    1
0x84E19E: mov     ecx, edi
0x84E1A0: call    eax
0x84E1A2: test    ebx, ebx
0x84E1A4: mov     [ebp+4], ebx
0x84E1A7: jz      short loc_84E1B3
0x84E1A9: add     ebx, 4
0x84E1AC: push    ebx; lpAddend
0x84E1AD: call    dword ptr ds:0A28078h
0x84E1B3: test    ebp, ebp
0x84E1B5: jz      short loc_84E1D1
0x84E1B7: cmp     byte ptr ds:0B42CDDh, 0
0x84E1BE: jz      short loc_84E1D1
0x84E1C0: mov     edx, [esi]
0x84E1C2: mov     eax, [edx+78h]
0x84E1C5: mov     ecx, esi
0x84E1C7: call    eax
0x84E1C9: push    eax
0x84E1CA: mov     ecx, ebp
0x84E1CC: call    sub_7715E0
0x84E1D1: mov     ecx, [esp+28h+var_14]
0x84E1D5: mov     edx, [ecx+24h]
0x84E1D8: mov     eax, [esi]
0x84E1DA: mov     ebp, [edx+4]
0x84E1DD: mov     edx, [eax+8Ch]
0x84E1E3: push    0
0x84E1E5: mov     ecx, esi
0x84E1E7: call    edx
0x84E1E9: test    eax, eax
0x84E1EB: jz      short loc_84E1FF
0x84E1ED: mov     eax, [esi]
0x84E1EF: mov     edx, [eax+8Ch]
0x84E1F5: push    0
0x84E1F7: mov     ecx, esi
0x84E1F9: call    edx
0x84E1FB: mov     ebx, eax
0x84E1FD: jmp     short loc_84E214
0x84E1FF: test    dword ptr [esi+1Ch], 80h
0x84E206: mov     ebx, ds:0B430F0h
0x84E20C: ja      short loc_84E214
0x84E20E: mov     ebx, ds:0B430DCh
0x84E214: mov     edi, [ebp+4]
0x84E217: cmp     edi, ebx
0x84E219: jz      short loc_84E24C
0x84E21B: test    edi, edi
0x84E21D: jz      short loc_84E23B
0x84E21F: lea     eax, [edi+4]
0x84E222: push    eax; lpAddend
0x84E223: call    dword ptr ds:0A2807Ch
0x84E229: test    eax, eax
0x84E22B: jnz     short loc_84E23B
0x84E22D: test    edi, edi
0x84E22F: jz      short loc_84E23B
0x84E231: mov     edx, [edi]
0x84E233: mov     eax, [edx]
0x84E235: push    1
0x84E237: mov     ecx, edi
0x84E239: call    eax
0x84E23B: test    ebx, ebx
0x84E23D: mov     [ebp+4], ebx
0x84E240: jz      short loc_84E24C
0x84E242: add     ebx, 4
0x84E245: push    ebx; lpAddend
0x84E246: call    dword ptr ds:0A28078h
0x84E24C: test    ebp, ebp
0x84E24E: jz      short loc_84E26A
0x84E250: cmp     byte ptr ds:0B42CDDh, 0
0x84E257: jz      short loc_84E26A
0x84E259: mov     edx, [esi]
0x84E25B: mov     eax, [edx+78h]
0x84E25E: mov     ecx, esi
0x84E260: call    eax
0x84E262: push    eax
0x84E263: mov     ecx, ebp
0x84E265: call    sub_7715E0
0x84E26A: mov     ecx, [esp+28h+var_14]
0x84E26E: mov     edx, [ecx+24h]
0x84E271: mov     eax, [esi]
0x84E273: mov     ebx, [edx+8]
0x84E276: mov     edx, [eax+88h]
0x84E27C: push    1
0x84E27E: mov     ecx, esi
0x84E280: call    edx
0x84E282: mov     edi, [ebx+4]
0x84E285: mov     ebp, eax
0x84E287: cmp     edi, ebp
0x84E289: jz      short loc_84E2BC
0x84E28B: test    edi, edi
0x84E28D: jz      short loc_84E2AB
0x84E28F: lea     eax, [edi+4]
0x84E292: push    eax; lpAddend
0x84E293: call    dword ptr ds:0A2807Ch
0x84E299: test    eax, eax
0x84E29B: jnz     short loc_84E2AB
0x84E29D: test    edi, edi
0x84E29F: jz      short loc_84E2AB
0x84E2A1: mov     edx, [edi]
0x84E2A3: mov     eax, [edx]
0x84E2A5: push    1
0x84E2A7: mov     ecx, edi
0x84E2A9: call    eax
0x84E2AB: test    ebp, ebp
0x84E2AD: mov     [ebx+4], ebp
0x84E2B0: jz      short loc_84E2BC
0x84E2B2: add     ebp, 4
0x84E2B5: push    ebp; lpAddend
0x84E2B6: call    dword ptr ds:0A28078h
0x84E2BC: test    ebx, ebx
0x84E2BE: jz      short loc_84E2DA
0x84E2C0: cmp     byte ptr ds:0B42CDDh, 0
0x84E2C7: jz      short loc_84E2DA
0x84E2C9: mov     edx, [esi]
0x84E2CB: mov     eax, [edx+78h]
0x84E2CE: mov     ecx, esi
0x84E2D0: call    eax
0x84E2D2: push    eax
0x84E2D3: mov     ecx, ebx
0x84E2D5: call    sub_7715E0
0x84E2DA: mov     ebx, [esp+28h+var_14]
0x84E2DE: mov     ecx, [ebx+24h]
0x84E2E1: mov     edi, [ecx+0Ch]
0x84E2E4: mov     edx, [esi]
0x84E2E6: mov     eax, [edx+8Ch]
0x84E2EC: push    1
0x84E2EE: mov     ecx, esi
0x84E2F0: mov     [esp+2Ch+arg_8], edi
0x84E2F4: call    eax
0x84E2F6: test    eax, eax
0x84E2F8: jz      short loc_84E30C
0x84E2FA: mov     edx, [esi]
0x84E2FC: mov     eax, [edx+8Ch]
0x84E302: push    1
0x84E304: mov     ecx, esi
0x84E306: call    eax
0x84E308: mov     ebp, eax
0x84E30A: jmp     short loc_84E321
0x84E30C: test    dword ptr [esi+1Ch], 80h
0x84E313: mov     ebp, ds:0B430F0h
0x84E319: ja      short loc_84E321
0x84E31B: mov     ebp, ds:0B430DCh
0x84E321: mov     edi, [edi+4]
0x84E324: cmp     edi, ebp
0x84E326: jz      short loc_84E35F
0x84E328: test    edi, edi
0x84E32A: jz      short loc_84E348
0x84E32C: lea     ecx, [edi+4]
0x84E32F: push    ecx; lpAddend
0x84E330: call    dword ptr ds:0A2807Ch
0x84E336: test    eax, eax
0x84E338: jnz     short loc_84E348
0x84E33A: test    edi, edi
0x84E33C: jz      short loc_84E348
0x84E33E: mov     edx, [edi]
0x84E340: mov     eax, [edx]
0x84E342: push    1
0x84E344: mov     ecx, edi
0x84E346: call    eax
0x84E348: test    ebp, ebp
0x84E34A: mov     edi, [esp+28h+arg_8]
0x84E34E: mov     [edi+4], ebp
0x84E351: jz      short loc_84E363
0x84E353: add     ebp, 4
0x84E356: push    ebp; lpAddend
0x84E357: call    dword ptr ds:0A28078h
0x84E35D: jmp     short loc_84E363
0x84E35F: mov     edi, [esp+28h+arg_8]
0x84E363: test    edi, edi
0x84E365: jz      short loc_84E381
0x84E367: cmp     byte ptr ds:0B42CDDh, 0
0x84E36E: jz      short loc_84E381
0x84E370: mov     edx, [esi]
0x84E372: mov     eax, [edx+78h]
0x84E375: mov     ecx, esi
0x84E377: call    eax
0x84E379: push    eax
0x84E37A: mov     ecx, edi
0x84E37C: call    sub_7715E0
0x84E381: mov     edi, 1
0x84E386: add     [ebx+60h], edi
0x84E389: mov     [esp+28h+arg_8], ebx
0x84E38D: mov     esi, [esp+28h+var_10]
0x84E391: mov     edx, [esi+38h]
0x84E394: lea     ecx, [esp+28h+arg_8]
0x84E398: push    ecx
0x84E399: push    edx
0x84E39A: lea     ecx, [esi+40h]
0x84E39D: mov     [esp+30h+var_4], 0
0x84E3A5: call    sub_76CE40
0x84E3AA: or      eax, 0FFFFFFFFh
0x84E3AD: add     [ebx+60h], eax
0x84E3B0: mov     [esp+28h+var_4], eax
0x84E3B4: jnz     short loc_84E3BD
0x84E3B6: mov     ecx, ebx
0x84E3B8: call    sub_7604D0
0x84E3BD: add     [esi+38h], edi
0x84E3C0: mov     ecx, [esp+28h+var_C]
0x84E3C4: mov     large fs:0, ecx
0x84E3CB: pop     ecx
0x84E3CC: pop     edi
0x84E3CD: pop     esi
0x84E3CE: pop     ebp
0x84E3CF: pop     ebx
0x84E3D0: add     esp, 14h
0x84E3D3: retn    10h
