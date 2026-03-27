0x6AA1A0: fldz
0x6AA1A2: fld     [esp+arg_0]
0x6AA1A6: fcom    st(1)
0x6AA1A8: fnstsw  ax
0x6AA1AA: test    ah, 5
0x6AA1AD: jp      short loc_6AA1BB
0x6AA1AF: fstp    st
0x6AA1B1: fstp    [esp+arg_0]
0x6AA1B5: fld     [esp+arg_0]
0x6AA1B9: jmp     short loc_6AA1D6
0x6AA1BB: fstp    st(1)
0x6AA1BD: fld1
0x6AA1BF: fcom    st(1)
0x6AA1C1: fnstsw  ax
0x6AA1C3: test    ah, 5
0x6AA1C6: jp      short loc_6AA1D4
0x6AA1C8: fstp    st(1)
0x6AA1CA: fstp    [esp+arg_0]
0x6AA1CE: fld     [esp+arg_0]
0x6AA1D2: jmp     short loc_6AA1D6
0x6AA1D4: fstp    st
0x6AA1D6: cmp     byte ptr [esp+arg_4], 0
0x6AA1DB: jz      short loc_6AA1E9
0x6AA1DD: fst     dword ptr [ecx+2F8h]
0x6AA1E3: fst     dword ptr [ecx+2F0h]
0x6AA1E9: cmp     byte ptr ds:0B3C0ECh, 0
0x6AA1F0: jz      short loc_6AA202
0x6AA1F2: fstp    st
0x6AA1F4: fld     dword ptr ds:0B16188h
0x6AA1FA: fstp    [esp+arg_0]
0x6AA1FE: fld     [esp+arg_0]
0x6AA202: test    byte ptr [ecx+0DCh], 1
0x6AA209: fmul    dword ptr [ecx+0B8h]
0x6AA20F: fstp    [esp+arg_0]
0x6AA213: fld     [esp+arg_0]
0x6AA217: fmul    st, st
0x6AA219: fstp    [esp+arg_0]
0x6AA21D: jz      short locret_6AA274
0x6AA21F: fld     dword ptr ds:0A34BA0h
0x6AA225: fld     [esp+arg_0]
0x6AA229: fcom    st(1)
0x6AA22B: fnstsw  ax
0x6AA22D: fstp    st(1)
0x6AA22F: test    ah, 5
0x6AA232: jp      short loc_6AA24C
0x6AA234: mov     ecx, [ecx+74h]
0x6AA237: fstp    st
0x6AA239: mov     eax, [ecx]
0x6AA23B: mov     [esp+arg_0], ecx
0x6AA23F: mov     ecx, [eax+1Ch]
0x6AA242: mov     [esp+arg_4], 0FFFFD8F0h
0x6AA24A: jmp     ecx
0x6AA24C: push    esi
0x6AA24D: mov     esi, [ecx+74h]
0x6AA250: push    edi
0x6AA251: mov     edi, [esi]
0x6AA253: call    __CIlog10
0x6AA258: fstp    [esp+8+arg_4]
0x6AA25C: fld     [esp+8+arg_4]
0x6AA260: fmul    qword ptr ds:0A77098h
0x6AA266: call    Double_To_SInt32
0x6AA26B: mov     edx, [edi+1Ch]
0x6AA26E: push    eax
0x6AA26F: push    esi
0x6AA270: call    edx
0x6AA272: pop     edi
0x6AA273: pop     esi
0x6AA274: retn    8
