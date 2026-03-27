0x679C10: sub     esp, 0Ch
0x679C13: push    ebx
0x679C14: mov     ebx, [esp+10h+arg_0]
0x679C18: mov     eax, [ebx]
0x679C1A: mov     edx, [eax+190h]
0x679C20: push    ebp
0x679C21: push    esi
0x679C22: mov     esi, ecx
0x679C24: push    edi
0x679C25: mov     ecx, ebx
0x679C27: mov     [esp+1Ch+var_4], esi
0x679C2B: call    edx
0x679C2D: xor     edi, edi
0x679C2F: test    al, al
0x679C31: jz      short loc_679CAC
0x679C33: mov     ecx, ds:0B333C4h
0x679C39: add     ecx, 44h ; 'D'
0x679C3C: call    GetExtraDataFollower
0x679C41: test    eax, eax
0x679C43: jz      short loc_679C6F
0x679C45: mov     ecx, ds:0B333C4h
0x679C4B: add     ecx, 44h ; 'D'
0x679C4E: call    GetExtraDataFollower
0x679C53: cmp     [eax+0Ch], edi
0x679C56: jz      short loc_679C6F
0x679C58: mov     ecx, ds:0B333C4h
0x679C5E: add     ecx, 44h ; 'D'
0x679C61: push    ebx
0x679C62: call    GetExtraDataFollower
0x679C67: mov     ecx, [eax+0Ch]
0x679C6A: call    BSSimpleList_Remove
0x679C6F: mov     eax, ds:0B333C4h
0x679C74: mov     ecx, [eax+58h]
0x679C77: cmp     ecx, edi
0x679C79: jz      short loc_679C9E
0x679C7B: mov     eax, [ecx]
0x679C7D: mov     edx, [eax+1BCh]
0x679C83: push    ebx
0x679C84: call    edx
0x679C86: mov     eax, ds:0B333C4h
0x679C8B: mov     ecx, [eax+58h]
0x679C8E: mov     edx, [ecx]
0x679C90: mov     eax, [edx+0B4h]
0x679C96: push    ebx
0x679C97: call    eax
0x679C99: mov     eax, ds:0B333C4h
0x679C9E: cmp     [eax+0E4h], ebx
0x679CA4: jnz     short loc_679CAC
0x679CA6: mov     [eax+0E4h], edi
0x679CAC: mov     [esp+1Ch+var_C], edi
0x679CB0: test    edi, edi
0x679CB2: jnz     short loc_679CC5
0x679CB4: push    edi; a2
0x679CB5: mov     ecx, esi; this
0x679CB7: call    sub_673A50
0x679CBC: mov     ecx, eax; this
0x679CBE: call    sub_7616D0
0x679CC3: jmp     short loc_679D0A
0x679CC5: cmp     edi, 1
0x679CC8: jnz     short loc_679CDB
0x679CCA: push    edi; a2
0x679CCB: mov     ecx, esi; this
0x679CCD: call    sub_673A50
0x679CD2: mov     ecx, eax; this
0x679CD4: call    sub_7616D0
0x679CD9: jmp     short loc_679D0A
0x679CDB: cmp     edi, 2
0x679CDE: jnz     short loc_679CF1
0x679CE0: push    edi; a2
0x679CE1: mov     ecx, esi; this
0x679CE3: call    sub_673A50
0x679CE8: mov     ecx, eax; this
0x679CEA: call    sub_7616D0
0x679CEF: jmp     short loc_679D0A
0x679CF1: cmp     edi, 3
0x679CF4: jnz     short loc_679D07
0x679CF6: push    edi; a2
0x679CF7: mov     ecx, esi; this
0x679CF9: call    sub_673A50
0x679CFE: mov     ecx, eax; this
0x679D00: call    sub_7616D0
0x679D05: jmp     short loc_679D0A
0x679D07: lea     eax, [esi+58h]
0x679D0A: test    eax, eax
0x679D0C: mov     [esp+1Ch+arg_0], eax
0x679D10: jz      loc_67A1C1
0x679D16: jmp     short loc_679D24
0x679D18: jmp     short loc_679D20
0x679D1A: align 10h
0x679D20: mov     eax, [esp+1Ch+arg_0]
0x679D24: cmp     dword ptr [eax+4], 0
0x679D28: jnz     short loc_679D33
0x679D2A: cmp     dword ptr [eax], 0
0x679D2D: jz      loc_67A1C1
0x679D33: mov     eax, [eax]
0x679D35: mov     edx, [eax]
0x679D37: mov     ecx, eax
0x679D39: mov     eax, [edx+190h]
0x679D3F: call    eax
0x679D41: test    al, al
0x679D43: jz      loc_67A1A6
0x679D49: mov     ecx, [esp+1Ch+arg_0]
0x679D4D: mov     esi, [ecx]
0x679D4F: test    esi, esi
0x679D51: jz      loc_67A1A6
0x679D57: cmp     [esi+0E4h], ebx
0x679D5D: mov     edi, [esi+58h]
0x679D60: jnz     short loc_679D8A
0x679D62: test    edi, edi
0x679D64: mov     dword ptr [esi+0E4h], 0
0x679D6E: jz      short loc_679D8A
0x679D70: mov     edx, [edi]
0x679D72: mov     eax, [edx+204h]
0x679D78: push    0
0x679D7A: mov     ecx, edi
0x679D7C: call    eax
0x679D7E: mov     edx, [edi]
0x679D80: mov     eax, [edx+350h]
0x679D86: mov     ecx, edi
0x679D88: call    eax
0x679D8A: mov     edx, [ebx]
0x679D8C: mov     eax, [edx+190h]
0x679D92: mov     ecx, ebx
0x679D94: call    eax
0x679D96: test    al, al
0x679D98: jz      short loc_679DB7
0x679D9A: push    ebx
0x679D9B: mov     ecx, esi
0x679D9D: call    sub_5E21D0
0x679DA2: test    edi, edi
0x679DA4: jz      loc_67A1A6
0x679DAA: mov     edx, [edi]
0x679DAC: mov     eax, [edx+0B4h]
0x679DB2: push    ebx
0x679DB3: mov     ecx, edi
0x679DB5: call    eax
0x679DB7: test    edi, edi
0x679DB9: jz      loc_67A1A6
0x679DBF: mov     ecx, [esi+58h]
0x679DC2: mov     edx, [ecx]
0x679DC4: mov     eax, [edx+184h]
0x679DCA: call    eax
0x679DCC: mov     ecx, esi
0x679DCE: mov     ebp, eax
0x679DD0: call    sub_5E03A0
0x679DD5: test    ebp, ebp
0x679DD7: mov     [esp+1Ch+var_8], eax
0x679DDB: jz      short loc_679E1C
0x679DDD: mov     ecx, ebp
0x679DDF: call    sub_5660A0
0x679DE4: test    al, al
0x679DE6: jz      short loc_679E1C
0x679DE8: cmp     byte ptr [ebp+20h], 0Ch
0x679DEC: jz      short loc_679E1C
0x679DEE: mov     ecx, [ebp+28h]
0x679DF1: test    ecx, ecx
0x679DF3: jz      short loc_679E07
0x679DF5: call    sub_569E60
0x679DFA: cmp     eax, ebx
0x679DFC: jnz     short loc_679E07
0x679DFE: push    0
0x679E00: mov     ecx, ebp
0x679E02: call    TESPackage_SetTarget
0x679E07: push    esi
0x679E08: mov     ecx, ebp
0x679E0A: call    sub_566D00
0x679E0F: cmp     eax, ebx
0x679E11: jnz     short loc_679E1C
0x679E13: push    0
0x679E15: mov     ecx, ebp
0x679E17: call    TESPackage_SetLocation
0x679E1C: cmp     [esp+1Ch+var_8], 0
0x679E21: jz      short loc_679E66
0x679E23: mov     ebp, [esp+1Ch+var_8]
0x679E27: mov     ecx, ebp
0x679E29: call    sub_5660A0
0x679E2E: test    al, al
0x679E30: jz      short loc_679E66
0x679E32: cmp     byte ptr [ebp+20h], 0Ch
0x679E36: jz      short loc_679E66
0x679E38: mov     ecx, [ebp+28h]
0x679E3B: test    ecx, ecx
0x679E3D: jz      short loc_679E51
0x679E3F: call    sub_569E60
0x679E44: cmp     eax, ebx
0x679E46: jnz     short loc_679E51
0x679E48: push    0
0x679E4A: mov     ecx, ebp
0x679E4C: call    TESPackage_SetTarget
0x679E51: push    esi
0x679E52: mov     ecx, ebp
0x679E54: call    sub_566D00
0x679E59: cmp     eax, ebx
0x679E5B: jnz     short loc_679E66
0x679E5D: push    0
0x679E5F: mov     ecx, ebp
0x679E61: call    TESPackage_SetLocation
0x679E66: mov     ebp, [esp+1Ch+var_C]
0x679E6A: cmp     ebp, 2
0x679E6D: jge     loc_679F6D
0x679E73: mov     edx, [edi]
0x679E75: mov     eax, [edx+1BCh]
0x679E7B: push    ebx
0x679E7C: mov     ecx, edi
0x679E7E: call    eax
0x679E80: mov     ecx, [esi+58h]
0x679E83: mov     edx, [ecx]
0x679E85: mov     eax, [edx+184h]
0x679E8B: push    0; int
0x679E8D: push    offset ??_R0?AVSpectatorPackage@@@8; struct TypeDescriptor *
0x679E92: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x679E97: push    0; int
0x679E99: call    eax
0x679E9B: push    eax; void *
0x679E9C: call    OblivionDynamicCast
0x679EA1: add     esp, 14h
0x679EA4: test    eax, eax
0x679EA6: jz      short loc_679EBB
0x679EA8: mov     eax, [eax+3Ch]
0x679EAB: test    eax, eax
0x679EAD: jz      short loc_679EBB
0x679EAF: cmp     [eax+4], ebx
0x679EB2: jnz     short loc_679EBB
0x679EB4: mov     dword ptr [eax+4], 0
0x679EBB: mov     ecx, esi
0x679EBD: call    sub_5E2E00
0x679EC2: cmp     eax, ebx
0x679EC4: jz      short loc_679F00
0x679EC6: mov     edx, [edi]
0x679EC8: mov     eax, [edx+174h]
0x679ECE: mov     ecx, edi
0x679ED0: call    eax
0x679ED2: test    eax, eax
0x679ED4: jz      short loc_679F47
0x679ED6: mov     edx, [edi]
0x679ED8: mov     eax, [edx+174h]
0x679EDE: mov     ecx, edi
0x679EE0: call    eax
0x679EE2: cmp     dword ptr [eax+28h], 0
0x679EE6: jz      short loc_679F47
0x679EE8: mov     edx, [edi]
0x679EEA: mov     eax, [edx+174h]
0x679EF0: mov     ecx, edi
0x679EF2: call    eax
0x679EF4: mov     ecx, [eax+28h]
0x679EF7: call    sub_569E60
0x679EFC: cmp     eax, ebx
0x679EFE: jnz     short loc_679F47
0x679F00: mov     ecx, esi
0x679F02: call    sub_5E6B40
0x679F07: test    al, al
0x679F09: mov     ecx, esi
0x679F0B: jz      short loc_679F19
0x679F0D: mov     edx, [esi]
0x679F0F: mov     eax, [edx+30Ch]
0x679F15: call    eax
0x679F17: jmp     short loc_679F47
0x679F19: call    sub_5E0380
0x679F1E: mov     ecx, eax
0x679F20: call    sub_5660A0
0x679F25: test    al, al
0x679F27: jz      short loc_679F32
0x679F29: mov     ecx, esi; int
0x679F2B: call    sub_5EAE70
0x679F30: jmp     short loc_679F47
0x679F32: mov     edx, [edi]
0x679F34: mov     eax, [edx+178h]
0x679F3A: push    0
0x679F3C: mov     ecx, edi
0x679F3E: mov     dword ptr [edi+8], 0
0x679F45: call    eax
0x679F47: mov     edx, [ebx]
0x679F49: mov     eax, [edx+120h]
0x679F4F: mov     ecx, ebx
0x679F51: call    eax
0x679F53: push    eax
0x679F54: mov     ecx, esi
0x679F56: call    sub_5E69E0
0x679F5B: cmp     ebp, 1
0x679F5E: jge     short loc_679F6D
0x679F60: mov     edx, [edi]
0x679F62: mov     eax, [edx+4B8h]
0x679F68: push    ebx
0x679F69: mov     ecx, edi
0x679F6B: call    eax
0x679F6D: mov     edx, [edi]
0x679F6F: mov     eax, [edx+32Ch]
0x679F75: push    ebx
0x679F76: mov     ecx, edi
0x679F78: call    eax
0x679F7A: lea     ecx, [esi+44h]; this
0x679F7D: push    1Fh; a2
0x679F7F: call    BaseExtraList_GetExtraData
0x679F84: xor     ebp, ebp
0x679F86: cmp     eax, ebp
0x679F88: jz      short loc_679F92
0x679F8A: cmp     [eax+14h], ebx
0x679F8D: jnz     short loc_679F92
0x679F8F: mov     [eax+14h], ebp
0x679F92: cmp     [esi+7Ch], ebx
0x679F95: jnz     short loc_679F9A
0x679F97: mov     [esi+7Ch], ebp
0x679F9A: push    ebp
0x679F9B: mov     ecx, esi
0x679F9D: call    sub_5E6CD0
0x679FA2: test    al, al
0x679FA4: jz      short loc_679FC7
0x679FA6: mov     ecx, esi
0x679FA8: call    sub_5E0380
0x679FAD: cmp     eax, ebp
0x679FAF: jz      short loc_679FBF
0x679FB1: cmp     byte ptr [eax+20h], 10h
0x679FB5: jnz     short loc_679FBF
0x679FB7: cmp     [eax+60h], ebx
0x679FBA: jnz     short loc_679FBF
0x679FBC: mov     [eax+60h], ebp
0x679FBF: push    ebx; int
0x679FC0: mov     ecx, esi; int
0x679FC2: call    sub_5EFF30
0x679FC7: mov     edx, [esi]
0x679FC9: mov     eax, [edx+334h]
0x679FCF: push    1
0x679FD1: mov     ecx, esi
0x679FD3: call    eax
0x679FD5: test    al, al
0x679FD7: jz      short loc_679FFD
0x679FD9: mov     edx, [esi]
0x679FDB: mov     eax, [edx+330h]
0x679FE1: mov     ecx, esi
0x679FE3: call    eax
0x679FE5: mov     ebp, eax
0x679FE7: test    ebp, ebp
0x679FE9: jz      short loc_679FFB
0x679FEB: push    ebx
0x679FEC: mov     ecx, ebp
0x679FEE: call    sub_6162D0
0x679FF3: push    ebx
0x679FF4: mov     ecx, ebp
0x679FF6: call    sub_615010
0x679FFB: xor     ebp, ebp
0x679FFD: push    ebx
0x679FFE: lea     ecx, [esi+44h]
0x67A001: call    sub_424D00
0x67A006: mov     edx, [edi]
0x67A008: mov     eax, [edx+0CCh]
0x67A00E: mov     ecx, edi
0x67A010: call    eax
0x67A012: cmp     eax, ebx
0x67A014: jnz     short loc_67A023
0x67A016: mov     edx, [edi]
0x67A018: mov     eax, [edx+0D0h]
0x67A01E: push    ebp
0x67A01F: mov     ecx, edi
0x67A021: call    eax
0x67A023: mov     ecx, esi
0x67A025: call    sub_5EAE10
0x67A02A: cmp     eax, ebx
0x67A02C: jnz     short loc_67A036
0x67A02E: push    ebp
0x67A02F: mov     ecx, esi
0x67A031: call    sub_5E03C0
0x67A036: mov     edx, [esi]
0x67A038: mov     eax, [edx+380h]
0x67A03E: mov     ecx, esi
0x67A040: call    eax
0x67A042: cmp     eax, ebx
0x67A044: jnz     short loc_67A053
0x67A046: mov     edx, [esi]
0x67A048: mov     eax, [edx+384h]
0x67A04E: push    ebp
0x67A04F: mov     ecx, esi
0x67A051: call    eax
0x67A053: cmp     [esi+58h], ebp
0x67A056: jz      short loc_67A0A9
0x67A058: mov     edx, [ebx]
0x67A05A: mov     eax, [edx+190h]
0x67A060: mov     ecx, ebx
0x67A062: call    eax
0x67A064: test    al, al
0x67A066: jz      short loc_67A0A9
0x67A068: mov     ecx, [esi+58h]
0x67A06B: mov     edx, [ecx]
0x67A06D: mov     eax, [edx+2B0h]
0x67A073: call    eax
0x67A075: lea     ecx, [ebx+68h]
0x67A078: cmp     eax, ecx
0x67A07A: jnz     short loc_67A08A
0x67A07C: mov     ecx, [esi+58h]
0x67A07F: mov     edx, [ecx]
0x67A081: mov     eax, [edx+2B4h]
0x67A087: push    ebp
0x67A088: call    eax
0x67A08A: mov     ecx, [esi+58h]
0x67A08D: mov     edx, [ecx]
0x67A08F: mov     eax, [edx+8]
0x67A092: call    eax
0x67A094: test    eax, eax
0x67A096: jnz     short loc_67A0A9
0x67A098: mov     eax, [esi+58h]
0x67A09B: cmp     [eax+258h], ebx
0x67A0A1: jnz     short loc_67A0A9
0x67A0A3: mov     [eax+258h], ebp
0x67A0A9: mov     ecx, [esi+58h]
0x67A0AC: mov     edx, [ecx]
0x67A0AE: mov     eax, [edx+184h]
0x67A0B4: call    eax
0x67A0B6: test    eax, eax
0x67A0B8: jz      short loc_67A0F5
0x67A0BA: mov     ecx, [esi+58h]
0x67A0BD: mov     edx, [ecx]
0x67A0BF: mov     eax, [edx+184h]
0x67A0C5: call    eax
0x67A0C7: cmp     [eax+24h], ebp
0x67A0CA: jz      short loc_67A0F5
0x67A0CC: mov     ecx, [esi+58h]
0x67A0CF: mov     edx, [ecx]
0x67A0D1: mov     eax, [edx+184h]
0x67A0D7: call    eax
0x67A0D9: mov     ecx, [eax+24h]
0x67A0DC: call    sub_5697E0
0x67A0E1: cmp     eax, ebx
0x67A0E3: jnz     short loc_67A0F5
0x67A0E5: mov     ecx, esi
0x67A0E7: call    sub_5E0380
0x67A0EC: mov     ecx, [eax+24h]
0x67A0EF: push    ebp
0x67A0F0: call    TESPackage_LocationData_SetReference
0x67A0F5: mov     eax, [esi+58h]
0x67A0F8: cmp     eax, ebp
0x67A0FA: jz      short loc_67A124
0x67A0FC: mov     eax, [eax+8]
0x67A0FF: cmp     eax, ebp
0x67A101: jz      short loc_67A124
0x67A103: mov     eax, [eax+24h]
0x67A106: cmp     eax, ebp
0x67A108: jz      short loc_67A124
0x67A10A: mov     ecx, eax
0x67A10C: call    sub_5697E0
0x67A111: cmp     eax, ebx
0x67A113: jnz     short loc_67A124
0x67A115: mov     ecx, [esi+58h]
0x67A118: mov     edx, [ecx+8]
0x67A11B: mov     ecx, [edx+24h]
0x67A11E: push    ebp
0x67A11F: call    TESPackage_LocationData_SetReference
0x67A124: mov     eax, [edi]
0x67A126: mov     edx, [eax+378h]
0x67A12C: mov     ecx, edi
0x67A12E: call    edx
0x67A130: cmp     eax, ebx
0x67A132: jnz     short loc_67A1A6
0x67A134: mov     eax, [edi]
0x67A136: fldz
0x67A138: mov     edx, [eax+380h]
0x67A13E: push    ecx
0x67A13F: mov     ecx, edi
0x67A141: fstp    [esp+20h+var_20]; float
0x67A144: call    edx
0x67A146: mov     ecx, eax
0x67A148: call    sub_6FAEE0
0x67A14D: mov     eax, [edi]
0x67A14F: mov     edx, [eax+380h]
0x67A155: mov     ecx, edi
0x67A157: call    edx
0x67A159: mov     byte ptr [eax+0Eh], 0
0x67A15D: mov     eax, [edi]
0x67A15F: mov     edx, [eax+380h]
0x67A165: mov     ecx, edi
0x67A167: call    edx
0x67A169: mov     ecx, ds:0B3F9A8h
0x67A16F: mov     [eax], ecx
0x67A171: mov     edx, ds:0B3F9ACh
0x67A177: mov     [eax+4], edx
0x67A17A: mov     ecx, ds:0B3F9B0h
0x67A180: mov     [eax+8], ecx
0x67A183: mov     esi, [esi+58h]
0x67A186: mov     edx, [esi]
0x67A188: mov     ebp, [edi]
0x67A18A: mov     eax, [edx+380h]
0x67A190: mov     ecx, esi
0x67A192: add     ebp, 3E8h
0x67A198: call    eax
0x67A19A: mov     edx, [ebp+0]
0x67A19D: push    eax
0x67A19E: push    7Fh
0x67A1A0: push    0
0x67A1A2: mov     ecx, edi
0x67A1A4: call    edx
0x67A1A6: mov     eax, [esp+1Ch+arg_0]
0x67A1AA: mov     eax, [eax+4]
0x67A1AD: test    eax, eax
0x67A1AF: mov     esi, [esp+1Ch+var_4]
0x67A1B3: mov     edi, [esp+1Ch+var_C]
0x67A1B7: mov     [esp+1Ch+arg_0], eax
0x67A1BB: jnz     loc_679D20
0x67A1C1: add     edi, 1
0x67A1C4: cmp     edi, 5
0x67A1C7: mov     [esp+1Ch+var_C], edi
0x67A1CB: jl      loc_679CB0
0x67A1D1: push    ebx
0x67A1D2: lea     ecx, [esi+60h]
0x67A1D5: call    BSSimpleList_Remove
0x67A1DA: pop     edi
0x67A1DB: pop     esi
0x67A1DC: pop     ebp
0x67A1DD: pop     ebx
0x67A1DE: add     esp, 0Ch
0x67A1E1: retn    4
