0x616DB0: push    0FFFFFFFFh
0x616DB2: push    offset SEH_616DB0
0x616DB7: mov     eax, large fs:0
0x616DBD: push    eax
0x616DBE: sub     esp, 8
0x616DC1: push    ebx
0x616DC2: push    ebp
0x616DC3: push    esi
0x616DC4: push    edi
0x616DC5: mov     eax, ds:0B30AACh
0x616DCA: xor     eax, esp
0x616DCC: push    eax
0x616DCD: lea     eax, [esp+28h+var_C]
0x616DD1: mov     large fs:0, eax
0x616DD7: mov     edi, ecx
0x616DD9: mov     ebx, [esp+28h+arg_0]
0x616DDD: test    ebx, ebx
0x616DDF: jz      loc_6171D0
0x616DE5: mov     ebp, [esp+28h+arg_4]
0x616DE9: test    ebp, ebp
0x616DEB: jz      short loc_616E0B
0x616DED: mov     ecx, ds:0B333C4h; this
0x616DF3: push    0; a2
0x616DF5: call    Actor_GetActorBaseForm
0x616DFA: mov     ecx, ebp
0x616DFC: mov     esi, eax
0x616DFE: call    sub_484B70
0x616E03: cmp     eax, esi
0x616E05: jz      loc_6171D0
0x616E0B: lea     esi, [ebx+0Ch]
0x616E0E: push    40000h
0x616E13: mov     ecx, esi
0x616E15: call    EffectItemList_HasEffectWithFlags
0x616E1A: test    al, al
0x616E1C: jz      short loc_616E2D
0x616E1E: mov     ecx, ebx
0x616E20: call    sub_419C50
0x616E25: test    al, al
0x616E27: jz      loc_6171D0
0x616E2D: mov     eax, [ebx]
0x616E2F: mov     edx, [eax+18h]
0x616E32: mov     ecx, ebx
0x616E34: call    edx
0x616E36: cmp     eax, 7
0x616E39: jnz     short loc_616E85
0x616E3B: mov     ecx, esi
0x616E3D: call    EffectItemList_AllEffectsHostile
0x616E42: test    al, al
0x616E44: jz      short loc_616E85
0x616E46: cmp     dword ptr [edi+0A4h], 0
0x616E4D: jnz     short loc_616E74
0x616E4F: push    8; Size
0x616E51: call    FormHeapAlloc
0x616E56: add     esp, 4
0x616E59: test    eax, eax
0x616E5B: jz      short loc_616E6C
0x616E5D: mov     dword ptr [eax], 0
0x616E63: mov     dword ptr [eax+4], 0
0x616E6A: jmp     short loc_616E6E
0x616E6C: xor     eax, eax
0x616E6E: mov     [edi+0A4h], eax
0x616E74: mov     ecx, [edi+0A4h]
0x616E7A: push    ebx
0x616E7B: call    BSSimpleList_PushFront
0x616E80: jmp     loc_6171D0
0x616E85: push    8; Size
0x616E87: call    FormHeapAlloc
0x616E8C: mov     esi, eax
0x616E8E: add     esp, 4
0x616E91: mov     [esp+28h+arg_0], esi
0x616E95: test    esi, esi
0x616E97: mov     [esp+28h+var_4], 0
0x616E9F: jz      short loc_616EBA
0x616EA1: mov     eax, [ebx]
0x616EA3: mov     edx, [eax+18h]
0x616EA6: mov     ecx, ebx
0x616EA8: call    edx
0x616EAA: sub     eax, 7
0x616EAD: neg     eax
0x616EAF: sbb     eax, eax
0x616EB1: and     eax, ebp
0x616EB3: mov     [esi], ebx
0x616EB5: mov     [esi+4], eax
0x616EB8: jmp     short loc_616EBC
0x616EBA: xor     esi, esi
0x616EBC: mov     eax, [ebx]
0x616EBE: mov     edx, [eax+18h]
0x616EC1: mov     ecx, ebx
0x616EC3: mov     [esp+28h+var_4], 0FFFFFFFFh
0x616ECB: call    edx
0x616ECD: cmp     eax, 1
0x616ED0: jnz     short loc_616EF0
0x616ED2: mov     eax, [edi+0A0h]
0x616ED8: test    eax, eax
0x616EDA: jz      short loc_616EE5
0x616EDC: push    eax
0x616EDD: call    FormHeapFree
0x616EE2: add     esp, 4
0x616EE5: mov     [edi+0A0h], esi
0x616EEB: jmp     loc_6171D0
0x616EF0: lea     ecx, [ebx+0Ch]
0x616EF3: call    EffectItemList_HasAssocFormEffect
0x616EF8: test    al, al
0x616EFA: mov     byte ptr [esp+28h+arg_0], al
0x616EFE: jz      loc_616FFB
0x616F04: lea     eax, [edi+9Ch]
0x616F0A: push    eax
0x616F0B: push    40000h
0x616F10: push    esi
0x616F11: mov     ecx, edi
0x616F13: call    sub_613AF0
0x616F18: test    al, al
0x616F1A: jnz     loc_6171D0
0x616F20: lea     ebp, [edi+98h]
0x616F26: test    ebp, ebp
0x616F28: jz      short loc_616FA0
0x616F2A: mov     ecx, [edi+3Ch]; this
0x616F2D: call    Actor_IsCreature
0x616F32: test    al, al
0x616F34: jz      short loc_616F42
0x616F36: mov     ecx, [edi+3Ch]
0x616F39: call    sub_5E1CF0
0x616F3E: test    al, al
0x616F40: jz      short loc_616FA0
0x616F42: mov     ecx, [esi]
0x616F44: push    10000h
0x616F49: add     ecx, 0Ch
0x616F4C: call    EffectItemList_HasEffectWithFlags
0x616F51: test    al, al
0x616F53: jz      short loc_616FA0
0x616F55: mov     eax, [ebp+0]
0x616F58: test    eax, eax
0x616F5A: jz      short loc_616F98
0x616F5C: mov     eax, [eax]
0x616F5E: mov     edx, [eax+0Ch]
0x616F61: lea     ecx, [eax+0Ch]
0x616F64: mov     eax, [edx]
0x616F66: push    0
0x616F68: call    eax
0x616F6A: fstp    [esp+28h+var_18+4]
0x616F6E: mov     eax, [esi]
0x616F70: mov     edx, [eax+0Ch]
0x616F73: lea     ecx, [eax+0Ch]
0x616F76: mov     eax, [edx]
0x616F78: push    0
0x616F7A: call    eax
0x616F7C: fcomp   [esp+28h+var_18+4]
0x616F80: fnstsw  ax
0x616F82: test    ah, 41h
0x616F85: jnz     short loc_616FA0
0x616F87: mov     ecx, [ebp+0]
0x616F8A: push    ecx
0x616F8B: call    FormHeapFree
0x616F90: mov     [ebp+0], esi
0x616F93: jmp     loc_6171CD
0x616F98: mov     [ebp+0], esi
0x616F9B: jmp     loc_6171D0
0x616FA0: lea     ebp, [edi+94h]
0x616FA6: test    ebp, ebp
0x616FA8: jz      short loc_616FFB
0x616FAA: mov     ecx, [edi+3Ch]; this
0x616FAD: call    Actor_IsCreature
0x616FB2: test    al, al
0x616FB4: jnz     short loc_616FFB
0x616FB6: mov     ecx, [esi]
0x616FB8: push    20000h
0x616FBD: add     ecx, 0Ch
0x616FC0: call    EffectItemList_HasEffectWithFlags
0x616FC5: test    al, al
0x616FC7: jz      short loc_616FFB
0x616FC9: mov     eax, [ebp+0]
0x616FCC: test    eax, eax
0x616FCE: jz      short loc_616F98
0x616FD0: mov     eax, [eax]
0x616FD2: mov     edx, [eax+0Ch]
0x616FD5: lea     ecx, [eax+0Ch]
0x616FD8: mov     eax, [edx]
0x616FDA: push    0
0x616FDC: call    eax
0x616FDE: fstp    [esp+28h+var_18+4]
0x616FE2: mov     eax, [esi]
0x616FE4: mov     edx, [eax+0Ch]
0x616FE7: lea     ecx, [eax+0Ch]
0x616FEA: mov     eax, [edx]
0x616FEC: push    0
0x616FEE: call    eax
0x616FF0: fcomp   [esp+28h+var_18+4]
0x616FF4: fnstsw  ax
0x616FF6: test    ah, 41h
0x616FF9: jz      short loc_616F87
0x616FFB: lea     ebp, [ebx+0Ch]
0x616FFE: mov     ecx, ebp
0x617000: call    EffectItemList_HasHostile
0x617005: test    al, al
0x617007: jz      loc_6170A8
0x61700D: cmp     byte ptr [esp+28h+arg_0], 0
0x617012: jnz     loc_6170A8
0x617018: mov     ecx, ebp
0x61701A: call    EffectItemList_HasOnTarget
0x61701F: test    al, al
0x617021: jz      short loc_61705E
0x617023: cmp     dword ptr [edi+5Ch], 0
0x617027: jnz     short loc_61704B
0x617029: push    8; Size
0x61702B: call    FormHeapAlloc
0x617030: add     esp, 4
0x617033: test    eax, eax
0x617035: jz      short loc_617046
0x617037: mov     dword ptr [eax], 0
0x61703D: mov     dword ptr [eax+4], 0
0x617044: jmp     short loc_617048
0x617046: xor     eax, eax
0x617048: mov     [edi+5Ch], eax
0x61704B: mov     ecx, [edi+5Ch]
0x61704E: push    offset sub_612740
0x617053: push    esi
0x617054: call    BSSimpleList_InsertSorted
0x617059: jmp     loc_6171D0
0x61705E: mov     ecx, ebp
0x617060: call    EffectItemList_HasTouchEffect
0x617065: test    al, al
0x617067: jz      loc_6171D0
0x61706D: cmp     dword ptr [edi+60h], 0
0x617071: jnz     short loc_617095
0x617073: push    8; Size
0x617075: call    FormHeapAlloc
0x61707A: add     esp, 4
0x61707D: test    eax, eax
0x61707F: jz      short loc_617090
0x617081: mov     dword ptr [eax], 0
0x617087: mov     dword ptr [eax+4], 0
0x61708E: jmp     short loc_617092
0x617090: xor     eax, eax
0x617092: mov     [edi+60h], eax
0x617095: mov     ecx, [edi+60h]
0x617098: push    offset sub_612740
0x61709D: push    esi
0x61709E: call    BSSimpleList_InsertSorted
0x6170A3: jmp     loc_6171D0
0x6170A8: mov     ecx, ebp
0x6170AA: call    EffectItemList_HasOnTarget
0x6170AF: test    al, al
0x6170B1: jnz     loc_6171C7
0x6170B7: mov     ecx, ebp
0x6170B9: call    EffectItemList_HasTouchEffect
0x6170BE: test    al, al
0x6170C0: jnz     loc_6171C7
0x6170C6: cmp     byte ptr [esp+28h+arg_0], al
0x6170CA: jnz     loc_6171C7
0x6170D0: push    ebx
0x6170D1: mov     ecx, edi
0x6170D3: call    sub_6126B0
0x6170D8: test    al, al
0x6170DA: jz      loc_61718F
0x6170E0: mov     eax, [edi+90h]
0x6170E6: test    eax, eax
0x6170E8: jz      loc_617187
0x6170EE: mov     eax, [eax]
0x6170F0: mov     edx, [eax+0Ch]
0x6170F3: lea     ecx, [eax+0Ch]
0x6170F6: mov     eax, [edx]
0x6170F8: push    0
0x6170FA: call    eax
0x6170FC: fstp    [esp+28h+var_18+4]
0x617100: mov     eax, [esi]
0x617102: mov     edx, [eax+0Ch]
0x617105: lea     ecx, [eax+0Ch]
0x617108: mov     eax, [edx]
0x61710A: push    0
0x61710C: call    eax
0x61710E: fcomp   [esp+28h+var_18+4]
0x617112: fnstsw  ax
0x617114: test    ah, 41h
0x617117: jnz     loc_6171D0
0x61711D: mov     ecx, [esi]
0x61711F: mov     edx, [ecx]
0x617121: mov     eax, [edx+18h]
0x617124: call    eax
0x617126: cmp     eax, 7
0x617129: jz      short loc_61714B
0x61712B: cmp     dword ptr [esi+4], 0
0x61712F: jnz     short loc_61714B
0x617131: mov     ecx, [edi+90h]
0x617137: push    ecx
0x617138: call    FormHeapFree
0x61713D: add     esp, 4
0x617140: mov     [edi+90h], esi
0x617146: jmp     loc_6171D0
0x61714B: cmp     dword ptr [edi+68h], 0
0x61714F: jnz     short loc_617173
0x617151: push    8; Size
0x617153: call    FormHeapAlloc
0x617158: add     esp, 4
0x61715B: test    eax, eax
0x61715D: jz      short loc_61716E
0x61715F: mov     dword ptr [eax], 0
0x617165: mov     dword ptr [eax+4], 0
0x61716C: jmp     short loc_617170
0x61716E: xor     eax, eax
0x617170: mov     [edi+68h], eax
0x617173: mov     edx, [edi+90h]
0x617179: mov     ecx, [edi+68h]
0x61717C: push    offset sub_612740
0x617181: push    edx
0x617182: call    BSSimpleList_InsertSorted
0x617187: mov     [edi+90h], esi
0x61718D: jmp     short loc_6171D0
0x61718F: cmp     dword ptr [edi+64h], 0
0x617193: jnz     short loc_6171B7
0x617195: push    8; Size
0x617197: call    FormHeapAlloc
0x61719C: add     esp, 4
0x61719F: test    eax, eax
0x6171A1: jz      short loc_6171B2
0x6171A3: mov     dword ptr [eax], 0
0x6171A9: mov     dword ptr [eax+4], 0
0x6171B0: jmp     short loc_6171B4
0x6171B2: xor     eax, eax
0x6171B4: mov     [edi+64h], eax
0x6171B7: mov     ecx, [edi+64h]
0x6171BA: push    offset sub_612740
0x6171BF: push    esi
0x6171C0: call    BSSimpleList_InsertSorted
0x6171C5: jmp     short loc_6171D0
0x6171C7: push    esi
0x6171C8: call    FormHeapFree
0x6171CD: add     esp, 4
0x6171D0: mov     ecx, dword ptr [esp+28h+var_C]
0x6171D4: mov     large fs:0, ecx
0x6171DB: pop     ecx
0x6171DC: pop     edi
0x6171DD: pop     esi
0x6171DE: pop     ebp
0x6171DF: pop     ebx
0x6171E0: add     esp, 14h
0x6171E3: retn    8
