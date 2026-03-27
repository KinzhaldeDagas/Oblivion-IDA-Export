0x5F8460: push    esi
0x5F8461: mov     esi, ecx
0x5F8463: cmp     dword ptr [esi+58h], 0
0x5F8467: jz      loc_5F85D4
0x5F846D: mov     ecx, [esi+58h]
0x5F8470: mov     eax, [ecx]
0x5F8472: mov     edx, [eax+2D0h]
0x5F8478: call    edx
0x5F847A: add     eax, 0FFFFFFFEh
0x5F847D: cmp     eax, 3
0x5F8480: ja      loc_5F85D4
0x5F8486: mov     ecx, ds:0B333C4h; this
0x5F848C: fldz
0x5F848E: cmp     esi, ecx
0x5F8490: push    ecx
0x5F8491: fstp    [esp+8+var_8]; float
0x5F8494: push    3; int
0x5F8496: jnz     short loc_5F84F5
0x5F8498: push    1; a2
0x5F849A: call    Player_GetAnimData
0x5F849F: mov     ecx, eax
0x5F84A1: call    sub_470FC0
0x5F84A6: fldz
0x5F84A8: push    ecx
0x5F84A9: fstp    [esp+8+var_8]; float
0x5F84AC: mov     ecx, ds:0B333C4h; this
0x5F84B2: push    3; int
0x5F84B4: push    0; a2
0x5F84B6: call    Player_GetAnimData
0x5F84BB: mov     ecx, eax
0x5F84BD: call    sub_470FC0
0x5F84C2: fldz
0x5F84C4: push    ecx
0x5F84C5: fstp    [esp+8+var_8]; float
0x5F84C8: mov     ecx, ds:0B333C4h; this
0x5F84CE: push    1; int
0x5F84D0: push    1; a2
0x5F84D2: call    Player_GetAnimData
0x5F84D7: mov     ecx, eax
0x5F84D9: call    sub_470FC0
0x5F84DE: fldz
0x5F84E0: push    ecx
0x5F84E1: fstp    [esp+8+var_8]
0x5F84E4: mov     ecx, ds:0B333C4h; this
0x5F84EA: push    1
0x5F84EC: push    0; a2
0x5F84EE: call    Player_GetAnimData
0x5F84F3: jmp     short loc_5F851C
0x5F84F5: mov     eax, [esi]
0x5F84F7: mov     edx, [eax+164h]
0x5F84FD: mov     ecx, esi
0x5F84FF: call    edx
0x5F8501: mov     ecx, eax
0x5F8503: call    sub_470FC0
0x5F8508: fldz
0x5F850A: mov     eax, [esi]
0x5F850C: mov     edx, [eax+164h]
0x5F8512: push    ecx
0x5F8513: fstp    [esp+8+var_8]; float
0x5F8516: push    1; int
0x5F8518: mov     ecx, esi
0x5F851A: call    edx
0x5F851C: mov     ecx, eax
0x5F851E: call    sub_470FC0
0x5F8523: mov     ecx, [esi+58h]
0x5F8526: mov     eax, [ecx]
0x5F8528: mov     edx, [eax+2D8h]
0x5F852E: push    0
0x5F8530: push    0FFFFFFFFh
0x5F8532: call    edx
0x5F8534: mov     ecx, [esi+58h]
0x5F8537: mov     eax, [ecx]
0x5F8539: mov     edx, [eax+138h]
0x5F853F: call    edx
0x5F8541: test    al, al
0x5F8543: jz      loc_5F85D4
0x5F8549: mov     ecx, ds:0B333C4h
0x5F854F: cmp     esi, ecx
0x5F8551: push    ebx
0x5F8552: push    edi
0x5F8553: jnz     short loc_5F855E
0x5F8555: push    0
0x5F8557: call    sub_6600D0
0x5F855C: jmp     short loc_5F856A
0x5F855E: mov     eax, [esi]
0x5F8560: mov     edx, [eax+168h]
0x5F8566: mov     ecx, esi
0x5F8568: call    edx
0x5F856A: mov     ecx, ds:0B333C4h
0x5F8570: cmp     esi, ecx
0x5F8572: mov     edi, eax
0x5F8574: mov     ebx, 1
0x5F8579: jnz     short loc_5F8591
0x5F857B: mov     ebx, 2
0x5F8580: cmp     esi, ecx
0x5F8582: jnz     short loc_5F8591
0x5F8584: cmp     ebx, 1
0x5F8587: jnz     short loc_5F8591
0x5F8589: push    ebx
0x5F858A: call    sub_6600D0
0x5F858F: mov     edi, eax
0x5F8591: mov     ecx, [esi+58h]
0x5F8594: mov     eax, [ecx]
0x5F8596: mov     edx, [eax+12Ch]
0x5F859C: push    edi
0x5F859D: call    edx
0x5F859F: test    eax, eax
0x5F85A1: jz      short loc_5F85AE
0x5F85A3: lea     ecx, [eax+0ACh]
0x5F85A9: call    sub_477EF0
0x5F85AE: mov     ecx, ds:0B333C4h
0x5F85B4: cmp     esi, ecx
0x5F85B6: jnz     short loc_5F85BD
0x5F85B8: cmp     ebx, 2
0x5F85BB: jnz     short loc_5F85CD
0x5F85BD: push    0
0x5F85BF: push    edi
0x5F85C0: mov     ecx, esi
0x5F85C2: call    sub_5F8300
0x5F85C7: mov     ecx, ds:0B333C4h
0x5F85CD: sub     ebx, 1
0x5F85D0: jnz     short loc_5F8580
0x5F85D2: pop     edi
0x5F85D3: pop     ebx
0x5F85D4: pop     esi
0x5F85D5: retn
