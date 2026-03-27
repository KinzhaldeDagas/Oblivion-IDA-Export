0x6A9110: push    ebp
0x6A9111: mov     ebp, esp
0x6A9113: and     esp, 0FFFFFFC0h
0x6A9116: sub     esp, 1F4h
0x6A911C: mov     eax, ds:0B30AACh
0x6A9121: xor     eax, esp
0x6A9123: mov     [esp+1F4h+var_4], eax
0x6A912A: mov     eax, [ebp+arg_8]
0x6A912D: mov     ecx, [ebp+arg_C]
0x6A9130: push    ebx
0x6A9131: push    esi
0x6A9132: mov     esi, [ebp+arg_0]
0x6A9135: push    edi
0x6A9136: mov     edi, [eax]
0x6A9138: push    0FFFFFFFFh; int
0x6A913A: mov     [esp+204h+var_1E8], edi
0x6A913E: fild    [esp+204h+var_1E8]
0x6A9142: push    1; int
0x6A9144: sub     esp, 8
0x6A9147: mov     dword ptr [esp+210h+var_1B8+4], eax
0x6A914B: mov     eax, [ecx]
0x6A914D: fstp    [esp+210h+var_20C]; float
0x6A9151: fild    dword ptr ds:0B02E24h
0x6A9157: mov     [esp+210h+var_1C8], ecx
0x6A915B: mov     ecx, [esi+300h]
0x6A9161: mov     edx, [ecx+0Ch]
0x6A9164: fstp    [esp+210h+var_210]; float
0x6A9167: push    offset aAudioInfo; "AUDIO INFO"
0x6A916C: mov     [esp+214h+var_1D8], esi
0x6A9170: mov     [esp+214h+var_1AC], eax
0x6A9174: mov     [esp+214h+var_1E4], edx
0x6A9178: call    InterfaceMgr_DebugTextLine
0x6A917D: mov     ebx, [ebp+arg_4]
0x6A9180: add     ebx, ebx
0x6A9182: add     edi, ebx
0x6A9184: add     esp, 14h
0x6A9187: cmp     byte ptr ds:0B333B8h, 0
0x6A918E: mov     [esp+200h+var_1E8], edi
0x6A9192: mov     eax, offset aC; "C"
0x6A9197: jnz     short loc_6A919E
0x6A9199: mov     eax, offset aN; "N"
0x6A919E: push    eax
0x6A919F: lea     eax, [esp+204h+var_198]
0x6A91A3: push    offset aSMusicPlaying; "[%s] Music Playing: "
0x6A91A8: push    eax
0x6A91A9: call    __sprintf
0x6A91AE: movzx   eax, word ptr [esi+0B0h]
0x6A91B5: add     esp, 0Ch
0x6A91B8: cmp     eax, 8; switch 9 cases
0x6A91BB: ja      short def_6A91BD; jumptable 006A91BD default case, cases 3,5-7
0x6A91BD: jmp     ds:jpt_6A91BD[eax*4]; switch jump
0x6A91C4: push    offset aExplore; jumptable 006A91BD case 0
0x6A91C9: lea     ecx, [esp+204h+var_D0]
0x6A91D0: push    ecx
0x6A91D1: jmp     short loc_6A9205
0x6A91D3: push    offset aPublic; jumptable 006A91BD case 1
0x6A91D8: jmp     short loc_6A91FD
0x6A91DA: push    offset aDungeon?; jumptable 006A91BD case 2
0x6A91DF: lea     eax, [esp+204h+var_D0]
0x6A91E6: push    eax
0x6A91E7: jmp     short loc_6A9205
0x6A91E9: push    offset aBattle; jumptable 006A91BD case 4
0x6A91EE: lea     ecx, [esp+204h+var_D0]
0x6A91F5: push    ecx
0x6A91F6: jmp     short loc_6A9205
0x6A91F8: push    offset aSpecial; jumptable 006A91BD case 8
0x6A91FD: lea     edx, [esp+204h+var_D0]
0x6A9204: push    edx
0x6A9205: call    __sprintf
0x6A920A: add     esp, 8
0x6A920D: lea     eax, [esp+200h+var_D0]; jumptable 006A91BD default case, cases 3,5-7
0x6A9214: mov     edx, eax
0x6A9216: mov     cl, [eax]
0x6A9218: add     eax, 1
0x6A921B: test    cl, cl
0x6A921D: jnz     short loc_6A9216
0x6A921F: lea     edi, [esp+200h+var_198]
0x6A9223: sub     eax, edx
0x6A9225: add     edi, 0FFFFFFFFh
0x6A9228: mov     cl, [edi+1]
0x6A922B: add     edi, 1
0x6A922E: test    cl, cl
0x6A9230: jnz     short loc_6A9228
0x6A9232: mov     ecx, eax
0x6A9234: shr     ecx, 2
0x6A9237: mov     esi, edx
0x6A9239: rep movsd
0x6A923B: mov     ecx, eax
0x6A923D: mov     eax, [esp+200h+var_1D8]
0x6A9241: and     ecx, 3
0x6A9244: sub     esp, 8
0x6A9247: fld     dword ptr [eax+2F0h]
0x6A924D: rep movsb
0x6A924F: fstp    [esp+208h+var_208]
0x6A9252: lea     ecx, [esp+208h+var_D0]
0x6A9259: push    offset a_3f; "(%.3f)"
0x6A925E: push    ecx
0x6A925F: call    __sprintf
0x6A9264: lea     eax, [esp+210h+var_D0]
0x6A926B: add     esp, 10h
0x6A926E: mov     esi, eax
0x6A9270: mov     cl, [eax]
0x6A9272: add     eax, 1
0x6A9275: test    cl, cl
0x6A9277: jnz     short loc_6A9270
0x6A9279: lea     edi, [esp+200h+var_198]
0x6A927D: sub     eax, esi
0x6A927F: add     edi, 0FFFFFFFFh
0x6A9282: mov     cl, [edi+1]
0x6A9285: add     edi, 1
0x6A9288: test    cl, cl
0x6A928A: jnz     short loc_6A9282
0x6A928C: fild    [esp+200h+var_1E8]
0x6A9290: mov     ecx, eax
0x6A9292: shr     ecx, 2
0x6A9295: rep movsd
0x6A9297: push    0FFFFFFFFh; int
0x6A9299: push    1; int
0x6A929B: sub     esp, 8
0x6A929E: mov     ecx, eax
0x6A92A0: lea     edx, [esp+210h+var_198]
0x6A92A4: fstp    [esp+210h+var_20C]; float
0x6A92A8: and     ecx, 3
0x6A92AB: fild    dword ptr ds:0B02E24h
0x6A92B1: rep movsb
0x6A92B3: fstp    [esp+210h+var_210]; float
0x6A92B6: push    edx; int
0x6A92B7: call    InterfaceMgr_DebugTextLine
0x6A92BC: mov     edi, [esp+214h+var_1D8]
0x6A92C0: mov     eax, [edi+304h]
0x6A92C6: mov     ecx, [eax+0Ch]
0x6A92C9: mov     edx, [esp+214h+var_1E4]
0x6A92CD: mov     esi, [esp+214h+var_1E8]
0x6A92D1: add     esi, [ebp+arg_4]
0x6A92D4: push    ecx
0x6A92D5: push    edx
0x6A92D6: lea     eax, [esp+21Ch+var_198]
0x6A92DD: push    offset aDSoundsLoaded_; "%d sounds loaded. %d moving sounds regi"...
0x6A92E2: push    eax
0x6A92E3: mov     [esp+224h+var_1E8], esi
0x6A92E7: call    __sprintf
0x6A92EC: fild    [esp+224h+var_1E8]
0x6A92F0: add     esp, 24h
0x6A92F3: push    0FFFFFFFFh; int
0x6A92F5: push    1; int
0x6A92F7: sub     esp, 8
0x6A92FA: fstp    [esp+210h+var_20C]; float
0x6A92FE: lea     ecx, [esp+210h+var_198]
0x6A9302: fild    dword ptr ds:0B02E24h
0x6A9308: fstp    [esp+210h+var_210]; float
0x6A930B: push    ecx; int
0x6A930C: call    InterfaceMgr_DebugTextLine
0x6A9311: mov     edx, [edi+300h]
0x6A9317: mov     eax, [edx+4]
0x6A931A: xor     ecx, ecx
0x6A931C: add     esi, ebx
0x6A931E: add     esp, 14h
0x6A9321: cmp     eax, ecx
0x6A9323: mov     [esp+200h+var_1E8], esi
0x6A9327: mov     [esp+200h+var_1B0], ecx
0x6A932B: jbe     short loc_6A9341
0x6A932D: mov     edx, [edx+8]
0x6A9330: mov     esi, edx
0x6A9332: cmp     dword ptr [esi], 0
0x6A9335: jnz     short loc_6A9397
0x6A9337: add     ecx, 1
0x6A933A: add     esi, 4
0x6A933D: cmp     ecx, eax
0x6A933F: jb      short loc_6A9332
0x6A9341: xor     ecx, ecx
0x6A9343: test    ecx, ecx
0x6A9345: mov     [esp+200h+var_1E4], ecx
0x6A9349: jz      loc_6A99C2
0x6A934F: nop
0x6A9350: mov     esi, [esp+200h+var_1D8]
0x6A9354: lea     edx, [esp+200h+var_1B0]
0x6A9358: push    edx
0x6A9359: lea     eax, [esp+204h+var_1C4]
0x6A935D: push    eax
0x6A935E: lea     ecx, [esp+208h+var_1E4]
0x6A9362: push    ecx
0x6A9363: mov     ecx, [esi+300h]
0x6A9369: call    sub_452600
0x6A936E: mov     ebx, [esp+200h+var_1B0]
0x6A9372: mov     edx, [ebx]
0x6A9374: mov     ecx, ebx
0x6A9376: mov     [esp+200h+var_1C4], edx
0x6A937A: call    sub_6B67D0
0x6A937F: test    eax, eax
0x6A9381: jnz     short loc_6A939C
0x6A9383: lea     eax, [esp+200h+var_198]
0x6A9387: push    offset aNoname; "%NoName:\t"
0x6A938C: push    eax
0x6A938D: call    __sprintf
0x6A9392: add     esp, 8
0x6A9395: jmp     short loc_6A93CF
0x6A9397: mov     ecx, [edx+ecx*4]
0x6A939A: jmp     short loc_6A9343
0x6A939C: cmp     byte ptr ds:0B161C0h, 0
0x6A93A3: jz      short loc_6A93B9
0x6A93A5: mov     ecx, ebx
0x6A93A7: call    sub_6B67D0
0x6A93AC: push    eax
0x6A93AD: push    offset aS_2; "%s:\t"
0x6A93B2: lea     ecx, [esp+208h+var_198]
0x6A93B6: push    ecx
0x6A93B7: jmp     short loc_6A93C7
0x6A93B9: mov     edx, [ebx+0Ch]
0x6A93BC: push    edx
0x6A93BD: push    offset aD_2; "%d:\t"
0x6A93C2: lea     eax, [esp+208h+var_198]
0x6A93C6: push    eax
0x6A93C7: call    __sprintf
0x6A93CC: add     esp, 0Ch
0x6A93CF: fldz
0x6A93D1: fst     [esp+200h+var_1E0]
0x6A93D5: fstp    [esp+200h+var_1DC]
0x6A93D9: mov     eax, [ebx+54h]
0x6A93DC: test    eax, eax
0x6A93DE: jz      short loc_6A93FD
0x6A93E0: mov     ecx, [eax]
0x6A93E2: lea     edx, [esp+200h+var_1DC]
0x6A93E6: push    edx
0x6A93E7: push    eax
0x6A93E8: mov     eax, [ecx+1Ch]
0x6A93EB: call    eax
0x6A93ED: mov     eax, [ebx+54h]
0x6A93F0: mov     ecx, [eax]
0x6A93F2: lea     edx, [esp+200h+var_1E0]
0x6A93F6: push    edx
0x6A93F7: push    eax
0x6A93F8: mov     eax, [ecx+20h]
0x6A93FB: call    eax
0x6A93FD: test    byte ptr [ebx], 2
0x6A9400: jz      loc_6A95D2
0x6A9406: fld     [esp+200h+var_1DC]
0x6A940A: mov     eax, [ebx+28h]
0x6A940D: fcomp   qword ptr ds:0A47CA8h
0x6A9413: mov     ecx, [ebx+20h]
0x6A9416: mov     edx, [ebx+24h]
0x6A9419: mov     dword ptr [esp+200h+var_1B8], eax
0x6A941D: mov     [esp+200h+var_1C0], ecx
0x6A9421: fnstsw  ax
0x6A9423: mov     [esp+200h+var_1BC], edx
0x6A9427: test    ah, 41h
0x6A942A: jnz     loc_6A94FB
0x6A9430: cmp     byte ptr [ebx+4Ah], 0
0x6A9434: jz      short loc_6A943E
0x6A9436: fld     qword ptr ds:0A309F0h
0x6A943C: jmp     short loc_6A9450
0x6A943E: movzx   ecx, word ptr [ebx+46h]
0x6A9442: mov     [esp+200h+var_1EC], ecx
0x6A9446: fild    [esp+200h+var_1EC]
0x6A944A: fdiv    qword ptr ds:0A309F0h
0x6A9450: fstp    [esp+200h+var_1A8]
0x6A9454: fld     [esp+200h+var_1C0]
0x6A9458: fsub    dword ptr [esi+80h]
0x6A945E: fstp    [esp+200h+var_1D4]
0x6A9462: fld     [esp+200h+var_1BC]
0x6A9466: fsub    dword ptr [esi+84h]
0x6A946C: fstp    [esp+200h+var_1D0]
0x6A9470: fld     dword ptr [esp+200h+var_1B8]
0x6A9474: fsub    dword ptr [esi+88h]
0x6A947A: fstp    [esp+200h+var_1CC]
0x6A947E: fld     [esp+200h+var_1D0]
0x6A9482: fld     [esp+200h+var_1D4]
0x6A9486: fld     [esp+200h+var_1CC]
0x6A948A: fld     st(1)
0x6A948C: fmulp   st(2), st
0x6A948E: fld     st(2)
0x6A9490: fmulp   st(3), st
0x6A9492: fxch    st(1)
0x6A9494: faddp   st(2), st
0x6A9496: fmul    st, st
0x6A9498: faddp   st(1), st
0x6A949A: fstp    [esp+200h+var_1EC]
0x6A949E: fld     [esp+200h+var_1EC]
0x6A94A2: call    __CIsqrt
0x6A94A7: fstp    [esp+200h+var_1EC]
0x6A94AB: fld     [esp+200h+var_1EC]
0x6A94AF: movzx   edx, word ptr [ebx+44h]
0x6A94B3: sub     esp, 20h
0x6A94B6: mov     [esp+220h+var_1EC], edx
0x6A94BA: lea     eax, [esp+220h+var_D0]
0x6A94C1: fstp    [esp+220h+var_208]
0x6A94C5: fld     [esp+220h+var_1E0]
0x6A94C9: fmul    qword ptr ds:0A76F60h
0x6A94CF: fstp    qword ptr [esp+220h+var_210]
0x6A94D3: fld     [esp+220h+var_1A8]
0x6A94D7: fstp    [esp+220h+var_218]
0x6A94DB: fild    [esp+220h+var_1EC]
0x6A94DF: fdiv    qword ptr ds:0A309F0h
0x6A94E5: fstp    [esp+220h+var_220]
0x6A94E8: push    offset a_1fdb_1fdb_0fD; "(-%.1fdB)(-%.1fdB)(%.0f/Default) (%.0f)"
0x6A94ED: push    eax
0x6A94EE: call    __sprintf
0x6A94F3: add     esp, 28h
0x6A94F6: jmp     loc_6A9625
0x6A94FB: cmp     byte ptr [ebx+4Ah], 0
0x6A94FF: jz      short loc_6A9509
0x6A9501: fld     qword ptr ds:0A309F0h
0x6A9507: jmp     short loc_6A951B
0x6A9509: movzx   ecx, word ptr [ebx+46h]
0x6A950D: mov     [esp+200h+var_1EC], ecx
0x6A9511: fild    [esp+200h+var_1EC]
0x6A9515: fdiv    qword ptr ds:0A309F0h
0x6A951B: fstp    [esp+200h+var_1A8]
0x6A951F: fld     [esp+200h+var_1C0]
0x6A9523: fsub    dword ptr [esi+80h]
0x6A9529: fstp    [esp+200h+var_1D4]
0x6A952D: fld     [esp+200h+var_1BC]
0x6A9531: fsub    dword ptr [esi+84h]
0x6A9537: fstp    [esp+200h+var_1D0]
0x6A953B: fld     dword ptr [esp+200h+var_1B8]
0x6A953F: fsub    dword ptr [esi+88h]
0x6A9545: fstp    [esp+200h+var_1CC]
0x6A9549: fld     [esp+200h+var_1D0]
0x6A954D: fld     [esp+200h+var_1D4]
0x6A9551: fld     [esp+200h+var_1CC]
0x6A9555: fld     st(1)
0x6A9557: fmulp   st(2), st
0x6A9559: fld     st(2)
0x6A955B: fmulp   st(3), st
0x6A955D: fxch    st(1)
0x6A955F: faddp   st(2), st
0x6A9561: fmul    st, st
0x6A9563: faddp   st(1), st
0x6A9565: fstp    [esp+200h+var_1EC]
0x6A9569: fld     [esp+200h+var_1EC]
0x6A956D: call    __CIsqrt
0x6A9572: fstp    [esp+200h+var_1EC]
0x6A9576: fld     [esp+200h+var_1EC]
0x6A957A: movzx   edx, word ptr [ebx+44h]
0x6A957E: sub     esp, 28h
0x6A9581: mov     [esp+228h+var_1EC], edx
0x6A9585: lea     eax, [esp+228h+var_D0]
0x6A958C: fstp    [esp+228h+var_208]
0x6A9590: fld     [esp+228h+var_1DC]
0x6A9594: fld     qword ptr ds:0A76F60h
0x6A959A: fmul    st(1), st
0x6A959C: fxch    st(1)
0x6A959E: fstp    qword ptr [esp+228h+var_210]
0x6A95A2: fmul    [esp+228h+var_1E0]
0x6A95A6: fstp    [esp+228h+var_218]
0x6A95AA: fld     [esp+228h+var_1A8]
0x6A95B1: fstp    [esp+228h+var_220]
0x6A95B5: fild    [esp+228h+var_1EC]
0x6A95B9: fdiv    qword ptr ds:0A309F0h
0x6A95BF: fstp    [esp+228h+var_228]
0x6A95C2: push    offset a_1fdb_1fdb_0f_; "(-%.1fdB)(-%.1fdB)(%.0f/%.0f) (%.0f)"
0x6A95C7: push    eax
0x6A95C8: call    __sprintf
0x6A95CD: add     esp, 30h
0x6A95D0: jmp     short loc_6A9625
0x6A95D2: cmp     byte ptr [ebx+4Ah], 0
0x6A95D6: jz      short loc_6A95E2
0x6A95D8: fld     qword ptr ds:0A309F0h
0x6A95DE: fld     st
0x6A95E0: jmp     short loc_6A95F8
0x6A95E2: movzx   ecx, word ptr [ebx+46h]
0x6A95E6: mov     [esp+200h+var_1EC], ecx
0x6A95EA: fild    [esp+200h+var_1EC]
0x6A95EE: fld     qword ptr ds:0A309F0h
0x6A95F4: fdiv    st(1), st
0x6A95F6: fxch    st(1)
0x6A95F8: movzx   edx, word ptr [ebx+44h]
0x6A95FC: sub     esp, 10h
0x6A95FF: mov     [esp+210h+var_1EC], edx
0x6A9603: lea     eax, [esp+210h+var_D0]
0x6A960A: fstp    [esp+210h+var_208]
0x6A960E: fild    [esp+210h+var_1EC]
0x6A9612: fdivrp  st(1), st
0x6A9614: fstp    qword ptr [esp+210h+var_210]
0x6A9617: push    offset a_1fdb_1fdb; "(-%.1fdB)(-%.1fdB)"
0x6A961C: push    eax
0x6A961D: call    __sprintf
0x6A9622: add     esp, 18h
0x6A9625: lea     eax, [esp+200h+var_D0]
0x6A962C: mov     edx, eax
0x6A962E: mov     edi, edi
0x6A9630: mov     cl, [eax]
0x6A9632: add     eax, 1
0x6A9635: test    cl, cl
0x6A9637: jnz     short loc_6A9630
0x6A9639: lea     edi, [esp+200h+var_198]
0x6A963D: sub     eax, edx
0x6A963F: add     edi, 0FFFFFFFFh
0x6A9642: mov     cl, [edi+1]
0x6A9645: add     edi, 1
0x6A9648: test    cl, cl
0x6A964A: jnz     short loc_6A9642
0x6A964C: mov     ecx, eax
0x6A964E: shr     ecx, 2
0x6A9651: mov     esi, edx
0x6A9653: rep movsd
0x6A9655: mov     ecx, eax
0x6A9657: and     ecx, 3
0x6A965A: rep movsb
0x6A965C: mov     ecx, ebx
0x6A965E: call    sub_6B6AF0
0x6A9663: test    al, al
0x6A9665: lea     eax, [esp+200h+var_198]
0x6A9669: jz      short loc_6A9688
0x6A966B: add     eax, 0FFFFFFFFh
0x6A966E: mov     edi, edi
0x6A9670: mov     cl, [eax+1]
0x6A9673: add     eax, 1
0x6A9676: test    cl, cl
0x6A9678: jnz     short loc_6A9670
0x6A967A: mov     ecx, ds:0A76EF4h
0x6A9680: mov     edx, ds:0A76EF8h
0x6A9686: jmp     short loc_6A96A6
0x6A9688: add     eax, 0FFFFFFFFh
0x6A968B: jmp     short loc_6A9690
