0x51DD00: push    ebp
0x51DD01: mov     ebp, esp
0x51DD03: sub     esp, 30h
0x51DD06: mov     eax, ds:0B30AACh
0x51DD0B: xor     eax, ebp
0x51DD0D: mov     [ebp+var_4], eax
0x51DD10: push    ebx
0x51DD11: push    esi
0x51DD12: push    edi
0x51DD13: mov     edi, [ebp+a2]
0x51DD16: mov     esi, ecx
0x51DD18: mov     ecx, edi
0x51DD1A: call    TESFile_GetRecordType
0x51DD1F: cmp     al, 24h ; '$'
0x51DD21: jz      short loc_51DD2A
0x51DD23: xor     al, al
0x51DD25: jmp     loc_51E1A0
0x51DD2A: push    esi
0x51DD2B: mov     ecx, edi; this
0x51DD2D: call    TESFile_InitializeFormFromRecord
0x51DD32: xor     ebx, ebx
0x51DD34: push    ebx; a2
0x51DD35: mov     ecx, esi; this
0x51DD37: call    TESForm_SetIsLinked
0x51DD3C: mov     ecx, edi
0x51DD3E: mov     [ebp+var_C], 0FFFFFFFFh
0x51DD45: call    TESFile_GetChunkType
0x51DD4A: cmp     eax, ebx
0x51DD4C: jz      loc_51E19E
0x51DD52: cmp     eax, 4D414E52h
0x51DD57: jg      loc_51DF86
0x51DD5D: jz      loc_51DF71
0x51DD63: cmp     eax, 46445343h
0x51DD68: jg      loc_51DE7F
0x51DD6E: jz      loc_51DEEA
0x51DD74: cmp     eax, 42444F4Dh
0x51DD79: jg      loc_51DE20
0x51DD7F: jz      loc_51DEA5
0x51DD85: cmp     eax, 304D414Eh
0x51DD8A: jz      short loc_51DDE8
0x51DD8C: cmp     eax, 314D414Eh
0x51DD91: jz      short loc_51DDB4
0x51DD93: cmp     eax, 41544144h
0x51DD98: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DD9E: push    6; a4
0x51DDA0: lea     eax, [esi+104h]
0x51DDA6: push    eax; Dst
0x51DDA7: push    edi; a2
0x51DDA8: mov     ecx, esi; this
0x51DDAA: call    TESForm_LoadGenericComponents
0x51DDAF: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DDB4: mov     eax, [edi+254h]
0x51DDBA: cmp     eax, ebx
0x51DDBC: jz      TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DDC2: call    __alloca?
0x51DDC7: mov     ebx, esp
0x51DDC9: push    0; a4
0x51DDCB: push    ebx; Dst
0x51DDCC: mov     ecx, edi; a1
0x51DDCE: call    TESFile_GetChunkData
0x51DDD3: push    0; a3
0x51DDD5: push    ebx; a2
0x51DDD6: lea     ecx, [esi+138h]; this
0x51DDDC: call    BSStringT_Set
0x51DDE1: xor     ebx, ebx
0x51DDE3: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DDE8: mov     eax, [edi+254h]
0x51DDEE: cmp     eax, ebx
0x51DDF0: jz      TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DDF6: call    __alloca?
0x51DDFB: mov     ebx, esp
0x51DDFD: push    0; a4
0x51DDFF: push    ebx; Dst
0x51DE00: mov     ecx, edi; a1
0x51DE02: call    TESFile_GetChunkData
0x51DE07: mov     edx, [esi+11Ch]
0x51DE0D: mov     eax, [edx+18h]
0x51DE10: lea     ecx, [esi+11Ch]
0x51DE16: push    ebx
0x51DE17: call    eax
0x51DE19: xor     ebx, ebx
0x51DE1B: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DE20: cmp     eax, 44494445h
0x51DE25: jz      short loc_51DE51
0x51DE27: cmp     eax, 44494B50h
0x51DE2C: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DE32: lea     ecx, [ebp+var_8]
0x51DE35: push    ecx
0x51DE36: mov     ecx, edi
0x51DE38: mov     [ebp+var_8], ebx
0x51DE3B: call    TESFile_GetChunkData4
0x51DE40: mov     edx, [ebp+var_8]
0x51DE43: push    edx
0x51DE44: lea     ecx, [esi+68h]
0x51DE47: call    TESAIForm_AddPackage
0x51DE4C: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DE51: mov     eax, [edi+254h]
0x51DE57: call    __alloca?
0x51DE5C: mov     ebx, esp
0x51DE5E: push    200h; a4
0x51DE63: push    ebx; Dst
0x51DE64: mov     ecx, edi; a1
0x51DE66: call    TESFile_GetChunkData
0x51DE6B: mov     eax, [esi]
0x51DE6D: mov     edx, [eax+0D8h]
0x51DE73: push    ebx
0x51DE74: mov     ecx, esi
0x51DE76: call    edx
0x51DE78: xor     ebx, ebx
0x51DE7A: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DE7F: cmp     eax, 4C4C5546h
0x51DE84: jg      loc_51DF35
0x51DE8A: jz      short loc_51DF0B
0x51DE8C: cmp     eax, 49445343h
0x51DE91: jz      short loc_51DEEA
0x51DE93: cmp     eax, 49524353h
0x51DE98: jz      short loc_51DEC2
0x51DE9A: cmp     eax, 4C444F4Dh
0x51DE9F: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DEA5: cmp     esi, ebx
0x51DEA7: jz      loc_51E0FE
0x51DEAD: lea     eax, [esi+0ACh]
0x51DEB3: push    edi
0x51DEB4: push    eax
0x51DEB5: call    TESModel_Load
0x51DEBA: add     esp, 8
0x51DEBD: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DEC2: lea     eax, [ebp+var_8]
0x51DEC5: push    eax
0x51DEC6: mov     ecx, edi
0x51DEC8: mov     [ebp+var_8], ebx
0x51DECB: call    TESFile_GetChunkData4
0x51DED0: mov     ecx, [ebp+var_8]
0x51DED3: mov     [esi+0C8h], ecx
0x51DED9: push    esi
0x51DEDA: lea     ecx, [esi+0C4h]
0x51DEE0: call    TESScriptableForm_Link
0x51DEE5: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DEEA: mov     ecx, esi
0x51DEEC: call    TESCreature_GetCreatureSoundArray
0x51DEF1: mov     edx, [ebp+var_C]
0x51DEF4: push    esi
0x51DEF5: push    edx
0x51DEF6: push    edi
0x51DEF7: mov     ecx, eax
0x51DEF9: call    CreatureSoundArray_LoadAndLinkSoundEntry
0x51DEFE: test    al, al
0x51DF00: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF06: jmp     loc_51E18F
0x51DF0B: cmp     esi, ebx
0x51DF0D: jz      short loc_51DF24
0x51DF0F: lea     eax, [esi+0A0h]
0x51DF15: push    edi; a2
0x51DF16: push    eax; a1
0x51DF17: call    TESFullname_Load
0x51DF1C: add     esp, 8
0x51DF1F: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF24: xor     eax, eax
0x51DF26: push    edi; a2
0x51DF27: push    eax; a1
0x51DF28: call    TESFullname_Load
0x51DF2D: add     esp, 8
0x51DF30: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF35: sub     eax, 4D414E42h
0x51DF3A: jz      short loc_51DF5E
0x51DF3C: sub     eax, 7
0x51DF3F: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF45: lea     eax, [ebp+var_8]
0x51DF48: push    eax
0x51DF49: mov     ecx, edi
0x51DF4B: mov     [ebp+var_8], ebx
0x51DF4E: call    TESFile_GetChunkData4
0x51DF53: mov     ecx, [ebp+var_8]
0x51DF56: mov     [esi+38h], ecx
0x51DF59: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF5E: lea     edx, [esi+114h]
0x51DF64: push    edx
0x51DF65: mov     ecx, edi
0x51DF67: call    TESFile_GetChunkData4
0x51DF6C: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF71: push    1; a4
0x51DF73: lea     eax, [esi+10Ah]
0x51DF79: push    eax; Dst
0x51DF7A: mov     ecx, edi; a1
0x51DF7C: call    TESFile_GetChunkData
0x51DF81: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DF86: cmp     eax, 4F4C5053h
0x51DF8B: jg      loc_51E03B
0x51DF91: jz      loc_51E01C
0x51DF97: add     eax, 0B2BEB1ADh; switch 8 cases
0x51DF9C: cmp     eax, 7
0x51DF9F: ja      TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DFA5: jmp     ds:jpt_51DFA5[eax*4]; switch jump
0x51DFAC: push    8; jumptable 0051DFA5 case 1296125523
0x51DFAE: lea     ecx, [ebp+Dst]
0x51DFB1: xor     eax, eax
0x51DFB3: push    ecx; Dst
0x51DFB4: mov     ecx, edi; a1
0x51DFB6: mov     dword ptr [ebp+Dst], eax
0x51DFB9: mov     [ebp+var_10], eax
0x51DFBC: call    TESFile_GetChunkData
0x51DFC1: mov     edx, [ebp+var_10]
0x51DFC4: mov     eax, dword ptr [ebp+Dst]
0x51DFC7: push    edx
0x51DFC8: push    eax
0x51DFC9: lea     ecx, [esi+24h]
0x51DFCC: call    TESActorBaseData_SetFactionRank
0x51DFD1: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DFD6: lea     ecx, [esi+110h]; jumptable 0051DFA5 case 1296125527
0x51DFDC: push    ecx
0x51DFDD: mov     ecx, edi
0x51DFDF: call    TESFile_GetChunkData4
0x51DFE4: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DFE9: lea     edx, [esi+10Ch]; jumptable 0051DFA5 case 1296125524
0x51DFEF: push    edx
0x51DFF0: mov     ecx, edi
0x51DFF2: call    TESFile_GetChunkData4
0x51DFF7: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51DFFC: lea     eax, [ebp+var_24]; jumptable 0051DFA5 case 1296125530
0x51DFFF: push    eax
0x51E000: mov     ecx, edi
0x51E002: call    TESFile_GetChunkData4
0x51E007: mov     edx, [esi]
0x51E009: mov     eax, [ebp+var_24]
0x51E00C: mov     edx, [edx+124h]
0x51E012: push    eax
0x51E013: mov     ecx, esi
0x51E015: call    edx
0x51E017: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E01C: lea     eax, [ebp+var_8]
0x51E01F: push    eax
0x51E020: mov     ecx, edi
0x51E022: mov     [ebp+var_8], ebx
0x51E025: call    TESFile_GetChunkData4
0x51E02A: mov     ecx, [ebp+var_8]
0x51E02D: push    ecx
0x51E02E: lea     ecx, [esi+54h]
0x51E031: call    TESSpellList_AddFormToSpellList
0x51E036: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E03B: cmp     eax, 54444F4Dh
0x51E040: jg      loc_51E10C
0x51E046: jz      loc_51DEA5
0x51E04C: cmp     eax, 53424341h
0x51E051: jg      short loc_51E0CA
0x51E053: jz      short loc_51E0B8
0x51E055: cmp     eax, 4F544E43h
0x51E05A: jz      short loc_51E085
0x51E05C: cmp     eax, 52435343h
0x51E061: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E067: lea     edx, [ebp+var_8]
0x51E06A: push    edx
0x51E06B: mov     ecx, edi
0x51E06D: mov     [ebp+var_8], ebx
0x51E070: call    TESFile_GetChunkData4
0x51E075: mov     eax, [ebp+var_8]
0x51E078: push    eax
0x51E079: mov     ecx, esi
0x51E07B: call    TESCreature_SetInheritedSoundSource
0x51E080: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E085: push    8; a4
0x51E087: lea     ecx, [ebp+var_20]
0x51E08A: xor     eax, eax
0x51E08C: push    ecx; Dst
0x51E08D: mov     ecx, edi; a1
0x51E08F: mov     dword ptr [ebp+var_20], eax
0x51E092: mov     [ebp+var_1C], eax
0x51E095: call    TESFile_GetChunkData
0x51E09A: lea     ebx, [esi+44h]
0x51E09D: push    0
0x51E09F: mov     ecx, ebx
0x51E0A1: call    TESContainer_SetLinkFlag
0x51E0A6: lea     edx, [ebp+var_20]
0x51E0A9: push    edx
0x51E0AA: mov     ecx, ebx
0x51E0AC: call    TESContainer_AddUnlinkedForm
0x51E0B1: xor     ebx, ebx
0x51E0B3: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E0B8: push    10h; a4
0x51E0BA: lea     eax, [esi+28h]
0x51E0BD: push    eax; Dst
0x51E0BE: mov     ecx, edi; a1
0x51E0C0: call    TESFile_GetChunkData
0x51E0C5: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E0CA: cmp     eax, 54444941h
0x51E0CF: jnz     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E0D5: xor     eax, eax
0x51E0D7: push    0Ch; a4
0x51E0D9: lea     ecx, [ebp+var_30]
0x51E0DC: push    ecx; Dst
0x51E0DD: mov     ecx, edi; a1
0x51E0DF: mov     dword ptr [ebp+var_30], eax
0x51E0E2: mov     [ebp+var_2C], eax
0x51E0E5: mov     [ebp+var_28], eax
0x51E0E8: call    TESFile_GetChunkData
0x51E0ED: lea     edx, [ebp+var_30]
0x51E0F0: push    edx
0x51E0F1: lea     ecx, [esi+68h]
0x51E0F4: call    TESAIForm_SetNonPackageData
0x51E0F9: jmp     TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E0FE: xor     eax, eax
0x51E100: push    edi
0x51E101: push    eax
0x51E102: call    TESModel_Load
0x51E107: add     esp, 8
0x51E10A: jmp     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E10C: cmp     eax, 5A46464Bh
0x51E111: jg      short loc_51E162
0x51E113: jz      short loc_51E138
0x51E115: cmp     eax, 54445343h
0x51E11A: jz      short loc_51E125
0x51E11C: cmp     eax, 5446494Eh
0x51E121: jz      short loc_51E169
0x51E123: jmp     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E125: lea     eax, [ebp+var_18]
0x51E128: push    eax
0x51E129: mov     ecx, edi
0x51E12B: call    TESFile_GetChunkData4
0x51E130: mov     ecx, [ebp+var_18]
0x51E133: mov     [ebp+var_C], ecx
0x51E136: jmp     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E138: cmp     esi, ebx
0x51E13A: jz      short loc_51E151
0x51E13C: lea     eax, [esi+94h]
0x51E142: push    edi
0x51E143: push    eax
0x51E144: lea     ecx, [esi+94h]
0x51E14A: call    TESAnimation_LoadAnimationChunk
0x51E14F: jmp     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E151: xor     eax, eax
0x51E153: push    edi
0x51E154: push    eax
0x51E155: lea     ecx, [esi+94h]
0x51E15B: call    TESAnimation_LoadAnimationChunk
0x51E160: jmp     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E162: cmp     eax, 5A46494Eh
0x51E167: jnz     short TESCreature_LoadForm___def_51DFA5; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E169: cmp     esi, ebx
0x51E16B: jz      short loc_51E175
0x51E16D: lea     eax, [esi+0ECh]
0x51E173: jmp     short loc_51E177
0x51E175: xor     eax, eax
0x51E177: push    edi
0x51E178: push    eax
0x51E179: lea     ecx, [esi+0ECh]
0x51E17F: call    sub_46DFE0
0x51E184: mov     ecx, edi; jumptable 0051DFA5 default case, cases 1296125525,1296125526,1296125528,1296125529
0x51E186: call    TESFile_GetNextChunk
0x51E18B: test    al, al
0x51E18D: jz      short loc_51E19E
0x51E18F: mov     ecx, edi
0x51E191: call    TESFile_GetChunkType
0x51E196: cmp     eax, ebx
0x51E198: jnz     loc_51DD52
0x51E19E: mov     al, 1
0x51E1A0: lea     esp, [ebp-3Ch]
0x51E1A3: pop     edi
0x51E1A4: pop     esi
0x51E1A5: pop     ebx
0x51E1A6: mov     ecx, [ebp+var_4]
0x51E1A9: xor     ecx, ebp
0x51E1AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51E1B0: mov     esp, ebp
0x51E1B2: pop     ebp
0x51E1B3: retn    4
