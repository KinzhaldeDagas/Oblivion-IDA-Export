0x840700: push    0FFFFFFFFh
0x840702: push    offset SEH_882120
0x840707: mov     eax, large fs:0
0x84070D: push    eax
0x84070E: push    ebx
0x84070F: push    ebp
0x840710: push    esi
0x840711: push    edi
0x840712: mov     eax, ds:0B30AACh
0x840717: xor     eax, esp
0x840719: push    eax
0x84071A: lea     eax, [esp+20h+var_C]
0x84071E: mov     large fs:0, eax
0x840724: mov     esi, ecx
0x840726: mov     ebx, [esp+20h+arg_8]
0x84072A: mov     eax, [ebx+10h]
0x84072D: mov     edi, ds:0B458D4h
0x840733: push    eax
0x840734: call    sub_848DA0
0x840739: mov     ebp, [ebx+0Ch]
0x84073C: push    ebp
0x84073D: mov     ecx, esi
0x84073F: call    sub_848E50
0x840744: mov     ebx, [ebx+10h]
0x840747: mov     ecx, [esp+20h+arg_0]
0x84074B: mov     eax, [esi]
0x84074D: mov     edx, [eax+0BCh]
0x840753: push    ebx
0x840754: push    ebp
0x840755: push    ecx
0x840756: mov     ecx, esi
0x840758: call    edx
0x84075A: mov     eax, [edi+24h]
0x84075D: mov     ebx, [esp+20h+arg_C]
0x840761: mov     ebp, [eax]
0x840763: mov     edx, [ebx]
0x840765: mov     eax, [edx+88h]
0x84076B: push    0
0x84076D: mov     ecx, ebx
0x84076F: mov     [esp+24h+arg_8], ebp
0x840773: call    eax
0x840775: mov     ebp, [ebp+4]
0x840778: cmp     ebp, eax
0x84077A: mov     [esp+20h+arg_0], eax
0x84077E: jz      short loc_8407BA
0x840780: test    ebp, ebp
0x840782: jz      short loc_8407A5
0x840784: lea     ecx, [ebp+4]
0x840787: push    ecx; lpAddend
0x840788: call    dword ptr ds:0A2807Ch
0x84078E: test    eax, eax
0x840790: jnz     short loc_8407A1
0x840792: test    ebp, ebp
0x840794: jz      short loc_8407A1
0x840796: mov     edx, [ebp+0]
0x840799: mov     eax, [edx]
0x84079B: push    1
0x84079D: mov     ecx, ebp
0x84079F: call    eax
0x8407A1: mov     eax, [esp+20h+arg_0]
0x8407A5: test    eax, eax
0x8407A7: mov     ecx, [esp+20h+arg_8]
0x8407AB: mov     [ecx+4], eax
0x8407AE: jz      short loc_8407BA
0x8407B0: add     eax, 4
0x8407B3: push    eax; lpAddend
0x8407B4: call    dword ptr ds:0A28078h
0x8407BA: mov     edx, [esp+20h+arg_8]
0x8407BE: push    ebx
0x8407BF: push    edx
0x8407C0: mov     ecx, esi
0x8407C2: call    sub_848FA0
0x8407C7: mov     eax, [edi+24h]
0x8407CA: mov     ebp, [eax+4]
0x8407CD: push    0
0x8407CF: push    ebx
0x8407D0: mov     ecx, esi
0x8407D2: mov     [esp+28h+arg_8], ebp
0x8407D6: call    sub_848FD0
0x8407DB: mov     ebp, [ebp+4]
0x8407DE: cmp     ebp, eax
0x8407E0: mov     [esp+20h+arg_0], eax
0x8407E4: jz      short loc_840820
0x8407E6: test    ebp, ebp
0x8407E8: jz      short loc_84080B
0x8407EA: lea     ecx, [ebp+4]
0x8407ED: push    ecx; lpAddend
0x8407EE: call    dword ptr ds:0A2807Ch
0x8407F4: test    eax, eax
0x8407F6: jnz     short loc_840807
0x8407F8: test    ebp, ebp
0x8407FA: jz      short loc_840807
0x8407FC: mov     edx, [ebp+0]
0x8407FF: mov     eax, [edx]
0x840801: push    1
0x840803: mov     ecx, ebp
0x840805: call    eax
0x840807: mov     eax, [esp+20h+arg_0]
0x84080B: test    eax, eax
0x84080D: mov     ecx, [esp+20h+arg_8]
0x840811: mov     [ecx+4], eax
0x840814: jz      short loc_840820
0x840816: add     eax, 4
0x840819: push    eax; lpAddend
0x84081A: call    dword ptr ds:0A28078h
0x840820: mov     edx, [esp+20h+arg_8]
0x840824: push    ebx
0x840825: push    edx
0x840826: mov     ecx, esi
0x840828: call    sub_848FA0
0x84082D: mov     eax, [edi+24h]
0x840830: mov     ebp, [eax+10h]
0x840833: mov     edx, [ebx]
0x840835: mov     eax, [edx+90h]
0x84083B: push    0
0x84083D: mov     ecx, ebx
0x84083F: mov     [esp+24h+arg_8], ebp
0x840843: call    eax
0x840845: mov     ebp, [ebp+4]
0x840848: cmp     ebp, eax
0x84084A: mov     [esp+20h+arg_0], eax
0x84084E: jz      short loc_84088A
0x840850: test    ebp, ebp
0x840852: jz      short loc_840875
0x840854: lea     ecx, [ebp+4]
0x840857: push    ecx; lpAddend
0x840858: call    dword ptr ds:0A2807Ch
0x84085E: test    eax, eax
0x840860: jnz     short loc_840871
0x840862: test    ebp, ebp
0x840864: jz      short loc_840871
0x840866: mov     edx, [ebp+0]
0x840869: mov     eax, [edx]
0x84086B: push    1
0x84086D: mov     ecx, ebp
0x84086F: call    eax
0x840871: mov     eax, [esp+20h+arg_0]
0x840875: test    eax, eax
0x840877: mov     ecx, [esp+20h+arg_8]
0x84087B: mov     [ecx+4], eax
0x84087E: jz      short loc_84088A
0x840880: add     eax, 4
0x840883: push    eax; lpAddend
0x840884: call    dword ptr ds:0A28078h
0x84088A: mov     edx, [esp+20h+arg_8]
0x84088E: push    ebx
0x84088F: push    edx
0x840890: mov     ecx, esi
0x840892: call    sub_848FA0
0x840897: mov     ebx, 1
0x84089C: add     [edi+60h], ebx
0x84089F: mov     [esp+20h+arg_8], edi
0x8408A3: mov     ecx, [esi+38h]
0x8408A6: lea     eax, [esp+20h+arg_8]
0x8408AA: push    eax
0x8408AB: push    ecx
0x8408AC: lea     ecx, [esi+40h]
0x8408AF: mov     [esp+28h+var_4], 0
0x8408B7: call    sub_76CE40
0x8408BC: or      eax, 0FFFFFFFFh
0x8408BF: add     [edi+60h], eax
0x8408C2: mov     [esp+20h+var_4], eax
0x8408C6: jnz     short loc_8408CF
0x8408C8: mov     ecx, edi
0x8408CA: call    sub_7604D0
0x8408CF: add     [esi+38h], ebx
0x8408D2: mov     ecx, [esp+20h+var_C]
0x8408D6: mov     large fs:0, ecx
0x8408DD: pop     ecx
0x8408DE: pop     edi
0x8408DF: pop     esi
0x8408E0: pop     ebp
0x8408E1: pop     ebx
0x8408E2: add     esp, 0Ch
0x8408E5: retn    10h
