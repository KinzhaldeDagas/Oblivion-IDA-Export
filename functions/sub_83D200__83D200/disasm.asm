0x83D200: push    0FFFFFFFFh
0x83D202: push    offset SEH_882120
0x83D207: mov     eax, large fs:0
0x83D20D: push    eax
0x83D20E: push    ebx
0x83D20F: push    ebp
0x83D210: push    esi
0x83D211: push    edi
0x83D212: mov     eax, ds:0B30AACh
0x83D217: xor     eax, esp
0x83D219: push    eax
0x83D21A: lea     eax, [esp+20h+var_C]
0x83D21E: mov     large fs:0, eax
0x83D224: mov     esi, ecx
0x83D226: mov     ebx, [esp+20h+arg_8]
0x83D22A: mov     eax, [ebx+10h]
0x83D22D: mov     edi, ds:0B45800h
0x83D233: push    eax
0x83D234: call    sub_848C40
0x83D239: mov     ebx, [ebx+0Ch]
0x83D23C: push    ebx
0x83D23D: mov     ecx, esi
0x83D23F: call    sub_848E50
0x83D244: mov     ecx, [esp+20h+arg_0]
0x83D248: mov     eax, [esi]
0x83D24A: mov     edx, [eax+0BCh]
0x83D250: push    0
0x83D252: push    ebx
0x83D253: push    ecx
0x83D254: mov     ecx, esi
0x83D256: call    edx
0x83D258: mov     eax, [edi+24h]
0x83D25B: mov     ebx, [esp+20h+arg_C]
0x83D25F: mov     ebp, [eax]
0x83D261: mov     edx, [ebx]
0x83D263: mov     eax, [edx+88h]
0x83D269: push    0
0x83D26B: mov     ecx, ebx
0x83D26D: mov     [esp+24h+arg_8], ebp
0x83D271: call    eax
0x83D273: mov     ebp, [ebp+4]
0x83D276: cmp     ebp, eax
0x83D278: mov     [esp+20h+arg_0], eax
0x83D27C: jz      short loc_83D2B8
0x83D27E: test    ebp, ebp
0x83D280: jz      short loc_83D2A3
0x83D282: lea     ecx, [ebp+4]
0x83D285: push    ecx; lpAddend
0x83D286: call    dword ptr ds:0A2807Ch
0x83D28C: test    eax, eax
0x83D28E: jnz     short loc_83D29F
0x83D290: test    ebp, ebp
0x83D292: jz      short loc_83D29F
0x83D294: mov     edx, [ebp+0]
0x83D297: mov     eax, [edx]
0x83D299: push    1
0x83D29B: mov     ecx, ebp
0x83D29D: call    eax
0x83D29F: mov     eax, [esp+20h+arg_0]
0x83D2A3: test    eax, eax
0x83D2A5: mov     ecx, [esp+20h+arg_8]
0x83D2A9: mov     [ecx+4], eax
0x83D2AC: jz      short loc_83D2B8
0x83D2AE: add     eax, 4
0x83D2B1: push    eax; lpAddend
0x83D2B2: call    dword ptr ds:0A28078h
0x83D2B8: mov     edx, [esp+20h+arg_8]
0x83D2BC: push    ebx
0x83D2BD: push    edx
0x83D2BE: mov     ecx, esi
0x83D2C0: call    sub_848FA0
0x83D2C5: mov     eax, [edi+24h]
0x83D2C8: mov     ebp, [eax+4]
0x83D2CB: push    0
0x83D2CD: push    ebx
0x83D2CE: mov     ecx, esi
0x83D2D0: mov     [esp+28h+arg_8], ebp
0x83D2D4: call    sub_848FD0
0x83D2D9: mov     ebp, [ebp+4]
0x83D2DC: cmp     ebp, eax
0x83D2DE: mov     [esp+20h+arg_0], eax
0x83D2E2: jz      short loc_83D31E
0x83D2E4: test    ebp, ebp
0x83D2E6: jz      short loc_83D309
0x83D2E8: lea     ecx, [ebp+4]
0x83D2EB: push    ecx; lpAddend
0x83D2EC: call    dword ptr ds:0A2807Ch
0x83D2F2: test    eax, eax
0x83D2F4: jnz     short loc_83D305
0x83D2F6: test    ebp, ebp
0x83D2F8: jz      short loc_83D305
0x83D2FA: mov     edx, [ebp+0]
0x83D2FD: mov     eax, [edx]
0x83D2FF: push    1
0x83D301: mov     ecx, ebp
0x83D303: call    eax
0x83D305: mov     eax, [esp+20h+arg_0]
0x83D309: test    eax, eax
0x83D30B: mov     ecx, [esp+20h+arg_8]
0x83D30F: mov     [ecx+4], eax
0x83D312: jz      short loc_83D31E
0x83D314: add     eax, 4
0x83D317: push    eax; lpAddend
0x83D318: call    dword ptr ds:0A28078h
0x83D31E: mov     edx, [esp+20h+arg_8]
0x83D322: push    ebx
0x83D323: push    edx
0x83D324: mov     ecx, esi
0x83D326: call    sub_848FA0
0x83D32B: mov     ebx, 1
0x83D330: add     [edi+60h], ebx
0x83D333: mov     [esp+20h+arg_8], edi
0x83D337: mov     ecx, [esi+38h]
0x83D33A: lea     eax, [esp+20h+arg_8]
0x83D33E: push    eax
0x83D33F: push    ecx
0x83D340: lea     ecx, [esi+40h]
0x83D343: mov     [esp+28h+var_4], 0
0x83D34B: call    sub_76CE40
0x83D350: or      eax, 0FFFFFFFFh
0x83D353: add     [edi+60h], eax
0x83D356: mov     [esp+20h+var_4], eax
0x83D35A: jnz     short loc_83D363
0x83D35C: mov     ecx, edi
0x83D35E: call    sub_7604D0
0x83D363: add     [esi+38h], ebx
0x83D366: mov     ecx, [esp+20h+var_C]
0x83D36A: mov     large fs:0, ecx
0x83D371: pop     ecx
0x83D372: pop     edi
0x83D373: pop     esi
0x83D374: pop     ebp
0x83D375: pop     ebx
0x83D376: add     esp, 0Ch
0x83D379: retn    10h
