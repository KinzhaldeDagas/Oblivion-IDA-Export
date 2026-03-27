0x5D0E50: push    0FFFFFFFFh
0x5D0E52: push    offset SEH_5AAB60
0x5D0E57: mov     eax, large fs:0
0x5D0E5D: push    eax
0x5D0E5E: sub     esp, 114h
0x5D0E64: mov     eax, ds:0B30AACh
0x5D0E69: xor     eax, esp
0x5D0E6B: mov     [esp+120h+var_10], eax
0x5D0E72: push    ebx
0x5D0E73: push    ebp
0x5D0E74: push    esi; a3
0x5D0E75: push    edi; a3
0x5D0E76: mov     eax, ds:0B30AACh
0x5D0E7B: xor     eax, esp
0x5D0E7D: push    eax; a3
0x5D0E7E: lea     eax, [esp+134h+var_C]
0x5D0E85: mov     large fs:0, eax
0x5D0E8B: mov     eax, [esp+134h+a2]
0x5D0E92: mov     ebp, [esp+134h+arg_4]
0x5D0E99: xor     ebx, ebx
0x5D0E9B: push    ebx; a3
0x5D0E9C: mov     edi, ecx
0x5D0E9E: push    eax; a2
0x5D0E9F: lea     ecx, [esp+13Ch+var_120]; this
0x5D0EA3: mov     [esp+13Ch+var_120.m_data], ebx
0x5D0EA7: mov     [esp+13Ch+var_120.m_dataLen], bx
0x5D0EAC: mov     [esp+13Ch+var_120.m_bufLen], bx
0x5D0EB1: call    BSStringT_Set
0x5D0EB6: cmp     dword ptr [edi+58h], 2
0x5D0EBA: mov     [esp+134h+var_4], ebx
0x5D0EC1: mov     eax, offset aRep_buy_item_t; "rep_buy_item_template"
0x5D0EC6: jz      short loc_5D0ECD
0x5D0EC8: mov     eax, offset aRep_item_templ; "rep_item_template"
0x5D0ECD: push    ebx; a3
0x5D0ECE: push    eax; a2
0x5D0ECF: lea     ecx, [esp+13Ch+var_118]; this
0x5D0ED3: mov     [esp+13Ch+var_118.m_data], ebx
0x5D0ED7: mov     [esp+13Ch+var_118.m_dataLen], bx
0x5D0EDC: mov     [esp+13Ch+var_118.m_bufLen], bx
0x5D0EE1: call    BSStringT_Set
0x5D0EE6: mov     eax, [esp+134h+var_118.m_data]
0x5D0EEA: mov     ecx, [edi+44h]
0x5D0EED: push    ebx
0x5D0EEE: push    eax
0x5D0EEF: push    ecx
0x5D0EF0: mov     ecx, edi
0x5D0EF2: mov     byte ptr [esp+140h+var_4], 1
0x5D0EFA: call    Menu_CreateTileFromTemplate
0x5D0EFF: mov     esi, eax
0x5D0F01: cmp     esi, ebx
0x5D0F03: jz      loc_5D0FAE
0x5D0F09: push    ebp
0x5D0F0A: push    0FAFh
0x5D0F0F: mov     ecx, esi
0x5D0F11: call    Tile_SetString
0x5D0F16: lea     eax, [esp+134h+var_110]
0x5D0F1A: xor     edx, edx
0x5D0F1C: sub     ebp, eax
0x5D0F1E: mov     edi, edi
0x5D0F20: lea     eax, [esp+edx+134h+var_110]
0x5D0F24: mov     cl, [eax+ebp]
0x5D0F27: cmp     cl, 20h ; ' '
0x5D0F2A: mov     [eax], cl
0x5D0F2C: jnz     short loc_5D0F31
0x5D0F2E: mov     byte ptr [eax], 5Fh ; '_'
0x5D0F31: cmp     [eax], bl
0x5D0F33: jz      short loc_5D0F40
0x5D0F35: add     edx, 1
0x5D0F38: cmp     edx, 100h
0x5D0F3E: jl      short loc_5D0F20
0x5D0F40: push    ebx; a3
0x5D0F41: lea     edx, [esp+138h+var_110]
0x5D0F45: lea     ecx, [esi+8]; this
0x5D0F48: push    edx; a2
0x5D0F49: mov     [esp+13Ch+var_11], bl
0x5D0F50: call    BSStringT_Set
0x5D0F55: mov     eax, [esp+134h+var_120.m_data]
0x5D0F59: push    eax
0x5D0F5A: push    0FB4h
0x5D0F5F: mov     ecx, esi
0x5D0F61: call    Tile_SetString
0x5D0F66: fild    [esp+134h+arg_8]
0x5D0F6D: push    ecx
0x5D0F6E: mov     ecx, esi; this
0x5D0F70: fstp    [esp+138h+var_138]; a3
0x5D0F73: push    0FB7h; a2
0x5D0F78: call    Tile_SetFloat
0x5D0F7D: fild    [esp+134h+arg_C]
0x5D0F84: push    ecx
0x5D0F85: mov     ecx, esi; this
0x5D0F87: fstp    [esp+138h+var_138]; a3
0x5D0F8A: push    0FAAh; a2
0x5D0F8F: call    Tile_SetFloat
0x5D0F94: fild    [esp+134h+arg_10]
0x5D0F9B: push    ecx
0x5D0F9C: mov     ecx, esi; this
0x5D0F9E: fstp    [esp+138h+var_138]; a3
0x5D0FA1: push    0FA8h; a2
0x5D0FA6: call    Tile_SetFloat
0x5D0FAB: mov     [edi+10h], esi
0x5D0FAE: mov     ecx, [esp+134h+var_118.m_data]
0x5D0FB2: push    ecx
0x5D0FB3: call    FormHeapFree
0x5D0FB8: mov     edx, [esp+138h+var_120.m_data]
0x5D0FBC: push    edx
0x5D0FBD: call    FormHeapFree
0x5D0FC2: add     esp, 8
0x5D0FC5: mov     eax, esi
0x5D0FC7: mov     ecx, [esp+134h+var_C]
0x5D0FCE: mov     large fs:0, ecx
0x5D0FD5: pop     ecx
0x5D0FD6: pop     edi
0x5D0FD7: pop     esi
0x5D0FD8: pop     ebp
0x5D0FD9: pop     ebx
0x5D0FDA: mov     ecx, [esp+120h+var_10]
0x5D0FE1: xor     ecx, esp
0x5D0FE3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D0FE8: add     esp, 120h
0x5D0FEE: retn    14h
