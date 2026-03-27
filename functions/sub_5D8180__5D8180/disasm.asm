0x5D8180: sub     esp, 11Ch
0x5D8186: mov     eax, ds:0B30AACh
0x5D818B: xor     eax, esp
0x5D818D: mov     [esp+11Ch+var_4], eax
0x5D8194: push    ebx; a3
0x5D8195: push    ebp; a3
0x5D8196: push    esi; a3
0x5D8197: mov     esi, ecx
0x5D8199: mov     ecx, [esi+2Ch]
0x5D819C: mov     [esp+128h+var_110], esi
0x5D81A0: call    sub_5893F0
0x5D81A5: mov     eax, [esi+74h]
0x5D81A8: test    eax, eax
0x5D81AA: mov     [esp+128h+var_119], 0
0x5D81AF: jz      short loc_5D81B6
0x5D81B1: add     eax, 28h ; '('
0x5D81B4: jmp     short loc_5D81B8
0x5D81B6: xor     eax, eax
0x5D81B8: test    eax, eax
0x5D81BA: jz      short loc_5D81D7
0x5D81BC: mov     ecx, [eax]
0x5D81BE: test    ecx, ecx
0x5D81C0: jz      short loc_5D81D7
0x5D81C2: mov     ecx, [ecx+1Ch]
0x5D81C5: mov     ecx, [ecx+58h]
0x5D81C8: mov     eax, [eax+4]
0x5D81CB: shr     ecx, 12h
0x5D81CE: and     cl, 1
0x5D81D1: mov     [esp+128h+var_119], cl
0x5D81D5: jz      short loc_5D81B8
0x5D81D7: mov     ebx, [esi+58h]
0x5D81DA: xor     ebp, ebp
0x5D81DC: test    ebx, ebx
0x5D81DE: mov     [esp+128h+a3], 0; a3
0x5D81E6: mov     [esp+128h+var_114], ebp
0x5D81EA: jz      loc_5D8351
0x5D81F0: push    edi; a3
0x5D81F1: mov     edi, [ebx]
0x5D81F3: test    edi, edi
0x5D81F5: jz      loc_5D8340
0x5D81FB: mov     eax, [edi+98h]
0x5D8201: mov     ecx, [esi+74h]
0x5D8204: push    48h ; 'H'
0x5D8206: push    eax
0x5D8207: add     ecx, 24h ; '$'
0x5D820A: call    EffectItemList_HasEffect
0x5D820F: test    al, al
0x5D8211: jnz     loc_5D8340
0x5D8217: cmp     [esp+12Ch+var_119], al
0x5D821B: jz      short loc_5D822C
0x5D821D: mov     edx, [edi+58h]
0x5D8220: shr     edx, 12h
0x5D8223: test    dl, 1
0x5D8226: jnz     loc_5D8340
0x5D822C: mov     eax, [esi+2Ch]
0x5D822F: push    0
0x5D8231: push    offset aKnown_effect_t; "known_effect_template"
0x5D8236: push    eax
0x5D8237: mov     ecx, esi
0x5D8239: call    Menu_CreateTileFromTemplate
0x5D823E: mov     esi, eax
0x5D8240: test    esi, esi
0x5D8242: jz      loc_5D833C
0x5D8248: fild    [esp+12Ch+a3]
0x5D824C: push    ecx
0x5D824D: mov     ecx, esi; this
0x5D824F: fstp    [esp+130h+a2]; a3
0x5D8252: push    0FAEh; a2
0x5D8257: call    Tile_SetFloat
0x5D825C: lea     ecx, [ebp+3E8h]
0x5D8262: mov     [esp+12Ch+var_10C], ecx
0x5D8266: fild    [esp+12Ch+var_10C]
0x5D826A: push    ecx
0x5D826B: mov     ecx, esi; this
0x5D826D: fstp    [esp+130h+a2]; a3
0x5D8270: push    0FA8h; a2
0x5D8275: call    Tile_SetFloat
0x5D827A: fild    [esp+12Ch+var_114]
0x5D827E: push    ecx
0x5D827F: mov     ecx, esi; this
0x5D8281: fstp    [esp+130h+a2]; a3
0x5D8284: push    0FAAh; a2
0x5D8289: call    Tile_SetFloat
0x5D828E: mov     eax, [edi+3Ch]
0x5D8291: test    eax, eax
0x5D8293: jnz     short loc_5D829A
0x5D8295: mov     eax, offset EmptyString
0x5D829A: push    eax
0x5D829B: push    0FB1h
0x5D82A0: mov     ecx, esi
0x5D82A2: call    Tile_SetString
0x5D82A7: mov     eax, [edi+3Ch]
0x5D82AA: test    eax, eax
0x5D82AC: jnz     short loc_5D82B3
0x5D82AE: mov     eax, offset EmptyString
0x5D82B3: push    0; a3
0x5D82B5: push    eax; a2
0x5D82B6: lea     ecx, [esi+8]; this
0x5D82B9: call    BSStringT_Set
0x5D82BE: mov     eax, [edi+48h]
0x5D82C1: test    eax, eax
0x5D82C3: jnz     short loc_5D82CA
0x5D82C5: mov     eax, offset EmptyString
0x5D82CA: push    eax
0x5D82CB: push    offset aIcons; "Icons"
0x5D82D0: lea     edx, [esp+134h+var_108]
0x5D82D4: push    offset aSS_2; "%s\\%s"
0x5D82D9: push    edx
0x5D82DA: call    __sprintf
0x5D82DF: add     esp, 10h
0x5D82E2: lea     eax, [esp+12Ch+var_108]
0x5D82E6: push    eax
0x5D82E7: push    0FAFh
0x5D82EC: mov     ecx, esi
0x5D82EE: call    Tile_SetString
0x5D82F3: fild    dword ptr [edi+98h]
0x5D82F9: push    ecx
0x5D82FA: mov     ecx, esi; this
0x5D82FC: fstp    [esp+130h+a2]; a3
0x5D82FF: push    0FB2h; a2
0x5D8304: call    Tile_SetFloat
0x5D8309: fld     dword ptr ds:0A31C80h
0x5D830F: push    ecx
0x5D8310: fstp    [esp+130h+a2]; a3
0x5D8313: push    0FB4h; a2
0x5D8318: mov     ecx, esi; this
0x5D831A: call    Tile_SetFloat
0x5D831F: fld     dword ptr ds:0A379B4h
0x5D8325: push    ecx
0x5D8326: fstp    [esp+130h+a2]; a3
0x5D8329: push    0FC9h; a2
0x5D832E: mov     ecx, esi; this
0x5D8330: call    Tile_SetFloat
0x5D8335: add     ebp, 1
0x5D8338: mov     [esp+12Ch+var_114], ebp
0x5D833C: mov     esi, [esp+12Ch+var_110]
0x5D8340: mov     ebx, [ebx+4]
0x5D8343: add     [esp+12Ch+a3], 1
0x5D8348: test    ebx, ebx
0x5D834A: jnz     loc_5D81F1
0x5D8350: pop     edi
0x5D8351: mov     ecx, [esp+128h+var_4]
0x5D8358: pop     esi
0x5D8359: pop     ebp
0x5D835A: pop     ebx
0x5D835B: xor     ecx, esp
0x5D835D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D8362: add     esp, 11Ch
0x5D8368: retn
