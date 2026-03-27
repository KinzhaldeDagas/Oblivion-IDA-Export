0x593B20: push    0FFFFFFFFh
0x593B22: push    offset SEH_593B20
0x593B27: mov     eax, large fs:0
0x593B2D: push    eax
0x593B2E: sub     esp, 118h
0x593B34: mov     eax, ds:0B30AACh
0x593B39: xor     eax, esp
0x593B3B: mov     [esp+124h+var_10], eax
0x593B42: push    ebx
0x593B43: push    ebp
0x593B44: push    esi
0x593B45: push    edi
0x593B46: mov     eax, ds:0B30AACh
0x593B4B: xor     eax, esp
0x593B4D: push    eax; a3
0x593B4E: lea     eax, [esp+138h+var_C]
0x593B55: mov     large fs:0, eax
0x593B5B: mov     edi, [esp+138h+arg_0]
0x593B62: xor     ebx, ebx
0x593B64: mov     ebp, ecx
0x593B66: mov     esi, [ebp+50h]
0x593B69: push    ebx; a3
0x593B6A: push    offset aEffect_templat; "effect_template"
0x593B6F: lea     ecx, [esp+140h+var_124]; this
0x593B73: mov     [esp+140h+var_124.m_data], ebx
0x593B77: mov     [esp+140h+var_124.m_dataLen], bx
0x593B7C: mov     [esp+140h+var_124.m_bufLen], bx
0x593B81: call    BSStringT_Set
0x593B86: mov     eax, [esp+138h+var_124.m_data]
0x593B8A: push    ebx
0x593B8B: push    eax
0x593B8C: push    esi
0x593B8D: mov     ecx, ebp
0x593B8F: mov     [esp+144h+var_4], ebx
0x593B96: call    Menu_CreateTileFromTemplate
0x593B9B: mov     esi, eax
0x593B9D: cmp     esi, ebx
0x593B9F: jz      loc_593C56
0x593BA5: fild    [esp+138h+arg_4]
0x593BAC: push    ecx
0x593BAD: mov     ecx, esi; this
0x593BAF: fstp    [esp+13Ch+a2]; a3
0x593BB2: push    0FAEh; a2
0x593BB7: call    Tile_SetFloat
0x593BBC: mov     ebp, [ebp+94h]
0x593BC2: cmp     ebp, ebx
0x593BC4: jz      short loc_593BCB
0x593BC6: lea     eax, [ebp+24h]
0x593BC9: jmp     short loc_593BCD
0x593BCB: xor     eax, eax
0x593BCD: fld1
0x593BCF: push    ecx
0x593BD0: fstp    [esp+13Ch+a2]; float
0x593BD3: lea     ecx, [esp+13Ch+var_11C]
0x593BD7: push    eax; int
0x593BD8: push    ecx; int
0x593BD9: mov     ecx, edi
0x593BDB: call    EffectItem_GetDisplayText
0x593BE0: mov     eax, [eax]
0x593BE2: push    eax
0x593BE3: push    0FB1h
0x593BE8: mov     ecx, esi
0x593BEA: mov     byte ptr [esp+140h+var_4], 1
0x593BF2: call    Tile_SetString
0x593BF7: mov     edx, [esp+138h+var_11C]
0x593BFB: push    edx
0x593BFC: mov     byte ptr [esp+13Ch+var_4], bl
0x593C03: call    FormHeapFree
0x593C08: push    ecx
0x593C09: mov     eax, esp
0x593C0B: mov     [esp+140h+var_11C], esp
0x593C0F: push    eax
0x593C10: mov     ecx, edi
0x593C12: call    EffectItem_GetName
0x593C17: mov     ecx, esi
0x593C19: call    sub_58A020
0x593C1E: mov     edi, [edi+1Ch]
0x593C21: mov     eax, [edi+48h]
0x593C24: cmp     eax, ebx
0x593C26: jnz     short loc_593C2D
0x593C28: mov     eax, offset EmptyString
0x593C2D: push    eax
0x593C2E: push    offset aIcons; "Icons"
0x593C33: lea     ecx, [esp+11Ch+var_F0]
0x593C37: push    offset aSS_2; "%s\\%s"
0x593C3C: push    ecx
0x593C3D: call    __sprintf
0x593C42: add     esp, 10h
0x593C45: lea     edx, [esp+114h+var_F0]
0x593C49: push    edx
0x593C4A: push    0FAFh
0x593C4F: mov     ecx, esi
0x593C51: call    Tile_SetString
0x593C56: mov     eax, [esp+114h+var_100]
0x593C5A: push    eax
0x593C5B: call    FormHeapFree
0x593C60: add     esp, 4
0x593C63: mov     ecx, [esp+114h+arg_14]
0x593C6A: mov     large fs:0, ecx
0x593C71: pop     ecx
0x593C72: pop     edi
0x593C73: pop     esi
0x593C74: pop     ebp
0x593C75: pop     ebx
0x593C76: mov     ecx, [esp+100h+arg_10]
0x593C7D: xor     ecx, esp
0x593C7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x593C84: add     esp, 124h
0x593C8A: retn    8
