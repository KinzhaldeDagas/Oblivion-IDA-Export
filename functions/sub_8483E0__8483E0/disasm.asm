0x8483E0: push    0FFFFFFFFh
0x8483E2: push    offset SEH_851CA0
0x8483E7: mov     eax, large fs:0
0x8483ED: push    eax
0x8483EE: push    ecx
0x8483EF: push    ebx
0x8483F0: push    ebp
0x8483F1: push    esi
0x8483F2: push    edi
0x8483F3: mov     eax, ds:0B30AACh
0x8483F8: xor     eax, esp
0x8483FA: push    eax
0x8483FB: lea     eax, [esp+24h+var_C]
0x8483FF: mov     large fs:0, eax
0x848405: mov     edi, ecx
0x848407: mov     esi, ds:0B45B20h
0x84840D: mov     ecx, [esp+24h+arg_C]
0x848411: mov     eax, [esi+24h]
0x848414: mov     ebp, [eax]
0x848416: push    0
0x848418: push    ecx
0x848419: mov     ecx, edi
0x84841B: call    sub_848FD0
0x848420: mov     ebx, [ebp+4]
0x848423: cmp     ebx, eax
0x848425: mov     [esp+24h+var_10], eax
0x848429: jz      short loc_848460
0x84842B: test    ebx, ebx
0x84842D: jz      short loc_84844F
0x84842F: lea     edx, [ebx+4]
0x848432: push    edx; lpAddend
0x848433: call    dword ptr ds:0A2807Ch
0x848439: test    eax, eax
0x84843B: jnz     short loc_84844B
0x84843D: test    ebx, ebx
0x84843F: jz      short loc_84844B
0x848441: mov     eax, [ebx]
0x848443: mov     edx, [eax]
0x848445: push    1
0x848447: mov     ecx, ebx
0x848449: call    edx
0x84844B: mov     eax, [esp+24h+var_10]
0x84844F: test    eax, eax
0x848451: mov     [ebp+4], eax
0x848454: jz      short loc_848460
0x848456: add     eax, 4
0x848459: push    eax; lpAddend
0x84845A: call    dword ptr ds:0A28078h
0x848460: mov     eax, [esp+24h+arg_C]
0x848464: push    eax
0x848465: push    ebp
0x848466: mov     ecx, edi
0x848468: call    sub_848FA0
0x84846D: mov     ebx, 1
0x848472: add     [esi+60h], ebx
0x848475: mov     [esp+24h+arg_C], esi
0x848479: mov     edx, [edi+38h]
0x84847C: lea     ecx, [esp+24h+arg_C]
0x848480: push    ecx
0x848481: push    edx
0x848482: lea     ecx, [edi+40h]
0x848485: mov     [esp+2Ch+var_4], 0
0x84848D: call    sub_76CE40
0x848492: or      eax, 0FFFFFFFFh
0x848495: add     [esi+60h], eax
0x848498: mov     [esp+24h+var_4], eax
0x84849C: jnz     short loc_8484A5
0x84849E: mov     ecx, esi
0x8484A0: call    sub_7604D0
0x8484A5: add     [edi+38h], ebx
0x8484A8: mov     ecx, dword ptr [esp+24h+var_C]
0x8484AC: mov     large fs:0, ecx
0x8484B3: pop     ecx
0x8484B4: pop     edi
0x8484B5: pop     esi
0x8484B6: pop     ebp
0x8484B7: pop     ebx
0x8484B8: add     esp, 10h
0x8484BB: retn    10h
