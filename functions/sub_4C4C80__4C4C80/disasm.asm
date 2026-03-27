0x4C4C80: push    ebp
0x4C4C81: mov     ebp, esp
0x4C4C83: and     esp, 0FFFFFFF8h
0x4C4C86: mov     eax, 15B4h
0x4C4C8B: call    __alloca_probe
0x4C4C90: mov     eax, ds:0B30AACh
0x4C4C95: xor     eax, esp
0x4C4C97: mov     [esp+15B4h+var_4], eax
0x4C4C9E: push    ebx
0x4C4C9F: push    esi
0x4C4CA0: mov     esi, ecx
0x4C4CA2: mov     eax, [esi+1Ch]
0x4C4CA5: test    al, 8
0x4C4CA7: push    edi
0x4C4CA8: jnz     loc_4C5625
0x4C4CAE: or      ecx, 0FFFFFFFFh
0x4C4CB1: xor     edi, edi
0x4C4CB3: test    eax, 400h
0x4C4CB8: mov     dword ptr [esp+15C0h+var_1584], ecx
0x4C4CBC: mov     [esp+15C0h+var_159C.member.modlist.next], ecx
0x4C4CC0: mov     [esp+15C0h+a2], edi
0x4C4CC4: mov     [esp+15C0h+var_159C.member.refID], edi
0x4C4CC8: jnz     loc_4C4E09
0x4C4CCE: test    al, 7
0x4C4CD0: jz      loc_4C5625
0x4C4CD6: push    ecx; a2
0x4C4CD7: mov     ecx, esi; this
0x4C4CD9: call    TESForm_GetOverrideFile
0x4C4CDE: mov     ecx, eax
0x4C4CE0: call    sub_4520F0
0x4C4CE5: push    esi
0x4C4CE6: mov     ecx, eax
0x4C4CE8: mov     [esp+15C4h+a2], eax
0x4C4CEC: call    TESFile__FindForm
0x4C4CF1: test    al, al
0x4C4CF3: jz      loc_4C4E8B
0x4C4CF9: mov     ecx, [esp+15C0h+a2]
0x4C4CFD: call    TESFile_GetRecordType
0x4C4D02: cmp     al, 36h ; '6'
0x4C4D04: jnz     loc_4C4E8B
0x4C4D0A: mov     ecx, [esp+15C0h+a2]
0x4C4D0E: mov     eax, [ecx+25Ch]
0x4C4D14: mov     [esp+15C0h+var_159C.member.refID], eax
0x4C4D18: mov     eax, [esp+15C0h+var_159C.member.refID]
0x4C4D1C: mov     edi, ecx
0x4C4D1E: push    eax; Buffer
0x4C4D1F: mov     [esp+15C4h+var_159C.member.flags], edi
0x4C4D23: call    TESFIle_JumpToRecord
0x4C4D28: test    al, al
0x4C4D2A: jz      loc_4C4ED5
0x4C4D30: mov     byte ptr [esp+15C0h+var_15A4+3], 0
0x4C4D35: mov     byte ptr [esp+15C0h+var_15A4+2], 0
0x4C4D3A: mov     ecx, edi
0x4C4D3C: call    TESFile_GetChunkType
0x4C4D41: cmp     eax, 54474856h
0x4C4D46: jg      loc_4C5325
0x4C4D4C: jz      loc_4C5153
0x4C4D52: cmp     eax, 4C4D4E56h
0x4C4D57: jg      loc_4C5042
0x4C4D5D: jz      loc_4C4F22
0x4C4D63: cmp     eax, 41544144h
0x4C4D68: jz      loc_4C4EEC
0x4C4D6E: cmp     eax, 4443504Dh
0x4C4D73: jnz     loc_4C55B5
0x4C4D79: mov     ebx, [edi+254h]
0x4C4D7F: push    ebx; Size
0x4C4D80: call    FormHeapAlloc
0x4C4D85: add     esp, 4
0x4C4D88: push    ebx; a4
0x4C4D89: push    eax; Dst
0x4C4D8A: mov     ecx, edi; a1
0x4C4D8C: mov     [esp+15C8h+a4], eax
0x4C4D90: call    TESFile_GetChunkData
0x4C4D95: mov     ecx, [esi+24h]
0x4C4D98: mov     ecx, [ecx+50h]
0x4C4D9B: test    ecx, ecx
0x4C4D9D: jz      short loc_4C4DC6
0x4C4D9F: cmp     word ptr [ecx+4], 0
0x4C4DA4: jz      short loc_4C4DBC
0x4C4DA6: add     word ptr [ecx+6], 0FFFFh
0x4C4DAB: movzx   eax, word ptr [ecx+6]
0x4C4DAF: test    ax, ax
0x4C4DB2: jnz     short loc_4C4DBC
0x4C4DB4: mov     edx, [ecx]
0x4C4DB6: mov     eax, [edx]
0x4C4DB8: push    1
0x4C4DBA: call    eax
0x4C4DBC: mov     ecx, [esi+24h]
0x4C4DBF: mov     dword ptr [ecx+50h], 0
0x4C4DC6: mov     edx, [esi+24h]
0x4C4DC9: mov     eax, [esp+15C0h+a4]
0x4C4DCD: add     edx, 50h ; 'P'
0x4C4DD0: push    edx
0x4C4DD1: push    ebx
0x4C4DD2: push    eax
0x4C4DD3: mov     ecx, esi
0x4C4DD5: call    sub_4C2230
0x4C4DDA: mov     ecx, [esi+24h]
0x4C4DDD: mov     eax, [ecx+50h]
0x4C4DE0: test    eax, eax
0x4C4DE2: jz      short loc_4C4DF7
0x4C4DE4: cmp     word ptr [eax+4], 0
0x4C4DE9: jz      short loc_4C4DF0
0x4C4DEB: add     word ptr [eax+6], 1
0x4C4DF0: or      dword ptr [esi+1Ch], 800h
0x4C4DF7: mov     edx, [esp+15C0h+a4]
0x4C4DFB: push    edx
0x4C4DFC: call    FormHeapFree
0x4C4E01: add     esp, 4
0x4C4E04: jmp     loc_4C55B5
0x4C4E09: mov     ecx, [esi+20h]; this
0x4C4E0C: cmp     ecx, edi
0x4C4E0E: jz      loc_4C5625
0x4C4E14: call    TESObjectCELL_GetWorldSpace
0x4C4E19: cmp     eax, edi
0x4C4E1B: mov     [esp+15C0h+var_159C.member.modlist.data], eax
0x4C4E1F: jz      loc_4C5625
0x4C4E25: mov     eax, [esi+24h]
0x4C4E28: cmp     eax, edi
0x4C4E2A: jz      short loc_4C4E34
0x4C4E2C: mov     ebx, [eax+9Ch]
0x4C4E32: jmp     short loc_4C4E46
0x4C4E34: mov     ecx, [esi+20h]; this
0x4C4E37: cmp     ecx, edi
0x4C4E39: jz      short loc_4C4E44
0x4C4E3B: call    TESObjectCELL_GetYCoordinate
0x4C4E40: mov     ebx, eax
0x4C4E42: jmp     short loc_4C4E46
0x4C4E44: xor     ebx, ebx
0x4C4E46: mov     eax, [esi+24h]
0x4C4E49: cmp     eax, edi
0x4C4E4B: jz      short loc_4C4E55
0x4C4E4D: mov     eax, [eax+98h]
0x4C4E53: jmp     short loc_4C4E65
0x4C4E55: mov     ecx, [esi+20h]; this
0x4C4E58: cmp     ecx, edi
0x4C4E5A: jz      short loc_4C4E63
0x4C4E5C: call    TESObjectCELL_GetXCoordinate
0x4C4E61: jmp     short loc_4C4E65
0x4C4E63: xor     eax, eax
0x4C4E65: lea     ecx, [esp+15C0h+var_159C.member.refID]
0x4C4E69: push    ecx
0x4C4E6A: mov     ecx, [esp+15C4h+var_159C.member.modlist.data]
0x4C4E6E: lea     edx, [esp+15C4h+a2]
0x4C4E72: push    edx
0x4C4E73: push    ebx
0x4C4E74: push    eax
0x4C4E75: call    sub_4F18B0
0x4C4E7A: test    al, al
0x4C4E7C: jz      loc_4C5625
0x4C4E82: mov     ecx, [esp+15C0h+a2]
0x4C4E86: jmp     loc_4C4D18
0x4C4E8B: mov     eax, [esp+15C0h+a2]
0x4C4E8F: cmp     eax, edi
0x4C4E91: mov     bl, ds:0B06B18h
0x4C4E97: mov     byte ptr ds:0B06B18h, 0
0x4C4E9E: jz      short loc_4C4EA5
0x4C4EA0: add     eax, 1Ch
0x4C4EA3: jmp     short loc_4C4EAA
0x4C4EA5: mov     eax, offset aUnknown; "UNKNOWN"
0x4C4EAA: mov     edi, [esi+20h]
0x4C4EAD: mov     esi, [esi+0Ch]
0x4C4EB0: push    eax
0x4C4EB1: mov     ecx, edi; this
0x4C4EB3: call    TESObjectCELL_GetYCoordinate
0x4C4EB8: push    eax
0x4C4EB9: mov     ecx, edi; this
0x4C4EBB: call    TESObjectCELL_GetXCoordinate
0x4C4EC0: push    eax
0x4C4EC1: push    esi; ArgList
0x4C4EC2: push    offset aFailedToLoadLa; "Failed to load landscape data for LAND "...
0x4C4EC7: call    PrintError
0x4C4ECC: add     esp, 14h
0x4C4ECF: mov     ds:0B06B18h, bl
0x4C4ED5: xor     al, al
0x4C4ED7: pop     edi
0x4C4ED8: pop     esi
0x4C4ED9: pop     ebx
0x4C4EDA: mov     ecx, [esp+15B4h+var_4]
0x4C4EE1: xor     ecx, esp
0x4C4EE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C4EE8: mov     esp, ebp
0x4C4EEA: pop     ebp
0x4C4EEB: retn
0x4C4EEC: test    dword ptr [esi+1Ch], 400h
0x4C4EF3: jz      loc_4C55B5
0x4C4EF9: push    4; a4
0x4C4EFB: lea     eax, [esp+15C4h+Dst]
0x4C4EFF: push    eax; Dst
0x4C4F00: mov     ecx, edi; a1
0x4C4F02: call    TESFile_GetChunkData
0x4C4F07: mov     eax, dword ptr [esp+15C0h+Dst]
0x4C4F0B: mov     ecx, [esi+1Ch]
0x4C4F0E: and     eax, 7
0x4C4F11: and     ecx, 0FFFFFFF8h
0x4C4F14: or      ecx, eax
0x4C4F16: mov     dword ptr [esp+15C0h+Dst], eax
0x4C4F1A: mov     [esi+1Ch], ecx
0x4C4F1D: jmp     loc_4C55B5
0x4C4F22: test    byte ptr [esi+1Ch], 1
0x4C4F26: jz      loc_4C55B5
0x4C4F2C: push    0CC3h; a4
0x4C4F31: lea     edx, [esp+15C4h+var_1558]
0x4C4F35: push    edx; Dst
0x4C4F36: mov     ecx, edi; a1
0x4C4F38: call    TESFile_GetChunkData
0x4C4F3D: xor     ebx, ebx
0x4C4F3F: nop
0x4C4F40: mov     eax, ebx
0x4C4F42: cdq
0x4C4F43: sub     eax, edx
0x4C4F45: sar     eax, 1
0x4C4F47: mov     ecx, eax
0x4C4F49: shl     ecx, 5
0x4C4F4C: add     ecx, eax
0x4C4F4E: mov     eax, ebx
0x4C4F50: and     eax, 80000001h
0x4C4F55: jns     short loc_4C4F5C
0x4C4F57: dec     eax
0x4C4F58: or      eax, 0FFFFFFFEh
0x4C4F5B: inc     eax
0x4C4F5C: add     ecx, eax
0x4C4F5E: shl     ecx, 4
0x4C4F61: xor     edi, edi
0x4C4F63: mov     [esp+15C0h+var_15A8], ecx
0x4C4F67: mov     [esp+15C0h+a4], edi
0x4C4F6B: jmp     short loc_4C4F70
0x4C4F6D: align 10h
0x4C4F70: mov     ecx, [esp+15C0h+a4]
0x4C4F74: mov     eax, 78787879h
0x4C4F79: imul    ecx
0x4C4F7B: sar     edx, 3
0x4C4F7E: mov     eax, edx
0x4C4F80: shr     eax, 1Fh
0x4C4F83: add     eax, edx
0x4C4F85: shl     eax, 4
0x4C4F88: add     eax, [esp+15C0h+var_15A8]
0x4C4F8C: mov     edx, [esi+24h]
0x4C4F8F: add     eax, ecx
0x4C4F91: lea     eax, [eax+eax*2]
0x4C4F94: movsx   ecx, byte ptr [esp+eax+15C0h+var_1558]
0x4C4F99: mov     [esp+15C0h+var_15AC], ecx
0x4C4F9D: mov     ecx, [edx+8]
0x4C4FA0: mov     edx, [ecx+ebx*4]
0x4C4FA3: fild    [esp+15C0h+var_15AC]
0x4C4FA7: fld     qword ptr ds:0A46298h
0x4C4FAD: fdiv    st(1), st
0x4C4FAF: fxch    st(1)
0x4C4FB1: fstp    [esp+15C0h+var_15AC]
0x4C4FB5: fld     [esp+15C0h+var_15AC]
0x4C4FB9: fstp    dword ptr [edi+edx]
0x4C4FBC: movsx   ecx, byte ptr [esp+eax+15C0h+var_1558+1]
0x4C4FC1: mov     [esp+15C0h+var_15AC], ecx
0x4C4FC5: mov     edx, [esi+24h]
0x4C4FC8: mov     ecx, [edx+8]
0x4C4FCB: fild    [esp+15C0h+var_15AC]
0x4C4FCF: mov     edx, [ecx+ebx*4]
0x4C4FD2: fdiv    st, st(1)
0x4C4FD4: fstp    [esp+15C0h+var_15AC]
0x4C4FD8: fld     [esp+15C0h+var_15AC]
0x4C4FDC: fstp    dword ptr [edx+edi+4]
0x4C4FE0: movsx   eax, byte ptr [esp+eax+15C0h+var_1558+2]
0x4C4FE5: mov     [esp+15C0h+var_15AC], eax
0x4C4FE9: mov     ecx, [esi+24h]
0x4C4FEC: mov     edx, [ecx+8]
0x4C4FEF: fidivr  [esp+15C0h+var_15AC]
0x4C4FF3: mov     eax, [edx+ebx*4]
0x4C4FF6: fstp    [esp+15C0h+var_15AC]
0x4C4FFA: fld     [esp+15C0h+var_15AC]
0x4C4FFE: fstp    dword ptr [eax+edi+8]
0x4C5002: mov     ecx, [esi+24h]
0x4C5005: mov     edx, [ecx+8]
0x4C5008: mov     ecx, [edx+ebx*4]
0x4C500B: add     ecx, edi
0x4C500D: call    sub_43F350
0x4C5012: fstp    st
0x4C5014: add     [esp+15C0h+a4], 1
0x4C5019: add     edi, 0Ch
0x4C501C: cmp     edi, 0D8Ch
0x4C5022: jl      loc_4C4F70
0x4C5028: add     ebx, 1
0x4C502B: cmp     ebx, 4
0x4C502E: jl      loc_4C4F40
0x4C5034: mov     edi, [esp+15C0h+var_159C.member.flags]
0x4C5038: mov     byte ptr [esp+15C0h+var_15A4+2], 1
0x4C503D: jmp     loc_4C55B5
0x4C5042: cmp     eax, 524C4356h
0x4C5047: jnz     loc_4C55B5
0x4C504D: test    byte ptr [esi+1Ch], 2
0x4C5051: jz      loc_4C55B5
0x4C5057: push    0CC3h; a4
0x4C505C: lea     eax, [esp+15C4h+var_1558]
0x4C5060: push    eax; Dst
0x4C5061: mov     ecx, edi; a1
0x4C5063: call    TESFile_GetChunkData
0x4C5068: fld1
0x4C506A: fstp    [esp+15C0h+var_155C]
0x4C506E: mov     [esp+15C0h+a4], 0
0x4C5076: fld     qword ptr ds:0A3DDD8h
0x4C507C: mov     ecx, [esp+15C0h+a4]
0x4C5080: mov     eax, ecx
0x4C5082: cdq
0x4C5083: sub     eax, edx
0x4C5085: sar     eax, 1
0x4C5087: mov     ebx, eax
0x4C5089: shl     ebx, 5
0x4C508C: add     ebx, eax
0x4C508E: and     ecx, 80000001h
0x4C5094: jns     short loc_4C509B
0x4C5096: dec     ecx
0x4C5097: or      ecx, 0FFFFFFFEh
0x4C509A: inc     ecx
0x4C509B: add     ebx, ecx
0x4C509D: shl     ebx, 4
0x4C50A0: xor     ecx, ecx
0x4C50A2: xor     edi, edi
0x4C50A4: mov     eax, 78787879h
0x4C50A9: imul    ecx
0x4C50AB: sar     edx, 3
0x4C50AE: mov     eax, edx
0x4C50B0: shr     eax, 1Fh
0x4C50B3: add     eax, edx
0x4C50B5: shl     eax, 4
0x4C50B8: add     eax, ebx
0x4C50BA: add     eax, ecx
0x4C50BC: lea     eax, [eax+eax*2]
0x4C50BF: movzx   edx, byte ptr [esp+eax+15C0h+var_1558]
0x4C50C4: mov     [esp+15C0h+var_15AC], edx
0x4C50C8: movzx   edx, byte ptr [esp+eax+15C0h+var_1558+1]
0x4C50CD: fild    [esp+15C0h+var_15AC]
0x4C50D1: mov     [esp+15C0h+var_15AC], edx
0x4C50D5: movzx   eax, byte ptr [esp+eax+15C0h+var_1558+2]
0x4C50DA: fdiv    st, st(1)
0x4C50DC: mov     edx, [esi+24h]
0x4C50DF: add     ecx, 1
0x4C50E2: fstp    [esp+15C0h+var_1568]
0x4C50E6: fild    [esp+15C0h+var_15AC]
0x4C50EA: mov     [esp+15C0h+var_15AC], eax
0x4C50EE: mov     eax, [edx+0Ch]
0x4C50F1: mov     edx, [esp+15C0h+a4]
0x4C50F5: fdiv    st, st(1)
0x4C50F7: mov     eax, [eax+edx*4]
0x4C50FA: mov     edx, [esp+15C0h+var_1568]
0x4C50FE: add     eax, edi
0x4C5100: mov     [eax], edx
0x4C5102: add     edi, 10h
0x4C5105: cmp     edi, 1210h
0x4C510B: fstp    [esp+15C0h+var_1564]
0x4C510F: fild    [esp+15C0h+var_15AC]
0x4C5113: mov     edx, [esp+15C0h+var_1564]
0x4C5117: mov     [eax+4], edx
0x4C511A: fdiv    st, st(1)
0x4C511C: fstp    [esp+15C0h+var_1560]
0x4C5120: mov     edx, [esp+15C0h+var_1560]
0x4C5124: mov     [eax+8], edx
0x4C5127: mov     edx, [esp+15C0h+var_155C]
0x4C512B: mov     [eax+0Ch], edx
0x4C512E: jl      loc_4C50A4
0x4C5134: mov     eax, [esp+15C0h+a4]
0x4C5138: add     eax, 1
0x4C513B: cmp     eax, 4
0x4C513E: mov     [esp+15C0h+a4], eax
0x4C5142: jl      loc_4C507C
0x4C5148: mov     edi, [esp+15C0h+var_159C.member.flags]
0x4C514C: fstp    st
0x4C514E: jmp     loc_4C55B5
0x4C5153: test    byte ptr [esi+1Ch], 1
0x4C5157: jz      loc_4C55B5
0x4C515D: push    448h; a4
0x4C5162: lea     eax, [esp+15C4h+var_450]
0x4C5169: push    eax; Dst
0x4C516A: mov     ecx, edi; a1
0x4C516C: call    TESFile_GetChunkData
0x4C5171: fld     dword ptr ds:0A32048h
0x4C5177: mov     eax, [esi+24h]
0x4C517A: fstp    [esp+15C0h+var_1570]
0x4C517E: fld     dword ptr ds:0A3B888h
0x4C5184: mov     ecx, [esp+15C0h+var_1570]
0x4C5188: fstp    [esp+15C0h+var_156C]
0x4C518C: mov     edx, [esp+15C0h+var_156C]
0x4C5190: mov     [eax+18h], ecx
0x4C5193: mov     [eax+1Ch], edx
0x4C5196: fld     dword ptr [esp+15C0h+var_450]
0x4C519D: fstp    [esp+15C0h+a4]
0x4C51A1: mov     ecx, 1
0x4C51A6: lea     edi, [esp+15C0h+var_1558]
0x4C51AA: lea     ebx, [ebx+0]
0x4C51B0: movsx   eax, [esp+ecx+15C0h+var_450+3]
0x4C51B8: mov     [esp+15C0h+var_15AC], eax
0x4C51BC: mov     eax, ecx
0x4C51BE: cdq
0x4C51BF: fild    [esp+15C0h+var_15AC]
0x4C51C3: mov     ebx, 21h ; '!'
0x4C51C8: idiv    ebx
0x4C51CA: fadd    [esp+15C0h+a4]
0x4C51CE: fstp    [esp+15C0h+var_15AC]
0x4C51D2: fld     [esp+15C0h+var_15AC]
0x4C51D6: fst     dword ptr [edi]
0x4C51D8: test    edx, edx
0x4C51DA: jnz     short loc_4C51E1
0x4C51DC: fstp    st
0x4C51DE: fld     dword ptr [edi-80h]
0x4C51E1: add     ecx, 1
0x4C51E4: fstp    [esp+15C0h+a4]
0x4C51E8: add     edi, 4
0x4C51EB: cmp     ecx, 442h
0x4C51F1: jl      short loc_4C51B0
0x4C51F3: xor     edi, edi
0x4C51F5: mov     eax, edi
0x4C51F7: cdq
0x4C51F8: sub     eax, edx
0x4C51FA: sar     eax, 1
0x4C51FC: mov     ecx, eax
0x4C51FE: shl     ecx, 5
0x4C5201: mov     edx, edi
0x4C5203: add     ecx, eax
0x4C5205: and     edx, 80000001h
0x4C520B: jns     short loc_4C5212
0x4C520D: dec     edx
0x4C520E: or      edx, 0FFFFFFFEh
0x4C5211: inc     edx
0x4C5212: add     ecx, edx
0x4C5214: shl     ecx, 4
0x4C5217: xor     ebx, ebx
0x4C5219: mov     [esp+15C0h+var_15AC], ecx
0x4C521D: mov     [esp+15C0h+a4], ebx
0x4C5221: mov     ecx, [esp+15C0h+a4]
0x4C5225: mov     eax, 78787879h
0x4C522A: imul    ecx
0x4C522C: sar     edx, 3
0x4C522F: mov     eax, edx
0x4C5231: shr     eax, 1Fh
0x4C5234: add     eax, edx
0x4C5236: mov     edx, eax
0x4C5238: shl     edx, 4
0x4C523B: add     edx, eax
0x4C523D: sub     ecx, edx
0x4C523F: mov     edx, eax
0x4C5241: shl     edx, 5
0x4C5244: add     edx, ecx
0x4C5246: add     edx, eax
0x4C5248: add     edx, [esp+15C0h+var_15AC]
0x4C524C: fld     [esp+edx*4+15C0h+var_1558]
0x4C5250: fstp    [esp+15C0h+var_15A8]
0x4C5254: fld     [esp+15C0h+var_15A8]
0x4C5258: fistp   [esp+15C0h+var_159C.member.modlist.data]
0x4C525C: mov     edx, [esp+15C0h+var_159C.member.modlist.data]
0x4C5260: add     edx, edx
0x4C5262: add     edx, edx
0x4C5264: add     edx, edx
0x4C5266: mov     [esp+15C0h+var_15A8], edx
0x4C526A: fild    [esp+15C0h+var_15A8]
0x4C526E: shl     ecx, 7
0x4C5271: mov     [esp+15C0h+var_15A8], ecx
0x4C5275: mov     ecx, [esi+24h]
0x4C5278: fstp    [esp+15C0h+var_1578]
0x4C527C: fild    [esp+15C0h+var_15A8]
0x4C5280: mov     edx, [ecx+4]
0x4C5283: mov     ecx, [edx+edi*4]
0x4C5286: shl     eax, 7
0x4C5289: fadd    dword ptr ds:0B35BA8h[edi*4]
0x4C5290: fstp    [esp+15C0h+var_15A8]
0x4C5294: fld     [esp+15C0h+var_15A8]
0x4C5298: mov     [esp+15C0h+var_15A8], eax
0x4C529C: fstp    dword ptr [ebx+ecx]
0x4C529F: mov     edx, [esi+24h]
0x4C52A2: fild    [esp+15C0h+var_15A8]
0x4C52A6: mov     eax, [edx+4]
0x4C52A9: mov     ecx, [eax+edi*4]
0x4C52AC: fadd    dword ptr ds:0B35B98h[edi*4]
0x4C52B3: fstp    [esp+15C0h+var_15A8]
0x4C52B7: fld     [esp+15C0h+var_15A8]
0x4C52BB: fstp    dword ptr [ecx+ebx+4]
0x4C52BF: mov     edx, [esi+24h]
0x4C52C2: mov     eax, [edx+4]
0x4C52C5: fld     [esp+15C0h+var_1578]
0x4C52C9: mov     ecx, [eax+edi*4]
0x4C52CC: fst     dword ptr [ecx+ebx+8]
0x4C52D0: mov     ecx, [esi+24h]
0x4C52D3: fld     dword ptr [ecx+18h]
0x4C52D6: fcomp   st(1)
0x4C52D8: fnstsw  ax
0x4C52DA: test    ah, 41h
0x4C52DD: jnz     short loc_4C52E4
0x4C52DF: fstp    dword ptr [ecx+18h]
0x4C52E2: jmp     short loc_4C52F7
0x4C52E4: fld     dword ptr [ecx+1Ch]
0x4C52E7: fcomp   st(1)
0x4C52E9: fnstsw  ax
0x4C52EB: test    ah, 5
0x4C52EE: jp      short loc_4C52F5
0x4C52F0: fstp    dword ptr [ecx+1Ch]
0x4C52F3: jmp     short loc_4C52F7
0x4C52F5: fstp    st
0x4C52F7: add     [esp+15C0h+a4], 1
0x4C52FC: add     ebx, 0Ch
0x4C52FF: cmp     ebx, 0D8Ch
0x4C5305: jl      loc_4C5221
0x4C530B: add     edi, 1
0x4C530E: cmp     edi, 4
0x4C5311: jl      loc_4C51F5
0x4C5317: mov     edi, [esp+15C0h+var_159C.member.flags]
0x4C531B: mov     byte ptr [esp+15C0h+var_15A4+3], 1
0x4C5320: jmp     loc_4C55B5
0x4C5325: sub     eax, 54585441h
0x4C532A: jz      loc_4C54BA
0x4C5330: sub     eax, 1
0x4C5333: jz      loc_4C5415
0x4C5339: sub     eax, 14h
0x4C533C: jnz     loc_4C55B5
0x4C5342: test    byte ptr [esi+1Ch], 4
0x4C5346: jz      loc_4C55B5
0x4C534C: cmp     dword ptr [esp+15C0h+var_1584], 0
0x4C5351: jl      loc_4C5405
0x4C5357: cmp     [esp+15C0h+var_159C.member.modlist.next], 0
0x4C535C: jl      loc_4C5405
0x4C5362: mov     ecx, [esp+15C0h+var_159C.member.flags]
0x4C5366: mov     eax, [ecx+254h]
0x4C536C: test    al, 7
0x4C536E: mov     [esp+15C0h+a4], eax
0x4C5372: jnz     short loc_4C53E4
0x4C5374: mov     edx, eax
0x4C5376: push    edx; int
0x4C5377: call    MemoryHeap_Alloc_ZlibCallback
0x4C537C: mov     ecx, [esp+15C4h+var_159C.member.flags]; a1
0x4C5380: mov     ebx, eax
0x4C5382: mov     eax, [esp+15C4h+a4]
0x4C5386: add     esp, 4
0x4C5389: push    eax; a4
0x4C538A: push    ebx; Dst
0x4C538B: call    TESFile_GetChunkData
0x4C5390: mov     eax, [esp+15C0h+a4]
0x4C5394: shr     eax, 3
0x4C5397: mov     [esp+15C0h+var_1578], eax
0x4C539B: mov     edi, 0
0x4C53A0: jz      short loc_4C53C9
0x4C53A2: fld     dword ptr [ebx+edi*8+4]
0x4C53A6: movzx   edx, word ptr [ebx+edi*8]
0x4C53AA: mov     eax, dword ptr [esp+15C0h+var_1584]
0x4C53AE: push    ecx
0x4C53AF: mov     ecx, [esp+15C4h+var_159C.member.modlist.next]
0x4C53B3: fstp    [esp+15C4h+var_15C4]; float
0x4C53B6: push    ecx; __int16
0x4C53B7: push    edx; __int16
0x4C53B8: push    eax; char
0x4C53B9: mov     ecx, esi
0x4C53BB: call    sub_4BF270
0x4C53C0: add     edi, 1
0x4C53C3: cmp     edi, [esp+15C0h+var_1578]
0x4C53C7: jb      short loc_4C53A2
0x4C53C9: push    ebx; void *
0x4C53CA: mov     ecx, offset FormHeap
0x4C53CF: call    MemoryHeap_Free_checked
0x4C53D4: mov     edi, [esp+15C0h+var_159C.member.flags]
0x4C53D8: or      eax, 0FFFFFFFFh
0x4C53DB: mov     dword ptr [esp+15C0h+var_1584], eax
0x4C53DF: jmp     loc_4C55B1
0x4C53E4: add     ecx, 1Ch
0x4C53E7: push    ecx
0x4C53E8: mov     ecx, esi
0x4C53EA: call    sub_4BF040
0x4C53EF: push    eax
0x4C53F0: mov     ecx, esi
0x4C53F2: call    sub_4BF020
0x4C53F7: push    eax; ArgList
0x4C53F8: push    offset aLandIIFoundUnr; "Land (%i, %i) found unrecognized vertex"...
0x4C53FD: call    PrintError
0x4C5402: add     esp, 10h
0x4C5405: mov     edi, [esp+15C0h+var_159C.member.flags]
0x4C5409: or      eax, 0FFFFFFFFh
0x4C540C: mov     dword ptr [esp+15C0h+var_1584], eax
0x4C5410: jmp     loc_4C55B1
0x4C5415: test    byte ptr [esi+1Ch], 4
0x4C5419: jz      loc_4C55B5
0x4C541F: push    8; a4
0x4C5421: lea     ecx, [esp+15C4h+a1]
0x4C5425: xor     eax, eax
0x4C5427: push    ecx; Dst
0x4C5428: mov     ecx, edi; a1
0x4C542A: mov     [esp+15C8h+a1], eax
0x4C542E: mov     [esp+15C8h+var_157C], eax
0x4C5432: call    TESFile_GetChunkData
0x4C5437: lea     edx, [esp+15C0h+a1]
0x4C543B: push    edi; a2
0x4C543C: push    edx; a1
0x4C543D: call    TESForm_ResolveFormID
0x4C5442: mov     eax, [esp+15C8h+a1]
0x4C5446: add     esp, 8
0x4C5449: push    0; int
0x4C544B: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C5450: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C5455: push    0; int
0x4C5457: push    eax; a1
0x4C5458: call    TESForm_LookupByFormID
0x4C545D: add     esp, 4
0x4C5460: push    eax; void *
0x4C5461: call    OblivionDynamicCast
0x4C5466: movzx   ecx, byte ptr [esp+15D4h+var_157C]
0x4C546B: mov     edx, [esi+24h]
0x4C546E: mov     [edx+ecx*4+20h], eax
0x4C5472: movzx   eax, byte ptr [esp+15D4h+var_157C]
0x4C5477: mov     ecx, [esi+24h]
0x4C547A: lea     ecx, [ecx+eax*4+20h]
0x4C547E: add     esp, 14h
0x4C5481: cmp     dword ptr [ecx], 0
0x4C5484: jnz     short loc_4C54AE
0x4C5486: mov     edx, [esp+15C0h+a1]
0x4C548A: push    eax
0x4C548B: push    edx
0x4C548C: mov     ecx, esi
0x4C548E: call    sub_4BF040
0x4C5493: push    eax
0x4C5494: mov     ecx, esi
0x4C5496: call    sub_4BF020
0x4C549B: push    eax; ArgList
0x4C549C: push    offset aLandIIUnableTo; "Land (%i, %i) unable to find base textu"...
0x4C54A1: call    PrintError
0x4C54A6: add     esp, 14h
0x4C54A9: jmp     loc_4C55B5
0x4C54AE: mov     ecx, [ecx]
0x4C54B0: call    sub_4C9530
0x4C54B5: jmp     loc_4C55B5
0x4C54BA: test    byte ptr [esi+1Ch], 4
0x4C54BE: jz      loc_4C55B5
0x4C54C4: xor     eax, eax
0x4C54C6: mov     [esp+15C0h+var_159C.vtbl], eax
0x4C54CA: mov     dword ptr [esp+15C0h+var_159C.member.type], eax
0x4C54CE: push    8; a4
0x4C54D0: lea     eax, [esp+15C4h+var_159C]
0x4C54D4: push    eax; Dst
0x4C54D5: mov     ecx, edi; a1
0x4C54D7: call    TESFile_GetChunkData
0x4C54DC: mov     ax, word ptr [esp+15C0h+var_159C.member.pad+1]
0x4C54E1: cmp     ax, 7
0x4C54E5: jbe     short loc_4C5515
0x4C54E7: movzx   ecx, [esp+15C0h+var_159C.member.type]
0x4C54EC: movzx   edx, ax
0x4C54EF: push    ecx
0x4C54F0: push    edx
0x4C54F1: mov     ecx, esi
0x4C54F3: call    sub_4BF040
0x4C54F8: push    eax
0x4C54F9: mov     ecx, esi
0x4C54FB: call    sub_4BF020
0x4C5500: push    eax; ArgList
0x4C5501: push    offset aLandIIClamping; "Land (%i, %i) clamping invalid index %i"...
0x4C5506: call    PrintError
0x4C550B: add     esp, 14h
0x4C550E: mov     word ptr [esp+15C0h+var_159C.member.pad+1], 7
0x4C5515: cmp     [esp+15C0h+var_159C.vtbl], 0
0x4C551A: jz      short loc_4C557E
0x4C551C: lea     eax, [esp+15C0h+var_159C]
0x4C5520: push    edi; a2
0x4C5521: push    eax; a1
0x4C5522: call    TESForm_ResolveFormID
0x4C5527: mov     ecx, [esp+15C8h+var_159C.vtbl]
0x4C552B: add     esp, 8
0x4C552E: push    0; int
0x4C5530: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C5535: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C553A: push    0; int
0x4C553C: push    ecx; a1
0x4C553D: call    TESForm_LookupByFormID
0x4C5542: add     esp, 4
0x4C5545: push    eax; void *
0x4C5546: call    OblivionDynamicCast
0x4C554B: mov     ebx, eax
0x4C554D: add     esp, 14h
0x4C5550: test    ebx, ebx
0x4C5552: jnz     short loc_4C5584
0x4C5554: movzx   edx, [esp+15C0h+var_159C.member.type]
0x4C5559: mov     eax, [esp+15C0h+var_159C.vtbl]
0x4C555D: push    edx
0x4C555E: push    eax
0x4C555F: mov     ecx, esi
0x4C5561: call    sub_4BF040
0x4C5566: push    eax
0x4C5567: mov     ecx, esi
0x4C5569: call    sub_4BF020
0x4C556E: push    eax; ArgList
0x4C556F: push    offset aLandIIUnable_0; "Land (%i, %i) unable to find additional"...
0x4C5574: call    PrintError
0x4C5579: add     esp, 14h
0x4C557C: jmp     short loc_4C5584
0x4C557E: mov     ebx, ds:0B35BE4h
0x4C5584: test    ebx, ebx
0x4C5586: movzx   ecx, [esp+15C0h+var_159C.member.type]
0x4C558B: mov     edx, [esi+24h]
0x4C558E: movzx   eax, word ptr [esp+15C0h+var_159C.member.pad+1]
0x4C5593: mov     ecx, [edx+ecx*4+30h]
0x4C5597: mov     [ecx+eax*4], ebx
0x4C559A: jz      short loc_4C55A3
0x4C559C: mov     ecx, ebx
0x4C559E: call    sub_4C9530
0x4C55A3: movzx   edx, [esp+15C0h+var_159C.member.type]
0x4C55A8: movzx   eax, word ptr [esp+15C0h+var_159C.member.pad+1]
0x4C55AD: mov     dword ptr [esp+15C0h+var_1584], edx
0x4C55B1: mov     [esp+15C0h+var_159C.member.modlist.next], eax
0x4C55B5: mov     ecx, edi
0x4C55B7: call    TESFile_GetNextChunk
0x4C55BC: test    al, al
0x4C55BE: jnz     loc_4C4D3A
0x4C55C4: cmp     byte ptr [esp+15C0h+var_15A4+3], al
0x4C55C8: jz      short loc_4C5625
0x4C55CA: cmp     byte ptr [esp+15C0h+var_15A4+2], al
0x4C55CE: jnz     short loc_4C5625
0x4C55D0: mov     eax, [esi+24h]
0x4C55D3: test    eax, eax
0x4C55D5: jz      short loc_4C55DF
0x4C55D7: mov     ebx, [eax+9Ch]
0x4C55DD: jmp     short loc_4C55F1
0x4C55DF: mov     ecx, [esi+20h]; this
0x4C55E2: test    ecx, ecx
0x4C55E4: jz      short loc_4C55EF
0x4C55E6: call    TESObjectCELL_GetYCoordinate
0x4C55EB: mov     ebx, eax
0x4C55ED: jmp     short loc_4C55F1
0x4C55EF: xor     ebx, ebx
0x4C55F1: mov     eax, [esi+24h]
0x4C55F4: test    eax, eax
0x4C55F6: jz      short loc_4C5600
0x4C55F8: mov     eax, [eax+98h]
0x4C55FE: jmp     short loc_4C5612
0x4C5600: mov     esi, [esi+20h]
0x4C5603: test    esi, esi
0x4C5605: jz      short loc_4C5610
0x4C5607: mov     ecx, esi; this
0x4C5609: call    TESObjectCELL_GetXCoordinate
0x4C560E: jmp     short loc_4C5612
0x4C5610: xor     eax, eax
0x4C5612: add     edi, 1Ch
0x4C5615: push    edi
0x4C5616: push    ebx
0x4C5617: push    eax; ArgList
0x4C5618: push    offset aLandForCellIII; "Land for cell (%i, %i) in file '%s' doe"...
0x4C561D: call    PrintError
0x4C5622: add     esp, 10h
0x4C5625: mov     ecx, [esp+15C0h+var_4]
0x4C562C: pop     edi
0x4C562D: pop     esi
0x4C562E: pop     ebx
0x4C562F: xor     ecx, esp
0x4C5631: mov     al, 1
0x4C5633: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C5638: mov     esp, ebp
0x4C563A: pop     ebp
0x4C563B: retn
