0x5D4BE0: push    0FFFFFFFFh
0x5D4BE2: push    offset SEH_5D4BE0
0x5D4BE7: mov     eax, large fs:0
0x5D4BED: push    eax
0x5D4BEE: sub     esp, 130h
0x5D4BF4: mov     eax, ds:0B30AACh
0x5D4BF9: xor     eax, esp
0x5D4BFB: mov     [esp+13Ch+var_10], eax
0x5D4C02: push    ebx
0x5D4C03: push    ebp
0x5D4C04: push    esi
0x5D4C05: push    edi; a3
0x5D4C06: mov     eax, ds:0B30AACh
0x5D4C0B: xor     eax, esp
0x5D4C0D: push    eax; a3
0x5D4C0E: lea     eax, [esp+150h+var_C]
0x5D4C15: mov     large fs:0, eax
0x5D4C1B: mov     edi, ecx
0x5D4C1D: mov     eax, [edi+3Ch]
0x5D4C20: mov     esi, [eax+34h]
0x5D4C23: xor     ebx, ebx
0x5D4C25: cmp     esi, ebx
0x5D4C27: mov     [esp+150h+var_134.m_data], edi
0x5D4C2B: mov     [esp+150h+var_11C], eax
0x5D4C2F: jz      short loc_5D4C49
0x5D4C31: mov     ecx, [esi+8]
0x5D4C34: cmp     ecx, ebx
0x5D4C36: lea     eax, [esi+8]
0x5D4C39: mov     esi, [esi]
0x5D4C3B: jz      short loc_5D4C45
0x5D4C3D: mov     eax, [ecx]
0x5D4C3F: mov     edx, [eax]
0x5D4C41: push    1; a3
0x5D4C43: call    edx
0x5D4C45: cmp     esi, ebx
0x5D4C47: jnz     short loc_5D4C31
0x5D4C49: mov     ecx, [edi+3Ch]
0x5D4C4C: add     ecx, 30h ; '0'
0x5D4C4F: call    NiTPointerList__FreeAllNodes
0x5D4C54: push    ebx; a3
0x5D4C55: push    offset aAdded_effect_t; "added_effect_template"
0x5D4C5A: lea     ecx, [esp+15Ch+var_134]; this
0x5D4C5E: mov     [esp+15Ch+var_134.m_data], ebx
0x5D4C62: mov     [esp+15Ch+var_134.m_dataLen], bx
0x5D4C67: mov     [esp+15Ch+var_134.m_bufLen], bx
0x5D4C6C: call    BSStringT_Set
0x5D4C71: mov     eax, [edi+28h]
0x5D4C74: cmp     eax, ebx
0x5D4C76: mov     [esp+154h+var_8], ebx
0x5D4C7D: jz      loc_5D4E7A
0x5D4C83: xor     ebp, ebp
0x5D4C85: lea     edx, [eax+78h]
0x5D4C88: xor     esi, esi
0x5D4C8A: mov     [esp+154h+anonymous_5], edx
0x5D4C8E: mov     [esp+154h+anonymous_4], ebp
0x5D4C92: mov     [esp+154h+a3], esi; a3
0x5D4C96: lea     eax, [edx+4]
0x5D4C99: xor     ecx, ecx
0x5D4C9B: cmp     eax, ebx
0x5D4C9D: jz      loc_5D4E7A
0x5D4CA3: cmp     [eax], ebx
0x5D4CA5: jz      short loc_5D4CAA
0x5D4CA7: add     ecx, 1
0x5D4CAA: mov     eax, [eax+4]
0x5D4CAD: cmp     eax, ebx
0x5D4CAF: jnz     short loc_5D4CA3
0x5D4CB1: cmp     esi, ecx
0x5D4CB3: jnb     loc_5D4E7A
0x5D4CB9: push    esi
0x5D4CBA: mov     ecx, edx
0x5D4CBC: call    EffectItemList_GetItemByIndex2
0x5D4CC1: mov     esi, [esp+154h+var_138]
0x5D4CC5: mov     edi, eax
0x5D4CC7: mov     eax, [esi+2Ch]
0x5D4CCA: cmp     eax, ebx
0x5D4CCC: jz      loc_5D4E64
0x5D4CD2: mov     edx, [edi+10h]
0x5D4CD5: cmp     edx, ebx
0x5D4CD7: jnz     short loc_5D4CE8
0x5D4CD9: mov     ecx, [eax+8]
0x5D4CDC: cmp     byte ptr [ecx+4], 16h
0x5D4CE0: jz      short loc_5D4CFE
0x5D4CE2: cmp     byte ptr [ecx+4], 14h
0x5D4CE6: jz      short loc_5D4CFE
0x5D4CE8: cmp     edx, 1
0x5D4CEB: jnz     loc_5D4E64
0x5D4CF1: mov     eax, [eax+8]
0x5D4CF4: cmp     byte ptr [eax+4], 21h ; '!'
0x5D4CF8: jnz     loc_5D4E64
0x5D4CFE: mov     eax, [esp+154h+var_134.m_data]
0x5D4D02: mov     ecx, [esp+154h+var_120]
0x5D4D06: push    ebx
0x5D4D07: push    eax
0x5D4D08: push    ecx
0x5D4D09: mov     ecx, esi
0x5D4D0B: call    Menu_CreateTileFromTemplate
0x5D4D10: mov     esi, eax
0x5D4D12: cmp     esi, ebx
0x5D4D14: jz      loc_5D4E64
0x5D4D1A: fild    [esp+154h+anonymous_4]
0x5D4D1E: push    ecx
0x5D4D1F: mov     ecx, esi; this
0x5D4D21: fstp    [esp+158h+anonymous_4]
0x5D4D25: fld     [esp+158h+anonymous_4]
0x5D4D29: fstp    [esp+158h+a2]; a3
0x5D4D2C: push    0FAAh; a2
0x5D4D31: call    Tile_SetFloat
0x5D4D36: fld     [esp+154h+anonymous_4]
0x5D4D3A: push    ecx
0x5D4D3B: fstp    [esp+158h+a2]; a3
0x5D4D3E: push    0FAEh; a2
0x5D4D43: mov     ecx, esi; this
0x5D4D45: call    Tile_SetFloat
0x5D4D4A: lea     edx, [ebp+0BB8h]
0x5D4D50: mov     [esp+154h+anonymous_4], edx
0x5D4D54: fild    [esp+154h+anonymous_4]
0x5D4D58: push    ecx
0x5D4D59: mov     ecx, esi; this
0x5D4D5B: fstp    [esp+158h+a2]; a3
0x5D4D5E: push    0FA8h; a2
0x5D4D63: call    Tile_SetFloat
0x5D4D68: fld1
0x5D4D6A: mov     eax, [edi+10h]
0x5D4D6D: add     ebp, 1
0x5D4D70: cmp     eax, 1
0x5D4D73: setz    cl
0x5D4D76: cmp     eax, ebx
0x5D4D78: setz    dl
0x5D4D7B: lea     eax, [esp+154h+var_12C]
0x5D4D7F: mov     [esp+154h+anonymous_4], ebp
0x5D4D83: push    ecx
0x5D4D84: push    ebx
0x5D4D85: push    edx
0x5D4D86: push    ecx
0x5D4D87: fstp    [esp+164h+var_164]
0x5D4D8A: push    6
0x5D4D8C: push    eax
0x5D4D8D: mov     ecx, edi
0x5D4D8F: call    EffectItem_BuildDisplayString
0x5D4D94: mov     eax, [eax]
0x5D4D96: push    eax
0x5D4D97: push    0FB0h
0x5D4D9C: mov     ecx, esi
0x5D4D9E: mov     [esp+174h+var_20], 1
0x5D4DA6: call    Tile_SetString
0x5D4DAB: mov     ecx, [esp+16Ch+var_144]
0x5D4DAF: push    ecx
0x5D4DB0: mov     [esp+170h+var_20], bl
0x5D4DB7: call    FormHeapFree
0x5D4DBC: push    ecx
0x5D4DBD: mov     edx, esp
0x5D4DBF: mov     [esp+174h+var_134.m_data], esp
0x5D4DC3: push    edx
0x5D4DC4: mov     ecx, edi
0x5D4DC6: mov     [esp+178h+var_144], ebx; a3
0x5D4DCA: mov     word ptr [esp+178h+anonymous_4+2], bx
0x5D4DCF: mov     word ptr [esp+178h+anonymous_4], bx; a3
0x5D4DD4: call    EffectItem_GetName
0x5D4DD9: mov     ecx, esi
0x5D4DDB: call    sub_58A020
0x5D4DE0: mov     eax, [edi+1Ch]
0x5D4DE3: add     eax, 44h ; 'D'
0x5D4DE6: mov     eax, [eax+4]
0x5D4DE9: cmp     eax, ebx
0x5D4DEB: jnz     short loc_5D4DF2
0x5D4DED: mov     eax, offset EmptyString
0x5D4DF2: push    eax
0x5D4DF3: push    offset aIcons; "Icons"
0x5D4DF8: lea     eax, [esp+150h+var_10C]
0x5D4DFC: push    offset aSS_2; "%s\\%s"
0x5D4E01: push    eax
0x5D4E02: call    __sprintf
0x5D4E07: add     esp, 10h
0x5D4E0A: lea     ecx, [esp+148h+var_10C]
0x5D4E0E: push    ecx
0x5D4E0F: push    0FAFh
0x5D4E14: mov     ecx, esi
0x5D4E16: call    Tile_SetString
0x5D4E1B: fild    dword ptr [edi]
0x5D4E1D: push    ecx
0x5D4E1E: mov     ecx, esi; this
0x5D4E20: fstp    [esp+14Ch+var_14C]; a3
0x5D4E23: push    0FB2h; a2
0x5D4E28: call    Tile_SetFloat
0x5D4E2D: fld     dword ptr ds:0A6BC94h
0x5D4E33: push    ecx
0x5D4E34: fstp    [esp+14Ch+var_14C]; a3
0x5D4E37: push    0FB4h; a2
0x5D4E3C: mov     ecx, esi; this
0x5D4E3E: call    Tile_SetFloat
0x5D4E43: mov     edx, [esp+148h+var_12C]
0x5D4E47: mov     ecx, [edx+4Ch]
0x5D4E4A: push    0FB5h
0x5D4E4F: call    Tile_GetFloat
0x5D4E54: push    ecx
0x5D4E55: fstp    [esp+14Ch+var_14C]; a3
0x5D4E58: push    0FB6h; a2
0x5D4E5D: mov     ecx, esi; this
0x5D4E5F: call    Tile_SetFloat
0x5D4E64: add     dword ptr [esp+148h+var_134.m_dataLen], 1
0x5D4E69: mov     edi, [esp+148h+var_12C]
0x5D4E6D: mov     esi, dword ptr [esp+148h+var_134.m_dataLen]
0x5D4E71: mov     edx, [esp+148h+anonymous_6]
0x5D4E75: jmp     loc_5D4C96
0x5D4E7A: mov     ecx, [edi+50h]; this
0x5D4E7D: cmp     ecx, ebx
0x5D4E7F: jz      short loc_5D4EA8
0x5D4E81: fld     dword ptr ds:0A6BC04h
0x5D4E87: push    ecx
0x5D4E88: fstp    [esp+158h+a2]; a3
0x5D4E8B: push    0FB7h; a2
0x5D4E90: call    Tile_SetFloat
0x5D4E95: fldz
0x5D4E97: mov     ecx, [edi+50h]; this
0x5D4E9A: push    ecx
0x5D4E9B: fstp    [esp+158h+a2]; a3
0x5D4E9E: push    0FB7h; a2
0x5D4EA3: call    Tile_SetFloat
0x5D4EA8: mov     eax, [esp+154h+var_134.m_data]
0x5D4EAC: push    eax
0x5D4EAD: call    FormHeapFree
0x5D4EB2: add     esp, 4
0x5D4EB5: mov     ecx, [esp+154h+var_10]
0x5D4EBC: mov     large fs:0, ecx
0x5D4EC3: pop     ecx
0x5D4EC4: pop     edi
0x5D4EC5: pop     esi
0x5D4EC6: pop     ebp
0x5D4EC7: pop     ebx
0x5D4EC8: mov     ecx, dword ptr [esp+140h+var_14]
0x5D4ECF: xor     ecx, esp
0x5D4ED1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D4ED6: add     esp, 13Ch
0x5D4EDC: retn
