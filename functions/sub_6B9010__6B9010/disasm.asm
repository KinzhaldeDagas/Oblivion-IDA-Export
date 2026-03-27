0x6B9010: push    0FFFFFFFFh
0x6B9012: push    offset SEH_6B9010
0x6B9017: mov     eax, large fs:0
0x6B901D: push    eax
0x6B901E: sub     esp, 14h
0x6B9021: push    ebx
0x6B9022: push    ebp
0x6B9023: push    esi
0x6B9024: push    edi
0x6B9025: mov     eax, ds:0B30AACh
0x6B902A: xor     eax, esp
0x6B902C: push    eax
0x6B902D: lea     eax, [esp+34h+var_C]
0x6B9031: mov     large fs:0, eax
0x6B9037: mov     edi, ecx
0x6B9039: mov     [esp+34h+var_1C], edi
0x6B903D: mov     eax, [edi+0Ch]
0x6B9040: push    0; int
0x6B9042: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6B9047: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6B904C: push    0; int
0x6B904E: push    eax; void *
0x6B904F: mov     [esp+48h+var_1F], 0
0x6B9054: call    OblivionDynamicCast
0x6B9059: mov     [esp+48h+var_18], eax
0x6B905D: lea     eax, [edi+4]
0x6B9060: add     esp, 14h
0x6B9063: xor     ecx, ecx
0x6B9065: test    eax, eax
0x6B9067: jz      loc_6B9235
0x6B906D: lea     ecx, [ecx+0]
0x6B9070: cmp     dword ptr [eax], 0
0x6B9073: jz      short loc_6B9078
0x6B9075: add     ecx, 1
0x6B9078: mov     eax, [eax+4]
0x6B907B: test    eax, eax
0x6B907D: jnz     short loc_6B9070
0x6B907F: cmp     ecx, 1
0x6B9082: jb      loc_6B9235
0x6B9088: mov     eax, [esp+34h+arg_0]
0x6B908C: test    eax, eax
0x6B908E: jz      loc_6B9235
0x6B9094: jmp     short loc_6B909E
0x6B9096: mov     eax, [esp+34h+arg_0]
0x6B909A: mov     edi, [esp+34h+var_1C]
0x6B909E: mov     esi, [eax]
0x6B90A0: test    esi, esi
0x6B90A2: jz      loc_6B9235
0x6B90A8: cmp     dword ptr [esi+0Ch], 0D7h ; '×'
0x6B90AF: mov     ecx, [eax+4]
0x6B90B2: mov     [esp+34h+arg_0], ecx
0x6B90B6: jnz     short loc_6B910D
0x6B90B8: mov     ecx, [esp+34h+var_18]
0x6B90BC: call    Actor__IsNoRumor
0x6B90C1: test    al, al
0x6B90C3: jnz     short loc_6B910D
0x6B90C5: mov     eax, [edi+0Ch]
0x6B90C8: lea     ecx, [eax+44h]
0x6B90CB: push    eax
0x6B90CC: call    sub_425970
0x6B90D1: mov     edi, eax
0x6B90D3: test    edi, edi
0x6B90D5: jz      short loc_6B910D
0x6B90D7: cmp     [esp+34h+var_1F], 0
0x6B90DC: jnz     short loc_6B910D
0x6B90DE: lea     eax, [edi+0Ch]
0x6B90E1: test    eax, eax
0x6B90E3: mov     [edi+1Ch], eax
0x6B90E6: jz      short loc_6B9108
0x6B90E8: cmp     dword ptr [eax], 0
0x6B90EB: jz      short loc_6B9108
0x6B90ED: mov     ebx, [esp+34h+var_1C]
0x6B90F1: add     ebx, 4
0x6B90F4: push    edi
0x6B90F5: mov     ecx, ebx
0x6B90F7: call    sub_446C30
0x6B90FC: test    al, al
0x6B90FE: jnz     short loc_6B9108
0x6B9100: push    edi
0x6B9101: mov     ecx, ebx
0x6B9103: call    BSSimpleList_PushBack
0x6B9108: mov     [esp+34h+var_1F], 1
0x6B910D: mov     edx, ds:0B333C4h
0x6B9113: mov     eax, [esp+34h+var_1C]
0x6B9117: mov     ecx, [eax+0Ch]
0x6B911A: push    edx
0x6B911B: push    ecx
0x6B911C: lea     edx, [esp+3Ch+var_14]
0x6B9120: push    edx
0x6B9121: mov     ecx, esi
0x6B9123: mov     byte ptr [esp+40h+var_14], 0
0x6B9128: call    sub_52F770
0x6B912D: mov     ebp, eax
0x6B912F: test    ebp, ebp
0x6B9131: jz      loc_6B922A
0x6B9137: push    ebp
0x6B9138: mov     ecx, esi
0x6B913A: call    sub_52F570
0x6B913F: cmp     dword ptr [esi+0Ch], 0D7h ; '×'
0x6B9146: mov     ebx, eax
0x6B9148: mov     [esp+34h+var_1D], 0
0x6B914D: mov     [esp+34h+var_1E], 1
0x6B9152: jnz     short loc_6B9174
0x6B9154: cmp     [esp+34h+var_1F], 0
0x6B9159: jnz     short loc_6B916F
0x6B915B: mov     ecx, [esp+34h+var_18]
0x6B915F: call    Actor__IsNoRumor
0x6B9164: test    al, al
0x6B9166: jnz     short loc_6B916F
0x6B9168: mov     [esp+34h+var_1D], 1
0x6B916D: jmp     short loc_6B9174
0x6B916F: mov     [esp+34h+var_1E], 0
0x6B9174: xor     edi, edi
0x6B9176: cmp     [esp+34h+var_1E], 0
0x6B917B: jz      short loc_6B91B8
0x6B917D: push    28h ; '('; Size
0x6B917F: call    FormHeapAlloc
0x6B9184: add     esp, 4
0x6B9187: mov     [esp+34h+var_10], eax
0x6B918B: test    eax, eax
0x6B918D: mov     [esp+34h+var_4], edi
0x6B9191: jz      short loc_6B91AC
0x6B9193: mov     ecx, [esp+34h+var_14]
0x6B9197: mov     edx, [esp+34h+var_1C]
0x6B919B: push    ecx
0x6B919C: mov     ecx, [edx+0Ch]
0x6B919F: push    ecx
0x6B91A0: push    ebp
0x6B91A1: push    esi
0x6B91A2: push    ebx
0x6B91A3: mov     ecx, eax
0x6B91A5: call    sub_6B8E00
0x6B91AA: jmp     short loc_6B91AE
0x6B91AC: xor     eax, eax
0x6B91AE: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6B91B6: mov     edi, eax
0x6B91B8: cmp     [esp+34h+var_1D], 0
0x6B91BD: jz      short loc_6B91DF
0x6B91BF: mov     edx, [edi+18h]
0x6B91C2: movzx   eax, byte ptr [edx+25h]
0x6B91C6: shr     eax, 2
0x6B91C9: test    al, 1
0x6B91CB: jnz     short loc_6B91DF
0x6B91CD: mov     esi, [esp+34h+var_1C]
0x6B91D1: mov     ecx, [esi+0Ch]
0x6B91D4: push    edi
0x6B91D5: add     ecx, 44h ; 'D'
0x6B91D8: call    sub_422C70
0x6B91DD: jmp     short loc_6B91E3
0x6B91DF: mov     esi, [esp+34h+var_1C]
0x6B91E3: cmp     [esp+34h+var_1E], 0
0x6B91E8: jz      short loc_6B9216
0x6B91EA: lea     eax, [edi+0Ch]
0x6B91ED: test    eax, eax
0x6B91EF: mov     [edi+1Ch], eax
0x6B91F2: jz      short loc_6B9216
0x6B91F4: cmp     dword ptr [eax], 0
0x6B91F7: jz      short loc_6B9216
0x6B91F9: lea     eax, [esi+4]
0x6B91FC: test    eax, eax
0x6B91FE: jz      short loc_6B920B
0x6B9200: cmp     [eax], edi
0x6B9202: jz      short loc_6B9216
0x6B9204: mov     eax, [eax+4]
0x6B9207: test    eax, eax
0x6B9209: jnz     short loc_6B9200
0x6B920B: push    edi
0x6B920C: lea     ecx, [esi+4]
0x6B920F: call    BSSimpleList_PushBack
0x6B9214: jmp     short loc_6B922A
0x6B9216: test    edi, edi
0x6B9218: jz      short loc_6B922A
0x6B921A: mov     ecx, edi
0x6B921C: call    sub_6B8F50
0x6B9221: push    edi
0x6B9222: call    FormHeapFree
0x6B9227: add     esp, 4
0x6B922A: cmp     [esp+34h+arg_0], 0
0x6B922F: jnz     loc_6B9096
0x6B9235: mov     ecx, [esp+34h+var_C]
0x6B9239: mov     large fs:0, ecx
0x6B9240: pop     ecx
0x6B9241: pop     edi
0x6B9242: pop     esi
0x6B9243: pop     ebp
0x6B9244: pop     ebx
0x6B9245: add     esp, 20h
0x6B9248: retn    4
