0x5AC7CF: cmp     eax, 3
0x5AC7D2: jnz     LevelUpMenu_HandleClick___Done
0x5AC7D8: push    esi; a3
0x5AC7D9: mov     esi, [esp+4+arg_8]
0x5AC7DD: push    edi; a3
0x5AC7DE: push    0FAEh
0x5AC7E3: mov     ecx, esi
0x5AC7E5: call    Tile_GetFloat
0x5AC7EA: fcomp   dword ptr ds:0A2F948h
0x5AC7F0: mov     ecx, esi
0x5AC7F2: fnstsw  ax
0x5AC7F4: test    ah, 44h
0x5AC7F7: jp      loc_5AC881
0x5AC7FD: push    ebx; a3
0x5AC7FE: push    0FAAh
0x5AC803: call    Tile_GetFloat
0x5AC808: call    Double_To_SInt32
0x5AC80D: push    eax
0x5AC80E: push    0
0x5AC810: call    ActorValue_GetAVFromGroupOffset
0x5AC815: fld     dword ptr ds:0A379B4h
0x5AC81B: add     esp, 4
0x5AC81E: fstp    [esp+10h+a2]; a3
0x5AC821: push    0FAEh; a2
0x5AC826: mov     ecx, esi; this
0x5AC828: mov     ebx, eax
0x5AC82A: call    Tile_SetFloat
0x5AC82F: mov     ecx, ds:0B333C4h
0x5AC835: push    ebx
0x5AC836: call    Actor_GetBaseCalcAVi
0x5AC83B: mov     ecx, ds:0B333C4h
0x5AC841: push    ebx
0x5AC842: mov     edi, eax
0x5AC844: call    Player_GetAttributeLevelingBonus
0x5AC849: add     edi, eax
0x5AC84B: cmp     edi, 64h ; 'd'
0x5AC84E: pop     ebx
0x5AC84F: mov     [esp+8+arg_4], edi
0x5AC853: jle     short loc_5AC85D
0x5AC855: mov     [esp+8+arg_4], 64h ; 'd'
0x5AC85D: fild    [esp+8+arg_4]
0x5AC861: push    ecx
0x5AC862: mov     ecx, esi; this
0x5AC864: fstp    [esp+0Ch+var_C]; a3
0x5AC867: push    0FB1h; a2
0x5AC86C: call    Tile_SetFloat
0x5AC871: push    14h; int
0x5AC873: call    sub_57DE50
0x5AC878: add     esp, 4
0x5AC87B: add     dword ptr [ebp+2Ch], 0FFFFFFFFh
0x5AC87F: jmp     short loc_5AC8E0
0x5AC881: push    0FAAh
0x5AC886: call    Tile_GetFloat
0x5AC88B: call    Double_To_SInt32
0x5AC890: push    eax
0x5AC891: push    0
0x5AC893: call    ActorValue_GetAVFromGroupOffset
0x5AC898: fld1
0x5AC89A: add     esp, 4
0x5AC89D: fstp    [esp+0Ch+var_C]; a3
0x5AC8A0: push    0FAEh; a2
0x5AC8A5: mov     ecx, esi; this
0x5AC8A7: mov     edi, eax
0x5AC8A9: call    Tile_SetFloat
0x5AC8AE: mov     ecx, ds:0B333C4h
0x5AC8B4: push    edi
0x5AC8B5: call    Actor_GetBaseCalcAVi
0x5AC8BA: mov     [esp+8+arg_4], eax
0x5AC8BE: fild    [esp+8+arg_4]
0x5AC8C2: push    ecx
0x5AC8C3: mov     ecx, esi; this
0x5AC8C5: fstp    [esp+0Ch+var_C]; a3
0x5AC8C8: push    0FB1h; a2
0x5AC8CD: call    Tile_SetFloat
0x5AC8D2: push    15h; int
0x5AC8D4: call    sub_57DE50
0x5AC8D9: add     esp, 4
0x5AC8DC: add     dword ptr [ebp+2Ch], 1
0x5AC8E0: mov     eax, [ebp+2Ch]
0x5AC8E3: neg     eax
0x5AC8E5: sbb     eax, eax
0x5AC8E7: add     eax, 2
0x5AC8EA: mov     [esp+8+arg_4], eax
0x5AC8EE: fild    [esp+8+arg_4]
0x5AC8F2: push    ecx
0x5AC8F3: mov     ecx, [ebp+4]; this
0x5AC8F6: fstp    [esp+0Ch+var_C]; a3
0x5AC8F9: push    0FAFh; a2
0x5AC8FE: call    Tile_SetFloat
0x5AC903: mov     ecx, [ebp+28h]
0x5AC906: mov     edi, [ecx+34h]
0x5AC909: test    edi, edi
0x5AC90B: jz      short LevelUpMenu_HandleClick___Done_
0x5AC90D: lea     ecx, [ecx+0]
0x5AC910: cmp     dword ptr [ebp+2Ch], 0
0x5AC914: mov     esi, [edi+8]
0x5AC917: lea     eax, [edi+8]
0x5AC91A: mov     edi, [edi]
0x5AC91C: mov     ecx, esi
0x5AC91E: jle     short loc_5AC956
0x5AC920: push    0FAAh
0x5AC925: call    Tile_GetFloat
0x5AC92A: call    Double_To_SInt32
0x5AC92F: push    eax
0x5AC930: push    0
0x5AC932: call    ActorValue_GetAVFromGroupOffset
0x5AC937: mov     ecx, ds:0B333C4h
0x5AC93D: add     esp, 8
0x5AC940: push    eax
0x5AC941: call    Actor_GetBaseCalcAVi
0x5AC946: cmp     eax, 64h ; 'd'
0x5AC949: push    ecx
0x5AC94A: mov     ecx, esi
0x5AC94C: jge     short loc_5AC976
0x5AC94E: fld     dword ptr ds:0A379B4h
0x5AC954: jmp     short loc_5AC978
0x5AC956: push    0FAEh
0x5AC95B: call    Tile_GetFloat
0x5AC960: fld     dword ptr ds:0A379B4h
0x5AC966: fucom   st(1)
0x5AC968: push    ecx
0x5AC969: mov     ecx, esi; this
0x5AC96B: fnstsw  ax
0x5AC96D: fstp    st(1)
0x5AC96F: test    ah, 44h
0x5AC972: jnp     short loc_5AC978
0x5AC974: fstp    st
0x5AC976: fld1
0x5AC978: fstp    [esp+0Ch+var_C]; a3
0x5AC97B: push    0FB4h; a2
0x5AC980: call    Tile_SetFloat
0x5AC985: test    edi, edi
0x5AC987: jnz     short loc_5AC910
