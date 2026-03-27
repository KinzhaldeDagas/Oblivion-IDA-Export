0x852150: push    0FFFFFFFFh
0x852152: push    offset SEH_852150
0x852157: mov     eax, large fs:0
0x85215D: push    eax
0x85215E: push    esi
0x85215F: mov     eax, ds:0B30AACh
0x852164: xor     eax, esp
0x852166: push    eax
0x852167: lea     eax, [esp+14h+var_C]
0x85216B: mov     large fs:0, eax
0x852171: mov     esi, ecx
0x852173: cmp     [esp+14h+arg_14], 0
0x852178: jnz     loc_852301
0x85217E: cmp     [esp+14h+arg_18], 0
0x852183: jz      loc_85221E
0x852189: cmp     [esp+14h+arg_1C], 0
0x85218E: jz      short loc_8521D7
0x852190: cmp     byte ptr [esp+14h+arg_C], 1
0x852195: jnz     loc_852441
0x85219B: push    10h; Size
0x85219D: call    FormHeapAlloc
0x8521A2: add     esp, 4
0x8521A5: mov     [esp+14h+arg_C], eax
0x8521A9: test    eax, eax
0x8521AB: mov     [esp+14h+var_4], 0
0x8521B3: jz      loc_852424
0x8521B9: mov     ecx, [esp+14h+arg_4]
0x8521BD: mov     edx, [esp+14h+arg_0]
0x8521C1: push    ecx
0x8521C2: push    1
0x8521C4: push    1
0x8521C6: push    13h
0x8521C8: push    edx
0x8521C9: push    eax
0x8521CA: call    sub_7E2370
0x8521CF: add     esp, 18h
0x8521D2: jmp     loc_852426
0x8521D7: cmp     byte ptr [esp+14h+arg_C], 1
0x8521DC: jnz     loc_852441
0x8521E2: push    10h; Size
0x8521E4: call    FormHeapAlloc
0x8521E9: add     esp, 4
0x8521EC: mov     [esp+14h+arg_C], eax
0x8521F0: test    eax, eax
0x8521F2: mov     [esp+14h+var_4], 1
0x8521FA: jz      loc_852424
0x852200: mov     ecx, [esp+14h+arg_4]
0x852204: mov     edx, [esp+14h+arg_0]
0x852208: push    ecx
0x852209: push    1
0x85220B: push    1
0x85220D: push    12h
0x85220F: push    edx
0x852210: push    eax
0x852211: call    sub_7E2370
0x852216: add     esp, 18h
0x852219: jmp     loc_852426
0x85221E: cmp     [esp+14h+arg_1C], 0
0x852223: jz      short loc_85226C
0x852225: cmp     byte ptr [esp+14h+arg_C], 1
0x85222A: jnz     loc_852441
0x852230: push    10h; Size
0x852232: call    FormHeapAlloc
0x852237: add     esp, 4
0x85223A: mov     [esp+14h+arg_C], eax
0x85223E: test    eax, eax
0x852240: mov     [esp+14h+var_4], 2
0x852248: jz      loc_852424
0x85224E: mov     ecx, [esp+14h+arg_4]
0x852252: mov     edx, [esp+14h+arg_0]
0x852256: push    ecx
0x852257: push    1
0x852259: push    1
0x85225B: push    11h
0x85225D: push    edx
0x85225E: push    eax
0x85225F: call    sub_7E2370
0x852264: add     esp, 18h
0x852267: jmp     loc_852426
0x85226C: cmp     [esp+14h+arg_20], 0
0x852271: jnz     short loc_8522BA
0x852273: cmp     byte ptr [esp+14h+arg_C], 1
0x852278: jnz     loc_852441
0x85227E: push    10h; Size
0x852280: call    FormHeapAlloc
0x852285: add     esp, 4
0x852288: mov     [esp+14h+arg_C], eax
0x85228C: test    eax, eax
0x85228E: mov     [esp+14h+var_4], 3
0x852296: jz      loc_852424
0x85229C: mov     ecx, [esp+14h+arg_4]
0x8522A0: mov     edx, [esp+14h+arg_0]
0x8522A4: push    ecx
0x8522A5: push    1
0x8522A7: push    1
0x8522A9: push    10h
0x8522AB: push    edx
0x8522AC: push    eax
0x8522AD: call    sub_7E2370
0x8522B2: add     esp, 18h
0x8522B5: jmp     loc_852426
0x8522BA: cmp     byte ptr [esp+14h+arg_C], 1
0x8522BF: jnz     loc_852441
0x8522C5: push    10h; Size
0x8522C7: call    FormHeapAlloc
0x8522CC: add     esp, 4
0x8522CF: mov     [esp+14h+arg_C], eax
0x8522D3: test    eax, eax
0x8522D5: mov     [esp+14h+var_4], 4
0x8522DD: jz      loc_852424
0x8522E3: mov     ecx, [esp+14h+arg_4]
0x8522E7: mov     edx, [esp+14h+arg_0]
0x8522EB: push    ecx
0x8522EC: push    1
0x8522EE: push    1
0x8522F0: push    18h
0x8522F2: push    edx
0x8522F3: push    eax
0x8522F4: call    sub_7E2370
0x8522F9: add     esp, 18h
0x8522FC: jmp     loc_852426
0x852301: cmp     [esp+14h+arg_18], 0
0x852306: jz      loc_8523A1
0x85230C: cmp     [esp+14h+arg_1C], 0
0x852311: jz      short loc_85235A
0x852313: cmp     byte ptr [esp+14h+arg_C], 1
0x852318: jnz     loc_852441
0x85231E: push    10h; Size
0x852320: call    FormHeapAlloc
0x852325: add     esp, 4
0x852328: mov     [esp+14h+arg_C], eax
0x85232C: test    eax, eax
0x85232E: mov     [esp+14h+var_4], 5
0x852336: jz      loc_852424
0x85233C: mov     ecx, [esp+14h+arg_4]
0x852340: mov     edx, [esp+14h+arg_0]
0x852344: push    ecx
0x852345: push    1
0x852347: push    1
0x852349: push    17h
0x85234B: push    edx
0x85234C: push    eax
0x85234D: call    sub_7E2370
0x852352: add     esp, 18h
0x852355: jmp     loc_852426
0x85235A: cmp     byte ptr [esp+14h+arg_C], 1
0x85235F: jnz     loc_852441
0x852365: push    10h; Size
0x852367: call    FormHeapAlloc
0x85236C: add     esp, 4
0x85236F: mov     [esp+14h+arg_C], eax
0x852373: test    eax, eax
0x852375: mov     [esp+14h+var_4], 6
0x85237D: jz      loc_852424
0x852383: mov     ecx, [esp+14h+arg_4]
0x852387: mov     edx, [esp+14h+arg_0]
0x85238B: push    ecx
0x85238C: push    1
0x85238E: push    1
0x852390: push    16h
0x852392: push    edx
0x852393: push    eax
0x852394: call    sub_7E2370
0x852399: add     esp, 18h
0x85239C: jmp     loc_852426
0x8523A1: cmp     [esp+14h+arg_1C], 0
0x8523A6: jz      short loc_8523E8
0x8523A8: cmp     byte ptr [esp+14h+arg_C], 1
0x8523AD: jnz     loc_852441
0x8523B3: push    10h; Size
0x8523B5: call    FormHeapAlloc
0x8523BA: add     esp, 4
0x8523BD: mov     [esp+14h+arg_C], eax
0x8523C1: test    eax, eax
0x8523C3: mov     [esp+14h+var_4], 7
0x8523CB: jz      short loc_852424
0x8523CD: mov     ecx, [esp+14h+arg_4]
0x8523D1: mov     edx, [esp+14h+arg_0]
0x8523D5: push    ecx
0x8523D6: push    1
0x8523D8: push    1
0x8523DA: push    15h
0x8523DC: push    edx
0x8523DD: push    eax
0x8523DE: call    sub_7E2370
0x8523E3: add     esp, 18h
0x8523E6: jmp     short loc_852426
0x8523E8: cmp     byte ptr [esp+14h+arg_C], 1
0x8523ED: jnz     short loc_852441
0x8523EF: push    10h; Size
0x8523F1: call    FormHeapAlloc
0x8523F6: add     esp, 4
0x8523F9: mov     [esp+14h+arg_C], eax
0x8523FD: test    eax, eax
0x8523FF: mov     [esp+14h+var_4], 8
0x852407: jz      short loc_852424
0x852409: mov     ecx, [esp+14h+arg_4]
0x85240D: mov     edx, [esp+14h+arg_0]
0x852411: push    ecx
0x852412: push    1
0x852414: push    1
0x852416: push    14h
0x852418: push    edx
0x852419: push    eax
0x85241A: call    sub_7E2370
0x85241F: add     esp, 18h
0x852422: jmp     short loc_852426
0x852424: xor     eax, eax
0x852426: mov     [esp+14h+arg_C], eax
0x85242A: lea     eax, [esp+14h+arg_C]
0x85242E: push    eax
0x85242F: lea     ecx, [esi+28h]
0x852432: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85243A: call    sub_5B1E20
0x85243F: jmp     short loc_852449
0x852441: mov     eax, [esp+14h+arg_8]
0x852445: add     word ptr [eax], 1
0x852449: mov     ecx, [esp+14h+arg_10]
0x85244D: mov     byte ptr [ecx], 0
0x852450: mov     ecx, [esp+14h+var_C]
0x852454: mov     large fs:0, ecx
0x85245B: pop     ecx
0x85245C: pop     esi
0x85245D: add     esp, 0Ch
0x852460: retn    24h ; '$'
