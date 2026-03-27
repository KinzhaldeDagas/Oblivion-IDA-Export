0x594F00: sub     esp, 10Ch
0x594F06: mov     eax, ds:0B30AACh
0x594F0B: xor     eax, esp
0x594F0D: mov     [esp+10Ch+var_4], eax
0x594F14: fldz
0x594F16: push    ebx
0x594F17: push    esi
0x594F18: fst     [esp+114h+var_10C]
0x594F1C: mov     esi, ecx
0x594F1E: fstp    dword ptr [esi+98h]
0x594F24: push    edi; a3
0x594F25: mov     dword ptr [esi+9Ch], 0
0x594F2F: lea     edi, [esi+0B0h]
0x594F35: mov     ebx, 4
0x594F3A: lea     ebx, [ebx+0]
0x594F40: cmp     dword ptr [edi], 0
0x594F43: jz      short loc_594F64
0x594F45: add     dword ptr [esi+9Ch], 1
0x594F4C: mov     eax, [edi]
0x594F4E: mov     eax, [eax+8]
0x594F51: push    eax
0x594F52: call    TESWeightForm_GetWeightForForm_Fast
0x594F57: fadd    [esp+11Ch+var_10C]
0x594F5B: add     esp, 4
0x594F5E: fstp    [esp+118h+var_10C]
0x594F62: jmp     short loc_594F77
0x594F64: fld1
0x594F66: push    ecx
0x594F67: mov     ecx, [edi-48h]; this
0x594F6A: fstp    [esp+11Ch+a2]; a3
0x594F6D: push    0FA1h; a2
0x594F72: call    Tile_SetFloat
0x594F77: add     edi, 4
0x594F7A: sub     ebx, 1
0x594F7D: jnz     short loc_594F40
0x594F7F: fld     [esp+118h+var_10C]
0x594F83: push    ebp; a3
0x594F84: fidiv   dword ptr [esi+9Ch]
0x594F8A: fstp    dword ptr [esi+98h]
0x594F90: mov     eax, ds:0B3B270h
0x594F95: mov     edi, [esi+eax*4+0B0h]
0x594F9C: test    edi, edi
0x594F9E: mov     ebx, [esi+eax*4+40h]
0x594FA2: mov     ebp, [esi+eax*4+68h]
0x594FA6: jz      short loc_59501E
0x594FA8: mov     ecx, ds:0B333C4h
0x594FAE: push    ecx
0x594FAF: mov     ecx, edi
0x594FB1: call    sub_4851B0
0x594FB6: push    eax
0x594FB7: push    offset aIcons; "Icons"
0x594FBC: lea     edx, [esp+124h+var_108]
0x594FC0: push    offset aSS_2; "%s\\%s"
0x594FC5: push    edx
0x594FC6: call    __sprintf
0x594FCB: add     esp, 10h
0x594FCE: lea     eax, [esp+11Ch+var_108]
0x594FD2: push    eax
0x594FD3: push    0FE6h
0x594FD8: mov     ecx, ebp
0x594FDA: call    Tile_SetString
0x594FDF: fld     dword ptr ds:0A379B4h
0x594FE5: push    ecx
0x594FE6: fstp    [esp+120h+var_120]; a3
0x594FE9: push    0FA1h; a2
0x594FEE: mov     ecx, ebp; this
0x594FF0: call    Tile_SetFloat
0x594FF5: mov     ecx, edi
0x594FF7: call    TESHealthForm_GetHealth
0x594FFC: mov     [esp+11Ch+var_10C], eax
0x595000: fild    [esp+11Ch+var_10C]
0x595004: push    ecx
0x595005: mov     ecx, ebp; this
0x595007: fstp    [esp+120h+var_120]; a3
0x59500A: push    0FAEh; a2
0x59500F: call    Tile_SetFloat
0x595014: mov     ecx, edi
0x595016: call    sub_488DF0
0x59501B: push    eax
0x59501C: jmp     short loc_595025
0x59501E: mov     ecx, ds:0B388F8h
0x595024: push    ecx
0x595025: push    0FAEh
0x59502A: mov     ecx, ebx
0x59502C: call    Tile_SetString
0x595031: cmp     [esp+11Ch+arg_0], 0
0x595039: pop     ebp
0x59503A: jz      short loc_595064
0x59503C: cmp     byte ptr [esi+0A4h], 3
0x595043: jnz     short loc_59504C
0x595045: mov     byte ptr [esi+0A4h], 1
0x59504C: mov     ecx, ebx
0x59504E: call    sub_58E870
0x595053: mov     ecx, esi
0x595055: call    AlchemyMenu_CalcPotion?
0x59505A: mov     dword ptr ds:0B3B270h, 0
0x595064: mov     ecx, [esp+118h+var_4]
0x59506B: pop     edi
0x59506C: pop     esi
0x59506D: pop     ebx
0x59506E: xor     ecx, esp
0x595070: call    @__security_check_cookie@4; __security_check_cookie(x)
0x595075: add     esp, 10Ch
0x59507B: retn    4
