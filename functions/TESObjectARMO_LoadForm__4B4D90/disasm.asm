0x4B4D90: push    ebp
0x4B4D91: mov     ebp, esp
0x4B4D93: sub     esp, 18h
0x4B4D96: mov     eax, ds:0B30AACh
0x4B4D9B: xor     eax, ebp
0x4B4D9D: mov     [ebp+var_4], eax
0x4B4DA0: push    ebx
0x4B4DA1: push    esi
0x4B4DA2: mov     esi, [ebp+a2]
0x4B4DA5: push    edi
0x4B4DA6: mov     edi, ecx
0x4B4DA8: mov     ecx, esi
0x4B4DAA: call    TESFile_GetRecordType
0x4B4DAF: cmp     al, 14h
0x4B4DB1: jz      short loc_4B4DBA
0x4B4DB3: xor     al, al
0x4B4DB5: jmp     loc_4B5125
0x4B4DBA: push    edi
0x4B4DBB: mov     ecx, esi
0x4B4DBD: call    TESFile_InitializeFormFromRecord
0x4B4DC2: xor     ebx, ebx
0x4B4DC4: push    ebx; a2
0x4B4DC5: mov     ecx, edi; this
0x4B4DC7: call    TESForm_SetIsLinked
0x4B4DCC: mov     ecx, esi
0x4B4DCE: call    TESFile_GetChunkType
0x4B4DD3: cmp     eax, ebx
0x4B4DD5: jz      loc_4B5123
0x4B4DDB: jmp     short loc_4B4DE0
0x4B4DDD: align 10h
0x4B4DE0: cmp     eax, 49524353h
0x4B4DE5: jg      loc_4B4FD2
0x4B4DEB: jz      loc_4B4FB0
0x4B4DF1: cmp     eax, 42324F4Dh
0x4B4DF6: jg      loc_4B4F16
0x4B4DFC: jz      loc_4B4EFD
0x4B4E02: cmp     eax, 33444F4Dh
0x4B4E07: jg      loc_4B4EA7
0x4B4E0D: jz      short loc_4B4E79
0x4B4E0F: cmp     eax, 32444F4Dh
0x4B4E14: jz      short loc_4B4E4B
0x4B4E16: cmp     eax, 324F4349h
0x4B4E1B: jnz     loc_4B5107
0x4B4E21: mov     eax, [esi+254h]
0x4B4E27: call    __alloca?
0x4B4E2C: mov     ebx, esp
0x4B4E2E: push    0; a4
0x4B4E30: push    ebx; Dst
0x4B4E31: mov     ecx, esi; a1
0x4B4E33: call    TESFile_GetChunkData
0x4B4E38: push    0; a3
0x4B4E3A: push    ebx; a2
0x4B4E3B: lea     ecx, [edi+0DCh]; this
0x4B4E41: call    BSStringT_Set
0x4B4E46: jmp     loc_4B5107
0x4B4E4B: mov     eax, [esi+254h]
0x4B4E51: call    __alloca?
0x4B4E56: mov     ebx, esp
0x4B4E58: push    0; a4
0x4B4E5A: push    ebx; Dst
0x4B4E5B: mov     ecx, esi; a1
0x4B4E5D: call    TESFile_GetChunkData
0x4B4E62: mov     eax, [edi+9Ch]
0x4B4E68: mov     edx, [eax+18h]
0x4B4E6B: lea     ecx, [edi+9Ch]
0x4B4E71: push    ebx
0x4B4E72: call    edx
0x4B4E74: jmp     loc_4B5107
0x4B4E79: mov     eax, [esi+254h]
0x4B4E7F: call    __alloca?
0x4B4E84: mov     ebx, esp
0x4B4E86: push    0; a4
0x4B4E88: push    ebx; Dst
0x4B4E89: mov     ecx, esi; a1
0x4B4E8B: call    TESFile_GetChunkData
0x4B4E90: mov     eax, [edi+84h]
0x4B4E96: mov     edx, [eax+18h]
0x4B4E99: lea     ecx, [edi+84h]
0x4B4E9F: push    ebx
0x4B4EA0: call    edx
0x4B4EA2: jmp     loc_4B5107
0x4B4EA7: cmp     eax, 34444F4Dh
0x4B4EAC: jz      short loc_4B4ECF
0x4B4EAE: cmp     eax, 41544144h
0x4B4EB3: jnz     loc_4B5107
0x4B4EB9: push    2; a4
0x4B4EBB: lea     eax, [edi+0E4h]
0x4B4EC1: push    eax; Dst
0x4B4EC2: push    esi; a2
0x4B4EC3: mov     ecx, edi; this
0x4B4EC5: call    TESForm_LoadGenericComponents
0x4B4ECA: jmp     loc_4B5107
0x4B4ECF: mov     eax, [esi+254h]
0x4B4ED5: call    __alloca?
0x4B4EDA: mov     ebx, esp
0x4B4EDC: push    0; a4
0x4B4EDE: push    ebx; Dst
0x4B4EDF: mov     ecx, esi; a1
0x4B4EE1: call    TESFile_GetChunkData
0x4B4EE6: mov     edx, [edi+0B4h]
0x4B4EEC: mov     eax, [edx+18h]
0x4B4EEF: lea     ecx, [edi+0B4h]
0x4B4EF5: push    ebx
0x4B4EF6: call    eax
0x4B4EF8: jmp     loc_4B5107
0x4B4EFD: lea     ecx, [ebp+var_14]
0x4B4F00: push    ecx
0x4B4F01: mov     ecx, esi
0x4B4F03: call    TESFile_GetChunkData4
0x4B4F08: fld     [ebp+var_14]
0x4B4F0B: fstp    dword ptr [edi+0A8h]
0x4B4F11: jmp     loc_4B5107
0x4B4F16: cmp     eax, 42444F4Dh
0x4B4F1B: jg      short loc_4B4F79
0x4B4F1D: jz      short loc_4B4F63
0x4B4F1F: cmp     eax, 42334F4Dh
0x4B4F24: jz      short loc_4B4F4A
0x4B4F26: cmp     eax, 42344F4Dh
0x4B4F2B: jnz     loc_4B5107
0x4B4F31: lea     edx, [ebp+var_C]
0x4B4F34: push    edx
0x4B4F35: mov     ecx, esi
0x4B4F37: call    TESFile_GetChunkData4
0x4B4F3C: fld     [ebp+var_C]
0x4B4F3F: fstp    dword ptr [edi+0C0h]
0x4B4F45: jmp     loc_4B5107
0x4B4F4A: lea     eax, [ebp+var_10]
0x4B4F4D: push    eax
0x4B4F4E: mov     ecx, esi
0x4B4F50: call    TESFile_GetChunkData4
0x4B4F55: fld     [ebp+var_10]
0x4B4F58: fstp    dword ptr [edi+90h]
0x4B4F5E: jmp     loc_4B5107
0x4B4F63: lea     ecx, [ebp+var_18]
0x4B4F66: push    ecx
0x4B4F67: mov     ecx, esi
0x4B4F69: call    TESFile_GetChunkData4
0x4B4F6E: fld     [ebp+var_18]
0x4B4F71: fstp    dword ptr [edi+78h]
0x4B4F74: jmp     loc_4B5107
0x4B4F79: cmp     eax, 44494445h
0x4B4F7E: jnz     loc_4B5107
0x4B4F84: mov     eax, [esi+254h]
0x4B4F8A: call    __alloca?
0x4B4F8F: mov     ebx, esp
0x4B4F91: push    200h; a4
0x4B4F96: push    ebx; Dst
0x4B4F97: mov     ecx, esi; a1
0x4B4F99: call    TESFile_GetChunkData
0x4B4F9E: mov     edx, [edi]
0x4B4FA0: mov     eax, [edx+0D8h]
0x4B4FA6: push    ebx
0x4B4FA7: mov     ecx, edi
0x4B4FA9: call    eax
0x4B4FAB: jmp     loc_4B5107
0x4B4FB0: lea     ecx, [ebp+var_8]
0x4B4FB3: push    ecx
0x4B4FB4: mov     ecx, esi
0x4B4FB6: mov     [ebp+var_8], ebx
0x4B4FB9: call    TESFile_GetChunkData4
0x4B4FBE: mov     edx, [ebp+var_8]
0x4B4FC1: push    edi
0x4B4FC2: lea     ecx, [edi+30h]
0x4B4FC5: mov     [edi+34h], edx
0x4B4FC8: call    TESScriptableForm_Link
0x4B4FCD: jmp     loc_4B5107
0x4B4FD2: cmp     eax, 54324F4Dh
0x4B4FD7: jg      loc_4B50BB
0x4B4FDD: jz      loc_4B50B1
0x4B4FE3: cmp     eax, 4D414E41h
0x4B4FE8: jg      short loc_4B5062
0x4B4FEA: jz      short loc_4B5047
0x4B4FEC: cmp     eax, 4C444F4Dh
0x4B4FF1: jz      short loc_4B501F
0x4B4FF3: cmp     eax, 4C4C5546h
0x4B4FF8: jnz     loc_4B5107
0x4B4FFE: cmp     edi, ebx
0x4B5000: jz      short loc_4B5011
0x4B5002: lea     eax, [edi+24h]
0x4B5005: push    esi
0x4B5006: push    eax
0x4B5007: call    TESFullname_Load
0x4B500C: jmp     loc_4B5104
0x4B5011: xor     eax, eax
0x4B5013: push    esi
0x4B5014: push    eax
0x4B5015: call    TESFullname_Load
0x4B501A: jmp     loc_4B5104
0x4B501F: mov     eax, [esi+254h]
0x4B5025: call    __alloca?
0x4B502A: mov     ebx, esp
0x4B502C: push    0; a4
0x4B502E: push    ebx; Dst
0x4B502F: mov     ecx, esi; a1
0x4B5031: call    TESFile_GetChunkData
0x4B5036: mov     eax, [edi+6Ch]
0x4B5039: mov     edx, [eax+18h]
0x4B503C: lea     ecx, [edi+6Ch]
0x4B503F: push    ebx
0x4B5040: call    edx
0x4B5042: jmp     loc_4B5107
0x4B5047: lea     eax, [ebp+var_8]
0x4B504A: push    eax
0x4B504B: mov     ecx, esi
0x4B504D: mov     [ebp+var_8], ebx
0x4B5050: call    TESFile_GetChunkData2
0x4B5055: mov     cx, word ptr [ebp+var_8]
0x4B5059: mov     [edi+44h], cx
0x4B505D: jmp     loc_4B5107
0x4B5062: cmp     eax, 4D414E45h
0x4B5067: jz      short loc_4B509B
0x4B5069: cmp     eax, 4E4F4349h
0x4B506E: jnz     loc_4B5107
0x4B5074: mov     eax, [esi+254h]
0x4B507A: call    __alloca?
0x4B507F: mov     ebx, esp
0x4B5081: push    0; a4
0x4B5083: push    ebx; Dst
0x4B5084: mov     ecx, esi; a1
0x4B5086: call    TESFile_GetChunkData
0x4B508B: push    0; a3
0x4B508D: push    ebx; a2
0x4B508E: lea     ecx, [edi+0D0h]; this
0x4B5094: call    BSStringT_Set
0x4B5099: jmp     short loc_4B5107
0x4B509B: lea     edx, [ebp+var_8]
0x4B509E: push    edx
0x4B509F: mov     ecx, esi
0x4B50A1: mov     [ebp+var_8], ebx
0x4B50A4: call    TESFile_GetChunkData4
0x4B50A9: mov     eax, [ebp+var_8]
0x4B50AC: mov     [edi+40h], eax
0x4B50AF: jmp     short loc_4B5107
0x4B50B1: push    esi
0x4B50B2: lea     ecx, [edi+9Ch]
0x4B50B8: push    ecx
0x4B50B9: jmp     short loc_4B50FF
0x4B50BB: cmp     eax, 54444D42h
0x4B50C0: jg      short loc_4B50F3
0x4B50C2: jz      short loc_4B50E4
0x4B50C4: cmp     eax, 54334F4Dh
0x4B50C9: jz      short loc_4B50DA
0x4B50CB: cmp     eax, 54344F4Dh
0x4B50D0: jnz     short loc_4B5107
0x4B50D2: lea     edx, [edi+0B4h]
0x4B50D8: jmp     short loc_4B50FD
0x4B50DA: push    esi
0x4B50DB: lea     eax, [edi+84h]
0x4B50E1: push    eax
0x4B50E2: jmp     short loc_4B50FF
0x4B50E4: push    4; a4
0x4B50E6: lea     ecx, [edi+68h]
0x4B50E9: push    ecx; Dst
0x4B50EA: mov     ecx, esi; a1
0x4B50EC: call    TESFile_GetChunkData
0x4B50F1: jmp     short loc_4B5107
0x4B50F3: cmp     eax, 54444F4Dh
0x4B50F8: jnz     short loc_4B5107
0x4B50FA: lea     edx, [edi+6Ch]
0x4B50FD: push    esi
0x4B50FE: push    edx
0x4B50FF: call    sub_46D940
0x4B5104: add     esp, 8
0x4B5107: mov     ecx, esi
0x4B5109: call    TESFile_GetNextChunk
0x4B510E: test    al, al
0x4B5110: jz      short loc_4B5123
0x4B5112: mov     ecx, esi
0x4B5114: call    TESFile_GetChunkType
0x4B5119: xor     ebx, ebx
0x4B511B: cmp     eax, ebx
0x4B511D: jnz     loc_4B4DE0
0x4B5123: mov     al, 1
0x4B5125: lea     esp, [ebp-24h]
0x4B5128: pop     edi
0x4B5129: pop     esi
0x4B512A: pop     ebx
0x4B512B: mov     ecx, [ebp+var_4]
0x4B512E: xor     ecx, ebp
0x4B5130: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B5135: mov     esp, ebp
0x4B5137: pop     ebp
0x4B5138: retn    4
