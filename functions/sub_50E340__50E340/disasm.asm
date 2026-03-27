0x50E340: sub     esp, 0Ch
0x50E343: mov     ecx, [esp+0Ch+l]
0x50E347: fldz
0x50E349: mov     edx, [esp+0Ch+arg_10]
0x50E34D: fstp    [esp+0Ch+var_C]
0x50E350: push    edi
0x50E351: mov     edi, [esp+10h+arg_8]
0x50E355: lea     eax, [esp+10h+var_C]
0x50E359: push    eax; UInt16
0x50E35A: mov     eax, [esp+14h+arg_C]
0x50E35E: push    ecx; l
0x50E35F: mov     ecx, [esp+18h+a3]
0x50E363: push    edx; a6
0x50E364: mov     edx, [esp+1Ch+arg_4]
0x50E368: push    eax; a5
0x50E369: mov     eax, [esp+20h+a1]
0x50E36D: push    edi; a4
0x50E36E: push    ecx; a3
0x50E36F: push    edx; a2
0x50E370: push    eax; a1
0x50E371: call    Script_ExtractArgs
0x50E376: add     esp, 20h
0x50E379: test    al, al
0x50E37B: jnz     short loc_50E382
0x50E37D: pop     edi
0x50E37E: add     esp, 0Ch
0x50E381: retn
0x50E382: test    edi, edi
0x50E384: jnz     short loc_50E38C
0x50E386: mov     edi, ds:0B333C4h
0x50E38C: fld     dword ptr ds:0A31C80h
0x50E392: fld     [esp+10h+var_C]
0x50E396: fcom    st(1)
0x50E398: fnstsw  ax
0x50E39A: test    ah, 5
0x50E39D: jp      short loc_50E3AC
0x50E39F: fldz
0x50E3A1: fcom    st(1)
0x50E3A3: fnstsw  ax
0x50E3A5: test    ah, 5
0x50E3A8: jp      short loc_50E3BB
0x50E3AA: fstp    st
0x50E3AC: fcomp   st(1)
0x50E3AE: fnstsw  ax
0x50E3B0: test    ah, 5
0x50E3B3: jnp     short loc_50E3C5
0x50E3B5: fstp    [esp+10h+var_C]
0x50E3B9: jmp     short loc_50E3C7
0x50E3BB: fstp    st(1)
0x50E3BD: fstp    st(1)
0x50E3BF: fstp    [esp+10h+var_C]
0x50E3C3: jmp     short loc_50E3C7
0x50E3C5: fstp    st
0x50E3C7: push    esi
0x50E3C8: push    0; int
0x50E3CA: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50E3CF: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50E3D4: push    0; int
0x50E3D6: push    edi; void *
0x50E3D7: call    OblivionDynamicCast
0x50E3DC: mov     esi, eax
0x50E3DE: add     esp, 14h
0x50E3E1: test    esi, esi
0x50E3E3: jz      loc_50E58B
0x50E3E9: mov     ecx, [esi+58h]
0x50E3EC: test    ecx, ecx
0x50E3EE: jz      loc_50E58B
0x50E3F4: mov     edx, [ecx]
0x50E3F6: fld     [esp+14h+var_C]
0x50E3FA: mov     eax, [edx+43Ch]
0x50E400: push    ecx
0x50E401: fstp    [esp+18h+var_1C+4]
0x50E404: call    eax
0x50E406: cmp     byte ptr ds:0B42F3Eh, 0
0x50E40D: jz      loc_50E563
0x50E413: cmp     byte ptr ds:0B42E84h, 0
0x50E41A: jz      loc_50E563
0x50E420: cmp     dword ptr ds:0B42F48h, 2
0x50E427: jl      loc_50E563
0x50E42D: mov     edx, [esi]
0x50E42F: mov     eax, [edx+288h]
0x50E435: push    2Fh ; '/'
0x50E437: mov     ecx, esi
0x50E439: call    eax
0x50E43B: fstp    [esp+0Ch+a1]
0x50E43F: mov     edx, [esi]
0x50E441: mov     eax, [edx+288h]
0x50E447: push    2Eh ; '.'
0x50E449: mov     ecx, esi
0x50E44B: call    eax
0x50E44D: sub     esp, 8
0x50E450: fstp    [esp+14h+var_10]; float
0x50E454: fldz
0x50E456: fstp    [esp+14h+var_14]; float
0x50E459: call    Min_Float
0x50E45E: fstp    [esp+14h+var_10]; float
0x50E462: fld1
0x50E464: fstp    [esp+14h+var_14]; float
0x50E467: call    sub_4AC760
0x50E46C: fstp    dword ptr [esp+14h]
0x50E470: fldz
0x50E472: add     esp, 8
0x50E475: fcom    [esp+0Ch+a1]
0x50E479: fnstsw  ax
0x50E47B: test    ah, 5
0x50E47E: jp      short loc_50E4B9
0x50E480: cmp     esi, ds:0B333C4h
0x50E486: jnz     short loc_50E4B9
0x50E488: mov     edx, [esi]
0x50E48A: fstp    st
0x50E48C: fld1
0x50E48E: mov     eax, [edx+324h]
0x50E494: push    ecx
0x50E495: fstp    [esp+10h+var_10]
0x50E498: mov     ecx, esi
0x50E49A: call    eax
0x50E49C: fld     dword ptr ds:0A757CCh
0x50E4A2: mov     edx, [esi]
0x50E4A4: mov     eax, [edx+270h]
0x50E4AA: push    ecx
0x50E4AB: fstp    [esp+10h+var_10]
0x50E4AE: push    1
0x50E4B0: mov     ecx, esi
0x50E4B2: call    eax
0x50E4B4: jmp     loc_50E563
0x50E4B9: fcom    dword ptr [esp+0Ch]
0x50E4BD: mov     edx, [esi]
0x50E4BF: push    ecx
0x50E4C0: mov     ecx, esi
0x50E4C2: fnstsw  ax
0x50E4C4: test    ah, 5
0x50E4C7: jp      short loc_50E535
0x50E4C9: mov     eax, [edx+324h]
0x50E4CF: fstp    st
0x50E4D1: fld1
0x50E4D3: fstp    [esp+10h+var_10]
0x50E4D6: call    eax
0x50E4D8: fld     dword ptr [esp+0Ch]
0x50E4DC: fdiv    qword ptr ds:0A309F0h
0x50E4E2: sub     esp, 0Ch
0x50E4E5: fld1
0x50E4E7: fsubrp  st(1), st
0x50E4E9: fstp    [esp+18h+a1]
0x50E4ED: fld     [esp+18h+a1]
0x50E4F1: fstp    [esp+18h+var_10]; float
0x50E4F5: fld1
0x50E4F7: fstp    [esp+18h+var_14]; float
0x50E4FB: fldz
0x50E4FD: fstp    [esp+18h+var_1C+4]; float
0x50E500: call    Magic_GetChameleonMaxRefraction
0x50E505: push    ecx
0x50E506: fstp    [esp+1Ch+var_1C]; float
0x50E509: call    Magic_GetChameleonMinRefraction
0x50E50E: push    ecx
0x50E50F: fstp    [esp+20h+var_20]; float
0x50E512: call    sub_410EB0
0x50E517: mov     edx, [esi]
0x50E519: fstp    [esp+20h+a1]
0x50E51D: fld     [esp+20h+a1]
0x50E521: mov     eax, [edx+270h]
0x50E527: add     esp, 10h
0x50E52A: fstp    [esp+10h+var_10]
0x50E52D: push    1
0x50E52F: mov     ecx, esi
0x50E531: call    eax
0x50E533: jmp     short loc_50E563
0x50E535: fld     [esp+10h+var_4]
0x50E539: fcom    st(1)
0x50E53B: fnstsw  ax
0x50E53D: test    ah, 41h
0x50E540: mov     eax, [edx+270h]
0x50E546: jnz     short loc_50E553
0x50E548: fstp    st(1)
0x50E54A: fstp    [esp+10h+var_10]
0x50E54D: push    1
0x50E54F: call    eax
0x50E551: jmp     short loc_50E563
0x50E553: fstp    st
0x50E555: fstp    [esp+10h+var_10]
0x50E558: push    0
0x50E55A: call    eax
0x50E55C: mov     ecx, esi; a1
0x50E55E: call    sub_5EE1B0
0x50E563: cmp     byte ptr ds:0B361ACh, 0
0x50E56A: jz      short loc_50E58B
0x50E56C: fld     [esp+14h+var_C]
0x50E570: sub     esp, 8
0x50E573: mov     ecx, edi; this
0x50E575: fstp    qword ptr [esp+1Ch+var_1C]
0x50E578: call    TESObjectREFR_GetName
0x50E57D: push    eax
0x50E57E: push    offset aSRefractionHas; "%s refraction has been set to %f"
0x50E583: call    Interface_ConsolePrint
0x50E588: add     esp, 10h
0x50E58B: pop     esi
0x50E58C: mov     al, 1
0x50E58E: pop     edi
0x50E58F: add     esp, 0Ch
0x50E592: retn
