0x5326B0: push    ebp
0x5326B1: mov     ebp, esp
0x5326B3: and     esp, 0FFFFFFF0h
0x5326B6: push    0FFFFFFFFh
0x5326B8: push    offset SEH_5326B0
0x5326BD: mov     eax, large fs:0
0x5326C3: push    eax
0x5326C4: sub     esp, 1F8h
0x5326CA: mov     eax, ds:0B30AACh
0x5326CF: xor     eax, esp
0x5326D1: mov     [esp+204h+var_14], eax
0x5326D8: push    ebx
0x5326D9: push    esi
0x5326DA: push    edi
0x5326DB: mov     eax, ds:0B30AACh
0x5326E0: xor     eax, esp
0x5326E2: push    eax
0x5326E3: lea     eax, [esp+214h+var_C]
0x5326EA: mov     large fs:0, eax
0x5326F0: mov     eax, [ebp+arg_8]
0x5326F3: mov     esi, [ecx]
0x5326F5: mov     edx, [ebp+arg_4]
0x5326F8: mov     [esp+214h+var_1F4], eax
0x5326FC: xor     ebx, ebx
0x5326FE: xor     al, al
0x532700: cmp     esi, ebx
0x532702: mov     [esp+214h+var_1F8], edx
0x532706: jz      loc_53287B
0x53270C: fld     dword ptr ds:0A55910h
0x532712: lea     ecx, [esp+214h+var_1A0]
0x532716: fstp    [esp+214h+var_1BC]
0x53271A: mov     [esp+214h+var_1C0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x532722: mov     [esp+214h+var_1B0], ecx
0x532726: mov     [esp+214h+var_1A8], 80000008h
0x53272E: mov     [esp+214h+var_1AC], ebx
0x532732: fld     dword ptr ds:0A5590Ch
0x532738: mov     eax, [ebp+arg_0]
0x53273B: fst     [esp+214h+var_1D0]
0x53273F: fstp    [esp+214h+var_1CC]
0x532743: mov     [esp+214h+var_4], ebx
0x53274A: fld     dword ptr [eax]
0x53274C: fld     qword ptr ds:0A39088h
0x532752: fmul    st(1), st
0x532754: fxch    st(1)
0x532756: fstp    [esp+214h+var_1F0]
0x53275A: fld     dword ptr [eax+4]
0x53275D: fmul    st, st(1)
0x53275F: fstp    [esp+214h+var_1EC]
0x532763: fld     dword ptr [eax+8]
0x532766: fmul    st, st(1)
0x532768: fstp    [esp+214h+var_1E8]
0x53276C: fld     dword ptr [edx]
0x53276E: fmul    st, st(1)
0x532770: fstp    [esp+214h+var_1E0]
0x532774: fld     dword ptr [edx+4]
0x532777: fmul    st, st(1)
0x532779: fstp    [esp+214h+var_1DC]
0x53277D: fmul    dword ptr [edx+8]
0x532780: fstp    [esp+214h+var_1D8]
0x532784: mov     edi, [esi+8]
0x532787: cmp     edi, ebx
0x532789: jz      short loc_5327B2
0x53278B: mov     ecx, esi
0x53278D: call    sub_89F570
0x532792: mov     edx, [edi]
0x532794: mov     edx, [edx+30h]
0x532797: push    ebx
0x532798: lea     eax, [esp+218h+var_1C0]
0x53279C: push    eax
0x53279D: lea     ecx, [esp+21Ch+var_1E0]
0x5327A1: push    ecx
0x5327A2: lea     eax, [esp+220h+var_1F0]
0x5327A6: push    eax
0x5327A7: mov     ecx, edi
0x5327A9: call    edx
0x5327AB: mov     ecx, esi
0x5327AD: call    sub_89F570
0x5327B2: cmp     [esp+214h+var_1AC], ebx
0x5327B6: setnle  al
0x5327B9: test    al, al
0x5327BB: setnz   al
0x5327BE: test    al, al
0x5327C0: mov     [esp+214h+var_1F9], al
0x5327C4: jz      loc_532863
0x5327CA: lea     ecx, [esp+214h+var_1C0]
0x5327CE: call    sub_8AF890
0x5327D3: xor     edi, edi
0x5327D5: cmp     ebx, [esp+214h+var_1AC]
0x5327D9: jge     loc_532863
0x5327DF: mov     eax, [esp+214h+var_1B0]
0x5327E3: mov     eax, [edi+eax+28h]
0x5327E7: mov     ecx, [eax+1Ch]
0x5327EA: and     ecx, 3Fh
0x5327ED: cmp     cl, 14h
0x5327F0: jnz     short loc_53283F
0x5327F2: push    eax
0x5327F3: call    sub_8AFCE0
0x5327F8: add     esp, 4
0x5327FB: test    eax, eax
0x5327FD: jz      short loc_53283F
0x5327FF: push    eax
0x532800: call    sub_4DC270
0x532805: mov     esi, eax
0x532807: add     esp, 4
0x53280A: test    esi, esi
0x53280C: jz      short loc_53283F
0x53280E: mov     edx, [esi]
0x532810: mov     eax, [edx+188h]
0x532816: mov     ecx, esi
0x532818: call    eax
0x53281A: test    al, al
0x53281C: jz      short loc_53283F
0x53281E: mov     ecx, esi; this
0x532820: call    MobileObject_GetCharProxy
0x532825: test    eax, eax
0x532827: jz      short loc_53283F
0x532829: mov     ecx, [eax+1F4h]
0x53282F: shr     ecx, 0Bh
0x532832: test    cl, 1
0x532835: jz      short loc_53283F
0x532837: add     ebx, 1
0x53283A: add     edi, 30h ; '0'
0x53283D: jmp     short loc_5327D5
0x53283F: mov     esi, [esp+214h+var_1F4]
0x532843: lea     edx, [ebx+ebx*2]
0x532846: shl     edx, 4
0x532849: add     edx, [esp+214h+var_1B0]
0x53284D: mov     ecx, esi
0x53284F: push    edx
0x532850: call    sub_532210
0x532855: mov     eax, [esp+214h+var_1F8]
0x532859: push    esi
0x53285A: push    eax
0x53285B: call    sub_43F3E0
0x532860: add     esp, 8
0x532863: lea     ecx, [esp+214h+var_1C0]; this
0x532867: mov     [esp+214h+var_4], 0FFFFFFFFh
0x532872: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x532877: mov     al, [esp+214h+var_1F9]
0x53287B: mov     ecx, dword ptr [esp+214h+var_C]
0x532882: mov     large fs:0, ecx
0x532889: pop     ecx
0x53288A: pop     edi
0x53288B: pop     esi
0x53288C: pop     ebx
0x53288D: mov     ecx, [esp+204h+var_14]
0x532894: xor     ecx, esp
0x532896: call    @__security_check_cookie@4; __security_check_cookie(x)
0x53289B: mov     esp, ebp
0x53289D: pop     ebp
0x53289E: retn    0Ch
