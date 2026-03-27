0x592A70: push    0FFFFFFFFh
0x592A72: push    offset SEH_592A70
0x592A77: mov     eax, large fs:0
0x592A7D: push    eax
0x592A7E: sub     esp, 2Ch
0x592A81: push    ebx
0x592A82: push    ebp
0x592A83: push    esi
0x592A84: push    edi
0x592A85: mov     eax, ds:0B30AACh
0x592A8A: xor     eax, esp
0x592A8C: push    eax
0x592A8D: lea     eax, [esp+4Ch+var_C]
0x592A91: mov     large fs:0, eax
0x592A97: mov     esi, ecx
0x592A99: call    sub_5894D0
0x592A9E: push    0FADh
0x592AA3: mov     ecx, esi
0x592AA5: mov     ebx, eax
0x592AA7: call    Tile_GetFloat
0x592AAC: fstp    [esp+4Ch+var_20]
0x592AB0: push    0FACh
0x592AB5: mov     ecx, esi
0x592AB7: call    Tile_GetFloat
0x592ABC: fchs
0x592ABE: push    0FCBh
0x592AC3: fstp    [esp+50h+var_1C]
0x592AC7: mov     ecx, esi
0x592AC9: call    Tile_GetFloat
0x592ACE: fstp    [esp+4Ch+var_34]
0x592AD2: push    0FCAh
0x592AD7: mov     ecx, esi
0x592AD9: call    Tile_GetFloat
0x592ADE: fstp    [esp+4Ch+var_38]
0x592AE2: push    0FCCh
0x592AE7: mov     ecx, esi
0x592AE9: call    Tile_GetFloat
0x592AEE: fmul    qword ptr ds:0A46050h
0x592AF4: push    0FCDh
0x592AF9: mov     ecx, esi
0x592AFB: fstp    [esp+50h+var_2C]
0x592AFF: call    Tile_GetFloat
0x592B04: fmul    qword ptr ds:0A46050h
0x592B0A: push    0FCEh
0x592B0F: mov     ecx, esi
0x592B11: fstp    [esp+50h+var_28]
0x592B15: call    Tile_GetFloat
0x592B1A: fmul    qword ptr ds:0A46050h
0x592B20: push    0FA7h
0x592B25: mov     ecx, esi
0x592B27: fstp    [esp+50h+var_24]
0x592B2B: call    Tile_GetFloat
0x592B30: fmul    qword ptr ds:0A46050h
0x592B36: push    30h ; '0'; Size
0x592B38: fstp    [esp+50h+var_30]
0x592B3C: call    FormHeapAlloc
0x592B41: push    0Ch; Size
0x592B43: mov     edi, eax
0x592B45: call    FormHeapAlloc
0x592B4A: fldz
0x592B4C: fst     [esp+54h+var_18]
0x592B50: mov     ebp, eax
0x592B52: mov     eax, [esp+54h+var_18]
0x592B56: fst     [esp+54h+var_14]
0x592B5A: mov     ecx, [esp+54h+var_14]
0x592B5E: fst     [esp+54h+var_10]
0x592B62: mov     edx, [esp+54h+var_10]
0x592B66: fst     [esp+54h+var_18]
0x592B6A: fst     [esp+54h+var_14]
0x592B6E: mov     [edi], eax
0x592B70: fld     [esp+54h+var_38]
0x592B74: mov     eax, [esp+54h+var_18]
0x592B78: fchs
0x592B7A: mov     [edi+4], ecx
0x592B7D: mov     ecx, [esp+54h+var_14]
0x592B81: fstp    [esp+54h+var_38]
0x592B85: fld     [esp+54h+var_38]
0x592B89: mov     [edi+8], edx
0x592B8C: fst     [esp+54h+var_10]
0x592B90: mov     [edi+0Ch], eax
0x592B93: fld     [esp+54h+var_34]
0x592B97: mov     edx, [esp+54h+var_10]
0x592B9B: fst     [esp+54h+var_18]
0x592B9F: mov     [edi+10h], ecx
0x592BA2: mov     eax, [esp+54h+var_18]
0x592BA6: fxch    st(2)
0x592BA8: fst     [esp+54h+var_14]
0x592BAC: mov     [edi+14h], edx
0x592BAF: mov     ecx, [esp+54h+var_14]
0x592BB3: fst     [esp+54h+var_10]
0x592BB7: mov     edx, [esp+54h+var_10]
0x592BBB: fxch    st(2)
0x592BBD: mov     [edi+18h], eax
0x592BC0: fstp    [esp+54h+var_18]
0x592BC4: mov     [edi+1Ch], ecx
0x592BC7: mov     [edi+20h], edx
0x592BCA: mov     eax, [esp+54h+var_18]
0x592BCE: fxch    st(1)
0x592BD0: mov     [edi+24h], eax
0x592BD3: fstp    [esp+54h+var_14]
0x592BD7: mov     ecx, [esp+54h+var_14]
0x592BDB: mov     [edi+28h], ecx
0x592BDE: fstp    [esp+54h+var_10]
0x592BE2: mov     edx, [esp+54h+var_10]
0x592BE6: mov     [edi+2Ch], edx
0x592BE9: mov     eax, 1
0x592BEE: mov     ecx, 2
0x592BF3: push    0C0h ; 'À'; Size
0x592BF8: mov     word ptr [ebp+0], 0
0x592BFE: mov     [ebp+2], ax
0x592C02: mov     [ebp+4], cx
0x592C06: mov     [ebp+6], cx
0x592C0A: mov     [ebp+8], ax
0x592C0E: mov     word ptr [ebp+0Ah], 3
0x592C14: call    FormHeapAlloc
0x592C19: add     esp, 0Ch
0x592C1C: mov     [esp+4Ch+var_34], eax
0x592C20: test    eax, eax
0x592C22: mov     [esp+4Ch+var_4], 0
0x592C2A: jz      short loc_592C47
0x592C2C: push    ebp
0x592C2D: push    2
0x592C2F: push    0
0x592C31: push    0
0x592C33: push    0
0x592C35: push    0
0x592C37: push    0
0x592C39: push    edi
0x592C3A: push    4
0x592C3C: mov     ecx, eax
0x592C3E: call    sub_7174B0
0x592C43: mov     edi, eax
0x592C45: jmp     short loc_592C49
0x592C47: xor     edi, edi
0x592C49: or      ebp, 0FFFFFFFFh
0x592C4C: push    5Ch ; '\'; Size
0x592C4E: mov     [esp+50h+var_4], ebp
0x592C52: call    FormHeapAlloc
0x592C57: add     esp, 4
0x592C5A: mov     [esp+4Ch+var_34], eax
0x592C5E: test    eax, eax
0x592C60: mov     [esp+4Ch+var_4], 1
0x592C68: jz      short loc_592C73
0x592C6A: mov     ecx, eax; this
0x592C6C: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x592C71: jmp     short loc_592C75
0x592C73: xor     eax, eax
0x592C75: fld     [esp+4Ch+var_30]
0x592C79: mov     [esp+4Ch+var_4], ebp
0x592C7D: fstp    dword ptr [eax+50h]
0x592C80: push    eax; a2
0x592C81: fld     [esp+50h+var_2C]
0x592C85: fstp    [esp+50h+var_18]
0x592C89: mov     ecx, [esp+50h+var_18]
0x592C8D: fld     [esp+50h+var_28]
0x592C91: mov     [eax+1Ch], ecx
0x592C94: mov     [eax+28h], ecx
0x592C97: fstp    [esp+50h+var_14]
0x592C9B: fld     [esp+50h+var_24]
0x592C9F: mov     edx, [esp+50h+var_14]
0x592CA3: mov     [eax+20h], edx
0x592CA6: fstp    [esp+50h+var_10]
0x592CAA: mov     ebp, [esp+50h+var_10]
0x592CAE: mov     [eax+2Ch], edx
0x592CB1: mov     [eax+24h], ebp
0x592CB4: mov     [eax+30h], ebp
0x592CB7: mov     ebp, 3
0x592CBC: add     [eax+54h], ebp
0x592CBF: mov     edx, ds:0B25AC4h
0x592CC5: mov     ecx, [eax+54h]
0x592CC8: mov     [eax+34h], edx
0x592CCB: mov     edx, ds:0B25AC8h
0x592CD1: mov     [eax+38h], edx
0x592CD4: mov     edx, ds:0B25ACCh
0x592CDA: add     ecx, 1
0x592CDD: mov     [eax+54h], ecx
0x592CE0: mov     ecx, edi; this
0x592CE2: mov     [eax+3Ch], edx
0x592CE5: call    sub_405680
0x592CEA: push    0FABh
0x592CEF: mov     ecx, esi
0x592CF1: call    Tile_GetFloat
0x592CF6: fmul    qword ptr ds:0A68FD0h
0x592CFC: push    0ECh ; 'ì'; Size
0x592D01: fstp    [esp+50h+var_24]
0x592D05: fld     [esp+50h+var_20]
0x592D09: fstp    [esp+50h+var_18]
0x592D0D: mov     eax, [esp+50h+var_18]
0x592D11: fld     [esp+50h+var_24]
0x592D15: mov     [edi+54h], eax
0x592D18: fstp    [esp+50h+var_14]
0x592D1C: mov     ecx, [esp+50h+var_14]
0x592D20: fld     [esp+50h+var_1C]
0x592D24: mov     [edi+58h], ecx
0x592D27: fstp    [esp+50h+var_10]
0x592D2B: mov     edx, [esp+50h+var_10]
0x592D2F: mov     [edi+5Ch], edx
0x592D32: call    FormHeapAlloc
0x592D37: add     esp, 4
0x592D3A: mov     [esp+4Ch+var_1C], eax
0x592D3E: test    eax, eax
0x592D40: mov     [esp+4Ch+var_4], 2
0x592D48: jz      short loc_592D53
0x592D4A: mov     ecx, eax
0x592D4C: call    sub_4A15F0
0x592D51: jmp     short loc_592D55
0x592D53: xor     eax, eax
0x592D55: mov     [esi+24h], eax
0x592D58: mov     edx, [eax]
0x592D5A: push    1
0x592D5C: mov     ecx, eax
0x592D5E: mov     eax, [edx+84h]
0x592D64: push    edi
0x592D65: mov     [esp+54h+var_4], 0FFFFFFFFh
0x592D6D: call    eax
0x592D6F: test    ebx, ebx
0x592D71: jnz     short loc_592D81
0x592D73: push    1; arg1
0x592D75: push    ebx; canCreate
0x592D76: call    InterfaceManager_GetSingleton
0x592D7B: mov     ebx, [eax+54h]
0x592D7E: add     esp, 8
0x592D81: mov     edx, [ebx]
0x592D83: mov     eax, [esi+24h]
0x592D86: mov     edx, [edx+84h]
0x592D8C: push    1
0x592D8E: push    eax
0x592D8F: mov     ecx, ebx
0x592D91: call    edx
0x592D93: mov     eax, [esi+8]
0x592D96: mov     ecx, [esi+24h]
0x592D99: push    eax; Src
0x592D9A: call    NiObjectNET_SetName
0x592D9F: push    0FA1h
0x592DA4: mov     ecx, esi
0x592DA6: call    Tile_GetFloat
0x592DAB: fcomp   dword ptr ds:0A2F948h
0x592DB1: fnstsw  ax
0x592DB3: test    ah, 44h
0x592DB6: jp      short loc_592DBC
0x592DB8: mov     cl, 1
0x592DBA: jmp     short loc_592DBE
0x592DBC: xor     cl, cl
0x592DBE: test    cl, cl
0x592DC0: mov     eax, [esi+24h]
0x592DC3: jz      short loc_592DCC
0x592DC5: or      word ptr [eax+18h], 1
0x592DCA: jmp     short loc_592DD2
0x592DCC: and     word ptr [eax+18h], 0FFFEh
0x592DD2: mov     ecx, [esi+24h]
0x592DD5: call    NiNode_UpdateDynamicEffectState
0x592DDA: mov     ecx, [esi+24h]; this
0x592DDD: call    NiAVObject_InitializePropertyState
0x592DE2: push    1; arg1
0x592DE4: push    0; canCreate
0x592DE6: call    InterfaceManager_GetSingleton
0x592DEB: push    14h; Size
0x592DED: mov     byte ptr [eax+7Ch], 1
0x592DF1: call    FormHeapAlloc
0x592DF6: add     esp, 0Ch
0x592DF9: mov     [esp+4Ch+var_1C], eax
0x592DFD: test    eax, eax
0x592DFF: mov     [esp+4Ch+var_4], ebp
0x592E03: jz      short loc_592E13
0x592E05: mov     ecx, [esi+24h]
0x592E08: push    ecx
0x592E09: push    esi
0x592E0A: mov     ecx, eax; this
0x592E0C: call    ??0Extra@Tile@@QAE@XZ; Tile::Extra::Extra(void)
0x592E11: jmp     short loc_592E15
0x592E13: xor     eax, eax
0x592E15: mov     ecx, [esi+24h]
0x592E18: push    eax
0x592E19: mov     [esp+50h+var_4], 0FFFFFFFFh
0x592E21: call    NiNode_AddNiExtraData
0x592E26: push    0; int
0x592E28: push    0FADh
0x592E2D: mov     ecx, esi
0x592E2F: call    Tile_GetFloat
0x592E34: push    ecx
0x592E35: fstp    [esp+54h+var_54]; float
0x592E38: push    0FADh; int
0x592E3D: mov     ecx, esi
0x592E3F: call    sub_58B2F0
0x592E44: push    0; int
0x592E46: push    0FACh
0x592E4B: mov     ecx, esi
0x592E4D: call    Tile_GetFloat
0x592E52: push    ecx
0x592E53: fstp    [esp+54h+var_54]; float
0x592E56: push    0FACh; int
0x592E5B: mov     ecx, esi
0x592E5D: call    sub_58B2F0
0x592E62: mov     eax, [esi+24h]
0x592E65: mov     ecx, dword ptr [esp+4Ch+var_C]
0x592E69: mov     large fs:0, ecx
0x592E70: pop     ecx
0x592E71: pop     edi
0x592E72: pop     esi
0x592E73: pop     ebp
0x592E74: pop     ebx
0x592E75: add     esp, 38h
0x592E78: retn
