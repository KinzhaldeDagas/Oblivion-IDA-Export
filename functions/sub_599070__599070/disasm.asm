0x599070: push    0FFFFFFFFh
0x599072: push    offset SEH_5AAB60
0x599077: mov     eax, large fs:0
0x59907D: push    eax
0x59907E: sub     esp, 114h
0x599084: mov     eax, ds:0B30AACh
0x599089: xor     eax, esp
0x59908B: mov     [esp+120h+var_10], eax
0x599092: push    ebx
0x599093: push    ebp
0x599094: push    esi; a3
0x599095: push    edi; a3
0x599096: mov     eax, ds:0B30AACh
0x59909B: xor     eax, esp
0x59909D: push    eax; a3
0x59909E: lea     eax, [esp+134h+var_C]
0x5990A5: mov     large fs:0, eax
0x5990AB: mov     eax, [esp+134h+a2]
0x5990B2: mov     edi, [esp+134h+arg_4]
0x5990B9: xor     ebx, ebx
0x5990BB: push    ebx; a3
0x5990BC: mov     esi, ecx
0x5990BE: push    eax; a2
0x5990BF: lea     ecx, [esp+13Ch+var_120]; this
0x5990C3: mov     [esp+13Ch+var_120.m_data], ebx
0x5990C7: mov     [esp+13Ch+var_120.m_dataLen], bx
0x5990CC: mov     [esp+13Ch+var_120.m_bufLen], bx
0x5990D1: call    BSStringT_Set
0x5990D6: push    ebx; a3
0x5990D7: push    offset aItem_template; "item_template"
0x5990DC: lea     ecx, [esp+13Ch+var_118]; this
0x5990E0: mov     [esp+13Ch+var_4], ebx
0x5990E7: mov     [esp+13Ch+var_118.m_data], ebx
0x5990EB: mov     [esp+13Ch+var_118.m_dataLen], bx
0x5990F0: mov     [esp+13Ch+var_118.m_bufLen], bx
0x5990F5: call    BSStringT_Set
0x5990FA: mov     ebp, [esp+134h+var_118.m_data]
0x5990FE: mov     eax, [esi+30h]
0x599101: push    ebx
0x599102: push    ebp
0x599103: push    eax
0x599104: mov     ecx, esi
0x599106: mov     byte ptr [esp+140h+var_4], 1
0x59910E: call    Menu_CreateTileFromTemplate
0x599113: mov     esi, eax
0x599115: cmp     esi, ebx
0x599117: jz      loc_5991BD
0x59911D: push    edi
0x59911E: push    0FAFh
0x599123: mov     ecx, esi
0x599125: call    Tile_SetString
0x59912A: lea     ecx, [esp+134h+var_110]
0x59912E: xor     edx, edx
0x599130: sub     edi, ecx
0x599132: lea     eax, [esp+edx+134h+var_110]
0x599136: mov     cl, [edi+eax]
0x599139: cmp     cl, 20h ; ' '
0x59913C: mov     [eax], cl
0x59913E: jnz     short loc_599143
0x599140: mov     byte ptr [eax], 5Fh ; '_'
0x599143: cmp     [eax], bl
0x599145: jz      short loc_599152
0x599147: add     edx, 1
0x59914A: cmp     edx, 100h
0x599150: jl      short loc_599132
0x599152: push    ebx; a3
0x599153: lea     edx, [esp+138h+var_110]
0x599157: lea     ecx, [esi+8]; this
0x59915A: push    edx; a2
0x59915B: mov     [esp+13Ch+var_11], bl
0x599162: call    BSStringT_Set
0x599167: mov     eax, [esp+134h+var_120.m_data]
0x59916B: push    eax
0x59916C: push    0FB4h
0x599171: mov     ecx, esi
0x599173: call    Tile_SetString
0x599178: fild    [esp+134h+arg_8]
0x59917F: push    ecx
0x599180: mov     ecx, esi; this
0x599182: fstp    [esp+138h+var_138]; a3
0x599185: push    0FB7h; a2
0x59918A: call    Tile_SetFloat
0x59918F: fild    [esp+134h+arg_C]
0x599196: push    ecx
0x599197: mov     ecx, esi; this
0x599199: fstp    [esp+138h+var_138]; a3
0x59919C: push    0FAAh; a2
0x5991A1: call    Tile_SetFloat
0x5991A6: fild    [esp+134h+arg_10]
0x5991AD: push    ecx
0x5991AE: mov     ecx, esi; this
0x5991B0: fstp    [esp+138h+var_138]; a3
0x5991B3: push    0FA8h; a2
0x5991B8: call    Tile_SetFloat
0x5991BD: push    ebp
0x5991BE: call    FormHeapFree
0x5991C3: mov     ecx, [esp+138h+var_120.m_data]
0x5991C7: push    ecx
0x5991C8: call    FormHeapFree
0x5991CD: add     esp, 8
0x5991D0: mov     eax, esi
0x5991D2: mov     ecx, [esp+134h+var_C]
0x5991D9: mov     large fs:0, ecx
0x5991E0: pop     ecx
0x5991E1: pop     edi
0x5991E2: pop     esi
0x5991E3: pop     ebp
0x5991E4: pop     ebx
0x5991E5: mov     ecx, [esp+120h+var_10]
0x5991EC: xor     ecx, esp
0x5991EE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5991F3: add     esp, 120h
0x5991F9: retn    14h
