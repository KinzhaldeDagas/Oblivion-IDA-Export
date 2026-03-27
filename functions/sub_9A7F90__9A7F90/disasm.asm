0x9A7F90: sub     esp, 18h
0x9A7F93: mov     eax, [esp+18h+arg_4]
0x9A7F97: push    ebx
0x9A7F98: push    ebp
0x9A7F99: push    esi
0x9A7F9A: mov     esi, ecx
0x9A7F9C: push    edi; ArgList
0x9A7F9D: mov     edi, [eax+18h]
0x9A7FA0: mov     ecx, edi
0x9A7FA2: shr     ecx, 19h
0x9A7FA5: and     cl, 1
0x9A7FA8: mov     [esp+28h+var_18], cl
0x9A7FAC: mov     eax, edi
0x9A7FAE: and     eax, 0F0000000h
0x9A7FB3: mov     edx, edi
0x9A7FB5: shr     edx, 18h
0x9A7FB8: and     dl, 1
0x9A7FBB: mov     ecx, edi
0x9A7FBD: and     ecx, 0FFFh
0x9A7FC3: mov     [esp+28h+var_4], eax
0x9A7FC7: mov     eax, [esi]
0x9A7FC9: mov     byte ptr [esp+28h+var_14], dl
0x9A7FCD: mov     edx, [eax+3Ch]
0x9A7FD0: push    ecx
0x9A7FD1: mov     ecx, esi
0x9A7FD3: call    edx
0x9A7FD5: mov     ebx, eax
0x9A7FD7: mov     eax, [esi]
0x9A7FD9: mov     edx, [eax+3Ch]
0x9A7FDC: shr     edi, 0Ch
0x9A7FDF: and     edi, 0FFFh
0x9A7FE5: push    edi
0x9A7FE6: mov     ecx, esi
0x9A7FE8: call    edx
0x9A7FEA: test    ebx, ebx
0x9A7FEC: mov     ebp, eax
0x9A7FEE: mov     [esp+28h+var_8], ebp
0x9A7FF2: jz      loc_9A8262
0x9A7FF8: test    ebp, ebp
0x9A7FFA: jz      loc_9A8262
0x9A8000: cmp     byte_B4295B, 0
0x9A8007: mov     edi, [ebx+14h]
0x9A800A: jnz     short loc_9A8011
0x9A800C: call    sub_783C70
0x9A8011: and     edi, 0FFh
0x9A8017: cmp     byte_B4295B, 0
0x9A801E: mov     eax, dword_B428D8[edi*4]
0x9A8025: mov     edi, [ebp+14h]
0x9A8028: mov     [esp+28h+var_10], eax
0x9A802C: jnz     short loc_9A8033
0x9A802E: call    sub_783C70
0x9A8033: mov     eax, [ebx+14h]
0x9A8036: mov     ebp, [esp+28h+arg_18]
0x9A803A: and     edi, 0FFh
0x9A8040: mov     ecx, dword_B428D8[edi*4]
0x9A8047: mov     edi, [esp+28h+arg_1C]
0x9A804B: and     eax, 0F0000000h
0x9A8050: cmp     eax, 20000000h
0x9A8055: mov     [esp+28h+var_C], ecx
0x9A8059: jnz     short loc_9A808D
0x9A805B: mov     eax, [ebx+0Ch]
0x9A805E: push    eax; Src
0x9A805F: call    sub_9A4960
0x9A8064: mov     edx, [esp+2Ch+arg_14]
0x9A8068: mov     ecx, [esp+2Ch+arg_C]
0x9A806C: add     esp, 4
0x9A806F: push    edi
0x9A8070: push    ebp
0x9A8071: push    edx
0x9A8072: mov     edx, [esp+34h+arg_8]
0x9A8076: mov     [esp+34h+var_10], eax
0x9A807A: mov     eax, [esp+34h+arg_10]
0x9A807E: push    eax
0x9A807F: push    ecx
0x9A8080: push    edx
0x9A8081: push    ebx
0x9A8082: push    0
0x9A8084: mov     ecx, esi
0x9A8086: call    sub_9A73C0
0x9A808B: jmp     short loc_9A80EB
0x9A808D: cmp     eax, 40000000h
0x9A8092: jnz     short loc_9A80A5
0x9A8094: mov     eax, [esp+28h+arg_20]
0x9A8098: push    eax
0x9A8099: push    ebx
0x9A809A: push    0
0x9A809C: mov     ecx, esi
0x9A809E: call    sub_9A3D20
0x9A80A3: jmp     short loc_9A80EB
0x9A80A5: cmp     eax, 30000000h
0x9A80AA: jnz     short loc_9A80C4
0x9A80AC: mov     ecx, [esp+28h+arg_20]
0x9A80B0: mov     edx, [esp+28h+arg_10]
0x9A80B4: mov     eax, [esp+28h+arg_C]
0x9A80B8: push    ecx
0x9A80B9: mov     ecx, [esp+2Ch+arg_8]
0x9A80BD: push    edi
0x9A80BE: push    ebp
0x9A80BF: push    edx
0x9A80C0: push    eax
0x9A80C1: push    ecx
0x9A80C2: jmp     short loc_9A80E1
0x9A80C4: cmp     eax, 10000000h
0x9A80C9: jnz     short loc_9A80EB
0x9A80CB: mov     edx, [esp+28h+arg_20]
0x9A80CF: mov     eax, [esp+28h+arg_10]
0x9A80D3: mov     ecx, [esp+28h+arg_C]
0x9A80D7: push    edx
0x9A80D8: mov     edx, [esp+2Ch+arg_8]
0x9A80DC: push    edi
0x9A80DD: push    ebp
0x9A80DE: push    eax
0x9A80DF: push    ecx
0x9A80E0: push    edx
0x9A80E1: push    ebx
0x9A80E2: push    0
0x9A80E4: mov     ecx, esi
0x9A80E6: call    sub_9A4010
0x9A80EB: mov     ebx, [esp+28h+var_8]
0x9A80EF: mov     eax, [ebx+14h]
0x9A80F2: and     eax, 0F0000000h
0x9A80F7: cmp     eax, 20000000h
0x9A80FC: jnz     short loc_9A8130
0x9A80FE: mov     eax, [ebx+0Ch]
0x9A8101: push    eax; Src
0x9A8102: call    sub_9A4960
0x9A8107: mov     ecx, [esp+2Ch+arg_10]
0x9A810B: mov     edx, [esp+2Ch+arg_C]
0x9A810F: add     esp, 4
0x9A8112: push    edi
0x9A8113: push    ebp
0x9A8114: mov     [esp+30h+var_C], eax
0x9A8118: mov     eax, [esp+30h+arg_14]
0x9A811C: push    eax
0x9A811D: mov     eax, [esp+34h+arg_8]
0x9A8121: push    ecx
0x9A8122: push    edx
0x9A8123: push    eax
0x9A8124: push    ebx
0x9A8125: push    1
0x9A8127: mov     ecx, esi
0x9A8129: call    sub_9A73C0
0x9A812E: jmp     short loc_9A817D
0x9A8130: cmp     eax, 30000000h
0x9A8135: jnz     short loc_9A8159
0x9A8137: mov     ecx, [esp+28h+arg_20]
0x9A813B: mov     edx, [esp+28h+arg_10]
0x9A813F: mov     eax, [esp+28h+arg_C]
0x9A8143: push    ecx
0x9A8144: mov     ecx, [esp+2Ch+arg_8]
0x9A8148: push    edi
0x9A8149: push    ebp
0x9A814A: push    edx
0x9A814B: push    eax
0x9A814C: push    ecx
0x9A814D: push    ebx
0x9A814E: push    1
0x9A8150: mov     ecx, esi
0x9A8152: call    sub_9A4010
0x9A8157: jmp     short loc_9A817D
0x9A8159: cmp     eax, 40000000h
0x9A815E: jnz     short loc_9A8167
0x9A8160: mov     edx, [esp+28h+arg_20]
0x9A8164: push    edx
0x9A8165: jmp     short loc_9A8173
0x9A8167: cmp     eax, 10000000h
0x9A816C: jnz     short loc_9A817D
0x9A816E: mov     eax, [esp+28h+arg_20]
0x9A8172: push    eax
0x9A8173: push    ebx
0x9A8174: push    1
0x9A8176: mov     ecx, esi
0x9A8178: call    sub_9A3D20
0x9A817D: mov     ecx, [esp+28h+var_10]
0x9A8181: test    ecx, ecx
0x9A8183: jz      loc_9A825B
0x9A8189: mov     edx, [esp+28h+var_C]
0x9A818D: test    edx, edx
0x9A818F: jz      loc_9A825B
0x9A8195: mov     eax, [esp+28h+var_4]
0x9A8199: cmp     eax, 30000000h
0x9A819E: ja      loc_9A822D
0x9A81A4: jz      short loc_9A8206
0x9A81A6: cmp     eax, 10000000h
0x9A81AB: jz      short loc_9A81DF
0x9A81AD: cmp     eax, 20000000h
0x9A81B2: jnz     loc_9A8273
0x9A81B8: mov     eax, dword ptr [esp+28h+var_18]
0x9A81BC: push    eax; char
0x9A81BD: mov     eax, [esp+2Ch+var_14]
0x9A81C1: push    eax; float
0x9A81C2: push    edx; int
0x9A81C3: mov     edx, [esp+34h+arg_0]
0x9A81C7: push    ecx; int
0x9A81C8: mov     ecx, [esp+38h+arg_4]
0x9A81CC: push    ecx; int
0x9A81CD: push    edx; int
0x9A81CE: mov     ecx, esi
0x9A81D0: call    sub_9A4E30
0x9A81D5: pop     edi
0x9A81D6: pop     esi
0x9A81D7: pop     ebp
0x9A81D8: pop     ebx
0x9A81D9: add     esp, 18h
0x9A81DC: retn    24h ; '$'
0x9A81DF: mov     eax, dword ptr [esp+28h+var_18]
0x9A81E3: push    eax
0x9A81E4: mov     eax, [esp+2Ch+var_14]
0x9A81E8: push    eax
0x9A81E9: push    edx
0x9A81EA: mov     edx, [esp+34h+arg_0]
0x9A81EE: push    ecx
0x9A81EF: mov     ecx, [esp+38h+arg_4]
0x9A81F3: push    ecx
0x9A81F4: push    edx
0x9A81F5: mov     ecx, esi
0x9A81F7: call    sub_9A4B00
0x9A81FC: pop     edi
0x9A81FD: pop     esi
0x9A81FE: pop     ebp
0x9A81FF: pop     ebx
0x9A8200: add     esp, 18h
0x9A8203: retn    24h ; '$'
0x9A8206: mov     eax, dword ptr [esp+28h+var_18]
0x9A820A: push    eax
0x9A820B: mov     eax, [esp+2Ch+var_14]
0x9A820F: push    eax
0x9A8210: push    edx
0x9A8211: mov     edx, [esp+34h+arg_0]
0x9A8215: push    ecx
0x9A8216: mov     ecx, [esp+38h+arg_4]
0x9A821A: push    ecx
0x9A821B: push    edx
0x9A821C: mov     ecx, esi
0x9A821E: call    sub_9A50B0
0x9A8223: pop     edi
0x9A8224: pop     esi
0x9A8225: pop     ebp
0x9A8226: pop     ebx
0x9A8227: add     esp, 18h
0x9A822A: retn    24h ; '$'
0x9A822D: cmp     eax, 40000000h
0x9A8232: jnz     short loc_9A8273
0x9A8234: mov     eax, dword ptr [esp+28h+var_18]
0x9A8238: push    eax
0x9A8239: mov     eax, [esp+2Ch+var_14]
0x9A823D: push    eax
0x9A823E: push    edx
0x9A823F: mov     edx, [esp+34h+arg_0]
0x9A8243: push    ecx
0x9A8244: mov     ecx, [esp+38h+arg_4]
0x9A8248: push    ecx
0x9A8249: push    edx
0x9A824A: mov     ecx, esi
0x9A824C: call    sub_9A52E0
0x9A8251: pop     edi
0x9A8252: pop     esi
0x9A8253: pop     ebp
0x9A8254: pop     ebx
0x9A8255: add     esp, 18h
0x9A8258: retn    24h ; '$'
0x9A825B: push    offset aInvalidOperand; "Invalid operands in OperatorConstant\n"
0x9A8260: jmp     short loc_9A8267
0x9A8262: push    offset aInvalidEntries; "Invalid entries in OperatorConstant\n"
0x9A8267: push    0; int
0x9A8269: push    1; int
0x9A826B: call    sub_738460
0x9A8270: add     esp, 0Ch
0x9A8273: pop     edi
0x9A8274: pop     esi
0x9A8275: pop     ebp
0x9A8276: mov     eax, 1
0x9A827B: pop     ebx
0x9A827C: add     esp, 18h
0x9A827F: retn    24h ; '$'
