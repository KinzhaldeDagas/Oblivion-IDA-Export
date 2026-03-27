0x54A6A0: push    0FFFFFFFFh
0x54A6A2: push    offset SEH_54A6A0
0x54A6A7: mov     eax, large fs:0
0x54A6AD: push    eax
0x54A6AE: sub     esp, 18h
0x54A6B1: push    ebx
0x54A6B2: push    ebp
0x54A6B3: push    esi
0x54A6B4: push    edi
0x54A6B5: mov     eax, ds:0B30AACh
0x54A6BA: xor     eax, esp
0x54A6BC: push    eax
0x54A6BD: lea     eax, [esp+38h+var_C]
0x54A6C1: mov     large fs:0, eax
0x54A6C7: mov     esi, ecx
0x54A6C9: mov     [esp+38h+var_24], esi
0x54A6CD: push    10h
0x54A6CF: push    0
0x54A6D1: lea     ecx, [esp+40h+var_20]
0x54A6D5: call    sub_54EA00
0x54A6DA: cmp     byte ptr [esi+1DAh], 0
0x54A6E1: mov     [esp+38h+var_4], 0
0x54A6E9: jnz     loc_54A7A8
0x54A6EF: mov     esi, [esp+38h+arg_0]
0x54A6F3: test    esi, esi
0x54A6F5: jz      loc_54A7A8
0x54A6FB: fldz
0x54A6FD: fld     [esp+38h+arg_4]
0x54A701: fcom    st(1)
0x54A703: fnstsw  ax
0x54A705: test    ah, 5
0x54A708: jnp     loc_54A7A4
0x54A70E: fld1
0x54A710: xor     ecx, ecx
0x54A712: fxch    st(2)
0x54A714: fcom    dword ptr [esi+ecx*4]
0x54A717: fnstsw  ax
0x54A719: test    ah, 41h
0x54A71C: jz      loc_54A7A2
0x54A722: fxch    st(2)
0x54A724: fcom    dword ptr [esi+ecx*4]
0x54A727: fnstsw  ax
0x54A729: test    ah, 5
0x54A72C: jnp     loc_54A7CF
0x54A732: add     ecx, 1
0x54A735: cmp     ecx, 10h
0x54A738: jb      short loc_54A712
0x54A73A: fstp    st(2)
0x54A73C: push    ecx
0x54A73D: fstp    st(1)
0x54A73F: lea     ecx, [esp+3Ch+var_20]
0x54A743: fstp    [esp+3Ch+var_3C]; float
0x54A746: call    sub_54E580
0x54A74B: mov     edi, [esp+38h+var_14]
0x54A74F: mov     eax, 4
0x54A754: sub     eax, esi
0x54A756: mov     ebx, 0FFFFFFF8h
0x54A75B: mov     edx, 2
0x54A760: mov     ebp, 8
0x54A765: lea     ecx, [esi+8]
0x54A768: mov     [esp+38h+arg_4], eax
0x54A76C: sub     ebx, esi
0x54A76E: mov     edi, edi
0x54A770: fld     dword ptr [ecx-8]
0x54A773: lea     eax, [edx-2]
0x54A776: cmp     eax, [esp+38h+var_10]
0x54A77A: fstp    [esp+38h+arg_0]
0x54A77E: jnb     short loc_54A7D5
0x54A780: lea     eax, [ebx+ecx]
0x54A783: fld     dword ptr [eax+edi]
0x54A786: lea     esi, [eax+edi]
0x54A789: fld     [esp+38h+arg_0]
0x54A78D: fld     st
0x54A78F: fucomp  st(2)
0x54A791: fnstsw  ax
0x54A793: fstp    st(1)
0x54A795: test    ah, 44h
0x54A798: jnp     short loc_54A7D3
0x54A79A: fstp    dword ptr [esi]
0x54A79C: mov     edi, [esp+38h+var_14]
0x54A7A0: jmp     short loc_54A7D5
0x54A7A2: fstp    st
0x54A7A4: fstp    st(1)
0x54A7A6: fstp    st
0x54A7A8: lea     ecx, [esp+38h+var_20]; this
0x54A7AC: mov     [esp+38h+var_4], 0FFFFFFFFh
0x54A7B4: call    ??1BSFaceGenKeyframeMultiple@@UAE@XZ; BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(void)
0x54A7B9: mov     ecx, [esp+38h+var_C]
0x54A7BD: mov     large fs:0, ecx
0x54A7C4: pop     ecx
0x54A7C5: pop     edi
0x54A7C6: pop     esi
0x54A7C7: pop     ebp
0x54A7C8: pop     ebx
0x54A7C9: add     esp, 24h
0x54A7CC: retn    8
0x54A7CF: fstp    st(2)
0x54A7D1: jmp     short loc_54A7A4
0x54A7D3: fstp    st
0x54A7D5: fld     dword ptr [ecx-4]
0x54A7D8: lea     eax, [edx-1]
0x54A7DB: cmp     eax, [esp+38h+var_10]
0x54A7DF: fstp    [esp+38h+arg_0]
0x54A7E3: jnb     short loc_54A80B
0x54A7E5: lea     eax, [ebx+ecx]
0x54A7E8: fld     dword ptr [eax+edi+4]
0x54A7EC: lea     esi, [eax+edi+4]
0x54A7F0: fld     [esp+38h+arg_0]
0x54A7F4: fld     st
0x54A7F6: fucomp  st(2)
0x54A7F8: fnstsw  ax
0x54A7FA: fstp    st(1)
0x54A7FC: test    ah, 44h
0x54A7FF: jnp     short loc_54A809
0x54A801: fstp    dword ptr [esi]
0x54A803: mov     edi, [esp+38h+var_14]
0x54A807: jmp     short loc_54A80B
0x54A809: fstp    st
0x54A80B: cmp     edx, [esp+38h+var_10]
0x54A80F: fld     dword ptr [ecx]
0x54A811: fstp    [esp+38h+arg_0]
0x54A815: jnb     short loc_54A836
0x54A817: fld     dword ptr [edi+ebp]
0x54A81A: fld     [esp+38h+arg_0]
0x54A81E: fld     st
0x54A820: fucomp  st(2)
0x54A822: fnstsw  ax
0x54A824: fstp    st(1)
0x54A826: test    ah, 44h
0x54A829: jnp     short loc_54A834
0x54A82B: fstp    dword ptr [edi+ebp]
0x54A82E: mov     edi, [esp+38h+var_14]
0x54A832: jmp     short loc_54A836
0x54A834: fstp    st
0x54A836: fld     dword ptr [ecx+4]
0x54A839: lea     eax, [edx+1]
0x54A83C: cmp     eax, [esp+38h+var_10]
0x54A840: fstp    [esp+38h+arg_0]
0x54A844: jnb     short loc_54A86D
0x54A846: mov     eax, [esp+38h+arg_4]
0x54A84A: add     eax, ecx
0x54A84C: fld     dword ptr [eax+edi]
0x54A84F: lea     esi, [eax+edi]
0x54A852: fld     [esp+38h+arg_0]
0x54A856: fld     st
0x54A858: fucomp  st(2)
0x54A85A: fnstsw  ax
0x54A85C: fstp    st(1)
0x54A85E: test    ah, 44h
0x54A861: jnp     short loc_54A86B
0x54A863: fstp    dword ptr [esi]
0x54A865: mov     edi, [esp+38h+var_14]
0x54A869: jmp     short loc_54A86D
0x54A86B: fstp    st
0x54A86D: add     edx, 4
0x54A870: lea     eax, [edx-2]
0x54A873: add     ebp, 10h
0x54A876: add     ecx, 10h
0x54A879: cmp     eax, 10h
0x54A87C: jb      loc_54A770
0x54A882: mov     ecx, [esp+38h+var_24]
0x54A886: add     ecx, 0B8h ; '¸'
0x54A88C: push    ecx
0x54A88D: lea     ecx, [esp+3Ch+var_20]
0x54A891: call    sub_54F350
0x54A896: jmp     loc_54A7A8
