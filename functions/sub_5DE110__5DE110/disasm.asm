0x5DE110: mov     eax, [esp+arg_0]
0x5DE114: sub     esp, 8
0x5DE117: push    ebx; a3
0x5DE118: mov     ebx, ecx
0x5DE11A: lea     ecx, [eax-1]
0x5DE11D: cmp     ecx, 2Fh ; '/'
0x5DE120: push    esi; a3
0x5DE121: ja      short loc_5DE15C
0x5DE123: lea     esi, [eax-1]
0x5DE126: cmp     esi, 5
0x5DE129: jz      short loc_5DE165
0x5DE12B: cmp     esi, 0Ch
0x5DE12E: jz      short loc_5DE165
0x5DE130: cmp     esi, 0Eh
0x5DE133: jz      short loc_5DE165
0x5DE135: cmp     esi, 10h
0x5DE138: jz      short loc_5DE165
0x5DE13A: cmp     esi, 12h
0x5DE13D: jz      short loc_5DE165
0x5DE13F: cmp     esi, 16h
0x5DE142: jz      short loc_5DE165
0x5DE144: cmp     esi, 1Ch
0x5DE147: jz      short loc_5DE165
0x5DE149: cmp     esi, 20h ; ' '
0x5DE14C: jz      short loc_5DE165
0x5DE14E: cmp     esi, 22h ; '"'
0x5DE151: jz      short loc_5DE165
0x5DE153: cmp     esi, 24h ; '$'
0x5DE156: jz      short loc_5DE165
0x5DE158: xor     al, al
0x5DE15A: jmp     short loc_5DE167
0x5DE15C: mov     esi, 30h ; '0'
0x5DE161: xor     al, al
0x5DE163: jmp     short loc_5DE167
0x5DE165: mov     al, 1
0x5DE167: cmp     esi, 2
0x5DE16A: jz      short loc_5DE174
0x5DE16C: test    al, al
0x5DE16E: jz      loc_5DE275
0x5DE174: push    edi; a3
0x5DE175: push    1; arg1
0x5DE177: push    0; canCreate
0x5DE179: call    InterfaceManager_GetSingleton
0x5DE17E: mov     ebx, [ebx+esi*4+24h]
0x5DE182: add     esp, 8
0x5DE185: cmp     esi, 2
0x5DE188: mov     edi, eax
0x5DE18A: jnz     short loc_5DE1DD
0x5DE18C: call    sub_57D7F0
0x5DE191: fstp    [esp+14h+var_8]
0x5DE195: call    sub_57D7F0
0x5DE19A: fmul    qword ptr ds:0A2FAA0h
0x5DE1A0: fadd    dword ptr [edi+28h]
0x5DE1A3: fsubr   [esp+14h+var_8]
0x5DE1A7: call    Double_To_SInt32
0x5DE1AC: mov     [esp+14h+arg_0], eax
0x5DE1B0: fild    [esp+14h+arg_0]
0x5DE1B4: mov     ecx, ebx
0x5DE1B6: fstp    [esp+14h+arg_0]
0x5DE1BA: call    sub_588CF0
0x5DE1BF: fsubr   [esp+14h+arg_0]
0x5DE1C3: mov     esi, [esp+14h+arg_4]
0x5DE1C7: push    0FB6h
0x5DE1CC: mov     ecx, esi
0x5DE1CE: fstp    [esp+18h+var_8]
0x5DE1D2: call    Tile_GetFloat
0x5DE1D7: fdivr   [esp+14h+var_8]
0x5DE1DB: jmp     short loc_5DE21F
0x5DE1DD: call    sub_57D7A0
0x5DE1E2: fmul    qword ptr ds:0A2FAA0h
0x5DE1E8: fadd    dword ptr [edi+20h]
0x5DE1EB: call    Double_To_SInt32
0x5DE1F0: mov     [esp+14h+arg_0], eax
0x5DE1F4: fild    [esp+14h+arg_0]
0x5DE1F8: mov     ecx, ebx
0x5DE1FA: fstp    [esp+14h+arg_0]
0x5DE1FE: call    sub_588C50
0x5DE203: fsubr   [esp+14h+arg_0]
0x5DE207: mov     esi, [esp+14h+arg_4]
0x5DE20B: push    0FB6h
0x5DE210: mov     ecx, esi
0x5DE212: fstp    [esp+18h+var_8]
0x5DE216: call    Tile_GetFloat
0x5DE21B: fdivr   [esp+14h+var_8]
0x5DE21F: push    ecx
0x5DE220: fstp    [esp+18h+var_8]
0x5DE224: fld     dword ptr ds:0A6B1F0h
0x5DE22A: mov     ecx, esi; this
0x5DE22C: fstp    [esp+18h+a2]; a3
0x5DE22F: push    0FB7h; a2
0x5DE234: call    Tile_SetFloat
0x5DE239: fld     [esp+14h+var_8]
0x5DE23D: fstp    [esp+14h+arg_4]
0x5DE241: fld     [esp+14h+arg_4]
0x5DE245: call    Double_To_SInt32
0x5DE24A: mov     [esp+14h+arg_4], eax
0x5DE24E: fild    [esp+14h+arg_4]
0x5DE252: push    ecx
0x5DE253: mov     ecx, esi; this
0x5DE255: fstp    [esp+18h+a2]; a3
0x5DE258: push    0FB7h; a2
0x5DE25D: call    Tile_SetFloat
0x5DE262: fldz
0x5DE264: push    ecx
0x5DE265: fstp    [esp+18h+a2]; a3
0x5DE268: push    0FB7h; a2
0x5DE26D: mov     ecx, esi; this
0x5DE26F: call    Tile_SetFloat
0x5DE274: pop     edi
0x5DE275: pop     esi
0x5DE276: pop     ebx
0x5DE277: add     esp, 8
0x5DE27A: retn    8
