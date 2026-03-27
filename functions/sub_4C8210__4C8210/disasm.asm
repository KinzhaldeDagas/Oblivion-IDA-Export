0x4C8210: mov     eax, 1B1B4h
0x4C8215: call    __alloca_probe
0x4C821A: mov     eax, ds:0B30AACh
0x4C821F: xor     eax, esp
0x4C8221: mov     [esp+1B1B4h+var_4], eax
0x4C8228: push    ebx
0x4C8229: mov     ebx, ecx
0x4C822B: mov     eax, [ebx+1Ch]
0x4C822E: test    al, 8
0x4C8230: jz      loc_4C84DD
0x4C8236: test    eax, 400h
0x4C823B: jnz     loc_4C84DD
0x4C8241: push    ebp
0x4C8242: push    esi
0x4C8243: xor     eax, eax
0x4C8245: push    edi
0x4C8246: mov     [esp+1B1C4h+var_C], eax
0x4C824D: mov     [esp+1B1C4h+var_8], eax
0x4C8254: lea     eax, [esp+1B1C4h+var_C]
0x4C825B: push    eax
0x4C825C: push    1
0x4C825E: lea     ecx, [esp+1B1CCh+var_1B1AC]
0x4C8262: push    ecx
0x4C8263: mov     ecx, ebx
0x4C8265: call    sub_4C7A30
0x4C826A: xor     ecx, ecx
0x4C826C: mov     [esp+1B1C4h+var_1B1B4], ecx
0x4C8270: lea     ebp, [esp+1B1C4h+var_1A400]
0x4C8277: jmp     short loc_4C8280
0x4C8279: align 10h
0x4C8280: mov     eax, [esp+ecx*4+1B1C4h+var_1B1AC]
0x4C8284: test    eax, eax
0x4C8286: jz      loc_4C830C
0x4C828C: mov     ecx, [eax+24h]
0x4C828F: test    ecx, ecx
0x4C8291: jz      short loc_4C8298
0x4C8293: mov     edx, [ecx+8]
0x4C8296: jmp     short loc_4C829A
0x4C8298: xor     edx, edx
0x4C829A: mov     esi, [edx]
0x4C829C: lea     edi, [ebp-0D8Ch]
0x4C82A2: mov     ecx, 363h
0x4C82A7: rep movsd
0x4C82A9: mov     ecx, [eax+24h]
0x4C82AC: test    ecx, ecx
0x4C82AE: jz      short loc_4C82B5
0x4C82B0: mov     edx, [ecx+8]
0x4C82B3: jmp     short loc_4C82B7
0x4C82B5: xor     edx, edx
0x4C82B7: mov     esi, [edx+4]
0x4C82BA: mov     ecx, 363h
0x4C82BF: mov     edi, ebp
0x4C82C1: rep movsd
0x4C82C3: mov     ecx, [eax+24h]
0x4C82C6: test    ecx, ecx
0x4C82C8: jz      short loc_4C82CF
0x4C82CA: mov     edx, [ecx+8]
0x4C82CD: jmp     short loc_4C82D1
0x4C82CF: xor     edx, edx
0x4C82D1: mov     esi, [edx+8]
0x4C82D4: lea     edi, [ebp+0D8Ch]
0x4C82DA: mov     ecx, 363h
0x4C82DF: rep movsd
0x4C82E1: mov     ecx, [eax+24h]
0x4C82E4: test    ecx, ecx
0x4C82E6: jz      short loc_4C82ED
0x4C82E8: mov     edx, [ecx+8]
0x4C82EB: jmp     short loc_4C82EF
0x4C82ED: xor     edx, edx
0x4C82EF: mov     esi, [edx+0Ch]
0x4C82F2: lea     edi, [ebp+1B18h]
0x4C82F8: mov     ecx, 363h
0x4C82FD: rep movsd
0x4C82FF: push    0
0x4C8301: mov     ecx, eax
0x4C8303: call    sub_4C1170
0x4C8308: mov     ecx, [esp+1B1C4h+var_1B1B4]
0x4C830C: add     ecx, 1
0x4C830F: add     ebp, 3630h
0x4C8315: cmp     ecx, 8
0x4C8318: mov     [esp+1B1C4h+var_1B1B4], ecx
0x4C831C: jl      loc_4C8280
0x4C8322: push    0
0x4C8324: mov     ecx, ebx
0x4C8326: call    sub_4C1170
0x4C832B: push    0
0x4C832D: lea     edx, [esp+1B1C8h+var_1B1AC]
0x4C8331: push    edx
0x4C8332: mov     ecx, ebx
0x4C8334: call    sub_4C80F0
0x4C8339: xor     edi, edi
0x4C833B: jmp     short loc_4C8340
0x4C833D: align 10h
0x4C8340: xor     esi, esi
0x4C8342: mov     eax, [ebx+24h]
0x4C8345: mov     ecx, [eax+8]
0x4C8348: mov     ecx, [ecx+edi]
0x4C834B: add     ecx, esi
0x4C834D: call    sub_43F350
0x4C8352: fstp    st
0x4C8354: mov     edx, [ebx+24h]
0x4C8357: mov     eax, [edx+8]
0x4C835A: mov     ecx, [eax+edi]
0x4C835D: fld     dword ptr [ecx+esi+4]
0x4C8361: lea     ebp, [ecx+esi]
0x4C8364: fld     qword ptr ds:0A46298h
0x4C836A: fmul    st(1), st
0x4C836C: fxch    st(1)
0x4C836E: call    Double_To_SInt32
0x4C8373: fld     dword ptr [ebp+8]
0x4C8376: fmul    st, st(1)
0x4C8378: mov     [esp+1B1C4h+var_1B1AE], al
0x4C837C: call    Double_To_SInt32
0x4C8381: fld     dword ptr [ebp+0]
0x4C8384: fmul    st, st(1)
0x4C8386: mov     [esp+1B1C4h+var_1B1AD], al
0x4C838A: call    Double_To_SInt32
0x4C838F: movsx   edx, al
0x4C8392: mov     [esp+1B1C4h+var_1B1B4], edx
0x4C8396: movsx   eax, [esp+1B1C4h+var_1B1AE]
0x4C839B: fild    [esp+1B1C4h+var_1B1B4]
0x4C839F: mov     [esp+1B1C4h+var_1B1B4], eax
0x4C83A3: fdiv    st, st(1)
0x4C83A5: fstp    dword ptr [ebp+0]
0x4C83A8: fild    [esp+1B1C4h+var_1B1B4]
0x4C83AC: mov     ecx, [ebx+24h]
0x4C83AF: mov     edx, [ecx+8]
0x4C83B2: mov     eax, [edx+edi]
0x4C83B5: movsx   ecx, [esp+1B1C4h+var_1B1AD]
0x4C83BA: fdiv    st, st(1)
0x4C83BC: fstp    [esp+1B1C4h+var_1B1B4]
0x4C83C0: fld     [esp+1B1C4h+var_1B1B4]
0x4C83C4: fstp    dword ptr [eax+esi+4]
0x4C83C8: mov     [esp+1B1C4h+var_1B1B4], ecx
0x4C83CC: mov     edx, [ebx+24h]
0x4C83CF: mov     eax, [edx+8]
0x4C83D2: fidivr  [esp+1B1C4h+var_1B1B4]
0x4C83D6: mov     ecx, [eax+edi]
0x4C83D9: fstp    [esp+1B1C4h+var_1B1B4]
0x4C83DD: fld     [esp+1B1C4h+var_1B1B4]
0x4C83E1: fstp    dword ptr [ecx+esi+8]
0x4C83E5: mov     edx, [ebx+24h]
0x4C83E8: mov     eax, [edx+8]
0x4C83EB: mov     ecx, [eax+edi]
0x4C83EE: add     ecx, esi
0x4C83F0: call    sub_43F350
0x4C83F5: fstp    st
0x4C83F7: add     esi, 0Ch
0x4C83FA: cmp     esi, 0D8Ch
0x4C8400: jl      loc_4C8342
0x4C8406: add     edi, 4
0x4C8409: cmp     edi, 10h
0x4C840C: jl      loc_4C8340
0x4C8412: xor     ebp, ebp
0x4C8414: lea     ebx, [esp+1B1C4h+var_1A400]
0x4C841B: jmp     short loc_4C8420
0x4C841D: align 10h
0x4C8420: mov     eax, [esp+ebp*4+1B1C4h+var_1B1AC]
0x4C8424: test    eax, eax
0x4C8426: jz      loc_4C84B0
0x4C842C: mov     ecx, [eax+24h]
0x4C842F: test    ecx, ecx
0x4C8431: jz      short loc_4C8438
0x4C8433: mov     edx, [ecx+8]
0x4C8436: jmp     short loc_4C843A
0x4C8438: xor     edx, edx
0x4C843A: mov     edi, [edx]
0x4C843C: lea     esi, [ebx-0D8Ch]
0x4C8442: mov     ecx, 363h
0x4C8447: rep movsd
0x4C8449: mov     ecx, [eax+24h]
0x4C844C: test    ecx, ecx
0x4C844E: jz      short loc_4C8455
0x4C8450: mov     edx, [ecx+8]
0x4C8453: jmp     short loc_4C8457
0x4C8455: xor     edx, edx
0x4C8457: mov     edi, [edx+4]
0x4C845A: mov     ecx, 363h
0x4C845F: mov     esi, ebx
0x4C8461: rep movsd
0x4C8463: mov     ecx, [eax+24h]
0x4C8466: test    ecx, ecx
0x4C8468: jz      short loc_4C846F
0x4C846A: mov     edx, [ecx+8]
0x4C846D: jmp     short loc_4C8471
0x4C846F: xor     edx, edx
0x4C8471: mov     edi, [edx+8]
0x4C8474: lea     esi, [ebx+0D8Ch]
0x4C847A: mov     ecx, 363h
0x4C847F: rep movsd
0x4C8481: mov     ecx, [eax+24h]
0x4C8484: test    ecx, ecx
0x4C8486: jz      short loc_4C848D
0x4C8488: mov     edx, [ecx+8]
0x4C848B: jmp     short loc_4C848F
0x4C848D: xor     edx, edx
0x4C848F: cmp     byte ptr [esp+ebp+1B1C4h+var_C], 0
0x4C8497: mov     edi, [edx+0Ch]
0x4C849A: lea     esi, [ebx+1B18h]
0x4C84A0: mov     ecx, 363h
0x4C84A5: rep movsd
0x4C84A7: jz      short loc_4C84B0
0x4C84A9: mov     ecx, eax
0x4C84AB: call    sub_4C6280
0x4C84B0: add     ebp, 1
0x4C84B3: add     ebx, 3630h
0x4C84B9: cmp     ebp, 8
0x4C84BC: jl      loc_4C8420
0x4C84C2: pop     edi
0x4C84C3: pop     esi
0x4C84C4: pop     ebp
0x4C84C5: mov     al, 1
0x4C84C7: pop     ebx
0x4C84C8: mov     ecx, [esp+1B1B4h+var_4]
0x4C84CF: xor     ecx, esp
0x4C84D1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C84D6: add     esp, 1B1B4h
0x4C84DC: retn
0x4C84DD: mov     ecx, [esp+1B1B8h+var_4]
0x4C84E4: pop     ebx
0x4C84E5: xor     ecx, esp
0x4C84E7: xor     al, al
0x4C84E9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C84EE: add     esp, 1B1B4h
0x4C84F4: retn
