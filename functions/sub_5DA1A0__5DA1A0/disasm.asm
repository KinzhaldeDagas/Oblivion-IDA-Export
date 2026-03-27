0x5DA1A0: sub     esp, 0Ch
0x5DA1A3: push    ebx; a3
0x5DA1A4: push    ebp; a3
0x5DA1A5: push    esi; a3
0x5DA1A6: push    edi; a3
0x5DA1A7: mov     edi, [esp+1Ch+arg_0]
0x5DA1AB: xor     ebx, ebx
0x5DA1AD: xor     ebp, ebp
0x5DA1AF: cmp     edi, 0FFFFFFFFh
0x5DA1B2: mov     esi, ecx
0x5DA1B4: mov     [esp+1Ch+var_8], ebx
0x5DA1B8: mov     [esp+1Ch+a3], ebp; a3
0x5DA1BC: jnz     loc_5DA876
0x5DA1C2: push    ebx
0x5DA1C3: push    2
0x5DA1C5: call    ActorValue_GetAVFromGroupOffset
0x5DA1CA: mov     ecx, ds:0B333C4h
0x5DA1D0: add     esp, 8
0x5DA1D3: mov     ebp, eax
0x5DA1D5: call    Actor_GetBaseClass
0x5DA1DA: test    eax, eax
0x5DA1DC: jz      short loc_5DA1FA
0x5DA1DE: mov     ecx, ds:0B333C4h
0x5DA1E4: push    ebp
0x5DA1E5: call    Actor_GetBaseClass
0x5DA1EA: mov     ecx, eax
0x5DA1EC: call    sub_51C090
0x5DA1F1: test    al, al
0x5DA1F3: jz      short loc_5DA1FA
0x5DA1F5: add     [esp+1Ch+a3], 1
0x5DA1FA: add     ebx, 1
0x5DA1FD: cmp     ebx, 15h
0x5DA200: jl      short loc_5DA1C2
0x5DA202: fild    [esp+1Ch+a3]
0x5DA206: push    ecx
0x5DA207: mov     ecx, [esi+30h]; this
0x5DA20A: fstp    [esp+20h+a2]; a3
0x5DA20D: push    0FB1h; a2
0x5DA212: call    Tile_SetFloat
0x5DA217: cmp     [esp+1Ch+a3], 0
0x5DA21C: jle     short loc_5DA223
0x5DA21E: add     [esp+1Ch+a3], 1
0x5DA223: mov     ebp, [esp+1Ch+a3]
0x5DA227: mov     ecx, ds:0B333C4h
0x5DA22D: push    8
0x5DA22F: push    0
0x5DA231: call    Player_GetAVModifierf
0x5DA236: fstp    [esp+1Ch+a3]; a3
0x5DA23A: mov     ecx, ds:0B333C4h
0x5DA240: mov     eax, [ecx]
0x5DA242: mov     edx, [eax+284h]
0x5DA248: push    8; a3
0x5DA24A: call    edx
0x5DA24C: mov     [esp+1Ch+arg_0], eax; a3
0x5DA250: fild    [esp+1Ch+arg_0]
0x5DA254: push    ecx
0x5DA255: mov     ecx, [esi+28h]; this
0x5DA258: fstp    [esp+20h+a2]; a3
0x5DA25B: push    0FB4h; a2
0x5DA260: call    Tile_SetFloat
0x5DA265: fld     [esp+1Ch+a3]
0x5DA269: fcom    qword ptr ds:0A2FC68h
0x5DA26F: fnstsw  ax
0x5DA271: test    ah, 5
0x5DA274: jp      short loc_5DA27A
0x5DA276: fstp    st
0x5DA278: fldz
0x5DA27A: mov     ecx, ds:0B333C4h
0x5DA280: fstp    [esp+1Ch+arg_0]
0x5DA284: push    8
0x5DA286: call    Actor_GetBaseCalcAVi
0x5DA28B: mov     [esp+1Ch+var_4], eax
0x5DA28F: fild    [esp+1Ch+var_4]
0x5DA293: push    ecx
0x5DA294: mov     ecx, [esi+28h]; this
0x5DA297: fadd    [esp+20h+arg_0]
0x5DA29B: fstp    [esp+20h+arg_0]
0x5DA29F: fld     [esp+20h+arg_0]
0x5DA2A3: fstp    [esp+20h+a2]; a3
0x5DA2A6: push    0FB5h; a2
0x5DA2AB: call    Tile_SetFloat
0x5DA2B0: fld     [esp+1Ch+a3]
0x5DA2B4: push    ecx
0x5DA2B5: mov     ecx, [esi+28h]; this
0x5DA2B8: fstp    [esp+20h+a2]; a3
0x5DA2BB: push    0FBAh; a2
0x5DA2C0: call    Tile_SetFloat
0x5DA2C5: cmp     edi, 0FFFFFFFFh
0x5DA2C8: jz      short loc_5DA2D3
0x5DA2CA: cmp     edi, 9
0x5DA2CD: jnz     loc_5DA371
0x5DA2D3: mov     ecx, ds:0B333C4h
0x5DA2D9: push    9
0x5DA2DB: push    0
0x5DA2DD: call    Player_GetAVModifierf
0x5DA2E2: fstp    [esp+1Ch+a3]; a3
0x5DA2E6: mov     ecx, ds:0B333C4h
0x5DA2EC: mov     eax, [ecx]
0x5DA2EE: mov     edx, [eax+284h]
0x5DA2F4: push    9; a3
0x5DA2F6: call    edx
0x5DA2F8: mov     [esp+1Ch+arg_0], eax; a3
0x5DA2FC: fild    [esp+1Ch+arg_0]
0x5DA300: push    ecx
0x5DA301: mov     ecx, [esi+28h]; this
0x5DA304: fstp    [esp+20h+a2]; a3
0x5DA307: push    0FB6h; a2
0x5DA30C: call    Tile_SetFloat
0x5DA311: fld     [esp+1Ch+a3]
0x5DA315: fcom    qword ptr ds:0A2FC68h
0x5DA31B: fnstsw  ax
0x5DA31D: test    ah, 5
0x5DA320: jp      short loc_5DA326
0x5DA322: fstp    st
0x5DA324: fldz
0x5DA326: mov     ecx, ds:0B333C4h
0x5DA32C: fstp    [esp+1Ch+arg_0]
0x5DA330: push    9
0x5DA332: call    Actor_GetBaseCalcAVi
0x5DA337: mov     [esp+1Ch+var_4], eax
0x5DA33B: fild    [esp+1Ch+var_4]
0x5DA33F: push    ecx
0x5DA340: mov     ecx, [esi+28h]; this
0x5DA343: fadd    [esp+20h+arg_0]
0x5DA347: fstp    [esp+20h+arg_0]
0x5DA34B: fld     [esp+20h+arg_0]
0x5DA34F: fstp    [esp+20h+a2]; a3
0x5DA352: push    0FB7h; a2
0x5DA357: call    Tile_SetFloat
0x5DA35C: fld     [esp+1Ch+a3]
0x5DA360: push    ecx
0x5DA361: mov     ecx, [esi+28h]; this
0x5DA364: fstp    [esp+20h+a2]; a3
0x5DA367: push    0FBBh; a2
0x5DA36C: call    Tile_SetFloat
0x5DA371: cmp     edi, 0FFFFFFFFh
0x5DA374: jz      short loc_5DA37F
0x5DA376: cmp     edi, 0Ah
0x5DA379: jnz     loc_5DA41D
0x5DA37F: mov     ecx, ds:0B333C4h
0x5DA385: push    0Ah
0x5DA387: push    0
0x5DA389: call    Player_GetAVModifierf
0x5DA38E: fstp    [esp+1Ch+a3]; a3
0x5DA392: mov     ecx, ds:0B333C4h
0x5DA398: mov     eax, [ecx]
0x5DA39A: mov     edx, [eax+284h]
0x5DA3A0: push    0Ah; a3
0x5DA3A2: call    edx
0x5DA3A4: mov     [esp+1Ch+arg_0], eax; a3
0x5DA3A8: fild    [esp+1Ch+arg_0]
0x5DA3AC: push    ecx
0x5DA3AD: mov     ecx, [esi+28h]; this
0x5DA3B0: fstp    [esp+20h+a2]; a3
0x5DA3B3: push    0FB8h; a2
0x5DA3B8: call    Tile_SetFloat
0x5DA3BD: fld     [esp+1Ch+a3]
0x5DA3C1: fcom    qword ptr ds:0A2FC68h
0x5DA3C7: fnstsw  ax
0x5DA3C9: test    ah, 5
0x5DA3CC: jp      short loc_5DA3D2
0x5DA3CE: fstp    st
0x5DA3D0: fldz
0x5DA3D2: mov     ecx, ds:0B333C4h
0x5DA3D8: fstp    [esp+1Ch+arg_0]
0x5DA3DC: push    0Ah
0x5DA3DE: call    Actor_GetBaseCalcAVi
0x5DA3E3: mov     [esp+1Ch+var_4], eax; a3
0x5DA3E7: fild    [esp+1Ch+var_4]
0x5DA3EB: push    ecx
0x5DA3EC: mov     ecx, [esi+28h]; this
0x5DA3EF: fadd    [esp+20h+arg_0]
0x5DA3F3: fstp    [esp+20h+arg_0]; a3
0x5DA3F7: fld     [esp+20h+arg_0]
0x5DA3FB: fstp    [esp+20h+a2]; a3
0x5DA3FE: push    0FB9h; a2
0x5DA403: call    Tile_SetFloat
0x5DA408: fld     [esp+1Ch+a3]
0x5DA40C: push    ecx
0x5DA40D: mov     ecx, [esi+28h]; this
0x5DA410: fstp    [esp+20h+a2]; a3
0x5DA413: push    0FBCh; a2
0x5DA418: call    Tile_SetFloat
0x5DA41D: cmp     edi, 0FFFFFFFFh
0x5DA420: jz      short loc_5DA426
0x5DA422: test    edi, edi
0x5DA424: jnz     short loc_5DA477
0x5DA426: mov     ecx, ds:0B333C4h
0x5DA42C: mov     eax, [ecx]
0x5DA42E: mov     edx, [eax+284h]
0x5DA434: push    0; a3
0x5DA436: call    edx
0x5DA438: mov     [esp+1Ch+arg_0], eax; a3
0x5DA43C: fild    [esp+1Ch+arg_0]
0x5DA440: push    ecx
0x5DA441: mov     ecx, [esi+2Ch]; this
0x5DA444: fstp    [esp+20h+a2]; a3
0x5DA447: push    0FAFh; a2
0x5DA44C: call    Tile_SetFloat
0x5DA451: mov     ecx, ds:0B333C4h
0x5DA457: push    0
0x5DA459: call    Actor_GetBaseCalcAVi
0x5DA45E: mov     [esp+1Ch+arg_0], eax
0x5DA462: fild    [esp+1Ch+arg_0]
0x5DA466: push    ecx
0x5DA467: mov     ecx, [esi+2Ch]; this
0x5DA46A: fstp    [esp+20h+a2]; a3
0x5DA46D: push    0FB7h; a2
0x5DA472: call    Tile_SetFloat
0x5DA477: cmp     edi, 0FFFFFFFFh
0x5DA47A: jz      short loc_5DA481
0x5DA47C: cmp     edi, 1
0x5DA47F: jnz     short loc_5DA4D2
0x5DA481: mov     ecx, ds:0B333C4h
0x5DA487: mov     eax, [ecx]
0x5DA489: mov     edx, [eax+284h]
0x5DA48F: push    1; a3
0x5DA491: call    edx
0x5DA493: mov     [esp+1Ch+arg_0], eax; a3
0x5DA497: fild    [esp+1Ch+arg_0]
0x5DA49B: push    ecx
0x5DA49C: mov     ecx, [esi+2Ch]; this
0x5DA49F: fstp    [esp+20h+a2]; a3
0x5DA4A2: push    0FB0h; a2
0x5DA4A7: call    Tile_SetFloat
0x5DA4AC: mov     ecx, ds:0B333C4h
0x5DA4B2: push    1
0x5DA4B4: call    Actor_GetBaseCalcAVi
0x5DA4B9: mov     [esp+1Ch+arg_0], eax
0x5DA4BD: fild    [esp+1Ch+arg_0]
0x5DA4C1: push    ecx
0x5DA4C2: mov     ecx, [esi+2Ch]; this
0x5DA4C5: fstp    [esp+20h+a2]; a3
0x5DA4C8: push    0FB8h; a2
0x5DA4CD: call    Tile_SetFloat
0x5DA4D2: cmp     edi, 0FFFFFFFFh
0x5DA4D5: jz      short loc_5DA4DC
0x5DA4D7: cmp     edi, 2
0x5DA4DA: jnz     short loc_5DA52D
0x5DA4DC: mov     ecx, ds:0B333C4h
0x5DA4E2: mov     eax, [ecx]
0x5DA4E4: mov     edx, [eax+284h]
0x5DA4EA: push    2; a3
0x5DA4EC: call    edx
0x5DA4EE: mov     [esp+1Ch+arg_0], eax; a3
0x5DA4F2: fild    [esp+1Ch+arg_0]
0x5DA4F6: push    ecx
0x5DA4F7: mov     ecx, [esi+2Ch]; this
0x5DA4FA: fstp    [esp+20h+a2]; a3
0x5DA4FD: push    0FB1h; a2
0x5DA502: call    Tile_SetFloat
0x5DA507: mov     ecx, ds:0B333C4h
0x5DA50D: push    2
0x5DA50F: call    Actor_GetBaseCalcAVi
0x5DA514: mov     [esp+1Ch+arg_0], eax
0x5DA518: fild    [esp+1Ch+arg_0]
0x5DA51C: push    ecx
0x5DA51D: mov     ecx, [esi+2Ch]; this
0x5DA520: fstp    [esp+20h+a2]; a3
0x5DA523: push    0FB9h; a2
0x5DA528: call    Tile_SetFloat
0x5DA52D: cmp     edi, 0FFFFFFFFh
0x5DA530: jz      short loc_5DA537
0x5DA532: cmp     edi, 3
0x5DA535: jnz     short loc_5DA588
0x5DA537: mov     ecx, ds:0B333C4h
0x5DA53D: mov     eax, [ecx]
0x5DA53F: mov     edx, [eax+284h]
0x5DA545: push    3; a3
0x5DA547: call    edx
0x5DA549: mov     [esp+1Ch+arg_0], eax; a3
0x5DA54D: fild    [esp+1Ch+arg_0]
0x5DA551: push    ecx
0x5DA552: mov     ecx, [esi+2Ch]; this
0x5DA555: fstp    [esp+20h+a2]; a3
0x5DA558: push    0FB2h; a2
0x5DA55D: call    Tile_SetFloat
0x5DA562: mov     ecx, ds:0B333C4h
0x5DA568: push    3
0x5DA56A: call    Actor_GetBaseCalcAVi
0x5DA56F: mov     [esp+1Ch+arg_0], eax
0x5DA573: fild    [esp+1Ch+arg_0]
0x5DA577: push    ecx
0x5DA578: mov     ecx, [esi+2Ch]; this
0x5DA57B: fstp    [esp+20h+a2]; a3
0x5DA57E: push    0FBAh; a2
0x5DA583: call    Tile_SetFloat
0x5DA588: cmp     edi, 0FFFFFFFFh
0x5DA58B: jz      short loc_5DA592
0x5DA58D: cmp     edi, 4
0x5DA590: jnz     short loc_5DA5E3
0x5DA592: mov     ecx, ds:0B333C4h
0x5DA598: mov     eax, [ecx]
0x5DA59A: mov     edx, [eax+284h]
0x5DA5A0: push    4; a3
0x5DA5A2: call    edx
0x5DA5A4: mov     [esp+1Ch+arg_0], eax; a3
0x5DA5A8: fild    [esp+1Ch+arg_0]
0x5DA5AC: push    ecx
0x5DA5AD: mov     ecx, [esi+2Ch]; this
0x5DA5B0: fstp    [esp+20h+a2]; a3
0x5DA5B3: push    0FB3h; a2
0x5DA5B8: call    Tile_SetFloat
0x5DA5BD: mov     ecx, ds:0B333C4h
0x5DA5C3: push    4
0x5DA5C5: call    Actor_GetBaseCalcAVi
0x5DA5CA: mov     [esp+1Ch+arg_0], eax
0x5DA5CE: fild    [esp+1Ch+arg_0]
0x5DA5D2: push    ecx
0x5DA5D3: mov     ecx, [esi+2Ch]; this
0x5DA5D6: fstp    [esp+20h+a2]; a3
0x5DA5D9: push    0FBBh; a2
0x5DA5DE: call    Tile_SetFloat
0x5DA5E3: cmp     edi, 0FFFFFFFFh
0x5DA5E6: jz      short loc_5DA5ED
0x5DA5E8: cmp     edi, 5
0x5DA5EB: jnz     short loc_5DA63E
0x5DA5ED: mov     ecx, ds:0B333C4h
0x5DA5F3: mov     eax, [ecx]
0x5DA5F5: mov     edx, [eax+284h]
0x5DA5FB: push    5; a3
0x5DA5FD: call    edx
0x5DA5FF: mov     [esp+1Ch+arg_0], eax; a3
0x5DA603: fild    [esp+1Ch+arg_0]
0x5DA607: push    ecx
0x5DA608: mov     ecx, [esi+2Ch]; this
0x5DA60B: fstp    [esp+20h+a2]; a3
0x5DA60E: push    0FB4h; a2
0x5DA613: call    Tile_SetFloat
0x5DA618: mov     ecx, ds:0B333C4h
0x5DA61E: push    5
0x5DA620: call    Actor_GetBaseCalcAVi
0x5DA625: mov     [esp+1Ch+arg_0], eax
0x5DA629: fild    [esp+1Ch+arg_0]
0x5DA62D: push    ecx
0x5DA62E: mov     ecx, [esi+2Ch]; this
0x5DA631: fstp    [esp+20h+a2]; a3
0x5DA634: push    0FBCh; a2
0x5DA639: call    Tile_SetFloat
0x5DA63E: cmp     edi, 0FFFFFFFFh
0x5DA641: jz      short loc_5DA648
0x5DA643: cmp     edi, 6
0x5DA646: jnz     short loc_5DA699
0x5DA648: mov     ecx, ds:0B333C4h
0x5DA64E: mov     eax, [ecx]
0x5DA650: mov     edx, [eax+284h]
0x5DA656: push    6; a3
0x5DA658: call    edx
0x5DA65A: mov     [esp+1Ch+arg_0], eax; a3
0x5DA65E: fild    [esp+1Ch+arg_0]
0x5DA662: push    ecx
0x5DA663: mov     ecx, [esi+2Ch]; this
0x5DA666: fstp    [esp+20h+a2]; a3
0x5DA669: push    0FB5h; a2
0x5DA66E: call    Tile_SetFloat
0x5DA673: mov     ecx, ds:0B333C4h
0x5DA679: push    6
0x5DA67B: call    Actor_GetBaseCalcAVi
0x5DA680: mov     [esp+1Ch+arg_0], eax
0x5DA684: fild    [esp+1Ch+arg_0]
0x5DA688: push    ecx
0x5DA689: mov     ecx, [esi+2Ch]; this
0x5DA68C: fstp    [esp+20h+a2]; a3
0x5DA68F: push    0FBDh; a2
0x5DA694: call    Tile_SetFloat
0x5DA699: cmp     edi, 0FFFFFFFFh
0x5DA69C: jz      short loc_5DA6A3
0x5DA69E: cmp     edi, 7
0x5DA6A1: jnz     short loc_5DA6F4
0x5DA6A3: mov     ecx, ds:0B333C4h
0x5DA6A9: mov     eax, [ecx]
0x5DA6AB: mov     edx, [eax+284h]
0x5DA6B1: push    7; a3
0x5DA6B3: call    edx
0x5DA6B5: mov     [esp+1Ch+arg_0], eax; a3
0x5DA6B9: fild    [esp+1Ch+arg_0]
0x5DA6BD: push    ecx
0x5DA6BE: mov     ecx, [esi+2Ch]; this
0x5DA6C1: fstp    [esp+20h+a2]; a3
0x5DA6C4: push    0FB6h; a2
0x5DA6C9: call    Tile_SetFloat
0x5DA6CE: mov     ecx, ds:0B333C4h
0x5DA6D4: push    7
0x5DA6D6: call    Actor_GetBaseCalcAVi
0x5DA6DB: mov     [esp+1Ch+arg_0], eax
0x5DA6DF: fild    [esp+1Ch+arg_0]
0x5DA6E3: push    ecx
0x5DA6E4: mov     ecx, [esi+2Ch]; this
0x5DA6E7: fstp    [esp+20h+a2]; a3
0x5DA6EA: push    0FBEh; a2
0x5DA6EF: call    Tile_SetFloat
0x5DA6F4: lea     ebx, [edi-0Ch]
0x5DA6F7: cmp     ebx, 14h
0x5DA6FA: ja      loc_5DA794
0x5DA700: cmp     ebx, 15h
0x5DA703: jge     loc_5DA794
0x5DA709: mov     ecx, [esi+ebx*4+60h]; this
0x5DA70D: test    ecx, ecx
0x5DA70F: jz      loc_5DA794
0x5DA715: fld1
0x5DA717: push    ecx
0x5DA718: fstp    [esp+20h+a2]; a3
0x5DA71B: push    0FAFh; a2
0x5DA720: call    Tile_SetFloat
0x5DA725: mov     ecx, ds:0B333C4h
0x5DA72B: push    edi
0x5DA72C: call    sub_65FCA0
0x5DA731: push    ecx
0x5DA732: mov     ecx, [esi+ebx*4+60h]; this
0x5DA736: fstp    [esp+20h+a2]; a3
0x5DA739: push    0FB0h; a2
0x5DA73E: call    Tile_SetFloat
0x5DA743: mov     ecx, ds:0B333C4h
0x5DA749: mov     eax, [ecx]
0x5DA74B: mov     edx, [eax+284h]
0x5DA751: push    edi; a3
0x5DA752: call    edx
0x5DA754: mov     [esp+1Ch+arg_0], eax
0x5DA758: fild    [esp+1Ch+arg_0]
0x5DA75C: push    ecx
0x5DA75D: mov     ecx, [esi+ebx*4+60h]; this
0x5DA761: fstp    [esp+20h+a2]; a3
0x5DA764: push    0FB1h; a2
0x5DA769: call    Tile_SetFloat
0x5DA76E: mov     ecx, ds:0B333C4h
0x5DA774: push    edi
0x5DA775: call    Actor_GetBaseCalcAVi
0x5DA77A: mov     [esp+1Ch+arg_0], eax
0x5DA77E: fild    [esp+1Ch+arg_0]
0x5DA782: push    ecx
0x5DA783: mov     ecx, [esi+ebx*4+60h]; this
0x5DA787: fstp    [esp+20h+a2]; a3
0x5DA78A: push    0FB5h; a2
0x5DA78F: call    Tile_SetFloat
0x5DA794: cmp     edi, 0FFFFFFFFh
0x5DA797: jnz     loc_5DA8AE
0x5DA79D: mov     edi, 0Ch
0x5DA7A2: add     esi, 60h ; '`'
0x5DA7A5: jmp     short loc_5DA7B0
0x5DA7A7: align 10h
0x5DA7B0: lea     eax, [edi-0Ch]
0x5DA7B3: cmp     eax, 15h
0x5DA7B6: jge     loc_5DA89F
0x5DA7BC: mov     ecx, [esi]; this
0x5DA7BE: test    ecx, ecx
0x5DA7C0: jz      loc_5DA89F
0x5DA7C6: fld1
0x5DA7C8: push    ecx
0x5DA7C9: fstp    [esp+20h+a2]; a3
0x5DA7CC: push    0FAFh; a2
0x5DA7D1: call    Tile_SetFloat
0x5DA7D6: mov     ecx, ds:0B333C4h
0x5DA7DC: push    edi
0x5DA7DD: call    sub_65FCA0
0x5DA7E2: push    ecx
0x5DA7E3: mov     ecx, [esi]; this
0x5DA7E5: fstp    [esp+20h+a2]; a3
0x5DA7E8: push    0FB0h; a2
0x5DA7ED: call    Tile_SetFloat
0x5DA7F2: mov     ecx, ds:0B333C4h
0x5DA7F8: mov     edx, [ecx]
0x5DA7FA: mov     eax, [edx+284h]
0x5DA800: push    edi; a3
0x5DA801: call    eax
0x5DA803: mov     [esp+1Ch+arg_0], eax
0x5DA807: fild    [esp+1Ch+arg_0]
0x5DA80B: push    ecx
0x5DA80C: mov     ecx, [esi]; this
0x5DA80E: fstp    [esp+20h+a2]; a3
0x5DA811: push    0FB1h; a2
0x5DA816: call    Tile_SetFloat
0x5DA81B: mov     ecx, ds:0B333C4h
0x5DA821: push    edi
0x5DA822: call    Actor_GetBaseCalcAVi
0x5DA827: mov     [esp+1Ch+arg_0], eax
0x5DA82B: fild    [esp+1Ch+arg_0]
0x5DA82F: push    ecx
0x5DA830: mov     ecx, [esi]; this
0x5DA832: fstp    [esp+20h+a2]; a3
0x5DA835: push    0FB5h; a2
0x5DA83A: call    Tile_SetFloat
0x5DA83F: mov     ecx, ds:0B333C4h
0x5DA845: call    Actor_GetBaseClass
0x5DA84A: test    eax, eax
0x5DA84C: jz      short loc_5DA884
0x5DA84E: mov     ecx, ds:0B333C4h
0x5DA854: push    edi
0x5DA855: call    Actor_GetBaseClass
0x5DA85A: mov     ecx, eax
0x5DA85C: call    sub_51C090
0x5DA861: test    al, al
0x5DA863: jz      short loc_5DA884
0x5DA865: mov     eax, [esp+1Ch+var_8]
0x5DA869: mov     [esp+1Ch+arg_0], eax
0x5DA86D: add     eax, 1
0x5DA870: mov     [esp+1Ch+var_8], eax
0x5DA874: jmp     short loc_5DA88B
0x5DA876: cmp     edi, 8
0x5DA879: jnz     loc_5DA2C5
0x5DA87F: jmp     loc_5DA227
0x5DA884: mov     [esp+1Ch+arg_0], ebp
0x5DA888: add     ebp, 1
0x5DA88B: fild    [esp+1Ch+arg_0]
0x5DA88F: push    ecx
0x5DA890: mov     ecx, [esi]; this
0x5DA892: fstp    [esp+20h+a2]; a3
0x5DA895: push    0FAAh; a2
0x5DA89A: call    Tile_SetFloat
0x5DA89F: add     edi, 1
0x5DA8A2: add     esi, 4
0x5DA8A5: cmp     edi, 21h ; '!'
0x5DA8A8: jle     loc_5DA7B0
0x5DA8AE: pop     edi
0x5DA8AF: pop     esi
0x5DA8B0: pop     ebp
0x5DA8B1: pop     ebx
0x5DA8B2: add     esp, 0Ch
0x5DA8B5: retn    4
