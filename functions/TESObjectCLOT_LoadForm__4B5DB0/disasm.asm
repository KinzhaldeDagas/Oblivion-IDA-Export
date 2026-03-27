0x4B5DB0: push    ebp
0x4B5DB1: mov     ebp, esp
0x4B5DB3: sub     esp, 18h
0x4B5DB6: mov     eax, ds:0B30AACh
0x4B5DBB: xor     eax, ebp
0x4B5DBD: mov     [ebp+var_4], eax
0x4B5DC0: push    ebx
0x4B5DC1: push    esi
0x4B5DC2: mov     esi, [ebp+a2]
0x4B5DC5: push    edi
0x4B5DC6: mov     edi, ecx
0x4B5DC8: mov     ecx, esi
0x4B5DCA: call    TESFile_GetRecordType
0x4B5DCF: cmp     al, 16h
0x4B5DD1: jz      short loc_4B5DDA
0x4B5DD3: xor     al, al
0x4B5DD5: jmp     loc_4B6135
0x4B5DDA: push    edi
0x4B5DDB: mov     ecx, esi
0x4B5DDD: call    TESFile_InitializeFormFromRecord
0x4B5DE2: xor     ebx, ebx
0x4B5DE4: push    ebx; a2
0x4B5DE5: mov     ecx, edi; this
0x4B5DE7: call    TESForm_SetIsLinked
0x4B5DEC: mov     ecx, esi
0x4B5DEE: call    TESFile_GetChunkType
0x4B5DF3: cmp     eax, ebx
0x4B5DF5: jz      loc_4B6133
0x4B5DFB: jmp     short loc_4B5E00
0x4B5DFD: align 10h
0x4B5E00: cmp     eax, 49524353h
0x4B5E05: jg      loc_4B5FE5
0x4B5E0B: jz      loc_4B5FC3
0x4B5E11: cmp     eax, 42324F4Dh
0x4B5E16: jg      loc_4B5F29
0x4B5E1C: jz      loc_4B5F10
0x4B5E22: cmp     eax, 33444F4Dh
0x4B5E27: jg      loc_4B5EC1
0x4B5E2D: jz      short loc_4B5E99
0x4B5E2F: cmp     eax, 32444F4Dh
0x4B5E34: jz      short loc_4B5E6B
0x4B5E36: cmp     eax, 324F4349h
0x4B5E3B: jnz     loc_4B6117
0x4B5E41: mov     eax, [esi+254h]
0x4B5E47: call    __alloca?
0x4B5E4C: mov     ebx, esp
0x4B5E4E: push    0; a4
0x4B5E50: push    ebx; Dst
0x4B5E51: mov     ecx, esi; a1
0x4B5E53: call    TESFile_GetChunkData
0x4B5E58: push    0; a3
0x4B5E5A: push    ebx; a2
0x4B5E5B: lea     ecx, [edi+0D4h]; this
0x4B5E61: call    BSStringT_Set
0x4B5E66: jmp     loc_4B6117
0x4B5E6B: mov     eax, [esi+254h]
0x4B5E71: call    __alloca?
0x4B5E76: mov     ebx, esp
0x4B5E78: push    0; a4
0x4B5E7A: push    ebx; Dst
0x4B5E7B: mov     ecx, esi; a1
0x4B5E7D: call    TESFile_GetChunkData
0x4B5E82: mov     eax, [edi+94h]
0x4B5E88: mov     edx, [eax+18h]
0x4B5E8B: lea     ecx, [edi+94h]
0x4B5E91: push    ebx
0x4B5E92: call    edx
0x4B5E94: jmp     loc_4B6117
0x4B5E99: mov     eax, [esi+254h]
0x4B5E9F: call    __alloca?
0x4B5EA4: mov     ebx, esp
0x4B5EA6: push    0; a4
0x4B5EA8: push    ebx; Dst
0x4B5EA9: mov     ecx, esi; a1
0x4B5EAB: call    TESFile_GetChunkData
0x4B5EB0: mov     eax, [edi+7Ch]
0x4B5EB3: mov     edx, [eax+18h]
0x4B5EB6: lea     ecx, [edi+7Ch]
0x4B5EB9: push    ebx
0x4B5EBA: call    edx
0x4B5EBC: jmp     loc_4B6117
0x4B5EC1: cmp     eax, 34444F4Dh
0x4B5EC6: jz      short loc_4B5EE2
0x4B5EC8: cmp     eax, 41544144h
0x4B5ECD: jnz     loc_4B6117
0x4B5ED3: push    ebx; a4
0x4B5ED4: push    ebx; Dst
0x4B5ED5: push    esi; a2
0x4B5ED6: mov     ecx, edi; this
0x4B5ED8: call    TESForm_LoadGenericComponents
0x4B5EDD: jmp     loc_4B6117
0x4B5EE2: mov     eax, [esi+254h]
0x4B5EE8: call    __alloca?
0x4B5EED: mov     ebx, esp
0x4B5EEF: push    0; a4
0x4B5EF1: push    ebx; Dst
0x4B5EF2: mov     ecx, esi; a1
0x4B5EF4: call    TESFile_GetChunkData
0x4B5EF9: mov     eax, [edi+0ACh]
0x4B5EFF: mov     edx, [eax+18h]
0x4B5F02: lea     ecx, [edi+0ACh]
0x4B5F08: push    ebx
0x4B5F09: call    edx
0x4B5F0B: jmp     loc_4B6117
0x4B5F10: lea     eax, [ebp+var_14]
0x4B5F13: push    eax
0x4B5F14: mov     ecx, esi
0x4B5F16: call    TESFile_GetChunkData4
0x4B5F1B: fld     [ebp+var_14]
0x4B5F1E: fstp    dword ptr [edi+0A0h]
0x4B5F24: jmp     loc_4B6117
0x4B5F29: cmp     eax, 42444F4Dh
0x4B5F2E: jg      short loc_4B5F8C
0x4B5F30: jz      short loc_4B5F76
0x4B5F32: cmp     eax, 42334F4Dh
0x4B5F37: jz      short loc_4B5F5D
0x4B5F39: cmp     eax, 42344F4Dh
0x4B5F3E: jnz     loc_4B6117
0x4B5F44: lea     ecx, [ebp+var_C]
0x4B5F47: push    ecx
0x4B5F48: mov     ecx, esi
0x4B5F4A: call    TESFile_GetChunkData4
0x4B5F4F: fld     [ebp+var_C]
0x4B5F52: fstp    dword ptr [edi+0B8h]
0x4B5F58: jmp     loc_4B6117
0x4B5F5D: lea     edx, [ebp+var_10]
0x4B5F60: push    edx
0x4B5F61: mov     ecx, esi
0x4B5F63: call    TESFile_GetChunkData4
0x4B5F68: fld     [ebp+var_10]
0x4B5F6B: fstp    dword ptr [edi+88h]
0x4B5F71: jmp     loc_4B6117
0x4B5F76: lea     eax, [ebp+var_18]
0x4B5F79: push    eax
0x4B5F7A: mov     ecx, esi
0x4B5F7C: call    TESFile_GetChunkData4
0x4B5F81: fld     [ebp+var_18]
0x4B5F84: fstp    dword ptr [edi+70h]
0x4B5F87: jmp     loc_4B6117
0x4B5F8C: cmp     eax, 44494445h
0x4B5F91: jnz     loc_4B6117
0x4B5F97: mov     eax, [esi+254h]
0x4B5F9D: call    __alloca?
0x4B5FA2: mov     ebx, esp
0x4B5FA4: push    200h; a4
0x4B5FA9: push    ebx; Dst
0x4B5FAA: mov     ecx, esi; a1
0x4B5FAC: call    TESFile_GetChunkData
0x4B5FB1: mov     edx, [edi]
0x4B5FB3: mov     eax, [edx+0D8h]
0x4B5FB9: push    ebx
0x4B5FBA: mov     ecx, edi
0x4B5FBC: call    eax
0x4B5FBE: jmp     loc_4B6117
0x4B5FC3: lea     ecx, [ebp+var_8]
0x4B5FC6: push    ecx
0x4B5FC7: mov     ecx, esi
0x4B5FC9: mov     [ebp+var_8], ebx
0x4B5FCC: call    TESFile_GetChunkData4
0x4B5FD1: mov     edx, [ebp+var_8]
0x4B5FD4: push    edi
0x4B5FD5: lea     ecx, [edi+30h]
0x4B5FD8: mov     [edi+34h], edx
0x4B5FDB: call    TESScriptableForm_Link
0x4B5FE0: jmp     loc_4B6117
0x4B5FE5: cmp     eax, 54324F4Dh
0x4B5FEA: jg      loc_4B60CE
0x4B5FF0: jz      loc_4B60C4
0x4B5FF6: cmp     eax, 4D414E41h
0x4B5FFB: jg      short loc_4B6075
0x4B5FFD: jz      short loc_4B605A
0x4B5FFF: cmp     eax, 4C444F4Dh
0x4B6004: jz      short loc_4B6032
0x4B6006: cmp     eax, 4C4C5546h
0x4B600B: jnz     loc_4B6117
0x4B6011: cmp     edi, ebx
0x4B6013: jz      short loc_4B6024
0x4B6015: lea     eax, [edi+24h]
0x4B6018: push    esi
0x4B6019: push    eax
0x4B601A: call    TESFullname_Load
0x4B601F: jmp     loc_4B6114
0x4B6024: xor     eax, eax
0x4B6026: push    esi
0x4B6027: push    eax
0x4B6028: call    TESFullname_Load
0x4B602D: jmp     loc_4B6114
0x4B6032: mov     eax, [esi+254h]
0x4B6038: call    __alloca?
0x4B603D: mov     ebx, esp
0x4B603F: push    0; a4
0x4B6041: push    ebx; Dst
0x4B6042: mov     ecx, esi; a1
0x4B6044: call    TESFile_GetChunkData
0x4B6049: mov     eax, [edi+64h]
0x4B604C: mov     edx, [eax+18h]
0x4B604F: lea     ecx, [edi+64h]
0x4B6052: push    ebx
0x4B6053: call    edx
0x4B6055: jmp     loc_4B6117
0x4B605A: lea     eax, [ebp+var_8]
0x4B605D: push    eax
0x4B605E: mov     ecx, esi
0x4B6060: mov     [ebp+var_8], ebx
0x4B6063: call    TESFile_GetChunkData2
0x4B6068: mov     cx, word ptr [ebp+var_8]
0x4B606C: mov     [edi+44h], cx
0x4B6070: jmp     loc_4B6117
0x4B6075: cmp     eax, 4D414E45h
0x4B607A: jz      short loc_4B60AE
0x4B607C: cmp     eax, 4E4F4349h
0x4B6081: jnz     loc_4B6117
0x4B6087: mov     eax, [esi+254h]
0x4B608D: call    __alloca?
0x4B6092: mov     ebx, esp
0x4B6094: push    0; a4
0x4B6096: push    ebx; Dst
0x4B6097: mov     ecx, esi; a1
0x4B6099: call    TESFile_GetChunkData
0x4B609E: push    0; a3
0x4B60A0: push    ebx; a2
0x4B60A1: lea     ecx, [edi+0C8h]; this
0x4B60A7: call    BSStringT_Set
0x4B60AC: jmp     short loc_4B6117
0x4B60AE: lea     edx, [ebp+var_8]
0x4B60B1: push    edx
0x4B60B2: mov     ecx, esi
0x4B60B4: mov     [ebp+var_8], ebx
0x4B60B7: call    TESFile_GetChunkData4
0x4B60BC: mov     eax, [ebp+var_8]
0x4B60BF: mov     [edi+40h], eax
0x4B60C2: jmp     short loc_4B6117
0x4B60C4: push    esi
0x4B60C5: lea     ecx, [edi+94h]
0x4B60CB: push    ecx
0x4B60CC: jmp     short loc_4B610F
0x4B60CE: cmp     eax, 54444D42h
0x4B60D3: jg      short loc_4B6103
0x4B60D5: jz      short loc_4B60F4
0x4B60D7: cmp     eax, 54334F4Dh
0x4B60DC: jz      short loc_4B60ED
0x4B60DE: cmp     eax, 54344F4Dh
0x4B60E3: jnz     short loc_4B6117
0x4B60E5: lea     edx, [edi+0ACh]
0x4B60EB: jmp     short loc_4B610D
0x4B60ED: push    esi
0x4B60EE: lea     eax, [edi+7Ch]
0x4B60F1: push    eax
0x4B60F2: jmp     short loc_4B610F
0x4B60F4: push    4; a4
0x4B60F6: lea     ecx, [edi+60h]
0x4B60F9: push    ecx; Dst
0x4B60FA: mov     ecx, esi; a1
0x4B60FC: call    TESFile_GetChunkData
0x4B6101: jmp     short loc_4B6117
0x4B6103: cmp     eax, 54444F4Dh
0x4B6108: jnz     short loc_4B6117
0x4B610A: lea     edx, [edi+64h]
0x4B610D: push    esi
0x4B610E: push    edx
0x4B610F: call    sub_46D940
0x4B6114: add     esp, 8
0x4B6117: mov     ecx, esi
0x4B6119: call    TESFile_GetNextChunk
0x4B611E: test    al, al
0x4B6120: jz      short loc_4B6133
0x4B6122: mov     ecx, esi
0x4B6124: call    TESFile_GetChunkType
0x4B6129: xor     ebx, ebx
0x4B612B: cmp     eax, ebx
0x4B612D: jnz     loc_4B5E00
0x4B6133: mov     al, 1
0x4B6135: lea     esp, [ebp-24h]
0x4B6138: pop     edi
0x4B6139: pop     esi
0x4B613A: pop     ebx
0x4B613B: mov     ecx, [ebp+var_4]
0x4B613E: xor     ecx, ebp
0x4B6140: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B6145: mov     esp, ebp
0x4B6147: pop     ebp
0x4B6148: retn    4
