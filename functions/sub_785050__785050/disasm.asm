0x785050: push    ebp
0x785051: mov     ebp, esp
0x785053: push    0FFFFFFFFh
0x785055: push    offset SEH_785050
0x78505A: mov     eax, large fs:0
0x785060: push    eax
0x785061: sub     esp, 28h
0x785064: push    ebx
0x785065: push    esi
0x785066: push    edi
0x785067: mov     eax, ds:0B30AACh
0x78506C: xor     eax, ebp
0x78506E: push    eax
0x78506F: lea     eax, [ebp+var_C]
0x785072: mov     large fs:0, eax
0x785078: mov     [ebp+var_10], esp
0x78507B: mov     esi, ecx
0x78507D: mov     [ebp+var_14], esi
0x785080: mov     eax, [ebp+arg_C]
0x785083: mov     ecx, [eax]
0x785085: mov     edx, [eax+4]
0x785088: mov     [ebp+var_34], ecx
0x78508B: mov     ecx, [eax+8]
0x78508E: mov     [ebp+var_30], edx
0x785091: mov     edx, [eax+0Ch]
0x785094: mov     [ebp+var_2C], ecx
0x785097: mov     ecx, [eax+10h]
0x78509A: mov     [ebp+var_28], edx
0x78509D: mov     edx, [eax+14h]
0x7850A0: mov     [ebp+var_24], ecx
0x7850A3: mov     [ebp+var_20], edx
0x7850A6: mov     edi, [esi+4]
0x7850A9: xor     ecx, ecx
0x7850AB: cmp     edi, ecx
0x7850AD: mov     [ebp+var_4], ecx
0x7850B0: jz      short loc_7850C8
0x7850B2: mov     ecx, [esi+0Ch]
0x7850B5: sub     ecx, edi
0x7850B7: mov     eax, 2AAAAAABh
0x7850BC: imul    ecx
0x7850BE: sar     edx, 2
0x7850C1: mov     ecx, edx
0x7850C3: shr     ecx, 1Fh
0x7850C6: add     ecx, edx
0x7850C8: mov     ebx, [ebp+arg_8]
0x7850CB: test    ebx, ebx
0x7850CD: jz      loc_785337
0x7850D3: test    edi, edi
0x7850D5: jnz     short loc_7850DB
0x7850D7: xor     eax, eax
0x7850D9: jmp     short loc_7850F1
0x7850DB: mov     edx, [esi+8]
0x7850DE: sub     edx, edi
0x7850E0: mov     eax, 2AAAAAABh
0x7850E5: imul    edx
0x7850E7: sar     edx, 2
0x7850EA: mov     eax, edx
0x7850EC: shr     eax, 1Fh
0x7850EF: add     eax, edx
0x7850F1: or      edx, 0FFFFFFFFh
0x7850F4: sub     edx, eax
0x7850F6: cmp     edx, ebx
0x7850F8: jnb     short loc_7850FF
0x7850FA: call    sub_790B90
0x7850FF: test    edi, edi
0x785101: jnz     short loc_785107
0x785103: xor     eax, eax
0x785105: jmp     short loc_78511D
0x785107: mov     edx, [esi+8]
0x78510A: sub     edx, edi
0x78510C: mov     eax, 2AAAAAABh
0x785111: imul    edx
0x785113: sar     edx, 2
0x785116: mov     eax, edx
0x785118: shr     eax, 1Fh
0x78511B: add     eax, edx
0x78511D: add     eax, ebx
0x78511F: cmp     ecx, eax
0x785121: jnb     loc_78524F
0x785127: mov     eax, ecx
0x785129: shr     eax, 1
0x78512B: or      edx, 0FFFFFFFFh
0x78512E: sub     edx, eax
0x785130: cmp     edx, ecx
0x785132: jnb     short loc_785138
0x785134: xor     ecx, ecx
0x785136: jmp     short loc_78513A
0x785138: add     ecx, eax
0x78513A: test    edi, edi
0x78513C: jnz     short loc_785142
0x78513E: xor     eax, eax
0x785140: jmp     short loc_785158
0x785142: mov     edx, [esi+8]
0x785145: sub     edx, edi
0x785147: mov     eax, 2AAAAAABh
0x78514C: imul    edx
0x78514E: sar     edx, 2
0x785151: mov     eax, edx
0x785153: shr     eax, 1Fh
0x785156: add     eax, edx
0x785158: add     eax, ebx
0x78515A: cmp     ecx, eax
0x78515C: jnb     short loc_785169
0x78515E: mov     ecx, esi
0x785160: call    sub_783FE0
0x785165: mov     ecx, eax
0x785167: add     ecx, ebx
0x785169: lea     ecx, [ecx+ecx*2]
0x78516C: add     ecx, ecx
0x78516E: add     ecx, ecx
0x785170: add     ecx, ecx
0x785172: push    ecx; Size
0x785173: mov     [ebp+var_1C], ecx
0x785176: call    FormHeapAlloc
0x78517B: mov     edi, [ebp+arg_4]
0x78517E: mov     ecx, [esi+4]
0x785181: mov     byte ptr [ebp+var_18], 0
0x785185: mov     edx, [ebp+var_18]
0x785188: push    edx
0x785189: mov     [ebp+arg_8], eax
0x78518C: mov     edx, [ebp+arg_8]
0x78518F: push    edx
0x785190: push    esi
0x785191: push    eax
0x785192: push    edi
0x785193: push    ecx
0x785194: mov     [ebp+arg_C], eax
0x785197: mov     byte ptr [ebp+var_4], 1
0x78519B: call    sub_7847F0
0x7851A0: add     esp, 1Ch
0x7851A3: lea     ecx, [ebp+var_34]
0x7851A6: push    ecx
0x7851A7: push    ebx
0x7851A8: push    eax
0x7851A9: mov     ecx, esi
0x7851AB: mov     [ebp+arg_8], eax
0x7851AE: call    sub_790A70
0x7851B3: mov     ecx, [esi+8]
0x7851B6: mov     byte ptr [ebp+arg_4], 0
0x7851BA: mov     edx, [ebp+arg_4]
0x7851BD: push    edx
0x7851BE: mov     [ebp+arg_8], eax
0x7851C1: mov     edx, [ebp+arg_8]
0x7851C4: push    edx
0x7851C5: push    esi
0x7851C6: push    eax
0x7851C7: push    ecx
0x7851C8: push    edi
0x7851C9: call    sub_7847F0
0x7851CE: mov     edi, [esi+4]
0x7851D1: xor     eax, eax
0x7851D3: add     esp, 18h
0x7851D6: cmp     edi, eax
0x7851D8: mov     [ebp+var_4], eax
0x7851DB: jz      short loc_7851F3
0x7851DD: mov     ecx, [esi+8]
0x7851E0: sub     ecx, edi
0x7851E2: mov     eax, 2AAAAAABh
0x7851E7: imul    ecx
0x7851E9: sar     edx, 2
0x7851EC: mov     eax, edx
0x7851EE: shr     eax, 1Fh
0x7851F1: add     eax, edx
0x7851F3: add     ebx, eax
0x7851F5: test    edi, edi
0x7851F7: jz      short loc_785211
0x7851F9: mov     eax, [esi+8]
0x7851FC: push    eax
0x7851FD: push    edi
0x7851FE: mov     ecx, esi
0x785200: call    sub_7849F0
0x785205: mov     eax, [esi+4]
0x785208: push    eax
0x785209: call    FormHeapFree
0x78520E: add     esp, 4
0x785211: mov     eax, [ebp+arg_C]
0x785214: mov     ecx, [ebp+var_1C]
0x785217: add     ecx, eax
0x785219: lea     edx, [ebx+ebx*2]
0x78521C: mov     [esi+0Ch], ecx
0x78521F: lea     ecx, [eax+edx*8]
0x785222: mov     [esi+8], ecx
0x785225: mov     [esi+4], eax
0x785228: jmp     loc_785337
0x78522D: mov     edx, [ebp+arg_8]
0x785230: mov     esi, [ebp+arg_C]
0x785233: mov     ecx, [ebp+var_14]
0x785236: push    edx
0x785237: push    esi
0x785238: call    sub_7849F0
0x78523D: push    esi
0x78523E: call    FormHeapFree
0x785243: add     esp, 4
0x785246: push    0
0x785248: push    0
0x78524A: call    ThrowException??
0x78524F: mov     ecx, [esi+8]
0x785252: mov     edi, [ebp+arg_4]
0x785255: mov     edx, ecx
0x785257: sub     edx, edi
0x785259: mov     eax, 2AAAAAABh
0x78525E: imul    edx
0x785260: sar     edx, 2
0x785263: mov     eax, edx
0x785265: shr     eax, 1Fh
0x785268: add     eax, edx
0x78526A: cmp     eax, ebx
0x78526C: mov     [ebp+arg_C], ecx
0x78526F: jnb     loc_7852FC
0x785275: lea     eax, [ebx+ebx*2]
0x785278: add     eax, eax
0x78527A: add     eax, eax
0x78527C: add     eax, eax
0x78527E: mov     [ebp+arg_C], eax
0x785281: add     eax, edi
0x785283: push    eax
0x785284: push    ecx
0x785285: push    edi
0x785286: mov     ecx, esi
0x785288: call    sub_7849C0
0x78528D: mov     ecx, [esi+8]
0x785290: lea     edx, [ebp+var_34]
0x785293: push    edx
0x785294: mov     edx, ecx
0x785296: sub     edx, edi
0x785298: mov     eax, 2AAAAAABh
0x78529D: imul    edx
0x78529F: sar     edx, 2
0x7852A2: mov     eax, edx
0x7852A4: shr     eax, 1Fh
0x7852A7: add     eax, edx
0x7852A9: sub     ebx, eax
0x7852AB: push    ebx
0x7852AC: push    ecx
0x7852AD: mov     ecx, esi
0x7852AF: mov     byte ptr [ebp+var_4], 3
0x7852B3: call    sub_790A70
0x7852B8: mov     eax, [ebp+arg_C]
0x7852BB: add     [esi+8], eax
0x7852BE: mov     esi, [esi+8]
0x7852C1: lea     ecx, [ebp+var_34]
0x7852C4: push    ecx
0x7852C5: sub     esi, eax
0x7852C7: push    esi
0x7852C8: push    edi
0x7852C9: call    sub_784140
0x7852CE: add     esp, 0Ch
0x7852D1: jmp     short loc_785337
0x7852D3: mov     eax, [ebp+arg_8]
0x7852D6: mov     ecx, [ebp+var_14]
0x7852D9: mov     edx, [ecx+8]
0x7852DC: lea     eax, [eax+eax*2]
0x7852DF: add     eax, eax
0x7852E1: add     eax, eax
0x7852E3: add     eax, eax
0x7852E5: add     edx, eax
0x7852E7: push    edx
0x7852E8: mov     edx, [ebp+arg_4]
0x7852EB: add     eax, edx
0x7852ED: push    eax
0x7852EE: call    sub_7849F0
0x7852F3: push    0
0x7852F5: push    0
0x7852F7: call    ThrowException??
0x7852FC: lea     ebx, [ebx+ebx*2]
0x7852FF: add     ebx, ebx
0x785301: push    ecx
0x785302: add     ebx, ebx
0x785304: mov     eax, ecx
0x785306: add     ebx, ebx
0x785308: sub     eax, ebx
0x78530A: push    ecx
0x78530B: push    eax
0x78530C: mov     ecx, esi
0x78530E: mov     [ebp+arg_8], eax
0x785311: call    sub_7849C0
0x785316: mov     ecx, [ebp+arg_8]
0x785319: mov     [esi+8], eax
0x78531C: mov     eax, [ebp+arg_C]
0x78531F: push    eax
0x785320: push    ecx
0x785321: push    edi
0x785322: call    sub_7905A0
0x785327: lea     edx, [ebp+var_34]
0x78532A: push    edx
0x78532B: add     ebx, edi
0x78532D: push    ebx
0x78532E: push    edi
0x78532F: call    sub_784140
0x785334: add     esp, 18h
0x785337: lea     ecx, [ebp+var_34]; void *
0x78533A: mov     [ebp+var_4], 0FFFFFFFFh
0x785341: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x785346: mov     ecx, [ebp+var_C]
0x785349: mov     large fs:0, ecx
0x785350: pop     ecx
0x785351: pop     edi
0x785352: pop     esi
0x785353: pop     ebx
0x785354: mov     esp, ebp
0x785356: pop     ebp
0x785357: retn    10h
