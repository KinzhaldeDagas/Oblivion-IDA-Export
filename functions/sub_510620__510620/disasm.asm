0x510620: sub     esp, 30h
0x510623: mov     edx, [esp+30h+l]
0x510627: push    ebx
0x510628: mov     ebx, [esp+34h+a4]
0x51062C: lea     eax, [esp+34h+var_28]
0x510630: push    eax
0x510631: mov     eax, [esp+38h+arg_10]
0x510635: lea     ecx, [esp+38h+anonymous_0+3]
0x510639: push    ecx; UInt16
0x51063A: mov     ecx, [esp+3Ch+arg_C]
0x51063E: push    edx; l
0x51063F: mov     edx, [esp+40h+a3]
0x510643: push    eax; a6
0x510644: mov     eax, [esp+44h+arg_4]
0x510648: push    ecx; a5
0x510649: mov     ecx, [esp+48h+a1]
0x51064D: push    ebx; a4
0x51064E: push    edx; a3
0x51064F: push    eax; a2
0x510650: push    ecx; a1
0x510651: mov     [esp+58h+var_28], 0
0x510659: call    Script_ExtractArgs
0x51065E: add     esp, 24h
0x510661: test    al, al
0x510663: jnz     short loc_51066A
0x510665: pop     ebx
0x510666: add     esp, 30h
0x510669: retn
0x51066A: test    ebx, ebx
0x51066C: jz      loc_51078F
0x510672: mov     edx, [ebx]
0x510674: mov     eax, [edx+154h]
0x51067A: push    ebp
0x51067B: mov     ecx, ebx
0x51067D: call    eax
0x51067F: mov     ebp, eax
0x510681: test    ebp, ebp
0x510683: jz      loc_51078E
0x510689: movsx   ecx, byte ptr [esp+38h+anonymous_0+3]
0x51068E: fldz
0x510690: mov     eax, ecx
0x510692: fst     [esp+38h+var_2C]
0x510696: sub     eax, 58h ; 'X'
0x510699: jz      short loc_5106AF
0x51069B: sub     eax, 1
0x51069E: jz      short loc_5106AA
0x5106A0: sub     eax, 1
0x5106A3: jnz     short loc_5106B6
0x5106A5: fld     dword ptr [ebx+28h]
0x5106A8: jmp     short loc_5106B2
0x5106AA: fld     dword ptr [ebx+24h]
0x5106AD: jmp     short loc_5106B2
0x5106AF: fld     dword ptr [ebx+20h]
0x5106B2: fstp    [esp+38h+var_2C]
0x5106B6: fild    [esp+38h+var_28]
0x5106BA: fmul    qword ptr ds:0A31C78h
0x5106C0: fmul    dword ptr ds:0B33E9Ch
0x5106C6: fadd    [esp+38h+var_2C]
0x5106CA: fstp    [esp+38h+var_2C]
0x5106CE: fld     [esp+38h+var_2C]
0x5106D2: fld     qword ptr ds:0A3D5B0h
0x5106D8: fcom    st(1)
0x5106DA: fnstsw  ax
0x5106DC: test    ah, 41h
0x5106DF: jp      short loc_5106F8
0x5106E1: fsub    st(1), st
0x5106E3: fxch    st(1)
0x5106E5: fstp    [esp+38h+var_2C]
0x5106E9: fld     [esp+38h+var_2C]
0x5106ED: fcom    st(1)
0x5106EF: fnstsw  ax
0x5106F1: fxch    st(1)
0x5106F3: test    ah, 1
0x5106F6: jz      short loc_5106E1
0x5106F8: fxch    st(1)
0x5106FA: fcom    st(2)
0x5106FC: fnstsw  ax
0x5106FE: test    ah, 5
0x510701: jp      short loc_510716
0x510703: fadd    st, st(1)
0x510705: fstp    [esp+38h+var_2C]
0x510709: fld     [esp+38h+var_2C]
0x51070D: fcom    st(2)
0x51070F: fnstsw  ax
0x510711: test    ah, 5
0x510714: jnp     short loc_510703
0x510716: mov     eax, ecx
0x510718: fstp    st(1)
0x51071A: sub     eax, 58h ; 'X'
0x51071D: fstp    st(1)
0x51071F: jz      short loc_510745
0x510721: sub     eax, 1
0x510724: jz      short loc_510738
0x510726: sub     eax, 1
0x510729: jnz     short loc_510752
0x51072B: push    ecx
0x51072C: mov     ecx, ebx
0x51072E: fstp    [esp+3Ch+var_3C]; float
0x510731: call    sub_4D8A10
0x510736: jmp     short loc_510754
0x510738: push    ecx
0x510739: mov     ecx, ebx
0x51073B: fstp    [esp+3Ch+var_3C]; float
0x51073E: call    sub_4D89F0
0x510743: jmp     short loc_510754
0x510745: push    ecx
0x510746: mov     ecx, ebx
0x510748: fstp    [esp+3Ch+var_3C]; float
0x51074B: call    sub_4D89D0
0x510750: jmp     short loc_510754
0x510752: fstp    st
0x510754: push    esi
0x510755: push    edi
0x510756: lea     ecx, [esp+44h+var_28]
0x51075A: push    ecx
0x51075B: mov     ecx, ebx
0x51075D: call    sub_4D7AF0
0x510762: mov     esi, eax
0x510764: lea     edi, [ebp+30h]
0x510767: mov     ecx, 9
0x51076C: rep movsd
0x51076E: mov     edx, [ebx]
0x510770: mov     eax, [edx+164h]
0x510776: mov     ecx, ebx
0x510778: call    eax
0x51077A: test    eax, eax
0x51077C: pop     edi
0x51077D: pop     esi
0x51077E: jnz     short loc_51078E
0x510780: fldz
0x510782: push    eax; a3
0x510783: push    ecx
0x510784: fstp    [esp+44h+a2]; a2
0x510787: mov     ecx, ebp; this
0x510789: call    NiAVObject_UpdateNiAVObject
0x51078E: pop     ebp
0x51078F: mov     al, 1
0x510791: pop     ebx
0x510792: add     esp, 30h
0x510795: retn
