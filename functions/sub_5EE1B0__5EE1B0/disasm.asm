0x5EE1B0: sub     esp, 10h
0x5EE1B3: cmp     byte ptr ds:0B42F3Eh, 0
0x5EE1BA: push    ebx
0x5EE1BB: push    esi
0x5EE1BC: push    edi
0x5EE1BD: mov     esi, ecx
0x5EE1BF: jz      short loc_5EE208
0x5EE1C1: cmp     byte ptr ds:0B42E84h, 0
0x5EE1C8: jz      short loc_5EE208
0x5EE1CA: cmp     dword ptr ds:0B42F48h, 2
0x5EE1D1: jl      short loc_5EE208
0x5EE1D3: lea     edi, [esi+44h]
0x5EE1D6: test    edi, edi
0x5EE1D8: jz      short loc_5EE208
0x5EE1DA: mov     ecx, edi; this
0x5EE1DC: call    ExtraDataList__GetRefractionProperty
0x5EE1E1: test    eax, eax
0x5EE1E3: jz      short loc_5EE208
0x5EE1E5: mov     ebx, [esi]
0x5EE1E7: mov     ecx, edi; this
0x5EE1E9: call    ExtraDataList__GetRefractionProperty
0x5EE1EE: fld     dword ptr [eax+0Ch]
0x5EE1F1: mov     eax, [ebx+270h]
0x5EE1F7: push    ecx
0x5EE1F8: fstp    [esp+20h+var_20]
0x5EE1FB: push    1
0x5EE1FD: mov     ecx, esi
0x5EE1FF: call    eax
0x5EE201: pop     edi
0x5EE202: pop     esi
0x5EE203: pop     ebx
0x5EE204: add     esp, 10h
0x5EE207: retn
0x5EE208: mov     edx, [esi]
0x5EE20A: mov     eax, [edx+288h]
0x5EE210: push    2Eh ; '.'
0x5EE212: mov     ecx, esi
0x5EE214: call    eax
0x5EE216: fdiv    qword ptr ds:0A309F0h
0x5EE21C: fld1
0x5EE21E: fsubrp  st(1), st
0x5EE220: fcomp   qword ptr ds:0A2FC68h
0x5EE226: fnstsw  ax
0x5EE228: test    ah, 5
0x5EE22B: jnp     short loc_5EE254
0x5EE22D: mov     edx, [esi]
0x5EE22F: mov     eax, [edx+288h]
0x5EE235: push    2Eh ; '.'
0x5EE237: mov     ecx, esi
0x5EE239: call    eax
0x5EE23B: fdiv    qword ptr ds:0A309F0h
0x5EE241: fld1
0x5EE243: fld     st
0x5EE245: fsubrp  st(2), st
0x5EE247: fcom    st(1)
0x5EE249: fnstsw  ax
0x5EE24B: fstp    st(1)
0x5EE24D: test    ah, 5
0x5EE250: jnp     short loc_5EE293
0x5EE252: fstp    st
0x5EE254: mov     edx, [esi]
0x5EE256: mov     eax, [edx+288h]
0x5EE25C: push    2Eh ; '.'
0x5EE25E: mov     ecx, esi
0x5EE260: call    eax
0x5EE262: fdiv    qword ptr ds:0A309F0h
0x5EE268: fld1
0x5EE26A: fsubrp  st(1), st
0x5EE26C: fldz
0x5EE26E: fcom    st(1)
0x5EE270: fnstsw  ax
0x5EE272: fstp    st(1)
0x5EE274: test    ah, 41h
0x5EE277: jz      short loc_5EE293
0x5EE279: mov     edx, [esi]
0x5EE27B: fstp    st
0x5EE27D: mov     eax, [edx+288h]
0x5EE283: push    2Eh ; '.'
0x5EE285: mov     ecx, esi
0x5EE287: call    eax
0x5EE289: fdiv    qword ptr ds:0A309F0h
0x5EE28F: fld1
0x5EE291: fsubrp  st(1), st
0x5EE293: mov     edx, [esi]
0x5EE295: fstp    [esp+1Ch+var_4]
0x5EE299: mov     eax, [edx+284h]
0x5EE29F: push    2Fh ; '/'
0x5EE2A1: mov     ecx, esi
0x5EE2A3: call    eax
0x5EE2A5: mov     [esp+1Ch+var_8], eax
0x5EE2A9: fild    [esp+1Ch+var_8]
0x5EE2AD: fldz
0x5EE2AF: fcom    st(1)
0x5EE2B1: fnstsw  ax
0x5EE2B3: fstp    st(1)
0x5EE2B5: test    ah, 5
0x5EE2B8: fld1
0x5EE2BA: jp      short loc_5EE2C6
0x5EE2BC: fxch    st(1)
0x5EE2BE: mov     bl, 1
0x5EE2C0: fstp    [esp+1Ch+var_10]
0x5EE2C4: jmp     short loc_5EE2CE
0x5EE2C6: fstp    st(1)
0x5EE2C8: xor     bl, bl
0x5EE2CA: fst     [esp+1Ch+var_10]
0x5EE2CE: cmp     dword ptr [esi+58h], 0
0x5EE2D2: fst     [esp+1Ch+var_C]
0x5EE2D6: fstp    [esp+1Ch+var_8]
0x5EE2DA: jz      short loc_5EE31D
0x5EE2DC: mov     ecx, [esi+58h]
0x5EE2DF: mov     edx, [ecx]
0x5EE2E1: mov     eax, [edx+8]
0x5EE2E4: call    eax
0x5EE2E6: test    eax, eax
0x5EE2E8: jnz     short loc_5EE31D
0x5EE2EA: mov     ecx, [esi+58h]
0x5EE2ED: mov     edx, [ecx]
0x5EE2EF: mov     eax, [edx+430h]
0x5EE2F5: call    eax
0x5EE2F7: fstp    [esp+1Ch+var_8]
0x5EE2FB: mov     ecx, [esi+58h]
0x5EE2FE: mov     edx, [ecx]
0x5EE300: fld     dword ptr [ecx+2C0h]
0x5EE306: mov     eax, [edx+47Ch]
0x5EE30C: fstp    [esp+1Ch+var_C]
0x5EE310: call    eax
0x5EE312: cmp     eax, 2
0x5EE315: jnz     short loc_5EE31D
0x5EE317: fld1
0x5EE319: fstp    [esp+1Ch+var_10]
0x5EE31D: cmp     esi, ds:0B333C4h
0x5EE323: fld     [esp+1Ch+var_10]
0x5EE327: fmul    [esp+1Ch+var_4]
0x5EE32B: fmul    [esp+1Ch+var_C]
0x5EE32F: fmul    [esp+1Ch+var_8]
0x5EE333: fstp    [esp+1Ch+var_10]
0x5EE337: jnz     short loc_5EE368
0x5EE339: test    bl, bl
0x5EE33B: jz      short loc_5EE35A
0x5EE33D: fld     [esp+1Ch+var_10]
0x5EE341: fld     dword ptr ds:0B38000h
0x5EE347: fcom    st(1)
0x5EE349: fnstsw  ax
0x5EE34B: fstp    st(1)
0x5EE34D: test    ah, 41h
0x5EE350: jnz     short loc_5EE358
0x5EE352: fstp    [esp+1Ch+var_10]
0x5EE356: jmp     short loc_5EE35A
0x5EE358: fstp    st
0x5EE35A: fld     dword ptr ds:0B14E50h
0x5EE360: fmul    [esp+1Ch+var_10]
0x5EE364: fstp    [esp+1Ch+var_10]
0x5EE368: cmp     esi, ds:0B3BB00h
0x5EE36E: jnz     short loc_5EE37A
0x5EE370: fld     dword ptr ds:0B14E54h
0x5EE376: fstp    [esp+1Ch+var_10]
0x5EE37A: mov     edx, [esi]
0x5EE37C: fld     [esp+1Ch+var_10]
0x5EE380: mov     eax, [edx+324h]
0x5EE386: push    ecx
0x5EE387: mov     ecx, esi
0x5EE389: fstp    [esp+20h+var_20]
0x5EE38C: call    eax
0x5EE38E: pop     edi
0x5EE38F: pop     esi
0x5EE390: pop     ebx
0x5EE391: add     esp, 10h
0x5EE394: retn
