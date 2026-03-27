0x525A70: push    0FFFFFFFFh
0x525A72: push    offset SEH_525A70
0x525A77: mov     eax, large fs:0
0x525A7D: push    eax
0x525A7E: sub     esp, 7Ch
0x525A81: push    ebx
0x525A82: push    ebp
0x525A83: push    esi
0x525A84: push    edi
0x525A85: mov     eax, ds:0B30AACh
0x525A8A: xor     eax, esp
0x525A8C: push    eax
0x525A8D: lea     eax, [esp+9Ch+var_C]
0x525A94: mov     large fs:0, eax
0x525A9A: mov     ebx, ecx
0x525A9C: mov     [esp+9Ch+var_78], ebx
0x525AA0: call    sub_553600
0x525AA5: test    eax, eax
0x525AA7: jz      loc_526214
0x525AAD: mov     esi, [esp+9Ch+arg_4]
0x525AB4: mov     eax, [esi]
0x525AB6: xor     edi, edi
0x525AB8: cmp     eax, edi
0x525ABA: jz      loc_526214
0x525AC0: cmp     byte ptr ds:0B120B4h, 0
0x525AC7: jz      loc_526214
0x525ACD: mov     ecx, ds:0B333C4h
0x525AD3: mov     ebp, [esp+9Ch+arg_0]
0x525ADA: cmp     ebp, ecx
0x525ADC: jnz     short loc_525AEC
0x525ADE: push    esi
0x525ADF: call    sub_65D770
0x525AE4: test    al, al
0x525AE6: jnz     loc_526214
0x525AEC: mov     ecx, [ebp+3Ch]
0x525AEF: cmp     ecx, edi
0x525AF1: mov     [esp+9Ch+var_7C], edi
0x525AF5: jz      short loc_525B02
0x525AF7: mov     eax, [ecx]
0x525AF9: mov     edx, [eax+8]
0x525AFC: call    edx
0x525AFE: mov     [esp+9Ch+var_7C], eax
0x525B02: push    edi
0x525B03: mov     ecx, esi
0x525B05: call    sub_477EC0
0x525B0A: mov     esi, eax
0x525B0C: mov     eax, [ebp+0]
0x525B0F: mov     edx, [eax+164h]
0x525B15: mov     ecx, ebp
0x525B17: mov     [esp+9Ch+var_58], esi
0x525B1B: mov     [esp+9Ch+var_74], edi
0x525B1F: call    edx
0x525B21: test    eax, eax
0x525B23: jz      short loc_525B54
0x525B25: mov     eax, [ebp+0]
0x525B28: mov     edx, [eax+164h]
0x525B2E: mov     ecx, ebp
0x525B30: call    edx
0x525B32: cmp     [eax+98h], edi
0x525B38: jz      short loc_525B54
0x525B3A: mov     eax, [ebp+0]
0x525B3D: mov     edx, [eax+164h]
0x525B43: mov     ecx, ebp
0x525B45: call    edx
0x525B47: mov     eax, [eax+98h]
0x525B4D: mov     eax, [eax+7Ch]
0x525B50: mov     [esp+9Ch+var_74], eax
0x525B54: cmp     esi, edi
0x525B56: jz      loc_526203
0x525B5C: cmp     [esp+9Ch+var_7C], edi
0x525B60: jz      loc_526203
0x525B66: mov     edx, [ebp+0]
0x525B69: mov     eax, [edx+130h]
0x525B6F: push    esi
0x525B70: mov     ecx, ebp
0x525B72: call    eax
0x525B74: test    eax, eax
0x525B76: jnz     loc_5261CD
0x525B7C: mov     edx, [ebp+0]
0x525B7F: mov     eax, [edx+134h]
0x525B85: push    esi
0x525B86: mov     ecx, ebp
0x525B88: call    eax
0x525B8A: test    eax, eax
0x525B8C: jnz     loc_5261CD
0x525B92: mov     [esp+9Ch+a2], edi
0x525B96: mov     [esp+9Ch+var_84], edi
0x525B9A: mov     [esp+9Ch+var_68], edi
0x525B9E: mov     [esp+9Ch+var_80], edi
0x525BA2: mov     [esp+9Ch+var_4], edi
0x525BA9: mov     [esp+9Ch+var_70], edi
0x525BAD: mov     eax, [ebx+1D4h]
0x525BB3: cmp     eax, edi
0x525BB5: mov     byte ptr [esp+9Ch+var_4], 1
0x525BBD: jz      loc_525CE9
0x525BC3: mov     ecx, [ebx+1D8h]
0x525BC9: cmp     ecx, edi
0x525BCB: jz      short loc_525BD9
0x525BCD: cmp     dword ptr [ecx+4], 1
0x525BD1: ja      short loc_525BD9
0x525BD3: mov     [esp+9Ch+a2], eax
0x525BD7: jmp     short loc_525C15
0x525BD9: fld1
0x525BDB: push    ecx
0x525BDC: lea     ecx, [esp+0A0h+var_54]
0x525BE0: fstp    [esp+0A0h+var_A0]; float
0x525BE3: call    sub_478C80
0x525BE8: mov     ecx, [ebx+1D4h]
0x525BEE: lea     edx, [esp+9Ch+var_54]
0x525BF2: push    edx
0x525BF3: mov     byte ptr [esp+0A0h+var_4], 2
0x525BFB: call    sub_700610
0x525C00: lea     ecx, [esp+9Ch+var_54]
0x525C04: mov     [esp+9Ch+a2], eax
0x525C08: mov     byte ptr [esp+9Ch+var_4], 1
0x525C10: call    sub_4781A0
0x525C15: mov     eax, [esp+9Ch+a2]
0x525C19: movzx   ebp, word ptr [eax+0B6h]
0x525C20: xor     edi, edi
0x525C22: test    ebp, ebp
0x525C24: jbe     loc_525CAE
0x525C2A: mov     bl, 3
0x525C2C: mov     ecx, [esp+9Ch+a2]
0x525C30: push    edi
0x525C31: call    sub_405790
0x525C36: test    eax, eax
0x525C38: jz      short loc_525CA3
0x525C3A: mov     edx, [eax]
0x525C3C: mov     ecx, eax
0x525C3E: mov     eax, [edx+10h]
0x525C41: call    eax
0x525C43: mov     esi, eax
0x525C45: test    esi, esi
0x525C47: jz      short loc_525CA3
0x525C49: mov     eax, [esp+9Ch+var_78]
0x525C4D: mov     ecx, [esp+9Ch+a2]
0x525C51: add     eax, 1D4h
0x525C56: cmp     [eax], ecx
0x525C58: jz      short loc_525CA3
0x525C5A: mov     ecx, [esi+0B4h]
0x525C60: lea     edx, [esp+9Ch+var_6C]
0x525C64: push    edx
0x525C65: call    sub_700790
0x525C6A: mov     eax, [eax]
0x525C6C: push    eax; a2
0x525C6D: lea     ecx, [esp+0A0h+var_80]; this
0x525C71: mov     byte ptr [esp+0A0h+var_4], bl
0x525C78: call    NiSmartPointer_Set??
0x525C7D: lea     ecx, [esp+9Ch+var_6C]; this
0x525C81: mov     byte ptr [esp+9Ch+var_4], 1
0x525C89: call    sub_7016A0
0x525C8E: mov     eax, [esp+9Ch+var_80]
0x525C92: test    eax, eax
0x525C94: jz      short loc_525CA3
0x525C96: mov     edx, [esi]
0x525C98: push    eax
0x525C99: mov     eax, [edx+8Ch]
0x525C9F: mov     ecx, esi
0x525CA1: call    eax
0x525CA3: add     edi, 1
0x525CA6: cmp     edi, ebp
0x525CA8: jb      short loc_525C2C
0x525CAA: mov     ebx, [esp+9Ch+var_78]
0x525CAE: mov     ecx, [esp+9Ch+a2]
0x525CB2: cmp     [ebx+1D4h], ecx
0x525CB8: jz      short loc_525CE2
0x525CBA: mov     edx, [ecx]
0x525CBC: mov     eax, [edx+9Ch]
0x525CC2: call    eax
0x525CC4: mov     ecx, eax
0x525CC6: call    sub_54D2C0
0x525CCB: test    eax, eax
0x525CCD: mov     [esp+9Ch+var_68], eax
0x525CD1: jz      short loc_525CE2
0x525CD3: mov     ecx, [esp+9Ch+a2]
0x525CD7: mov     edx, [ecx]
0x525CD9: push    eax
0x525CDA: mov     eax, [edx+0A0h]
0x525CE0: call    eax
0x525CE2: mov     ebp, [esp+9Ch+arg_0]
0x525CE9: mov     eax, [ebx+1D8h]
0x525CEF: test    eax, eax
0x525CF1: lea     esi, [ebx+1D8h]
0x525CF7: jz      loc_525F13
0x525CFD: cmp     dword ptr [eax+4], 1
0x525D01: ja      short loc_525D09
0x525D03: mov     [esp+9Ch+var_84], eax
0x525D07: jmp     short loc_525D41
0x525D09: fld1
0x525D0B: push    ecx
0x525D0C: lea     ecx, [esp+0A0h+var_54]
0x525D10: fstp    [esp+0A0h+var_A0]; float
0x525D13: call    sub_478C80
0x525D18: mov     ecx, [esi]
0x525D1A: lea     edx, [esp+9Ch+var_54]
0x525D1E: push    edx
0x525D1F: mov     byte ptr [esp+0A0h+var_4], 4
0x525D27: call    sub_700610
0x525D2C: lea     ecx, [esp+9Ch+var_54]
0x525D30: mov     [esp+9Ch+var_84], eax
0x525D34: mov     byte ptr [esp+9Ch+var_4], 1
0x525D3C: call    sub_4781A0
0x525D41: mov     eax, [esp+9Ch+var_84]
0x525D45: movzx   ecx, word ptr [eax+0B6h]
0x525D4C: xor     eax, eax
0x525D4E: test    ecx, ecx
0x525D50: mov     [esp+9Ch+var_5C], ecx
0x525D54: mov     [esp+9Ch+var_6C], eax
0x525D58: jbe     loc_525ED3
0x525D5E: mov     ecx, [esp+9Ch+var_84]
0x525D62: push    eax
0x525D63: call    sub_405790
0x525D68: test    eax, eax
0x525D6A: jz      loc_525EBE
0x525D70: mov     edx, [eax]
0x525D72: mov     ecx, eax
0x525D74: mov     eax, [edx+10h]
0x525D77: call    eax
0x525D79: mov     esi, eax
0x525D7B: test    esi, esi
0x525D7D: jz      loc_525EBE
0x525D83: mov     ecx, [esp+9Ch+var_84]
0x525D87: cmp     [ebx+1D8h], ecx
0x525D8D: jz      short loc_525DD9
0x525D8F: mov     ecx, [esi+0B4h]
0x525D95: lea     edx, [esp+9Ch+var_64]
0x525D99: push    edx
0x525D9A: call    sub_700790
0x525D9F: mov     eax, [eax]
0x525DA1: push    eax; a2
0x525DA2: lea     ecx, [esp+0A0h+var_80]; this
0x525DA6: mov     byte ptr [esp+0A0h+var_4], 5
0x525DAE: call    NiSmartPointer_Set??
0x525DB3: lea     ecx, [esp+9Ch+var_64]; this
0x525DB7: mov     byte ptr [esp+9Ch+var_4], 1
0x525DBF: call    sub_7016A0
0x525DC4: mov     eax, [esp+9Ch+var_80]
0x525DC8: test    eax, eax
0x525DCA: jz      short loc_525DD9
0x525DCC: mov     edx, [esi]
0x525DCE: push    eax
0x525DCF: mov     eax, [edx+8Ch]
0x525DD5: mov     ecx, esi
0x525DD7: call    eax
0x525DD9: mov     eax, [esi+0B8h]
0x525DDF: test    eax, eax
0x525DE1: jz      loc_525EBE
0x525DE7: cmp     dword ptr [eax+0Ch], 0
0x525DEB: jz      loc_525EBE
0x525DF1: push    esi
0x525DF2: call    sub_550790
0x525DF7: mov     edi, eax
0x525DF9: add     esp, 4
0x525DFC: test    edi, edi
0x525DFE: jz      loc_5261E0
0x525E04: mov     edx, [edi]
0x525E06: mov     eax, [edx+54h]
0x525E09: mov     ecx, edi
0x525E0B: call    eax
0x525E0D: test    eax, eax
0x525E0F: jz      loc_5261E0
0x525E15: mov     edx, [edi]
0x525E17: mov     eax, [edx+54h]
0x525E1A: mov     ecx, edi
0x525E1C: call    eax
0x525E1E: mov     ecx, eax
0x525E20: call    sub_523D60
0x525E25: test    eax, eax
0x525E27: jz      loc_5261E0
0x525E2D: mov     edx, [edi]
0x525E2F: mov     eax, [edx+54h]
0x525E32: mov     ecx, edi
0x525E34: call    eax
0x525E36: mov     ecx, eax
0x525E38: call    sub_523D60
0x525E3D: mov     ebp, [eax+14h]
0x525E40: mov     eax, [eax+8]
0x525E43: mov     ecx, [eax+40h]
0x525E46: mov     edi, [esi+0B8h]
0x525E4C: xor     eax, eax
0x525E4E: test    ecx, ecx
0x525E50: jbe     short loc_525E67
0x525E52: mov     edx, [ebp+eax*4+0]
0x525E56: mov     ebx, [edi+14h]
0x525E59: mov     [ebx+eax*4], edx
0x525E5C: add     eax, 1
0x525E5F: cmp     eax, ecx
0x525E61: jb      short loc_525E52
0x525E63: mov     ebx, [esp+9Ch+var_78]
0x525E67: mov     ebp, [esp+9Ch+arg_0]
0x525E6E: mov     eax, [esi+0B8h]
0x525E74: mov     eax, [eax+0Ch]
0x525E77: lea     ecx, [esp+9Ch+var_60]
0x525E7B: push    ecx
0x525E7C: mov     ecx, eax
0x525E7E: call    sub_700790
0x525E83: mov     eax, [eax]
0x525E85: push    eax; a2
0x525E86: lea     ecx, [esp+0A0h+var_70]; this
0x525E8A: mov     byte ptr [esp+0A0h+var_4], 6
0x525E92: call    NiSmartPointer_Set??
0x525E97: lea     ecx, [esp+9Ch+var_60]; this
0x525E9B: mov     byte ptr [esp+9Ch+var_4], 1
0x525EA3: call    sub_7016A0
0x525EA8: mov     eax, [esp+9Ch+var_70]
0x525EAC: test    eax, eax
0x525EAE: jz      short loc_525EBE
0x525EB0: mov     esi, [esi+0B8h]
0x525EB6: push    eax; a2
0x525EB7: mov     ecx, esi; this
0x525EB9: call    sub_478300
0x525EBE: mov     eax, [esp+9Ch+var_6C]
0x525EC2: add     eax, 1
0x525EC5: cmp     eax, [esp+9Ch+var_5C]
0x525EC9: mov     [esp+9Ch+var_6C], eax
0x525ECD: jb      loc_525D5E
0x525ED3: mov     edx, [esp+9Ch+var_84]
0x525ED7: cmp     [ebx+1D8h], edx
0x525EDD: lea     esi, [ebx+1D8h]
0x525EE3: jz      short loc_525F13
0x525EE5: mov     eax, [esp+9Ch+var_68]
0x525EE9: test    eax, eax
0x525EEB: mov     ecx, edx
0x525EED: jnz     short loc_525F08
0x525EEF: mov     eax, [ecx]
0x525EF1: mov     edx, [eax+9Ch]
0x525EF7: call    edx
0x525EF9: mov     ecx, eax
0x525EFB: call    sub_54D2C0
0x525F00: test    eax, eax
0x525F02: jz      short loc_525F13
0x525F04: mov     ecx, [esp+9Ch+var_84]
0x525F08: mov     edx, [ecx]
0x525F0A: push    eax
0x525F0B: mov     eax, [edx+0A0h]
0x525F11: call    eax
0x525F13: cmp     dword ptr [ebx+1D4h], 0
0x525F1A: lea     edi, [ebx+1D4h]
0x525F20: jnz     short loc_525F71
0x525F22: cmp     dword ptr [esi], 0
0x525F25: jnz     short loc_525F71
0x525F27: mov     ecx, [ebx+0E8h]
0x525F2D: test    ecx, ecx
0x525F2F: jz      short loc_525F71
0x525F31: push    0
0x525F33: push    0
0x525F35: push    ebx
0x525F36: lea     edx, [esp+0A8h+var_84]
0x525F3A: push    edx
0x525F3B: lea     eax, [esp+0ACh+a2]
0x525F3F: push    eax
0x525F40: call    sub_52DED0
0x525F45: mov     eax, [ebx+0E8h]
0x525F4B: mov     ecx, [esp+9Ch+a2]
0x525F4F: movzx   eax, word ptr [eax+2FCh]
0x525F56: push    ecx; a2
0x525F57: mov     ecx, edi; this
0x525F59: mov     [ebx+1E0h], ax
0x525F60: call    NiSmartPointer_Set??
0x525F65: mov     edx, [esp+9Ch+var_84]
0x525F69: push    edx; a2
0x525F6A: mov     ecx, esi; this
0x525F6C: call    NiSmartPointer_Set??
0x525F71: cmp     [esp+9Ch+a2], 0
0x525F76: jnz     short loc_525F9F
0x525F78: cmp     [esp+9Ch+var_84], 0
0x525F7D: jnz     loc_526091
0x525F83: mov     eax, [ebx+0Ch]
0x525F86: push    eax; ArgList
0x525F87: push    offset aCannotCreateAH; "Cannot create a head for an NPC (%d) (n"...
0x525F8C: call    PrintError
0x525F91: add     esp, 8
0x525F94: cmp     [esp+9Ch+a2], 0
0x525F99: jz      loc_526085
0x525F9F: mov     ecx, [esp+9Ch+a2]
0x525FA3: mov     eax, [ecx]
0x525FA5: mov     edx, [eax+9Ch]
0x525FAB: call    edx
0x525FAD: test    eax, eax
0x525FAF: jz      short loc_525FFF
0x525FB1: mov     ecx, ebp; this
0x525FB3: call    TESObjectREFR_GetHealth
0x525FB8: fcomp   dword ptr ds:0A2FAA8h
0x525FBE: fnstsw  ax
0x525FC0: test    ah, 41h
0x525FC3: jp      short loc_525FFF
0x525FC5: mov     ecx, [esp+9Ch+a2]
0x525FC9: mov     eax, [ecx]
0x525FCB: mov     edx, [eax+9Ch]
0x525FD1: call    edx
0x525FD3: mov     edx, [eax]
0x525FD5: push    1
0x525FD7: mov     ecx, eax
0x525FD9: mov     eax, [edx+9Ch]
0x525FDF: push    1
0x525FE1: call    eax
0x525FE3: mov     ecx, [esp+9Ch+a2]
0x525FE7: mov     edx, [ecx]
0x525FE9: mov     eax, [edx+9Ch]
0x525FEF: call    eax
0x525FF1: mov     edx, [eax]
0x525FF3: mov     ecx, eax
0x525FF5: mov     eax, [edx+94h]
0x525FFB: push    1
0x525FFD: call    eax
0x525FFF: mov     ecx, [esp+9Ch+a2]
0x526003: mov     edx, [ecx]
0x526005: mov     eax, [edx+0B0h]
0x52600B: push    1
0x52600D: call    eax
0x52600F: mov     ecx, [esp+9Ch+a2]
0x526013: mov     edx, [ecx]
0x526015: mov     eax, [edx+0B8h]
0x52601B: push    1
0x52601D: call    eax
0x52601F: mov     eax, [esp+9Ch+a2]
0x526023: mov     ecx, ds:0B3F9A8h
0x526029: mov     [eax+54h], ecx
0x52602C: mov     edx, ds:0B3F9ACh
0x526032: add     eax, 54h ; 'T'
0x526035: mov     [eax+4], edx
0x526038: mov     ecx, ds:0B3F9B0h
0x52603E: mov     [eax+8], ecx
0x526041: mov     edi, [esp+9Ch+a2]
0x526045: add     edi, 30h ; '0'
0x526048: mov     ecx, 9
0x52604D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x526052: rep movsd
0x526054: mov     ecx, [esp+9Ch+var_58]
0x526058: mov     edx, [ecx]
0x52605A: mov     eax, [esp+9Ch+a2]
0x52605E: mov     edx, [edx+84h]
0x526064: push    1
0x526066: push    eax
0x526067: call    edx
0x526069: mov     eax, [esp+9Ch+a2]
0x52606D: mov     ecx, [esp+9Ch+var_74]
0x526071: mov     [eax+114h], ebp
0x526077: mov     edx, [esp+9Ch+a2]
0x52607B: push    ecx
0x52607C: push    edx
0x52607D: call    sub_7165B0
0x526082: add     esp, 8
0x526085: mov     eax, [esp+9Ch+var_84]
0x526089: test    eax, eax
0x52608B: jz      loc_526161
0x526091: cmp     [esp+9Ch+a2], 0
0x526096: mov     ecx, 9
0x52609B: setz    dl
0x52609E: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x5260A3: lea     edi, [esp+9Ch+var_30]
0x5260A7: rep movsd
0x5260A9: mov     ecx, [esp+9Ch+var_84]
0x5260AD: mov     eax, [ecx]
0x5260AF: mov     eax, [eax+0B0h]
0x5260B5: push    edx
0x5260B6: call    eax
0x5260B8: cmp     [esp+9Ch+a2], 0
0x5260BD: mov     ecx, [esp+9Ch+var_84]
0x5260C1: mov     edx, [ecx]
0x5260C3: mov     edx, [edx+0B8h]
0x5260C9: setz    al
0x5260CC: push    eax
0x5260CD: call    edx
0x5260CF: mov     eax, [esp+9Ch+var_84]
0x5260D3: mov     ecx, ds:0B3F9A8h
0x5260D9: mov     [eax+54h], ecx
0x5260DC: mov     edx, ds:0B3F9ACh
0x5260E2: add     eax, 54h ; 'T'
0x5260E5: mov     [eax+4], edx
0x5260E8: mov     ecx, ds:0B3F9B0h
0x5260EE: mov     [eax+8], ecx
0x5260F1: mov     edx, [esp+9Ch+var_84]
0x5260F5: mov     esi, [edx]
0x5260F7: push    1
0x5260F9: lea     eax, [esp+0A0h+var_30]
0x5260FD: push    eax
0x5260FE: lea     ecx, [esp+0A4h+var_54]
0x526102: push    ecx
0x526103: mov     ecx, ebp
0x526105: add     esi, 0A8h ; '¨'
0x52610B: call    sub_4D7C50
0x526110: mov     ecx, [esp+9Ch+var_84]
0x526114: mov     edx, [esi]
0x526116: push    eax
0x526117: call    edx
0x526119: mov     esi, [esp+9Ch+var_7C]
0x52611D: mov     ecx, [esp+9Ch+var_84]
0x526121: mov     eax, [esi]
0x526123: mov     edx, [eax+84h]
0x526129: push    1
0x52612B: push    ecx
0x52612C: mov     ecx, esi
0x52612E: call    edx
0x526130: mov     eax, [esp+9Ch+var_84]
0x526134: mov     ecx, [esp+9Ch+var_74]
0x526138: mov     [eax+114h], ebp
0x52613E: mov     edx, [esp+9Ch+var_84]
0x526142: push    ecx
0x526143: push    edx
0x526144: call    sub_7165B0
0x526149: mov     ecx, [esp+0A4h+var_84]
0x52614D: mov     eax, [ecx]
0x52614F: mov     edx, [eax+0C4h]
0x526155: add     esp, 8
0x526158: push    1
0x52615A: push    esi
0x52615B: call    edx
0x52615D: mov     eax, [esp+9Ch+var_84]
0x526161: mov     ecx, [esp+9Ch+a2]
0x526165: test    ecx, ecx
0x526167: jz      short loc_52617B
0x526169: mov     eax, [ecx]
0x52616B: mov     edx, [eax+9Ch]
0x526171: call    edx
0x526173: test    eax, eax
0x526175: jnz     short loc_52618F
0x526177: mov     eax, [esp+9Ch+var_84]
0x52617B: test    eax, eax
0x52617D: jz      short loc_5261A8
0x52617F: mov     edx, [eax]
0x526181: mov     ecx, eax
0x526183: mov     eax, [edx+9Ch]
0x526189: call    eax
0x52618B: test    eax, eax
0x52618D: jz      short loc_5261A8
0x52618F: mov     edx, [eax]
0x526191: fldz
0x526193: push    0
0x526195: push    1
0x526197: push    1
0x526199: push    1
0x52619B: push    1
0x52619D: push    ecx
0x52619E: mov     ecx, eax
0x5261A0: fstp    [esp+0B4h+var_B4]
0x5261A3: mov     eax, [edx+78h]
0x5261A6: call    eax
0x5261A8: lea     ecx, [esp+9Ch+var_70]; this
0x5261AC: mov     byte ptr [esp+9Ch+var_4], 0
0x5261B4: call    sub_7016A0
0x5261B9: lea     ecx, [esp+9Ch+var_80]; this
0x5261BD: mov     [esp+9Ch+var_4], 0FFFFFFFFh
0x5261C8: call    sub_7016A0
0x5261CD: fldz
0x5261CF: push    0; a3
0x5261D1: push    ecx
0x5261D2: fstp    [esp+0A4h+var_A4]; a2
0x5261D5: mov     ecx, [esp+0A4h+var_7C]; this
0x5261D9: call    NiAVObject_UpdateNiAVObject
0x5261DE: jmp     short loc_526214
0x5261E0: mov     eax, [ebx+0Ch]
0x5261E3: mov     edx, [ebx]
0x5261E5: push    eax
0x5261E6: mov     eax, [edx+0D4h]
0x5261EC: mov     ecx, ebx
0x5261EE: call    eax
0x5261F0: push    eax; ArgList
0x5261F1: push    offset aCouldNotCorrec; "Could not correctly handle skinning for"...
0x5261F6: call    PrintError
0x5261FB: add     esp, 0Ch
0x5261FE: jmp     loc_525E6E
0x526203: mov     ecx, [ebx+0Ch]
0x526206: push    ecx; ArgList
0x526207: push    offset aCannotCreate_0; "Cannot create a head for an NPC (%d) th"...
0x52620C: call    PrintError
0x526211: add     esp, 8
0x526214: mov     ecx, [esp+9Ch+var_C]
0x52621B: mov     large fs:0, ecx
0x526222: pop     ecx
0x526223: pop     edi
0x526224: pop     esi
0x526225: pop     ebp
0x526226: pop     ebx
0x526227: add     esp, 88h
0x52622D: retn    8
