0x5AE6D0: push    0FFFFFFFFh
0x5AE6D2: push    offset SEH_5AE6D0
0x5AE6D7: mov     eax, large fs:0
0x5AE6DD: push    eax
0x5AE6DE: sub     esp, 314h
0x5AE6E4: mov     eax, ds:0B30AACh
0x5AE6E9: xor     eax, esp
0x5AE6EB: mov     [esp+320h+var_10], eax
0x5AE6F2: push    ebx
0x5AE6F3: push    ebp
0x5AE6F4: push    esi; a3
0x5AE6F5: push    edi; a3
0x5AE6F6: mov     eax, ds:0B30AACh
0x5AE6FB: xor     eax, esp
0x5AE6FD: push    eax; a3
0x5AE6FE: lea     eax, [esp+334h+var_C]
0x5AE705: mov     large fs:0, eax
0x5AE70B: mov     ebp, [esp+334h+Str2]
0x5AE712: mov     esi, [esp+334h+arg_8]
0x5AE719: xor     eax, eax
0x5AE71B: cmp     [esp+334h+arg_4], eax
0x5AE722: mov     ebx, ecx
0x5AE724: jnz     short loc_5AE72B
0x5AE726: mov     ds:0B3B3F0h, eax
0x5AE72B: mov     edi, [ebx+48h]
0x5AE72E: push    eax; a3
0x5AE72F: push    offset aSave_game_temp; "save_game_template"
0x5AE734: lea     ecx, [esp+33Ch+var_31C]; this
0x5AE738: mov     [esp+33Ch+var_31C.m_data], eax
0x5AE73C: mov     [esp+33Ch+var_31C.m_dataLen], ax
0x5AE741: mov     [esp+33Ch+var_31C.m_bufLen], ax
0x5AE746: call    BSStringT_Set
0x5AE74B: mov     eax, [esp+334h+var_31C.m_data]
0x5AE74F: push    0
0x5AE751: push    eax
0x5AE752: push    edi
0x5AE753: mov     ecx, ebx
0x5AE755: mov     [esp+340h+var_4], 0
0x5AE760: call    Menu_CreateTileFromTemplate
0x5AE765: test    esi, esi
0x5AE767: mov     edi, eax
0x5AE769: jz      loc_5AE809
0x5AE76F: lea     ecx, [esp+334h+Str]
0x5AE776: push    ecx; Str
0x5AE777: lea     edx, [esp+338h+var_310]
0x5AE77B: push    edx; int
0x5AE77C: lea     eax, [esp+33Ch+var_110]
0x5AE783: push    eax; int
0x5AE784: lea     ecx, [esp+340h+var_320]
0x5AE788: push    ecx; int
0x5AE789: mov     ecx, ds:0B33B00h
0x5AE78F: push    esi; int
0x5AE790: call    sub_464060
0x5AE795: lea     eax, [esp+334h+var_110]
0x5AE79C: lea     edx, [eax+1]
0x5AE79F: nop
0x5AE7A0: mov     cl, [eax]
0x5AE7A2: add     eax, 1
0x5AE7A5: test    cl, cl
0x5AE7A7: jnz     short loc_5AE7A0
0x5AE7A9: sub     eax, edx
0x5AE7AB: jnz     short loc_5AE7DB
0x5AE7AD: mov     eax, ds:0B386F8h
0x5AE7B2: lea     edx, [esp+334h+Str]
0x5AE7B9: push    edx
0x5AE7BA: mov     edx, [esp+338h+var_320]
0x5AE7BE: push    eax
0x5AE7BF: mov     eax, ds:0B386F0h
0x5AE7C4: lea     ecx, [esp+33Ch+var_310]
0x5AE7C8: push    ecx
0x5AE7C9: push    edx
0x5AE7CA: push    eax
0x5AE7CB: push    offset aSISSS; "%s %i - %s\n%s: %s"
0x5AE7D0: push    ebp
0x5AE7D1: call    __sprintf
0x5AE7D6: add     esp, 1Ch
0x5AE7D9: jmp     short loc_5AE84A
0x5AE7DB: mov     edx, ds:0B386F8h
0x5AE7E1: lea     ecx, [esp+334h+Str]
0x5AE7E8: push    ecx
0x5AE7E9: push    edx
0x5AE7EA: lea     eax, [esp+33Ch+var_110]
0x5AE7F1: push    eax
0x5AE7F2: push    offset aSSS_2; "%s\n%s: %s"
0x5AE7F7: push    ebp
0x5AE7F8: call    __sprintf
0x5AE7FD: add     esp, 14h
0x5AE800: add     dword ptr ds:0B3B3F0h, 1
0x5AE807: jmp     short loc_5AE84A
0x5AE809: mov     ecx, ds:0B38700h
0x5AE80F: push    ecx
0x5AE810: push    ebp
0x5AE811: call    __sprintf
0x5AE816: mov     edx, ds:0B33B00h
0x5AE81C: add     esp, 8
0x5AE81F: test    byte ptr [edx+1Ah], 1
0x5AE823: jnz     short loc_5AE84A
0x5AE825: mov     ecx, [ebx+40h]; this
0x5AE828: fld1
0x5AE82A: push    ecx
0x5AE82B: fstp    [esp+338h+a2]; a3
0x5AE82E: push    0FA1h; a2
0x5AE833: call    Tile_SetFloat
0x5AE838: mov     ecx, [ebx+44h]
0x5AE83B: push    offset EmptyString; a3
0x5AE840: push    0FDEh
0x5AE845: call    Tile_SetString
0x5AE84A: test    edi, edi
0x5AE84C: jz      loc_5AE945
0x5AE852: fild    [esp+334h+arg_4]
0x5AE859: push    ecx
0x5AE85A: mov     ecx, edi; this
0x5AE85C: fstp    [esp+338h+a2]; a3
0x5AE85F: push    0FAEh; a2
0x5AE864: call    Tile_SetFloat
0x5AE869: mov     esi, ebp
0x5AE86B: lea     eax, [esp+334h+var_310]
0x5AE86F: xor     edx, edx
0x5AE871: sub     esi, eax
0x5AE873: lea     eax, [esp+edx+334h+var_310]
0x5AE877: mov     cl, [esi+eax]
0x5AE87A: cmp     cl, 20h ; ' '
0x5AE87D: mov     [eax], cl
0x5AE87F: jnz     short loc_5AE884
0x5AE881: mov     byte ptr [eax], 5Fh ; '_'
0x5AE884: cmp     byte ptr [eax], 0
0x5AE887: jz      short loc_5AE894
0x5AE889: add     edx, 1
0x5AE88C: cmp     edx, 100h
0x5AE892: jl      short loc_5AE873
0x5AE894: push    0; a3
0x5AE896: lea     edx, [esp+338h+var_310]
0x5AE89A: lea     ecx, [edi+8]; this
0x5AE89D: push    edx; a2
0x5AE89E: mov     [esp+33Ch+var_211], 0
0x5AE8A6: call    BSStringT_Set
0x5AE8AB: push    ebp
0x5AE8AC: push    0FB1h
0x5AE8B1: mov     ecx, edi
0x5AE8B3: call    Tile_SetString
0x5AE8B8: mov     eax, [esp+334h+arg_4]
0x5AE8BF: add     eax, 65h ; 'e'
0x5AE8C2: mov     [esp+334h+var_320], eax
0x5AE8C6: fild    [esp+334h+var_320]
0x5AE8CA: push    ecx
0x5AE8CB: mov     ecx, edi; this
0x5AE8CD: fstp    [esp+338h+a2]; a3
0x5AE8D0: push    0FA8h; a2
0x5AE8D5: call    Tile_SetFloat
0x5AE8DA: test    ebp, ebp
0x5AE8DC: jz      short loc_5AE8F1
0x5AE8DE: mov     eax, [ebx+5Ch]
0x5AE8E1: test    eax, eax
0x5AE8E3: jz      short loc_5AE8F1
0x5AE8E5: push    ebp; Str2
0x5AE8E6: push    eax; Str1
0x5AE8E7: call    __strcmp
0x5AE8EC: add     esp, 8
0x5AE8EF: jmp     short loc_5AE8FC
0x5AE8F1: xor     eax, eax
0x5AE8F3: test    ebp, ebp
0x5AE8F5: setz    al
0x5AE8F8: lea     eax, [eax+eax-1]
0x5AE8FC: test    eax, eax
0x5AE8FE: jnz     short loc_5AE945
0x5AE900: push    1; arg1
0x5AE902: push    eax; canCreate
0x5AE903: call    InterfaceManager_GetSingleton
0x5AE908: push    1; arg1
0x5AE90A: push    0; canCreate
0x5AE90C: call    InterfaceManager_GetSingleton
0x5AE911: add     dword ptr [eax+8Ch], 1
0x5AE918: fild    dword ptr [eax+8Ch]
0x5AE91E: mov     ecx, [eax+8Ch]
0x5AE924: add     eax, 8Ch ; 'Œ'
0x5AE929: test    ecx, ecx
0x5AE92B: jge     short loc_5AE933
0x5AE92D: fadd    dword ptr ds:0A2FC78h
0x5AE933: add     esp, 0Ch
0x5AE936: fstp    [esp+338h+a2]; a3
0x5AE939: push    0FF0h; a2
0x5AE93E: mov     ecx, edi; this
0x5AE940: call    Tile_SetFloat
0x5AE945: mov     edx, [esp+334h+var_31C.m_data]
0x5AE949: push    edx
0x5AE94A: call    FormHeapFree
0x5AE94F: add     esp, 4
0x5AE952: mov     eax, edi
0x5AE954: mov     ecx, [esp+334h+var_C]
0x5AE95B: mov     large fs:0, ecx
0x5AE962: pop     ecx
0x5AE963: pop     edi
0x5AE964: pop     esi
0x5AE965: pop     ebp
0x5AE966: pop     ebx
0x5AE967: mov     ecx, [esp+320h+var_10]
0x5AE96E: xor     ecx, esp
0x5AE970: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AE975: add     esp, 320h
0x5AE97B: retn    10h
