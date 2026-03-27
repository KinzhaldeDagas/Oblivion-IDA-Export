0x652A20: sub     esp, 3Ch
0x652A23: push    ebx
0x652A24: push    ebp
0x652A25: push    esi
0x652A26: push    edi
0x652A27: mov     edi, ecx
0x652A29: mov     eax, [edi]
0x652A2B: mov     edx, [eax+184h]
0x652A31: call    edx
0x652A33: cmp     byte ptr [esp+4Ch+arg_4], 0
0x652A38: mov     esi, [esp+4Ch+arg_0]
0x652A3C: mov     ebx, eax
0x652A3E: jnz     short loc_652A73
0x652A40: cmp     byte ptr [edi+0D0h], 0
0x652A47: jz      short loc_652AC7
0x652A49: fld     dword ptr ds:0A30634h
0x652A4F: push    ecx
0x652A50: fstp    [esp+50h+var_50]; float
0x652A53: push    0; char
0x652A55: push    esi; int
0x652A56: mov     ecx, ebx
0x652A58: call    sub_566DC0
0x652A5D: test    al, al
0x652A5F: jnz     short loc_652AC7
0x652A61: mov     ecx, [edi+34h]
0x652A64: test    ecx, ecx
0x652A66: jz      short loc_652A73
0x652A68: mov     eax, [ecx]
0x652A6A: mov     edx, [eax+2Ch]
0x652A6D: call    edx
0x652A6F: test    al, al
0x652A71: jnz     short loc_652AC7
0x652A73: mov     eax, [edi]
0x652A75: push    esi
0x652A76: lea     ecx, [esp+50h+var_30]
0x652A7A: push    ecx
0x652A7B: mov     ecx, ebx
0x652A7D: mov     [esp+54h+arg_4], eax
0x652A81: call    sub_566B30
0x652A86: push    esi
0x652A87: mov     ecx, ebx
0x652A89: mov     ebp, eax
0x652A8B: call    sub_566940
0x652A90: push    eax
0x652A91: push    esi
0x652A92: mov     ecx, ebx
0x652A94: call    sub_566A40
0x652A99: mov     edx, [ebp+0]
0x652A9C: mov     ecx, [ebp+4]
0x652A9F: push    eax
0x652AA0: sub     esp, 0Ch
0x652AA3: mov     eax, esp
0x652AA5: mov     [eax], edx
0x652AA7: mov     edx, [ebp+8]
0x652AAA: mov     [eax+4], ecx
0x652AAD: mov     [eax+8], edx
0x652AB0: mov     eax, [esp+60h+arg_4]
0x652AB4: mov     edx, [eax+3DCh]
0x652ABA: push    esi
0x652ABB: mov     ecx, edi
0x652ABD: call    edx
0x652ABF: test    al, al
0x652AC1: jz      loc_65350A
0x652AC7: push    esi
0x652AC8: lea     eax, [esp+50h+var_30]
0x652ACC: push    eax
0x652ACD: mov     ecx, ebx
0x652ACF: call    sub_566B30
0x652AD4: push    eax
0x652AD5: mov     ecx, esi
0x652AD7: call    sub_4D7E30
0x652ADC: fstp    dword ptr [esp+4Ch+var_3C]
0x652AE0: push    1
0x652AE2: push    esi
0x652AE3: mov     ecx, ebx
0x652AE5: call    sub_5677B0
0x652AEA: fstp    [esp+4Ch+arg_0]
0x652AEE: mov     ecx, [ebx+24h]
0x652AF1: xor     ebp, ebp
0x652AF3: test    ecx, ecx
0x652AF5: mov     [esp+4Ch+arg_4], ebp
0x652AF9: jz      short loc_652B06
0x652AFB: call    sub_5697E0
0x652B00: mov     ebp, eax
0x652B02: mov     [esp+4Ch+arg_4], eax
0x652B06: mov     eax, [edi+30h]
0x652B09: test    eax, eax
0x652B0B: jz      short loc_652B1C
0x652B0D: cmp     dword ptr [edi+0C0h], 0
0x652B14: jnz     short loc_652B1C
0x652B16: mov     ebp, eax
0x652B18: mov     [esp+4Ch+arg_4], ebp
0x652B1C: test    ebp, ebp
0x652B1E: jz      short loc_652B6E
0x652B20: mov     edx, [esi]
0x652B22: mov     eax, [edx+380h]
0x652B28: mov     ecx, esi
0x652B2A: call    eax
0x652B2C: cmp     ebp, eax
0x652B2E: jnz     short loc_652B6E
0x652B30: mov     edx, [ebp+0]
0x652B33: mov     eax, [edx+198h]
0x652B39: push    0
0x652B3B: mov     ecx, ebp
0x652B3D: call    eax
0x652B3F: test    al, al
0x652B41: jz      short loc_652B6E
0x652B43: mov     edx, [edi]
0x652B45: mov     eax, [edx+178h]
0x652B4B: push    0
0x652B4D: mov     ecx, edi
0x652B4F: call    eax
0x652B51: mov     edx, [esi]
0x652B53: mov     eax, [edx+384h]
0x652B59: push    0
0x652B5B: mov     ecx, esi
0x652B5D: call    eax
0x652B5F: mov     edx, [ebp+0]
0x652B62: mov     eax, [edx+38Ch]
0x652B68: push    0
0x652B6A: mov     ecx, ebp
0x652B6C: call    eax
0x652B6E: cmp     byte ptr [ebx+20h], 5
0x652B72: jnz     short loc_652B7E
0x652B74: fld     dword ptr ds:0A417B4h
0x652B7A: fstp    [esp+4Ch+arg_0]
0x652B7E: test    ebp, ebp
0x652B80: jz      loc_652C48
0x652B86: mov     ecx, ebp
0x652B88: call    sub_4D74B0
0x652B8D: test    al, al
0x652B8F: jz      loc_652C48
0x652B95: cmp     byte ptr [ebx+20h], 5
0x652B99: jz      loc_652C48
0x652B9F: cmp     dword ptr [edi+120h], 0
0x652BA6: jnz     short loc_652BAE
0x652BA8: mov     [edi+120h], ebp
0x652BAE: mov     edx, [edi]
0x652BB0: mov     eax, [edx+36Ch]
0x652BB6: mov     ecx, edi
0x652BB8: call    eax
0x652BBA: test    eax, eax
0x652BBC: jnz     loc_652FA5
0x652BC2: mov     edx, [edi]
0x652BC4: mov     eax, [edx+36Ch]
0x652BCA: mov     ecx, edi
0x652BCC: call    eax
0x652BCE: test    eax, eax
0x652BD0: jnz     short loc_652C48
0x652BD2: movzx   ecx, byte ptr [edi+124h]
0x652BD9: push    ecx
0x652BDA: mov     ecx, [edi+120h]
0x652BE0: call    sub_4D72C0
0x652BE5: test    al, al
0x652BE7: jz      short loc_652C48
0x652BE9: cmp     byte ptr [edi+0D0h], 0
0x652BF0: jnz     short loc_652C48
0x652BF2: fldz
0x652BF4: push    ecx
0x652BF5: lea     ebx, [edi+128h]
0x652BFB: fstp    [esp+50h+var_50]; float
0x652BFE: mov     ecx, ebx
0x652C00: mov     dword ptr [edi+120h], 0
0x652C0A: call    sub_6FAEE0
0x652C0F: mov     byte ptr [edi+136h], 0
0x652C16: mov     edx, ds:0B3F9A8h
0x652C1C: mov     [ebx], edx
0x652C1E: mov     eax, ds:0B3F9ACh
0x652C23: mov     edx, [edi]
0x652C25: mov     [ebx+4], eax
0x652C28: mov     ecx, ds:0B3F9B0h
0x652C2E: mov     eax, [edx+194h]
0x652C34: mov     [ebx+8], ecx
0x652C37: push    esi
0x652C38: mov     ecx, edi
0x652C3A: mov     byte ptr [edi+124h], 7Fh
0x652C41: call    eax
0x652C43: jmp     loc_6534FB
0x652C48: fld     dword ptr ds:0A30634h
0x652C4E: push    ecx
0x652C4F: fstp    [esp+50h+var_50]; float
0x652C52: push    0; char
0x652C54: push    esi; int
0x652C55: mov     ecx, ebx
0x652C57: call    sub_566DC0
0x652C5C: test    al, al
0x652C5E: jnz     loc_652FA5
0x652C64: mov     ecx, [edi+34h]
0x652C67: test    ecx, ecx
0x652C69: jz      short loc_652C7A
0x652C6B: mov     edx, [ecx]
0x652C6D: mov     eax, [edx+2Ch]
0x652C70: call    eax
0x652C72: test    al, al
0x652C74: jnz     loc_652FA5
0x652C7A: test    esi, esi
0x652C7C: jz      loc_65350A
0x652C82: mov     edx, [esi]
0x652C84: mov     eax, [edx+380h]
0x652C8A: mov     ecx, esi
0x652C8C: call    eax
0x652C8E: test    eax, eax
0x652C90: jnz     short loc_652CCA
0x652C92: mov     edx, [edi]
0x652C94: mov     eax, [edx+36Ch]
0x652C9A: mov     ecx, edi
0x652C9C: call    eax
0x652C9E: cmp     eax, 4
0x652CA1: jz      short loc_652CB4
0x652CA3: mov     edx, [edi]
0x652CA5: mov     eax, [edx+36Ch]
0x652CAB: mov     ecx, edi
0x652CAD: call    eax
0x652CAF: cmp     eax, 9
0x652CB2: jnz     short loc_652CCA
0x652CB4: mov     edx, [esi]
0x652CB6: mov     eax, [edx+320h]
0x652CBC: mov     ecx, esi
0x652CBE: call    eax
0x652CC0: pop     edi
0x652CC1: pop     esi
0x652CC2: pop     ebp
0x652CC3: pop     ebx
0x652CC4: add     esp, 3Ch
0x652CC7: retn    10h
0x652CCA: test    ebp, ebp
0x652CCC: jz      loc_652DC5
0x652CD2: mov     ecx, ebp
0x652CD4: call    sub_4D74B0
0x652CD9: test    al, al
0x652CDB: jz      loc_652DC5
0x652CE1: mov     edx, [esi]
0x652CE3: mov     eax, [edx+174h]
0x652CE9: mov     ecx, esi
0x652CEB: call    eax
0x652CED: cmp     dword ptr [edi+120h], 0
0x652CF4: mov     ecx, [eax]
0x652CF6: mov     dword ptr [esp+4Ch+var_3C], ecx
0x652CFA: mov     edx, [eax+4]
0x652CFD: mov     dword ptr [esp+4Ch+var_3C+4], edx
0x652D01: mov     eax, [eax+8]
0x652D04: mov     [esp+4Ch+var_34], eax
0x652D08: mov     [esp+4Ch+arg_8], 0
0x652D10: jnz     short loc_652D18
0x652D12: mov     [edi+120h], ebp
0x652D18: lea     ecx, [esp+4Ch+arg_8]
0x652D1C: push    ecx
0x652D1D: mov     ecx, [edi+120h]
0x652D23: lea     ebp, [edi+128h]
0x652D29: push    ebp
0x652D2A: push    1
0x652D2C: push    1
0x652D2E: lea     edx, [esp+5Ch+var_3C]
0x652D32: push    edx
0x652D33: call    sub_4DBAE0
0x652D38: test    al, al
0x652D3A: mov     eax, [edi]
0x652D3C: push    esi
0x652D3D: jz      short loc_652D9A
0x652D3F: mov     ecx, ebx
0x652D41: mov     [esp+50h+arg_0], eax
0x652D45: call    sub_566940
0x652D4A: push    eax
0x652D4B: push    esi
0x652D4C: mov     ecx, ebx
0x652D4E: call    sub_566A40
0x652D53: mov     ecx, [ebp+0]
0x652D56: mov     edx, [ebp+4]
0x652D59: push    eax
0x652D5A: sub     esp, 0Ch
0x652D5D: mov     eax, esp
0x652D5F: mov     [eax], ecx
0x652D61: mov     ecx, [ebp+8]
0x652D64: mov     [eax+4], edx
0x652D67: mov     edx, [esp+60h+arg_0]
0x652D6B: mov     [eax+8], ecx
0x652D6E: mov     eax, [edx+3DCh]
0x652D74: push    esi
0x652D75: mov     ecx, edi
0x652D77: call    eax
0x652D79: test    al, al
0x652D7B: jz      loc_65350A
0x652D81: mov     ecx, [esp+4Ch+arg_4]
0x652D85: mov     dl, byte ptr [esp+4Ch+arg_8]
0x652D89: mov     [edi+120h], ecx
0x652D8F: mov     [edi+124h], dl
0x652D95: jmp     loc_652EE4
0x652D9A: mov     edx, [eax+194h]
0x652DA0: mov     ecx, edi
0x652DA2: call    edx
0x652DA4: mov     eax, [ebx+18h]
0x652DA7: mov     ebp, [edi]
0x652DA9: push    eax
0x652DAA: call    sub_673980
0x652DAF: sub     eax, 1
0x652DB2: add     esp, 4
0x652DB5: push    eax
0x652DB6: mov     eax, [ebp+17Ch]
0x652DBC: mov     ecx, edi
0x652DBE: call    eax
0x652DC0: jmp     loc_652EE4
0x652DC5: mov     ecx, [ebx+24h]
0x652DC8: test    ecx, ecx
0x652DCA: jz      loc_652EE4
0x652DD0: call    sub_5697E0
0x652DD5: test    eax, eax
0x652DD7: jz      loc_652EE4
0x652DDD: mov     ecx, [ebx+24h]
0x652DE0: push    0; int
0x652DE2: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x652DE7: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x652DEC: push    0; int
0x652DEE: call    sub_5697E0
0x652DF3: push    eax; void *
0x652DF4: call    OblivionDynamicCast
0x652DF9: mov     ebp, eax
0x652DFB: add     esp, 14h
0x652DFE: test    ebp, ebp
0x652E00: jz      loc_652EE4
0x652E06: mov     edx, [ebp+0]
0x652E09: mov     eax, [edx+174h]
0x652E0F: mov     ecx, ebp
0x652E11: call    eax
0x652E13: push    eax
0x652E14: lea     ecx, [esp+50h+var_30]
0x652E18: push    ecx
0x652E19: lea     ecx, [edi+0D4h]
0x652E1F: call    sub_4121A0
0x652E24: mov     ecx, eax
0x652E26: call    sub_404C90
0x652E2B: fstp    [esp+4Ch+arg_8]
0x652E2F: mov     ecx, offset flt_B36A88
0x652E34: call    GameSetting_GetSafeFloatPointer
0x652E39: fld     [esp+4Ch+arg_8]
0x652E3D: fld     dword ptr [eax]
0x652E3F: fcompp
0x652E41: fnstsw  ax
0x652E43: test    ah, 5
0x652E46: jnp     short loc_652E66
0x652E48: fld     dword ptr [esp+4Ch+var_3C]
0x652E4C: fld     [esp+4Ch+arg_0]
0x652E50: fcompp
0x652E52: fnstsw  ax
0x652E54: test    ah, 5
0x652E57: jp      loc_652EE4
0x652E5D: cmp     byte ptr [edi+0D0h], 0
0x652E64: jz      short loc_652EE4
0x652E66: mov     edx, [edi]
0x652E68: mov     eax, [ebp+0]
0x652E6B: mov     [esp+4Ch+arg_4], edx
0x652E6F: mov     edx, [eax+174h]
0x652E75: mov     ecx, ebp
0x652E77: call    edx
0x652E79: mov     ecx, ebp; this
0x652E7B: mov     [esp+4Ch+arg_8], eax
0x652E7F: call    TESObjectREFR_GetWorldSpace
0x652E84: push    eax
0x652E85: mov     ecx, ebp; this
0x652E87: call    TESObjectREFR_GetParentCell
0x652E8C: mov     ecx, [esp+50h+arg_8]
0x652E90: mov     edx, [ecx]
0x652E92: push    eax
0x652E93: sub     esp, 0Ch
0x652E96: mov     eax, esp
0x652E98: mov     [eax], edx
0x652E9A: mov     edx, [ecx+4]
0x652E9D: mov     ecx, [ecx+8]
0x652EA0: mov     [eax+4], edx
0x652EA3: mov     edx, [esp+60h+arg_4]
0x652EA7: mov     [eax+8], ecx
0x652EAA: mov     eax, [edx+3DCh]
0x652EB0: push    esi
0x652EB1: mov     ecx, edi
0x652EB3: call    eax
0x652EB5: test    al, al
0x652EB7: jz      loc_65350A
0x652EBD: mov     edx, [ebp+0]
0x652EC0: mov     eax, [edx+174h]
0x652EC6: mov     ecx, ebp
0x652EC8: call    eax
0x652ECA: mov     ecx, [eax]
0x652ECC: mov     [edi+0D4h], ecx
0x652ED2: mov     edx, [eax+4]
0x652ED5: mov     [edi+0D8h], edx
0x652EDB: mov     eax, [eax+8]
0x652EDE: mov     [edi+0DCh], eax
0x652EE4: push    3Ah ; ':'; a1
0x652EE6: call    TESForm_LookupByFormID
0x652EEB: add     esp, 4
0x652EEE: mov     ecx, offset TimeGlobals
0x652EF3: mov     ebp, eax
0x652EF5: call    TimeGlobals_GetGameHour
0x652EFA: fstp    [esp+4Ch+arg_8]
0x652EFE: fld     [esp+4Ch+arg_8]
0x652F02: mov     ecx, esi; this
0x652F04: fstp    [esp+4Ch+var_3C]
0x652F08: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x652F0D: fcomp   [esp+4Ch+var_3C]
0x652F11: fnstsw  ax
0x652F13: test    ah, 41h
0x652F16: jnz     short loc_652F26
0x652F18: fld     [esp+4Ch+arg_8]
0x652F1C: fadd    qword ptr ds:0A2F920h
0x652F22: fstp    [esp+4Ch+arg_8]
0x652F26: fld     [esp+4Ch+arg_8]
0x652F2A: mov     ecx, esi; this
0x652F2C: fstp    [esp+4Ch+var_3C]
0x652F30: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x652F35: fsubr   [esp+4Ch+var_3C]
0x652F39: push    1
0x652F3B: push    esi
0x652F3C: mov     ecx, ebx
0x652F3E: fstp    [esp+54h+arg_4]
0x652F42: fld     dword ptr [ebp+24h]
0x652F45: mov     ebp, [edi]
0x652F47: fstp    [esp+54h+arg_8]
0x652F4B: call    sub_5677B0
0x652F50: sub     esp, 8
0x652F53: fstp    [esp+54h+var_50]
0x652F57: mov     ecx, ebx
0x652F59: fld     [esp+54h+arg_8]
0x652F5D: fdivr   qword ptr ds:0A2F938h
0x652F63: fmul    [esp+54h+arg_4]
0x652F67: fstp    [esp+54h+arg_8]
0x652F6B: fld     [esp+54h+arg_8]
0x652F6F: fstp    [esp+54h+var_54]
0x652F72: push    esi
0x652F73: call    sub_566940
0x652F78: push    eax
0x652F79: push    esi
0x652F7A: mov     ecx, ebx
0x652F7C: call    sub_566A40
0x652F81: push    eax
0x652F82: push    esi
0x652F83: lea     ecx, [esp+60h+var_30]
0x652F87: push    ecx
0x652F88: mov     ecx, ebx
0x652F8A: call    sub_566B30
0x652F8F: mov     edx, [ebp+418h]
0x652F95: push    eax
0x652F96: push    esi
0x652F97: mov     ecx, edi
0x652F99: call    edx
0x652F9B: pop     edi
0x652F9C: pop     esi
0x652F9D: pop     ebp
0x652F9E: pop     ebx
0x652F9F: add     esp, 3Ch
0x652FA2: retn    10h
0x652FA5: cmp     byte ptr [edi+84h], 0
0x652FAC: jnz     short loc_653007
0x652FAE: mov     ecx, ebx
0x652FB0: call    sub_565DD0
0x652FB5: test    al, al
0x652FB7: jz      short loc_653000
0x652FB9: mov     eax, [esi]
0x652FBB: fld     dword ptr ds:0A5B6C0h
0x652FC1: mov     edx, [eax+174h]
0x652FC7: push    esi; a7
0x652FC8: push    offset sub_645A30; a6
0x652FCD: push    ecx
0x652FCE: mov     ecx, esi
0x652FD0: fstp    [esp+58h+a5]; a5
0x652FD3: call    edx
0x652FD5: fld     dword ptr ds:0A5B6C0h
0x652FDB: push    eax; a4
0x652FDC: mov     eax, [esi]
0x652FDE: mov     edx, [eax+174h]
0x652FE4: push    ecx
0x652FE5: mov     ecx, esi
0x652FE7: fstp    [esp+60h+a3]; a3
0x652FEA: call    edx
0x652FEC: push    eax; a2
0x652FED: mov     ecx, esi; this
0x652FEF: call    TESObjectREFR_GetParentCell
0x652FF4: mov     ecx, ds:0B33A98h
0x652FFA: push    eax; a1
0x652FFB: call    sub_446B90
0x653000: mov     byte ptr [edi+84h], 1
0x653007: mov     ecx, ebx
0x653009: call    sub_565DE0
0x65300E: test    al, al
0x653010: jz      short loc_653059
0x653012: mov     eax, [esi]
0x653014: fld     dword ptr ds:0A5B6C0h
0x65301A: mov     edx, [eax+174h]
0x653020: push    esi; a7
0x653021: push    offset sub_645AF0; a6
0x653026: push    ecx
0x653027: mov     ecx, esi
0x653029: fstp    [esp+58h+a5]; a5
0x65302C: call    edx
0x65302E: fld     dword ptr ds:0A5B6C0h
0x653034: push    eax; a4
0x653035: mov     eax, [esi]
0x653037: mov     edx, [eax+174h]
0x65303D: push    ecx
0x65303E: mov     ecx, esi
0x653040: fstp    [esp+60h+a3]; a3
0x653043: call    edx
0x653045: push    eax; a2
0x653046: mov     ecx, esi; this
0x653048: call    TESObjectREFR_GetParentCell
0x65304D: mov     ecx, ds:0B33A98h
0x653053: push    eax; a1
0x653054: call    sub_446B90
0x653059: cmp     byte ptr [edi+169h], 0
0x653060: jnz     short loc_65306C
0x653062: mov     eax, [ebx+1Ch]
0x653065: shr     eax, 14h
0x653068: test    al, 1
0x65306A: jnz     short loc_65307B
0x65306C: mov     ecx, [ebx+1Ch]
0x65306F: shr     ecx, 15h
0x653072: test    cl, 1
0x653075: jz      loc_65312B
0x65307B: mov     byte ptr [edi+169h], 1
0x653082: mov     edx, [ebx+1Ch]
0x653085: shr     edx, 14h
0x653088: test    dl, 1
0x65308B: jz      loc_653331
0x653091: mov     eax, [esi]
0x653093: mov     edx, [eax+170h]
0x653099: push    0; int
0x65309B: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6530A0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6530A5: push    0; int
0x6530A7: mov     ecx, esi
0x6530A9: call    edx
0x6530AB: push    eax; void *
0x6530AC: call    OblivionDynamicCast
0x6530B1: add     esp, 14h
0x6530B4: push    0; int
0x6530B6: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6530BB: mov     ebp, eax
0x6530BD: mov     eax, [esi]
0x6530BF: mov     edx, [eax+170h]
0x6530C5: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6530CA: push    0; int
0x6530CC: mov     ecx, esi
0x6530CE: call    edx
0x6530D0: push    eax; void *
0x6530D1: call    OblivionDynamicCast
0x6530D6: mov     edx, [edi+8]
0x6530D9: add     esp, 14h
0x6530DC: test    edx, edx
0x6530DE: mov     byte ptr [esp+4Ch+var_3C], 1
0x6530E3: mov     byte ptr [esp+4Ch+arg_0], 1
0x6530E8: jz      short loc_653109
0x6530EA: mov     edx, [edx+1Ch]
0x6530ED: mov     ecx, edx
0x6530EF: shr     ecx, 14h
0x6530F2: test    cl, 1
0x6530F5: jz      short loc_6530FC
0x6530F7: mov     byte ptr [esp+4Ch+var_3C], 0
0x6530FC: shr     edx, 15h
0x6530FF: test    dl, 1
0x653102: jz      short loc_653109
0x653104: mov     byte ptr [esp+4Ch+arg_0], 0
0x653109: test    ebp, ebp
0x65310B: jz      loc_653310
0x653111: mov     edx, [esp+4Ch+arg_0]
0x653115: mov     eax, dword ptr [esp+4Ch+var_3C]
0x653119: push    1; char
0x65311B: push    0; int
0x65311D: push    edx; int
0x65311E: push    eax; int
0x65311F: push    esi; int
0x653120: mov     ecx, ebp; int
0x653122: call    sub_5227A0
0x653127: mov     ebp, [esp+4Ch+arg_4]
0x65312B: test    ebp, ebp
0x65312D: jz      loc_653463
0x653133: mov     ecx, ebp
0x653135: call    sub_4D74B0
0x65313A: test    al, al
0x65313C: jz      loc_65344E
0x653142: mov     edx, [edi]
0x653144: mov     eax, [edx+36Ch]
0x65314A: mov     ecx, edi
0x65314C: call    eax
0x65314E: cmp     eax, 4
0x653151: jz      loc_653421
0x653157: mov     edx, [edi]
0x653159: mov     eax, [edx+36Ch]
0x65315F: mov     ecx, edi
0x653161: call    eax
0x653163: cmp     eax, 9
0x653166: jz      loc_653421
0x65316C: mov     ecx, ds:0B333C4h; this
0x653172: call    PlayerCharacter__IsSleeping?
0x653177: test    al, al
0x653179: jz      loc_65340A
0x65317F: mov     ecx, [esp+4Ch+arg_4]
0x653183: mov     edx, [ecx]
0x653185: mov     eax, [edx+170h]
0x65318B: push    0; int
0x65318D: push    offset ??_R0?AVTESFurniture@@@8; struct TypeDescriptor *
0x653192: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x653197: push    0; int
0x653199: call    eax
0x65319B: push    eax; void *
0x65319C: call    OblivionDynamicCast
0x6531A1: mov     edx, [edi]
0x6531A3: mov     [esp+60h+arg_8], eax
0x6531A7: mov     eax, [edx+380h]
0x6531AD: add     esp, 14h
0x6531B0: mov     ecx, edi
0x6531B2: call    eax
0x6531B4: push    1
0x6531B6: mov     ecx, esi
0x6531B8: mov     ebp, eax
0x6531BA: call    sub_65AC20
0x6531BF: movzx   eax, word ptr [ebp+0Ch]
0x6531C3: mov     [esp+4Ch+arg_0], eax
0x6531C7: mov     edx, [esi]
0x6531C9: mov     edx, [edx+1E8h]
0x6531CF: fild    [esp+4Ch+arg_0]
0x6531D3: push    ecx
0x6531D4: mov     ecx, esi
0x6531D6: fdiv    qword ptr ds:0A2FC70h
0x6531DC: fstp    [esp+50h+arg_0]
0x6531E0: fld     [esp+50h+arg_0]
0x6531E4: fstp    [esp+50h+var_50]
0x6531E7: call    edx
0x6531E9: movzx   eax, byte ptr [ebp+0Eh]
0x6531ED: mov     edx, [esi]
0x6531EF: mov     [esp+4Ch+arg_0], eax
0x6531F3: mov     eax, [edx+0ECh]
0x6531F9: mov     ecx, esi
0x6531FB: call    eax
0x6531FD: push    ecx
0x6531FE: mov     ecx, [esp+50h+arg_0]
0x653202: fstp    [esp+50h+var_50]; float
0x653205: push    ecx; int
0x653206: mov     ecx, [esp+54h+arg_8]
0x65320A: lea     edx, [esp+54h+var_3C]
0x65320E: push    edx; int
0x65320F: call    sub_4AEB40
0x653214: movzx   eax, word ptr [ebp+0Ch]
0x653218: mov     [esp+4Ch+arg_0], eax
0x65321C: push    ecx
0x65321D: lea     ecx, [esp+50h+var_24]
0x653221: fild    [esp+50h+arg_0]
0x653225: fdiv    qword ptr ds:0A2FC70h
0x65322B: fstp    [esp+50h+arg_0]
0x65322F: fld     [esp+50h+arg_0]
0x653233: fstp    [esp+50h+var_50]; float
0x653236: call    NiMatrix33_InitRotationTransform
0x65323B: lea     ecx, [esp+4Ch+var_3C]
0x65323F: push    ecx
0x653240: lea     edx, [esp+50h+var_30]
0x653244: push    edx
0x653245: lea     ecx, [esp+54h+var_24]
0x653249: call    sub_7101F0
0x65324E: mov     ecx, [eax]
0x653250: mov     dword ptr [esp+4Ch+var_3C], ecx
0x653254: mov     edx, [eax+4]
0x653257: movzx   ecx, byte ptr [edi+124h]
0x65325E: push    1
0x653260: mov     dword ptr [esp+50h+var_3C+4], edx
0x653264: mov     eax, [eax+8]
0x653267: push    ecx
0x653268: mov     ecx, [esp+54h+arg_4]
0x65326C: mov     [esp+54h+var_34], eax
0x653270: call    sub_4D7300
0x653275: fld     dword ptr [ebp+0]
0x653278: fadd    dword ptr [esp+4Ch+var_3C]
0x65327C: fstp    [esp+4Ch+var_30]
0x653280: fld     dword ptr [ebp+4]
0x653283: fadd    dword ptr [esp+4Ch+var_3C+4]
0x653287: fstp    [esp+4Ch+var_2C]
0x65328B: fld     dword ptr [ebp+8]
0x65328E: fadd    [esp+4Ch+var_34]
0x653292: mov     edx, [esi]
0x653294: fstp    [esp+4Ch+var_28]
0x653298: mov     edx, [edx+1CCh]
0x65329E: lea     eax, [esp+4Ch+var_30]
0x6532A2: push    eax
0x6532A3: mov     ecx, esi
0x6532A5: call    edx
0x6532A7: movzx   eax, byte ptr [ebp+0Eh]
0x6532AB: mov     ecx, [esp+4Ch+arg_8]
0x6532AF: push    eax
0x6532B0: call    sub_4AEBE0
0x6532B5: push    ecx
0x6532B6: mov     ecx, esi
0x6532B8: fstp    [esp+50h+var_50]; float
0x6532BB: call    sub_659B90
0x6532C0: cmp     byte ptr [ebx+20h], 4
0x6532C4: mov     byte ptr [esp+4Ch+arg_8], 0
0x6532C9: jnz     loc_653364
0x6532CF: movzx   ecx, byte ptr [edi+124h]
0x6532D6: mov     edx, [edi+120h]
0x6532DC: mov     eax, [edi]
0x6532DE: mov     eax, [eax+370h]
0x6532E4: push    ecx
0x6532E5: push    edx
0x6532E6: push    6
0x6532E8: push    esi
0x6532E9: mov     ecx, edi
0x6532EB: mov     bl, 1
0x6532ED: call    eax
0x6532EF: mov     ecx, [esi+58h]
0x6532F2: mov     edx, [ecx]
0x6532F4: mov     eax, [edx+17Ch]
0x6532FA: push    1
0x6532FC: call    eax
0x6532FE: mov     ecx, [esi+58h]
0x653301: mov     edx, [ecx]
0x653303: mov     eax, [edx+80h]
0x653309: push    0
0x65330B: push    esi
0x65330C: call    eax
0x65330E: jmp     short loc_653386
0x653310: test    eax, eax
0x653312: jz      loc_653127
0x653318: mov     ecx, [esp+4Ch+arg_0]
0x65331C: mov     edx, dword ptr [esp+4Ch+var_3C]
0x653320: push    1
0x653322: push    ecx
0x653323: push    edx
0x653324: push    esi
0x653325: mov     ecx, eax
0x653327: call    sub_51E240
0x65332C: jmp     loc_653127
0x653331: mov     eax, [edi]
0x653333: mov     edx, [eax+0ECh]
0x653339: push    1
0x65333B: mov     ecx, edi
0x65333D: call    edx
0x65333F: test    eax, eax
0x653341: jz      loc_65312B
0x653347: mov     ecx, [eax]
0x653349: mov     edx, [ecx]
0x65334B: mov     eax, [eax+8]
0x65334E: push    0
0x653350: push    0
0x653352: push    0
0x653354: push    edx
0x653355: push    1
0x653357: push    eax
0x653358: mov     ecx, esi
0x65335A: call    Actor_UnequipItem
0x65335F: jmp     loc_65312B
0x653364: movzx   eax, byte ptr [edi+124h]
0x65336B: mov     ecx, [edi+120h]
0x653371: mov     edx, [edi]
0x653373: mov     edx, [edx+370h]
0x653379: push    eax
0x65337A: push    ecx
0x65337B: push    1
0x65337D: push    esi
0x65337E: mov     ecx, edi
0x653380: call    edx
0x653382: mov     bl, byte ptr [esp+4Ch+arg_8]
0x653386: mov     eax, [edi]
0x653388: mov     edx, [eax+384h]
0x65338E: push    esi
0x65338F: mov     ecx, edi
0x653391: call    edx
0x653393: test    al, al
0x653395: jz      loc_65350A
0x65339B: test    bl, bl
0x65339D: jz      short loc_6533E2
0x65339F: mov     ecx, esi
0x6533A1: call    sub_5E12B0
0x6533A6: test    eax, eax
0x6533A8: jz      short loc_6533BA
0x6533AA: mov     edx, [eax]
0x6533AC: push    0
0x6533AE: mov     ecx, eax
0x6533B0: mov     eax, [edx+9Ch]
0x6533B6: push    1
0x6533B8: call    eax
0x6533BA: movzx   eax, byte ptr [edi+124h]
0x6533C1: mov     ecx, [edi+120h]
0x6533C7: mov     edx, [edi]
0x6533C9: mov     edx, [edx+370h]
0x6533CF: push    eax
0x6533D0: push    ecx
0x6533D1: push    9
0x6533D3: push    esi
0x6533D4: mov     ecx, edi
0x6533D6: call    edx
0x6533D8: pop     edi
0x6533D9: pop     esi
0x6533DA: pop     ebp
0x6533DB: pop     ebx
0x6533DC: add     esp, 3Ch
0x6533DF: retn    10h
0x6533E2: movzx   ecx, byte ptr [edi+124h]
0x6533E9: mov     edx, [edi+120h]
0x6533EF: mov     eax, [edi]
0x6533F1: mov     eax, [eax+370h]
0x6533F7: push    ecx
0x6533F8: push    edx
0x6533F9: push    4
0x6533FB: push    esi
0x6533FC: mov     ecx, edi
0x6533FE: call    eax
0x653400: pop     edi
0x653401: pop     esi
0x653402: pop     ebp
0x653403: pop     ebx
0x653404: add     esp, 3Ch
0x653407: retn    10h
0x65340A: mov     edx, [edi]
0x65340C: mov     eax, [edx+1B4h]
0x653412: push    esi
0x653413: mov     ecx, edi
0x653415: call    eax
0x653417: pop     edi
0x653418: pop     esi
0x653419: pop     ebp
0x65341A: pop     ebx
0x65341B: add     esp, 3Ch
0x65341E: retn    10h
0x653421: cmp     byte ptr [esp+4Ch+arg_8], 0
0x653426: jz      short loc_653437
0x653428: mov     edx, [edi]
0x65342A: mov     eax, [edx+188h]
0x653430: push    1
0x653432: push    esi
0x653433: mov     ecx, edi
0x653435: call    eax
0x653437: mov     edx, [edi]
0x653439: mov     eax, [edx+194h]
0x65343F: push    esi
0x653440: mov     ecx, edi
0x653442: call    eax
0x653444: pop     edi
0x653445: pop     esi
0x653446: pop     ebp
0x653447: pop     ebx
0x653448: add     esp, 3Ch
0x65344B: retn    10h
0x65344E: mov     edx, [ebp+0]
0x653451: mov     eax, [edx+170h]
0x653457: mov     ecx, ebp
0x653459: call    eax
0x65345B: cmp     eax, ds:0B35EB0h
0x653461: jz      short loc_653474
0x653463: mov     ecx, [ebx+24h]
0x653466: test    ecx, ecx
0x653468: jz      short loc_6534CB
0x65346A: call    sub_569740
0x65346F: cmp     eax, 3
0x653472: jnz     short loc_6534CB
0x653474: mov     ecx, [edi+34h]
0x653477: test    ecx, ecx
0x653479: jz      short loc_653486
0x65347B: mov     edx, [ecx]
0x65347D: mov     eax, [edx+2Ch]
0x653480: call    eax
0x653482: test    al, al
0x653484: jnz     short loc_6534CB
0x653486: mov     edx, [esi]
0x653488: mov     eax, [edx+18Ch]
0x65348E: mov     ecx, esi
0x653490: call    eax
0x653492: test    eax, eax
0x653494: jnz     short loc_6534CB
0x653496: test    ebp, ebp
0x653498: jz      short loc_65349F
0x65349A: fld     dword ptr [ebp+28h]
0x65349D: jmp     short loc_6534B3
0x65349F: mov     edx, [esi]
0x6534A1: mov     edx, [edx+0F0h]
0x6534A7: lea     eax, [esp+4Ch+var_30]
0x6534AB: push    eax
0x6534AC: mov     ecx, esi
0x6534AE: call    edx
0x6534B0: fld     dword ptr [eax+8]
0x6534B3: mov     eax, [esi]
0x6534B5: fstp    [esp+4Ch+arg_4]
0x6534B9: fld     [esp+4Ch+arg_4]
0x6534BD: mov     edx, [eax+1E8h]
0x6534C3: push    ecx
0x6534C4: mov     ecx, esi
0x6534C6: fstp    [esp+50h+var_50]
0x6534C9: call    edx
0x6534CB: mov     eax, [edi]
0x6534CD: mov     edx, [eax+194h]
0x6534D3: push    esi
0x6534D4: mov     ecx, edi
0x6534D6: call    edx
0x6534D8: cmp     byte ptr [esp+4Ch+arg_8], 0
0x6534DD: jz      short loc_65350A
0x6534DF: mov     ecx, [edi+34h]
0x6534E2: test    ecx, ecx
0x6534E4: jz      short loc_6534FB
0x6534E6: mov     eax, [ecx]
0x6534E8: mov     edx, [eax+2Ch]
0x6534EB: call    edx
0x6534ED: test    al, al
0x6534EF: jz      short loc_6534FB
0x6534F1: mov     eax, [ebx+1Ch]
0x6534F4: shr     eax, 2
0x6534F7: test    al, 1
0x6534F9: jnz     short loc_65350A
0x6534FB: mov     edx, [edi]
0x6534FD: mov     eax, [edx+188h]
0x653503: push    1
0x653505: push    esi
0x653506: mov     ecx, edi
0x653508: call    eax
0x65350A: pop     edi
0x65350B: pop     esi
0x65350C: pop     ebp
0x65350D: pop     ebx
0x65350E: add     esp, 3Ch
0x653511: retn    10h
