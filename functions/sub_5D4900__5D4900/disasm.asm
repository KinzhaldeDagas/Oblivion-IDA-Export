0x5D4900: push    ebp
0x5D4901: mov     ebp, esp
0x5D4903: and     esp, 0FFFFFFF8h
0x5D4906: push    0FFFFFFFFh
0x5D4908: push    offset SEH_5D4900
0x5D490D: mov     eax, large fs:0
0x5D4913: push    eax
0x5D4914: sub     esp, 148h
0x5D491A: mov     eax, ds:0B30AACh
0x5D491F: xor     eax, esp
0x5D4921: mov     [esp+154h+var_14], eax
0x5D4928: push    ebx
0x5D4929: push    esi
0x5D492A: push    edi
0x5D492B: mov     eax, ds:0B30AACh
0x5D4930: xor     eax, esp
0x5D4932: push    eax
0x5D4933: lea     eax, [esp+164h+var_C]
0x5D493A: mov     large fs:0, eax
0x5D4940: xor     ebx, ebx
0x5D4942: mov     esi, ecx
0x5D4944: mov     eax, [esi+38h]
0x5D4947: push    ebx; a3
0x5D4948: push    offset aKnown_effect_t; "known_effect_template"
0x5D494D: lea     ecx, [esp+16Ch+var_140]; this
0x5D4951: mov     [esp+16Ch+var_144], esi
0x5D4955: mov     [esp+16Ch+var_124], eax
0x5D4959: mov     [esp+16Ch+var_140.m_data], ebx
0x5D495D: mov     [esp+16Ch+var_140.m_dataLen], bx
0x5D4962: mov     [esp+16Ch+var_140.m_bufLen], bx
0x5D4967: call    BSStringT_Set
0x5D496C: mov     eax, [esi+28h]
0x5D496F: cmp     eax, ebx
0x5D4971: mov     [esp+164h+var_4], ebx
0x5D4978: jz      short loc_5D4983
0x5D497A: add     eax, 78h ; 'x'
0x5D497D: mov     [esp+164h+var_14C], eax
0x5D4981: jmp     short loc_5D4987
0x5D4983: mov     [esp+164h+var_14C], ebx
0x5D4987: cmp     [esp+164h+var_14C], ebx
0x5D498B: mov     [esp+164h+a3], ebx
0x5D498F: jz      loc_5D4BA2
0x5D4995: jmp     short loc_5D49A4
0x5D4997: jmp     short loc_5D49A0
0x5D4999: align 10h
0x5D49A0: mov     esi, [esp+158h+a2]
0x5D49A4: mov     edx, [esp+164h+var_140.m_data]
0x5D49A8: mov     ecx, [esp+164h+var_14C]
0x5D49AC: mov     eax, [esp+164h+var_124]
0x5D49B0: mov     edi, [ecx+4]
0x5D49B3: push    ebx
0x5D49B4: push    edx
0x5D49B5: push    eax
0x5D49B6: mov     ecx, esi
0x5D49B8: call    Menu_CreateTileFromTemplate
0x5D49BD: mov     esi, eax
0x5D49BF: cmp     esi, ebx
0x5D49C1: jz      loc_5D4B88
0x5D49C7: cmp     edi, ebx
0x5D49C9: jz      loc_5D4B88
0x5D49CF: fild    [esp+164h+a3]
0x5D49D3: push    ecx
0x5D49D4: mov     ecx, esi; this
0x5D49D6: fstp    [esp+168h+var_150]
0x5D49DA: fld     [esp+168h+var_150]
0x5D49DE: fstp    [esp+168h+var_168]; a3
0x5D49E1: push    0FAAh; a2
0x5D49E6: call    Tile_SetFloat
0x5D49EB: fld     [esp+164h+var_150]
0x5D49EF: push    ecx
0x5D49F0: fstp    [esp+168h+var_168]; a3
0x5D49F3: push    0FAEh; a2
0x5D49F8: mov     ecx, esi; this
0x5D49FA: call    Tile_SetFloat
0x5D49FF: mov     ecx, [esp+164h+a3]
0x5D4A03: add     ecx, 3E8h
0x5D4A09: mov     [esp+164h+var_150], ecx; a3
0x5D4A0D: fild    [esp+164h+var_150]
0x5D4A11: push    ecx
0x5D4A12: mov     ecx, esi; this
0x5D4A14: fstp    [esp+168h+var_168]; a3
0x5D4A17: push    0FA8h; a2
0x5D4A1C: call    Tile_SetFloat
0x5D4A21: fld1
0x5D4A23: mov     eax, [edi+10h]
0x5D4A26: cmp     eax, 1
0x5D4A29: setz    dl
0x5D4A2C: cmp     eax, ebx
0x5D4A2E: setz    al
0x5D4A31: push    edx
0x5D4A32: push    ebx
0x5D4A33: push    eax
0x5D4A34: push    ecx
0x5D4A35: fstp    [esp+174h+var_174]
0x5D4A38: push    6
0x5D4A3A: lea     ecx, [esp+178h+var_12C]
0x5D4A3E: push    ecx
0x5D4A3F: mov     ecx, edi
0x5D4A41: call    EffectItem_BuildDisplayString
0x5D4A46: mov     eax, [eax]
0x5D4A48: push    eax
0x5D4A49: push    0FB0h
0x5D4A4E: mov     ecx, esi
0x5D4A50: mov     [esp+184h+var_1C], 1
0x5D4A58: call    Tile_SetString
0x5D4A5D: mov     edx, [esp+17Ch+var_144]
0x5D4A61: push    edx
0x5D4A62: mov     [esp+180h+var_1C], bl
0x5D4A69: call    FormHeapFree
0x5D4A6E: add     esp, 4
0x5D4A71: lea     eax, [esp+17Ch+var_150]
0x5D4A75: push    eax
0x5D4A76: mov     ecx, edi
0x5D4A78: mov     [esp+180h+var_144], ebx
0x5D4A7C: mov     word ptr [esp+180h+var_140.m_data+2], bx
0x5D4A81: mov     word ptr [esp+180h+var_140.m_data], bx
0x5D4A86: call    EffectItem_GetName
0x5D4A8B: mov     edx, [esp+158h+var_12C]
0x5D4A8F: push    ebx; a3
0x5D4A90: lea     ecx, [esi+8]; this
0x5D4A93: push    edx; a2
0x5D4A94: mov     [esp+160h+arg_0], 2
0x5D4A9C: call    BSStringT_Set
0x5D4AA1: mov     eax, [esp+158h+var_12C]
0x5D4AA5: push    eax
0x5D4AA6: mov     [esp+15Ch+arg_0], bl
0x5D4AAD: call    FormHeapFree
0x5D4AB2: mov     ecx, [esp+15Ch+a2]
0x5D4AB6: mov     ecx, [ecx+44h]
0x5D4AB9: add     esp, 4
0x5D4ABC: push    0FB5h
0x5D4AC1: mov     [esp+15Ch+var_12C], ebx
0x5D4AC5: mov     [esp+15Ch+var_126], bx
0x5D4ACA: mov     [esp+15Ch+var_128], bx
0x5D4ACF: call    Tile_GetFloat
0x5D4AD4: push    ecx
0x5D4AD5: fstp    [esp+15Ch+var_15C]; a3
0x5D4AD8: push    0FB1h; a2
0x5D4ADD: mov     ecx, esi; this
0x5D4ADF: call    Tile_SetFloat
0x5D4AE4: mov     eax, [edi+1Ch]
0x5D4AE7: mov     eax, [eax+48h]
0x5D4AEA: cmp     eax, ebx
0x5D4AEC: jnz     short loc_5D4AF3
0x5D4AEE: mov     eax, offset EmptyString
0x5D4AF3: push    eax
0x5D4AF4: push    offset aIcons; "Icons"
0x5D4AF9: lea     edx, [esp+160h+anonymous_3]
0x5D4AFD: push    offset aSS_2; "%s\\%s"
0x5D4B02: push    edx
0x5D4B03: call    __sprintf
0x5D4B08: add     esp, 10h
0x5D4B0B: lea     eax, [esp+158h+anonymous_3]
0x5D4B0F: push    eax
0x5D4B10: push    0FAFh
0x5D4B15: mov     ecx, esi
0x5D4B17: call    Tile_SetString
0x5D4B1C: mov     ecx, [edi]
0x5D4B1E: mov     [esp+158h+var_144], ecx
0x5D4B22: fild    [esp+158h+var_144]
0x5D4B26: push    ecx
0x5D4B27: mov     ecx, esi; this
0x5D4B29: fstp    [esp+15Ch+var_15C]; a3
0x5D4B2C: push    0FB2h; a2
0x5D4B31: call    Tile_SetFloat
0x5D4B36: fld     dword ptr ds:0A31C80h
0x5D4B3C: push    ecx
0x5D4B3D: fstp    [esp+15Ch+var_15C]; a3
0x5D4B40: push    0FB4h; a2
0x5D4B45: mov     ecx, esi; this
0x5D4B47: call    Tile_SetFloat
0x5D4B4C: fld     dword ptr ds:0A379B4h
0x5D4B52: push    ecx
0x5D4B53: fstp    [esp+15Ch+var_15C]; a3
0x5D4B56: push    0FC9h; a2
0x5D4B5B: mov     ecx, esi; this
0x5D4B5D: call    Tile_SetFloat
0x5D4B62: mov     edx, [esp+158h+a2]
0x5D4B66: mov     ecx, [edx+44h]
0x5D4B69: add     dword ptr [esp+158h+var_140.m_dataLen], 1
0x5D4B6E: push    0FB5h
0x5D4B73: call    Tile_GetFloat
0x5D4B78: push    ecx
0x5D4B79: fstp    [esp+15Ch+var_15C]; a3
0x5D4B7C: push    0FB6h; a2
0x5D4B81: mov     ecx, esi; this
0x5D4B83: call    Tile_SetFloat
0x5D4B88: mov     eax, [esp+158h+var_140.m_data]
0x5D4B8C: mov     eax, [eax+8]
0x5D4B8F: cmp     eax, ebx
0x5D4B91: jz      short loc_5D4BA2
0x5D4B93: add     eax, 0FFFFFFFCh
0x5D4B96: cmp     eax, ebx
0x5D4B98: mov     [esp+158h+var_140.m_data], eax
0x5D4B9C: jnz     loc_5D49A0
0x5D4BA2: mov     ecx, [esp+158h+var_134]
0x5D4BA6: push    ecx
0x5D4BA7: call    FormHeapFree
0x5D4BAC: add     esp, 4
0x5D4BAF: mov     ecx, [esp+158h+var_s0]
0x5D4BB6: mov     large fs:0, ecx
0x5D4BBD: pop     ecx
0x5D4BBE: pop     edi
0x5D4BBF: pop     esi
0x5D4BC0: pop     ebx
0x5D4BC1: mov     ecx, [esp+148h+var_8]
0x5D4BC8: xor     ecx, esp
0x5D4BCA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D4BCF: mov     esp, ebp
0x5D4BD1: pop     ebp
0x5D4BD2: retn
