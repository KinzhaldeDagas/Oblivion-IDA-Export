0x5D6270: sub     esp, 108h
0x5D6276: mov     eax, ds:0B30AACh
0x5D627B: xor     eax, esp
0x5D627D: mov     [esp+108h+var_4], eax
0x5D6284: push    ebx; a3
0x5D6285: mov     ebx, [esp+10Ch+arg_0]
0x5D628C: push    esi; a3
0x5D628D: push    edi; a3
0x5D628E: push    0
0x5D6290: mov     edi, ecx
0x5D6292: mov     eax, [edi+28h]
0x5D6295: push    offset aChargen_skill_; "chargen_skill_template"
0x5D629A: push    eax
0x5D629B: call    Menu_CreateTileFromTemplate
0x5D62A0: mov     esi, eax
0x5D62A2: test    esi, esi
0x5D62A4: jz      loc_5D6372
0x5D62AA: mov     ecx, [edi+28h]
0x5D62AD: push    0FD0h
0x5D62B2: call    Tile_GetFloat
0x5D62B7: fsub    qword ptr ds:0A2F928h
0x5D62BD: call    Double_To_SInt32
0x5D62C2: mov     [esp+114h+a3], eax
0x5D62C6: fild    [esp+114h+a3]
0x5D62CA: push    ecx
0x5D62CB: mov     ecx, esi; this
0x5D62CD: fstp    [esp+118h+a3]; a3
0x5D62D1: fld     [esp+118h+a3]
0x5D62D5: fstp    [esp+118h+a2]; a3
0x5D62D8: push    0FAAh; a2
0x5D62DD: call    Tile_SetFloat
0x5D62E2: fld     [esp+114h+a3]
0x5D62E6: push    ecx
0x5D62E7: fstp    [esp+118h+a2]; a3
0x5D62EA: push    0FAEh; a2
0x5D62EF: mov     ecx, esi; this
0x5D62F1: call    Tile_SetFloat
0x5D62F6: mov     edi, ebx
0x5D62F8: lea     ecx, [esp+114h+var_104]
0x5D62FC: xor     edx, edx
0x5D62FE: sub     edi, ecx
0x5D6300: lea     eax, [esp+edx+114h+var_104]
0x5D6304: mov     cl, [edi+eax]
0x5D6307: cmp     cl, 20h ; ' '
0x5D630A: mov     [eax], cl
0x5D630C: jnz     short loc_5D6311
0x5D630E: mov     byte ptr [eax], 5Fh ; '_'
0x5D6311: cmp     byte ptr [eax], 0
0x5D6314: jz      short loc_5D6321
0x5D6316: add     edx, 1
0x5D6319: cmp     edx, 100h
0x5D631F: jl      short loc_5D6300
0x5D6321: push    0; a3
0x5D6323: lea     edx, [esp+118h+var_104]
0x5D6327: push    edx; a2
0x5D6328: lea     ecx, [esi+8]; this
0x5D632B: mov     [esp+11Ch+var_5], 0
0x5D6333: call    BSStringT_Set
0x5D6338: push    ebx
0x5D6339: push    0FAFh
0x5D633E: mov     ecx, esi
0x5D6340: call    Tile_SetString
0x5D6345: fild    [esp+114h+arg_4]
0x5D634C: push    ecx
0x5D634D: mov     ecx, esi; this
0x5D634F: fstp    [esp+118h+a2]; a3
0x5D6352: push    0FB0h; a2
0x5D6357: call    Tile_SetFloat
0x5D635C: fld1
0x5D635E: push    ecx
0x5D635F: fstp    [esp+118h+a2]; a3
0x5D6362: push    0FB1h; a2
0x5D6367: mov     ecx, esi; this
0x5D6369: call    Tile_SetFloat
0x5D636E: mov     eax, esi
0x5D6370: jmp     short loc_5D6374
0x5D6372: xor     eax, eax
0x5D6374: mov     ecx, [esp+114h+var_4]
0x5D637B: pop     edi
0x5D637C: pop     esi
0x5D637D: pop     ebx
0x5D637E: xor     ecx, esp
0x5D6380: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D6385: add     esp, 108h
0x5D638B: retn    8
