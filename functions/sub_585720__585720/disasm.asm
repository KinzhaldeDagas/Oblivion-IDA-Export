0x585720: mov     al, [esp+arg_0]
0x585724: push    esi
0x585725: mov     esi, ecx
0x585727: mov     cl, [esi+31h]
0x58572A: xor     edx, edx
0x58572C: test    cl, cl
0x58572E: setnle  dl
0x585731: xor     ecx, ecx
0x585733: test    al, al
0x585735: setnle  cl
0x585738: mov     [esi+31h], al
0x58573B: cmp     ecx, edx
0x58573D: jz      loc_585818
0x585743: test    al, al
0x585745: push    1; arg1
0x585747: jle     loc_5857F3
0x58574D: push    0; canCreate
0x58574F: call    InterfaceManager_GetSingleton
0x585754: fld     dword ptr ds:0A30634h
0x58575A: add     esp, 8
0x58575D: cmp     byte ptr [eax+8], 1
0x585761: jz      short loc_5857B2
0x585763: mov     edx, ds:0B13994h
0x585769: push    edx; int
0x58576A: push    ecx
0x58576B: fstp    [esp+0Ch+var_C]; float
0x58576E: push    0FFFFFFFFh; int
0x585770: fild    dword ptr ds:0B3A704h
0x585776: push    1; int
0x585778: sub     esp, 8
0x58577B: fstp    [esp+1Ch+var_18]; float
0x58577F: fild    dword ptr ds:0B3A700h
0x585785: fstp    [esp+1Ch+var_1C]; float
0x585788: push    offset asc_A69C84; int
0x58578D: push    1
0x58578F: call    sub_571F90
0x585794: add     esp, 4
0x585797: mov     ecx, eax
0x585799: call    sub_5723E0
0x58579E: mov     eax, [esi+10h]
0x5857A1: push    eax
0x5857A2: mov     ecx, esi
0x5857A4: call    sub_5855E0
0x5857A9: call    sub_585620
0x5857AE: pop     esi
0x5857AF: retn    4
0x5857B2: push    0; int
0x5857B4: push    ecx
0x5857B5: fstp    [esp+0Ch+var_C]; float
0x5857B8: push    0FFFFFFFFh; int
0x5857BA: fild    dword ptr ds:0B3A704h
0x5857C0: push    1; int
0x5857C2: sub     esp, 8
0x5857C5: fstp    [esp+1Ch+var_18]; float
0x5857C9: fild    dword ptr ds:0B3A700h
0x5857CF: fstp    [esp+1Ch+var_1C]; float
0x5857D2: push    offset EmptyString; int
0x5857D7: push    1
0x5857D9: call    sub_571F90
0x5857DE: add     esp, 4
0x5857E1: mov     ecx, eax
0x5857E3: call    sub_5723E0
0x5857E8: mov     ecx, esi
0x5857EA: call    sub_585620
0x5857EF: pop     esi
0x5857F0: retn    4
0x5857F3: call    sub_571F90
0x5857F8: add     esp, 4
0x5857FB: mov     ecx, eax
0x5857FD: call    sub_571820
0x585802: push    1; arg1
0x585804: push    0; canCreate
0x585806: call    InterfaceManager_GetSingleton
0x58580B: add     esp, 8
0x58580E: mov     dword ptr [eax+0BCh], 0
0x585818: pop     esi
0x585819: retn    4
