0x8098E0: push    0FFFFFFFFh
0x8098E2: push    offset SEH_8098E0
0x8098E7: mov     eax, large fs:0
0x8098ED: push    eax
0x8098EE: sub     esp, 38h
0x8098F1: push    ebx
0x8098F2: push    ebp
0x8098F3: push    esi
0x8098F4: push    edi
0x8098F5: mov     eax, ds:0B30AACh
0x8098FA: xor     eax, esp
0x8098FC: push    eax
0x8098FD: lea     eax, [esp+58h+var_C]
0x809901: mov     large fs:0, eax
0x809907: mov     ebx, ecx
0x809909: mov     eax, [ebx]
0x80990B: mov     edx, [eax+80h]
0x809911: call    edx
0x809913: mov     eax, ds:0B42E90h
0x809918: cmp     eax, 126h
0x80991D: mov     [esp+58h+var_3C], eax
0x809921: jz      loc_80A02F
0x809927: cmp     eax, 123h
0x80992C: jz      loc_80A02F
0x809932: xor     edi, edi
0x809934: mov     [esp+58h+var_40], edi
0x809938: mov     [esp+58h+var_34], edi
0x80993C: mov     ebp, [esp+58h+arg_C]
0x809940: mov     esi, [ebp+18h]
0x809943: cmp     esi, edi
0x809945: mov     [esp+58h+var_4], edi
0x809949: mov     [esp+58h+var_41], 0
0x80994E: jz      short loc_809973
0x809950: mov     eax, [esi]
0x809952: mov     edx, [eax+54h]
0x809955: mov     ecx, esi
0x809957: call    edx
0x809959: cmp     eax, 1
0x80995C: jl      short loc_809973
0x80995E: mov     eax, [esi]
0x809960: mov     edx, [eax+54h]
0x809963: mov     ecx, esi
0x809965: call    edx
0x809967: cmp     eax, 0Ah
0x80996A: jg      short loc_809973
0x80996C: mov     eax, 1
0x809971: jmp     short loc_809975
0x809973: xor     eax, eax
0x809975: neg     eax
0x809977: sbb     eax, eax
0x809979: and     eax, esi
0x80997B: mov     [esp+58h+var_38], eax
0x80997F: mov     edi, 0
0x809984: jz      short loc_8099B5
0x809986: test    esi, esi
0x809988: jz      short loc_8099AD
0x80998A: mov     eax, [esi]
0x80998C: mov     edx, [eax+54h]
0x80998F: mov     ecx, esi
0x809991: call    edx
0x809993: cmp     eax, 5
0x809996: jl      short loc_8099AD
0x809998: mov     eax, [esi]
0x80999A: mov     edx, [eax+54h]
0x80999D: mov     ecx, esi
0x80999F: call    edx
0x8099A1: cmp     eax, 0Ah
0x8099A4: jg      short loc_8099AD
0x8099A6: mov     edi, 1
0x8099AB: jmp     short loc_8099AF
0x8099AD: xor     edi, edi
0x8099AF: neg     edi
0x8099B1: sbb     edi, edi
0x8099B3: and     edi, esi
0x8099B5: test    esi, esi
0x8099B7: jnz     short loc_8099D4
0x8099B9: mov     eax, ds:0B42E8Ch
0x8099BE: test    eax, eax
0x8099C0: jz      short loc_8099CD
0x8099C2: push    esi
0x8099C3: push    offset aAttemptingTo_2; "Attempting to render geometry with a sh"...
0x8099C8: call    eax ; dword_B42E8C
0x8099CA: add     esp, 8
0x8099CD: xor     eax, eax
0x8099CF: jmp     loc_80A059
0x8099D4: test    byte ptr [esi+1Ch], 2
0x8099D8: mov     eax, [ebp+8]
0x8099DB: setnbe  byte ptr [esp+58h+arg_C]
0x8099E0: test    eax, eax
0x8099E2: jz      loc_809A69
0x8099E8: test    byte ptr [eax+18h], 1
0x8099EC: jz      short loc_809A69
0x8099EE: fld     dword ptr [esi+20h]
0x8099F1: mov     eax, ds:0B46498h
0x8099F6: mov     ecx, ds:0B4649Ch
0x8099FC: fstp    [esp+58h+var_30]
0x809A00: mov     edx, ds:0B464A0h
0x809A06: mov     [esp+58h+var_1C], eax
0x809A0A: fld     [esp+58h+var_1C]
0x809A0E: mov     eax, ds:0B464A4h
0x809A13: fstp    [esp+58h+var_2C]
0x809A17: mov     [esp+58h+var_18], ecx
0x809A1B: fld     [esp+58h+var_18]
0x809A1F: mov     ecx, [esp+58h+var_2C]
0x809A23: fstp    [esp+58h+var_28]
0x809A27: mov     [esp+58h+var_14], edx
0x809A2B: fld     [esp+58h+var_14]
0x809A2F: mov     edx, [esp+58h+var_28]
0x809A33: fstp    [esp+58h+var_24]
0x809A37: fld     [esp+58h+var_30]
0x809A3B: mov     [esp+58h+var_10], eax
0x809A3F: mov     eax, [esp+58h+var_24]
0x809A43: fstp    [esp+58h+var_20]
0x809A47: mov     ds:0B46498h, ecx
0x809A4D: mov     ecx, [esp+58h+var_20]
0x809A51: mov     ds:0B4649Ch, edx
0x809A57: mov     ds:0B464A0h, eax
0x809A5C: mov     ds:0B464A4h, ecx
0x809A62: mov     [esp+58h+var_41], 1
0x809A67: jmp     short loc_809A76
0x809A69: fld1
0x809A6B: push    ecx
0x809A6C: mov     ecx, esi
0x809A6E: fstp    [esp+5Ch+var_5C]; float
0x809A71: call    sub_7E2430
0x809A76: cmp     [esp+58h+var_38], 0
0x809A7B: mov     esi, [esp+58h+arg_0]
0x809A7F: jz      loc_809B37
0x809A85: movzx   eax, word ptr ds:0B42EACh
0x809A8C: sub     eax, 1
0x809A8F: jz      short loc_809AC1
0x809A91: sub     eax, 1
0x809A94: jnz     loc_809B37
0x809A9A: mov     ecx, [esp+58h+var_38]
0x809A9E: mov     edx, [ecx]
0x809AA0: mov     eax, [edx+60h]
0x809AA3: push    esi
0x809AA4: call    eax
0x809AA6: movzx   eax, ax
0x809AA9: cmp     ax, 10h
0x809AAD: jbe     short loc_809AB4
0x809AAF: mov     eax, 10h
0x809AB4: movzx   eax, ax
0x809AB7: shl     eax, 4
0x809ABA: add     eax, offset unk_B2DE00
0x809ABF: jmp     short loc_809AE3
0x809AC1: mov     ecx, [esp+58h+var_38]
0x809AC5: call    sub_7ED5D0
0x809ACA: movzx   eax, ax
0x809ACD: cmp     ax, 0Ah
0x809AD1: jbe     short loc_809AD8
0x809AD3: mov     eax, 0Ah
0x809AD8: movzx   eax, ax
0x809ADB: shl     eax, 4
0x809ADE: add     eax, offset unk_B2DD50
0x809AE3: mov     edx, [eax]
0x809AE5: sub     esp, 10h
0x809AE8: mov     ecx, esp
0x809AEA: mov     [ecx], edx
0x809AEC: mov     edx, [eax+4]
0x809AEF: mov     [ecx+4], edx
0x809AF2: mov     edx, [eax+8]
0x809AF5: mov     eax, [eax+0Ch]
0x809AF8: mov     [ecx+8], edx
0x809AFB: push    0
0x809AFD: mov     [ecx+0Ch], eax
0x809B00: call    sub_7ECAE0
0x809B05: mov     ecx, ds:0B25AD0h
0x809B0B: mov     edx, ds:0B25AD4h
0x809B11: add     esp, 4
0x809B14: mov     eax, esp
0x809B16: mov     [eax], ecx
0x809B18: mov     ecx, ds:0B25AD8h
0x809B1E: mov     [eax+4], edx
0x809B21: mov     edx, ds:0B25ADCh
0x809B27: mov     [eax+8], ecx
0x809B2A: push    19h
0x809B2C: mov     [eax+0Ch], edx
0x809B2F: call    sub_7ECAE0
0x809B34: add     esp, 14h
0x809B37: push    1; a1
0x809B39: call    GetShaderDefinition
0x809B3E: add     eax, 4
0x809B41: mov     eax, [eax]
0x809B43: add     esp, 4
0x809B46: cmp     byte ptr [esp+58h+arg_C], 0
0x809B4B: lea     ecx, [ebx+24h]; this
0x809B4E: jz      short loc_809B58
0x809B50: mov     eax, [eax+80h]
0x809B56: jmp     short loc_809B5B
0x809B58: mov     eax, [eax+7Ch]
0x809B5B: push    eax; a2
0x809B5C: call    NiSmartPointer_Set??
0x809B61: mov     eax, [esp+58h+var_3C]
0x809B65: cmp     eax, 18Ch
0x809B6A: jg      loc_809E2A
0x809B70: jz      loc_809E16
0x809B76: add     eax, 0FFFFFFB2h; switch 173 cases
0x809B79: cmp     eax, 0ACh
0x809B7E: ja      def_809B8B; jumptable 00809B8B default case, cases 79-82,84-88,90-93,95-99,101-104,106-110,112-115,117-120,122-126,128-134,136-140,142-147,149-153,155-160,162-166,168-232,234,235,237-246,248,249
0x809B84: movzx   eax, ds:byte_80A0C4[eax]
0x809B8B: jmp     ds:jpt_809B8B[eax*4]; switch jump
0x809B92: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 78
0x809B96: push    edi
0x809B97: push    ebp
0x809B98: push    ecx
0x809B99: push    esi
0x809B9A: mov     ecx, ebx
0x809B9C: call    sub_87FA20
0x809BA1: mov     [esp+58h+var_40], 0
0x809BA9: mov     eax, [esp+58h+var_3C]
0x809BAD: test    eax, eax
0x809BAF: jl      loc_809F01
0x809BB5: cmp     eax, 1A3h
0x809BBA: jge     loc_809F01
0x809BC0: mov     edi, [esp+58h+var_40]
0x809BC4: push    0
0x809BC6: movzx   esi, di
0x809BC9: mov     ecx, ds:0B47718h[esi*4]
0x809BD0: push    0
0x809BD2: push    1Ch
0x809BD4: call    sub_76C730
0x809BD9: mov     eax, [esp+58h+var_3C]
0x809BDD: add     eax, 0FFFFFEF1h
0x809BE2: cmp     eax, 1Ah
0x809BE5: ja      loc_809EB3
0x809BEB: mov     ecx, ds:0B47718h[esi*4]
0x809BF2: push    0
0x809BF4: push    0Fh
0x809BF6: push    0A8h ; '¨'
0x809BFB: call    sub_76C730
0x809C00: jmp     loc_809F05
0x809C05: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 83
0x809C09: push    edi
0x809C0A: push    ebp
0x809C0B: push    edx
0x809C0C: push    esi
0x809C0D: mov     ecx, ebx
0x809C0F: call    sub_87FBD0
0x809C14: mov     [esp+58h+var_40], 1
0x809C1C: jmp     short loc_809BA9
0x809C1E: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 100
0x809C22: push    edi
0x809C23: push    ebp
0x809C24: push    eax
0x809C25: push    esi
0x809C26: mov     ecx, ebx
0x809C28: call    sub_880200
0x809C2D: mov     [esp+58h+var_40], 4
0x809C35: jmp     loc_809BA9
0x809C3A: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 105
0x809C3E: push    edi
0x809C3F: push    ebp
0x809C40: push    ecx
0x809C41: push    esi
0x809C42: mov     ecx, ebx
0x809C44: call    sub_8803B0
0x809C49: mov     [esp+58h+var_40], 5
0x809C51: jmp     loc_809BA9
0x809C56: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 121
0x809C5A: push    edi
0x809C5B: push    ebp
0x809C5C: push    edx
0x809C5D: push    esi
0x809C5E: mov     ecx, ebx
0x809C60: call    sub_8809E0
0x809C65: mov     [esp+58h+var_40], 8
0x809C6D: jmp     loc_809BA9
0x809C72: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 127
0x809C76: push    edi
0x809C77: push    ebp
0x809C78: push    eax
0x809C79: push    esi
0x809C7A: mov     ecx, ebx
0x809C7C: call    sub_880C00
0x809C81: mov     [esp+58h+var_40], 9
0x809C89: jmp     loc_809BA9
0x809C8E: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 148
0x809C92: push    edi
0x809C93: push    ebp
0x809C94: push    ecx
0x809C95: push    esi
0x809C96: mov     ecx, ebx
0x809C98: call    sub_8813A0
0x809C9D: mov     [esp+58h+var_40], 0Ch
0x809CA5: jmp     loc_809BA9
0x809CAA: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 154
0x809CAE: push    edi
0x809CAF: push    ebp
0x809CB0: push    edx
0x809CB1: push    esi
0x809CB2: mov     ecx, ebx
0x809CB4: call    sub_881610
0x809CB9: mov     [esp+58h+var_40], 0Dh
0x809CC1: jmp     loc_809BA9
0x809CC6: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 233
0x809CCA: push    edi
0x809CCB: push    ebp
0x809CCC: push    eax
0x809CCD: push    esi
0x809CCE: mov     ecx, ebx
0x809CD0: call    sub_881E80
0x809CD5: mov     [esp+58h+var_40], 10h
0x809CDD: jmp     loc_809BA9
0x809CE2: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 236
0x809CE6: push    edi
0x809CE7: push    ebp
0x809CE8: push    ecx
0x809CE9: push    esi
0x809CEA: mov     ecx, ebx
0x809CEC: call    sub_881FD0
0x809CF1: mov     [esp+58h+var_40], 11h
0x809CF9: jmp     loc_809BA9
0x809CFE: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 247
0x809D02: push    edi
0x809D03: push    ebp
0x809D04: push    edx
0x809D05: push    esi
0x809D06: mov     ecx, ebx
0x809D08: call    sub_882120
0x809D0D: mov     [esp+58h+var_40], 12h
0x809D15: jmp     loc_809BA9
0x809D1A: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 250
0x809D1E: push    edi
0x809D1F: push    ebp
0x809D20: push    eax
0x809D21: push    esi
0x809D22: mov     ecx, ebx
0x809D24: call    sub_882270
0x809D29: mov     [esp+58h+var_40], 13h
0x809D31: jmp     loc_809BA9
0x809D36: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 89
0x809D3A: push    edi
0x809D3B: push    ebp
0x809D3C: push    ecx
0x809D3D: push    esi
0x809D3E: mov     ecx, ebx
0x809D40: call    sub_87FD80
0x809D45: mov     [esp+58h+var_40], 2
0x809D4D: jmp     loc_809BA9
0x809D52: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 94
0x809D56: push    edi
0x809D57: push    ebp
0x809D58: push    edx
0x809D59: push    esi
0x809D5A: mov     ecx, ebx
0x809D5C: call    sub_87FFC0
0x809D61: mov     [esp+58h+var_40], 3
0x809D69: jmp     loc_809BA9
0x809D6E: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 111
0x809D72: push    edi
0x809D73: push    ebp
0x809D74: push    eax
0x809D75: push    esi
0x809D76: mov     ecx, ebx
0x809D78: call    sub_880560
0x809D7D: mov     [esp+58h+var_40], 6
0x809D85: jmp     loc_809BA9
0x809D8A: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 116
0x809D8E: push    edi
0x809D8F: push    ebp
0x809D90: push    ecx
0x809D91: push    esi
0x809D92: mov     ecx, ebx
0x809D94: call    sub_8807A0
0x809D99: mov     [esp+58h+var_40], 7
0x809DA1: jmp     loc_809BA9
0x809DA6: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 135
0x809DAA: push    edi
0x809DAB: push    ebp
0x809DAC: push    edx
0x809DAD: push    esi
0x809DAE: mov     ecx, ebx
0x809DB0: call    sub_880E20
0x809DB5: mov     [esp+58h+var_40], 0Ah
0x809DBD: jmp     loc_809BA9
0x809DC2: mov     eax, [esp+58h+arg_4]; jumptable 00809B8B case 141
0x809DC6: push    edi
0x809DC7: push    ebp
0x809DC8: push    eax
0x809DC9: push    esi
0x809DCA: mov     ecx, ebx
0x809DCC: call    sub_8810E0
0x809DD1: mov     [esp+58h+var_40], 0Bh
0x809DD9: jmp     loc_809BA9
0x809DDE: mov     ecx, [esp+58h+arg_4]; jumptable 00809B8B case 161
0x809DE2: push    edi
0x809DE3: push    ebp
0x809DE4: push    ecx
0x809DE5: push    esi
0x809DE6: mov     ecx, ebx
0x809DE8: call    sub_881880
0x809DED: mov     [esp+58h+var_40], 0Eh
0x809DF5: jmp     loc_809BA9
0x809DFA: mov     edx, [esp+58h+arg_4]; jumptable 00809B8B case 167
0x809DFE: push    edi
0x809DFF: push    ebp
0x809E00: push    edx
0x809E01: push    esi
0x809E02: mov     ecx, ebx
0x809E04: call    sub_881B80
0x809E09: mov     [esp+58h+var_40], 0Fh
0x809E11: jmp     loc_809BA9
0x809E16: mov     eax, [esp+58h+arg_4]
0x809E1A: push    edi
0x809E1B: push    ebp
0x809E1C: push    eax
0x809E1D: push    esi
0x809E1E: mov     ecx, ebx
0x809E20: call    sub_851CA0
0x809E25: jmp     loc_809BC0
0x809E2A: sub     eax, 18Dh
0x809E2F: jz      short loc_809E9F
0x809E31: sub     eax, 1
0x809E34: jz      short loc_809E8B
0x809E36: sub     eax, 1
0x809E39: jz      short loc_809E77
0x809E3B: mov     ecx, [esp+58h+arg_18]; jumptable 00809B8B default case, cases 79-82,84-88,90-93,95-99,101-104,106-110,112-115,117-120,122-126,128-134,136-140,142-147,149-153,155-160,162-166,168-232,234,235,237-246,248,249
0x809E3F: mov     edx, [esp+58h+arg_14]
0x809E43: mov     eax, [esp+58h+arg_10]
0x809E47: push    ecx
0x809E48: mov     ecx, [esp+5Ch+arg_8]
0x809E4C: push    edx
0x809E4D: mov     edx, [esp+60h+arg_4]
0x809E51: push    eax
0x809E52: push    ebp
0x809E53: push    ecx
0x809E54: push    edx
0x809E55: push    esi
0x809E56: mov     ecx, ebx
0x809E58: call    sub_7C9F30
0x809E5D: lea     ecx, [esp+58h+var_34]; this
0x809E61: mov     esi, eax
0x809E63: mov     [esp+58h+var_4], 0FFFFFFFFh
0x809E6B: call    sub_7016A0
0x809E70: mov     eax, esi
0x809E72: jmp     loc_80A059
0x809E77: mov     eax, [esp+58h+arg_4]
0x809E7B: push    edi
0x809E7C: push    ebp
0x809E7D: push    eax
0x809E7E: push    esi
0x809E7F: mov     ecx, ebx
0x809E81: call    sub_848AD0
0x809E86: jmp     loc_809BC0
0x809E8B: mov     ecx, [esp+58h+arg_4]
0x809E8F: push    edi
0x809E90: push    ebp
0x809E91: push    ecx
0x809E92: push    esi
0x809E93: mov     ecx, ebx
0x809E95: call    sub_848950
0x809E9A: jmp     loc_809BC0
0x809E9F: mov     edx, [esp+58h+arg_4]
0x809EA3: push    edi
0x809EA4: push    ebp
0x809EA5: push    edx
0x809EA6: push    esi
0x809EA7: mov     ecx, ebx
0x809EA9: call    sub_851E70
0x809EAE: jmp     loc_809BC0
0x809EB3: mov     eax, [esp+58h+var_3C]
0x809EB7: cmp     eax, 19Eh
0x809EBC: jz      short loc_809EE8
0x809EBE: cmp     eax, 19Fh
0x809EC3: jz      short loc_809EE8
0x809EC5: cmp     eax, 0Ah
0x809EC8: jz      short loc_809EE8
0x809ECA: cmp     eax, 0Bh
0x809ECD: jz      short loc_809EE8
0x809ECF: mov     esi, ds:0B47718h[esi*4]
0x809ED6: push    0
0x809ED8: push    7
0x809EDA: push    0A8h ; '¨'
0x809EDF: mov     ecx, esi
0x809EE1: call    sub_76C730
0x809EE6: jmp     short loc_809F05
0x809EE8: mov     esi, ds:0B47718h[esi*4]
0x809EEF: push    0
0x809EF1: push    8
0x809EF3: push    0A8h ; '¨'
0x809EF8: mov     ecx, esi
0x809EFA: call    sub_76C730
0x809EFF: jmp     short loc_809F05
0x809F01: mov     edi, [esp+58h+var_40]
0x809F05: cmp     word ptr ds:0B42EACh, 4
0x809F0D: movzx   eax, di
0x809F10: mov     ecx, ds:0B47718h[eax*4]
0x809F17: lea     esi, ds:0B47718h[eax*4]
0x809F1E: push    0
0x809F20: jnz     short loc_809F5C
0x809F22: push    1
0x809F24: push    34h ; '4'
0x809F26: call    sub_76C730
0x809F2B: mov     ecx, [esi]
0x809F2D: push    0
0x809F2F: push    8
0x809F31: push    38h ; '8'
0x809F33: call    sub_76C730
0x809F38: mov     ecx, [esi]
0x809F3A: push    0
0x809F3C: push    7
0x809F3E: push    37h ; '7'
0x809F40: call    sub_76C730
0x809F45: mov     ecx, [esi]
0x809F47: push    0
0x809F49: push    1
0x809F4B: push    35h ; '5'
0x809F4D: call    sub_76C730
0x809F52: mov     ecx, [esi]
0x809F54: push    0
0x809F56: push    1
0x809F58: push    36h ; '6'
0x809F5A: jmp     short loc_809F60
0x809F5C: push    0
0x809F5E: push    34h ; '4'
0x809F60: call    sub_76C730
0x809F65: mov     eax, [esp+58h+var_3C]
0x809F69: lea     ecx, [eax-33h]
0x809F6C: cmp     ecx, 15Fh
0x809F72: ja      short loc_809FDF
0x809F74: call    sub_7C8510
0x809F79: test    al, al
0x809F7B: mov     ecx, [esi]
0x809F7D: push    0
0x809F7F: jz      short loc_809FC1
0x809F81: cmp     [esp+5Ch+var_41], 0
0x809F86: jnz     short loc_809F93
0x809F88: push    0
0x809F8A: push    1Bh
0x809F8C: call    sub_76C730
0x809F91: jmp     short loc_809FAC
0x809F93: push    1
0x809F95: push    1Bh
0x809F97: call    sub_76C730
0x809F9C: mov     ebx, [ebx+18h]
0x809F9F: mov     ebp, [ebp+8]
0x809FA2: mov     edx, [ebx]
0x809FA4: mov     eax, [edx+8]
0x809FA7: push    ebp
0x809FA8: mov     ecx, ebx
0x809FAA: call    eax
0x809FAC: mov     ecx, [esi]
0x809FAE: push    0
0x809FB0: push    4
0x809FB2: push    17h
0x809FB4: call    sub_76C730
0x809FB9: push    0
0x809FBB: push    1
0x809FBD: push    0Eh
0x809FBF: jmp     short loc_809FFA
0x809FC1: push    1
0x809FC3: push    1Bh
0x809FC5: call    sub_76C730
0x809FCA: mov     ecx, [esi]
0x809FCC: push    0
0x809FCE: push    3
0x809FD0: push    17h
0x809FD2: call    sub_76C730
0x809FD7: push    0
0x809FD9: push    0
0x809FDB: push    0Eh
0x809FDD: jmp     short loc_809FFA
0x809FDF: add     eax, 0FFFFFFFDh
0x809FE2: cmp     eax, 0DBh ; 'Û'
0x809FE7: ja      short loc_80A003
0x809FE9: cmp     [esp+58h+var_41], 0
0x809FEE: push    0
0x809FF0: jz      short loc_809FF6
0x809FF2: push    1
0x809FF4: jmp     short loc_809FF8
0x809FF6: push    0
0x809FF8: push    1Bh
0x809FFA: mov     esi, [esi]
0x809FFC: mov     ecx, esi
0x809FFE: call    sub_76C730
0x80A003: mov     eax, ds:0B42EB8h
0x80A008: test    eax, eax
0x80A00A: jz      short loc_80A01A
0x80A00C: cmp     byte ptr [eax+7], 0
0x80A010: jnz     short loc_80A01A
0x80A012: fldz
0x80A014: fstp    dword ptr ds:0B4668Ch
0x80A01A: lea     ecx, [esp+58h+var_34]; this
0x80A01E: mov     [esp+58h+var_4], 0FFFFFFFFh
0x80A026: call    sub_7016A0
0x80A02B: xor     eax, eax
0x80A02D: jmp     short loc_80A059
0x80A02F: mov     ecx, [esp+58h+arg_18]
0x80A033: mov     edx, [esp+58h+arg_14]
0x80A037: mov     eax, [esp+58h+arg_10]
0x80A03B: push    ecx
0x80A03C: mov     ecx, [esp+5Ch+arg_C]
0x80A040: push    edx
0x80A041: mov     edx, [esp+60h+arg_8]
0x80A045: push    eax
0x80A046: mov     eax, [esp+64h+arg_4]
0x80A04A: push    ecx
0x80A04B: mov     ecx, [esp+68h+arg_0]
0x80A04F: push    edx
0x80A050: push    eax
0x80A051: push    ecx
0x80A052: mov     ecx, ebx
0x80A054: call    sub_7C9F30
0x80A059: mov     ecx, [esp+58h+var_C]
0x80A05D: mov     large fs:0, ecx
0x80A064: pop     ecx
0x80A065: pop     edi
0x80A066: pop     esi
0x80A067: pop     ebp
0x80A068: pop     ebx
0x80A069: add     esp, 44h
0x80A06C: retn    1Ch
