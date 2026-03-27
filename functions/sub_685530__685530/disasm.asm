0x685530: sub     esp, 14h
0x685533: push    esi
0x685534: mov     esi, [esp+18h+arg_0]
0x685538: test    esi, esi
0x68553A: jz      short loc_685547
0x68553C: mov     ecx, esi; this
0x68553E: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x685543: test    eax, eax
0x685545: jz      short loc_685557
0x685547: mov     ecx, esi; this
0x685549: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x68554E: cmp     eax, 4
0x685551: jnz     loc_685782
0x685557: mov     eax, [esi]
0x685559: mov     edx, [eax+19Ch]
0x68555F: mov     ecx, esi
0x685561: call    edx
0x685563: test    al, al
0x685565: jnz     loc_685782
0x68556B: fld1
0x68556D: mov     edx, [esi]
0x68556F: lea     eax, [esp+18h+var_10]
0x685573: fstp    [esp+18h+var_10]
0x685577: fld     [esp+18h+arg_4]
0x68557B: push    eax; int
0x68557C: mov     eax, [edx+1E0h]
0x685582: push    ecx
0x685583: mov     ecx, esi
0x685585: fstp    [esp+20h+var_20]; float
0x685588: call    eax
0x68558A: push    ecx
0x68558B: fstp    [esp+24h+var_24]; float
0x68558E: call    sub_683AD0
0x685593: fstp    [esp+24h+arg_0]
0x685597: add     esp, 0Ch
0x68559A: fldz
0x68559C: fcomp   [esp+18h+arg_0]
0x6855A0: fnstsw  ax
0x6855A2: test    ah, 44h
0x6855A5: jnp     loc_685782
0x6855AB: mov     edx, [esi]
0x6855AD: fld     dword ptr ds:0B33E9Ch
0x6855B3: mov     eax, [edx+258h]
0x6855B9: fstp    [esp+18h+var_C]
0x6855BD: mov     ecx, esi
0x6855BF: call    eax
0x6855C1: fld     [esp+18h+var_10]
0x6855C5: fmul    qword ptr ds:0A31C78h
0x6855CB: fmulp   st(1), st
0x6855CD: fmul    [esp+18h+var_C]
0x6855D1: fstp    [esp+18h+var_C]
0x6855D5: fld     [esp+18h+arg_0]
0x6855D9: fabs
0x6855DB: fstp    dword ptr [esp+18h+var_8]
0x6855DF: fld     [esp+18h+var_C]
0x6855E3: fabs
0x6855E5: fstp    [esp+18h+arg_0]
0x6855E9: fld     [esp+18h+arg_0]
0x6855ED: fld     dword ptr [esp+18h+var_8]
0x6855F1: fcom    st(1)
0x6855F3: fnstsw  ax
0x6855F5: fstp    st(1)
0x6855F7: test    ah, 5
0x6855FA: jp      short loc_685620
0x6855FC: mov     edx, [esi]
0x6855FE: fstp    st
0x685600: fld     [esp+18h+arg_4]
0x685604: mov     eax, [edx+1E8h]
0x68560A: push    ecx
0x68560B: mov     ecx, esi
0x68560D: fstp    [esp+1Ch+var_1C]
0x685610: call    eax
0x685612: push    0
0x685614: mov     ecx, esi
0x685616: call    sub_5E1A80
0x68561B: pop     esi
0x68561C: add     esp, 14h
0x68561F: retn
0x685620: cmp     [esp+18h+arg_8], 0
0x685625: jnz     short loc_685656
0x685627: mov     edx, [esi]
0x685629: fstp    [esp+18h+var_8]
0x68562D: mov     eax, [edx+258h]
0x685633: mov     ecx, esi
0x685635: call    eax
0x685637: fld     dword ptr ds:0B3A490h
0x68563D: fmul    qword ptr ds:0A31C78h
0x685643: fmulp   st(1), st
0x685645: fcomp   [esp+18h+var_8]
0x685649: fnstsw  ax
0x68564B: test    ah, 5
0x68564E: jp      loc_6856F4
0x685654: jmp     short loc_685658
0x685656: fstp    st
0x685658: lea     ecx, [esp+18h+var_11]
0x68565C: push    ecx
0x68565D: lea     edx, [esp+1Ch+arg_0]
0x685661: push    edx
0x685662: push    esi
0x685663: mov     byte ptr [esp+24h+arg_0], 1
0x685668: mov     [esp+24h+var_11], 1
0x68566D: call    sub_684CB0
0x685672: add     esp, 0Ch
0x685675: test    al, al
0x685677: mov     ecx, esi
0x685679: jz      loc_685709
0x68567F: push    0Fh
0x685681: call    sub_5E05F0
0x685686: fldz
0x685688: fcomp   [esp+18h+var_10]
0x68568C: fnstsw  ax
0x68568E: test    ah, 41h
0x685691: jnz     short loc_6856A5
0x685693: cmp     byte ptr [esp+18h+arg_0], 0
0x685698: jnz     short loc_6856A5
0x68569A: mov     ecx, esi
0x68569C: call    sub_5E1A50
0x6856A1: test    al, al
0x6856A3: jge     short loc_6856C4
0x6856A5: fldz
0x6856A7: fcomp   [esp+18h+var_10]
0x6856AB: fnstsw  ax
0x6856AD: test    ah, 5
0x6856B0: jp      short loc_6856DE
0x6856B2: cmp     [esp+18h+var_11], 0
0x6856B7: jnz     short loc_6856DE
0x6856B9: mov     ecx, esi
0x6856BB: call    sub_5E1A50
0x6856C0: test    al, al
0x6856C2: jg      short loc_6856DE
0x6856C4: fld     [esp+18h+var_10]
0x6856C8: fld     qword ptr ds:0A3D360h
0x6856CE: fmul    st(1), st
0x6856D0: fxch    st(1)
0x6856D2: fstp    [esp+18h+var_10]
0x6856D6: fmul    [esp+18h+var_C]
0x6856DA: fstp    [esp+18h+var_C]
0x6856DE: fldz
0x6856E0: mov     ecx, esi
0x6856E2: fcomp   [esp+18h+var_10]
0x6856E6: fnstsw  ax
0x6856E8: test    ah, 41h
0x6856EB: jnz     short loc_685705
0x6856ED: push    10h
0x6856EF: call    sub_5E0610
0x6856F4: fldz
0x6856F6: fcomp   [esp+18h+var_C]
0x6856FA: fnstsw  ax
0x6856FC: test    ah, 41h
0x6856FF: jnz     short loc_685751
0x685701: push    0FFFFFFFFh
0x685703: jmp     short loc_685753
0x685705: push    20h ; ' '
0x685707: jmp     short loc_6856EF
0x685709: push    2
0x68570B: call    sub_5E0630
0x685710: test    al, al
0x685712: mov     ecx, esi
0x685714: jz      short loc_68572E
0x685716: push    0Fh
0x685718: call    sub_5E05F0
0x68571D: push    1
0x68571F: mov     ecx, esi
0x685721: call    sub_5E0610
0x685726: fldz
0x685728: fstp    [esp+18h+var_C]
0x68572C: jmp     short loc_685751
0x68572E: push    1
0x685730: call    sub_5E0630
0x685735: test    al, al
0x685737: jz      short loc_68574B
0x685739: push    0Fh
0x68573B: mov     ecx, esi
0x68573D: call    sub_5E05F0
0x685742: push    2
0x685744: mov     ecx, esi
0x685746: call    sub_5E0610
0x68574B: fldz
0x68574D: fstp    [esp+18h+var_C]
0x685751: push    1
0x685753: mov     ecx, esi
0x685755: call    sub_5E1A80
0x68575A: push    edi
0x68575B: mov     edi, [esi]
0x68575D: mov     eax, [edi+1E0h]
0x685763: mov     ecx, esi
0x685765: call    eax
0x685767: fadd    [esp+1Ch+var_C]
0x68576B: mov     edx, [edi+1E8h]
0x685771: push    ecx
0x685772: fstp    [esp+20h+arg_0]
0x685776: mov     ecx, esi
0x685778: fld     [esp+20h+arg_0]
0x68577C: fstp    [esp+20h+var_20]
0x68577F: call    edx
0x685781: pop     edi
0x685782: pop     esi
0x685783: add     esp, 14h
0x685786: retn
