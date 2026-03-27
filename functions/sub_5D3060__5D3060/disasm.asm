0x5D3060: sub     esp, 714h
0x5D3066: mov     eax, ds:0B30AACh
0x5D306B: xor     eax, esp
0x5D306D: mov     [esp+714h+var_4], eax
0x5D3074: push    ebx
0x5D3075: push    esi; a3
0x5D3076: mov     ebx, ecx
0x5D3078: mov     esi, [ebx+4Ch]
0x5D307B: test    esi, esi
0x5D307D: push    edi; a3
0x5D307E: mov     eax, 1
0x5D3083: jz      loc_5D3207
0x5D3089: mov     ecx, [esp+720h+arg_0]
0x5D3090: cmp     dword ptr [esi], 0
0x5D3093: jz      loc_5D3207
0x5D3099: cmp     ecx, eax
0x5D309B: jz      short loc_5D30AC
0x5D309D: mov     esi, [esi+4]
0x5D30A0: add     eax, 1
0x5D30A3: test    esi, esi
0x5D30A5: jnz     short loc_5D3090
0x5D30A7: jmp     loc_5D3207
0x5D30AC: mov     eax, [ebx+40h]
0x5D30AF: push    0; int
0x5D30B1: push    offset ??_R0?AVTileImage@@@8; struct TypeDescriptor *
0x5D30B6: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5D30BB: push    0; int
0x5D30BD: push    eax; void *
0x5D30BE: call    OblivionDynamicCast
0x5D30C3: mov     edi, eax
0x5D30C5: add     esp, 14h
0x5D30C8: test    edi, edi
0x5D30CA: jz      short loc_5D30F6
0x5D30CC: push    ecx
0x5D30CD: mov     eax, esp
0x5D30CF: mov     ecx, edi
0x5D30D1: mov     [esp+724h+var_710], esp
0x5D30D5: mov     dword ptr [eax], 0
0x5D30DB: call    sub_591A80
0x5D30E0: fld     dword ptr ds:0A379B4h
0x5D30E6: push    ecx
0x5D30E7: fstp    [esp+724h+a2]; a3
0x5D30EA: push    0FA1h; a2
0x5D30EF: mov     ecx, edi; this
0x5D30F1: call    Tile_SetFloat
0x5D30F6: mov     esi, [esi]
0x5D30F8: push    0; char
0x5D30FA: lea     ecx, [esp+724h+var_714]
0x5D30FE: push    ecx; int
0x5D30FF: push    0; int
0x5D3101: lea     edx, [esp+72Ch+var_4B4]
0x5D3108: push    edx; int
0x5D3109: lea     eax, [esp+730h+var_70C]
0x5D310D: push    eax; int
0x5D310E: lea     ecx, [esp+734h+var_25C]
0x5D3115: push    ecx; void *
0x5D3116: mov     ecx, ds:0B33B00h
0x5D311C: lea     edx, [esp+738h+var_5E0]
0x5D3123: push    edx; int
0x5D3124: lea     eax, [esp+73Ch+Dst]
0x5D312B: push    eax; Dst
0x5D312C: push    0; int
0x5D312E: push    esi; int
0x5D312F: call    sub_4610F0
0x5D3134: lea     ecx, [esp+720h+var_4B4]
0x5D313B: push    ecx
0x5D313C: mov     esi, eax
0x5D313E: lea     edx, [esp+724h+var_70C]
0x5D3142: push    edx
0x5D3143: lea     eax, [esp+728h+var_25C]
0x5D314A: push    eax
0x5D314B: lea     ecx, [esp+72Ch+var_5E0]
0x5D3152: push    ecx
0x5D3153: lea     edx, [esp+730h+Dst]
0x5D315A: push    edx
0x5D315B: lea     eax, [esp+734h+var_130]
0x5D3162: push    offset aSSSSS; "%s\n%s\n%s\n%s\n%s"
0x5D3167: push    eax
0x5D3168: call    __sprintf
0x5D316D: add     esp, 1Ch
0x5D3170: lea     ecx, [esp+720h+var_130]
0x5D3177: push    ecx
0x5D3178: mov     ecx, [ebx+44h]
0x5D317B: push    0FDEh
0x5D3180: call    Tile_SetString
0x5D3185: fild    [esp+720h+var_714]
0x5D3189: push    ecx
0x5D318A: mov     ecx, [ebx+40h]; this
0x5D318D: fstp    [esp+724h+a2]; a3
0x5D3190: push    0FAEh; a2
0x5D3195: call    Tile_SetFloat
0x5D319A: test    edi, edi
0x5D319C: jz      short loc_5D31E7
0x5D319E: test    esi, esi
0x5D31A0: push    ecx; a3
0x5D31A1: mov     eax, esp
0x5D31A3: mov     [esp+724h+var_710], esp
0x5D31A7: mov     [eax], esi
0x5D31A9: jz      short loc_5D31B5
0x5D31AB: lea     edx, [esi+4]
0x5D31AE: push    edx; lpAddend
0x5D31AF: call    dword ptr ds:0A28078h
0x5D31B5: mov     ecx, edi
0x5D31B7: call    sub_591A80
0x5D31BC: test    esi, esi
0x5D31BE: jnz     short loc_5D31EB
0x5D31C0: fld1
0x5D31C2: push    ecx
0x5D31C3: fstp    [esp+724h+a2]; a3
0x5D31C6: mov     ecx, edi; this
0x5D31C8: push    0FA1h; a2
0x5D31CD: call    Tile_SetFloat
0x5D31D2: mov     eax, ds:0B38750h
0x5D31D7: mov     ecx, [ebx+44h]
0x5D31DA: push    eax
0x5D31DB: push    0FDEh
0x5D31E0: call    Tile_SetString
0x5D31E5: jmp     short loc_5D3207
0x5D31E7: test    esi, esi
0x5D31E9: jz      short loc_5D3207
0x5D31EB: lea     ecx, [esi+4]
0x5D31EE: push    ecx; lpAddend
0x5D31EF: call    dword ptr ds:0A2807Ch
0x5D31F5: test    eax, eax
0x5D31F7: jnz     short loc_5D3207
0x5D31F9: test    esi, esi
0x5D31FB: jz      short loc_5D3207
0x5D31FD: mov     edx, [esi]
0x5D31FF: mov     eax, [edx]
0x5D3201: push    1
0x5D3203: mov     ecx, esi
0x5D3205: call    eax
0x5D3207: mov     ecx, [esp+720h+var_4]
0x5D320E: pop     edi
0x5D320F: pop     esi
0x5D3210: pop     ebx
0x5D3211: xor     ecx, esp
0x5D3213: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D3218: add     esp, 714h
0x5D321E: retn    4
