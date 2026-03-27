0x8D7400: sub     esp, 34h
0x8D7403: push    ebx
0x8D7404: push    ebp
0x8D7405: mov     ebp, ds:0BA9DE4h
0x8D740B: push    esi
0x8D740C: push    edi
0x8D740D: mov     edi, large fs:2Ch
0x8D7414: mov     eax, [edi+ebp*4]
0x8D7417: mov     ecx, [eax+1A4h]
0x8D741D: cmp     ecx, [eax+1A8h]
0x8D7423: jnb     short loc_8D7450
0x8D7425: mov     esi, eax
0x8D7427: mov     ecx, [esi+1A4h]
0x8D742D: mov     dword ptr [ecx], offset aLtbroadphase; "LtBroadPhase"
0x8D7433: mov     dword ptr [ecx+0Ch], offset aInitmem; "InitMem"
0x8D743A: rdtsc
0x8D743C: mov     [esp+44h+var_2C], eax
0x8D7440: mov     edx, [esp+44h+var_2C]
0x8D7444: mov     [ecx+4], edx
0x8D7447: add     ecx, 10h
0x8D744A: mov     [esi+1A4h], ecx
0x8D7450: mov     ebp, [edi+ebp*4]
0x8D7453: mov     ecx, [ebp+19Ch]
0x8D7459: mov     ebx, [esp+44h+arg_8]
0x8D745D: mov     esi, [ebx+2A8h]
0x8D7463: xor     eax, eax
0x8D7465: cmp     ecx, eax
0x8D7467: mov     [esp+44h+var_20], eax
0x8D746B: mov     [esp+44h+var_1C], eax
0x8D746F: mov     [esp+44h+var_18], 80000000h
0x8D7477: mov     [esp+44h+var_30], ebp
0x8D747B: jnz     short loc_8D7483
0x8D747D: mov     ecx, ds:0BA7D9Ch
0x8D7483: mov     edx, [ecx+20h]
0x8D7486: lea     eax, ds:10h[esi*8]
0x8D748D: and     eax, 0FFFFFFF0h
0x8D7490: lea     edi, [edx+eax]
0x8D7493: cmp     edi, [ecx+2Ch]
0x8D7496: ja      short loc_8D749F
0x8D7498: mov     [ecx+20h], edi
0x8D749B: mov     eax, edx
0x8D749D: jmp     short loc_8D74A5
0x8D749F: mov     edx, [ecx]
0x8D74A1: push    eax
0x8D74A2: call    dword ptr [edx+0Ch]
0x8D74A5: mov     ecx, [ebp+19Ch]
0x8D74AB: or      esi, 80000000h
0x8D74B1: mov     [esp+44h+var_20], eax
0x8D74B5: mov     [esp+44h+var_14], eax
0x8D74B9: xor     eax, eax
0x8D74BB: cmp     ecx, eax
0x8D74BD: mov     [esp+44h+var_18], esi
0x8D74C1: mov     esi, [ebx+2A8h]
0x8D74C7: mov     [esp+44h+var_10], eax
0x8D74CB: mov     [esp+44h+var_C], eax
0x8D74CF: mov     [esp+44h+var_8], 80000000h
0x8D74D7: jnz     short loc_8D74DF
0x8D74D9: mov     ecx, ds:0BA7D9Ch
0x8D74DF: mov     edx, [ecx+20h]
0x8D74E2: mov     ebx, [ecx+2Ch]
0x8D74E5: lea     eax, ds:10h[esi*8]
0x8D74EC: and     eax, 0FFFFFFF0h
0x8D74EF: lea     edi, [edx+eax]
0x8D74F2: cmp     edi, ebx
0x8D74F4: ja      short loc_8D74FD
0x8D74F6: mov     [ecx+20h], edi
0x8D74F9: mov     eax, edx
0x8D74FB: jmp     short loc_8D7503
0x8D74FD: mov     edx, [ecx]
0x8D74FF: push    eax
0x8D7500: call    dword ptr [edx+0Ch]
0x8D7503: mov     ecx, [ebp+19Ch]
0x8D7509: or      esi, 80000000h
0x8D750F: test    ecx, ecx
0x8D7511: mov     [esp+44h+var_10], eax
0x8D7515: mov     [esp+44h+var_8], esi
0x8D7519: mov     [esp+44h+var_4], eax
0x8D751D: jnz     short loc_8D7525
0x8D751F: mov     ecx, ds:0BA7D9Ch
0x8D7525: mov     ebx, [esp+44h+arg_4]
0x8D7529: mov     edx, [ecx+20h]
0x8D752C: mov     edi, [ecx+2Ch]
0x8D752F: mov     eax, ebx
0x8D7531: shl     eax, 5
0x8D7534: add     eax, 10h
0x8D7537: and     eax, 0FFFFFFF0h
0x8D753A: lea     esi, [edx+eax]
0x8D753D: cmp     esi, edi
0x8D753F: ja      short loc_8D7548
0x8D7541: mov     [ecx+20h], esi
0x8D7544: mov     edi, edx
0x8D7546: jmp     short loc_8D7550
0x8D7548: mov     edx, [ecx]
0x8D754A: push    eax
0x8D754B: call    dword ptr [edx+0Ch]
0x8D754E: mov     edi, eax
0x8D7550: mov     ecx, [ebp+19Ch]
0x8D7556: test    ecx, ecx
0x8D7558: mov     [esp+44h+var_2C], edi
0x8D755C: jnz     short loc_8D7564
0x8D755E: mov     ecx, ds:0BA7D9Ch
0x8D7564: mov     edx, [ecx+20h]
0x8D7567: lea     eax, ds:10h[ebx*4]
0x8D756E: and     eax, 0FFFFFFF0h
0x8D7571: lea     esi, [edx+eax]
0x8D7574: cmp     esi, [ecx+2Ch]
0x8D7577: ja      short loc_8D7582
0x8D7579: mov     [ecx+20h], esi
0x8D757C: mov     [esp+44h+var_34], edx
0x8D7580: jmp     short loc_8D758C
0x8D7582: mov     edx, [ecx]
0x8D7584: push    eax
0x8D7585: call    dword ptr [edx+0Ch]
0x8D7588: mov     [esp+44h+var_34], eax
0x8D758C: mov     eax, [esp+44h+arg_8]
0x8D7590: mov     ecx, [eax+74h]
0x8D7593: mov     edx, large fs:2Ch
0x8D759A: fld     dword ptr [ecx+8]
0x8D759D: mov     eax, ds:0BA9DE4h
0x8D75A2: fmul    dword ptr ds:0A3D65Ch
0x8D75A8: mov     eax, [edx+eax*4]
0x8D75AB: mov     ecx, [eax+1A4h]
0x8D75B1: mov     edx, [eax+1A8h]
0x8D75B7: fstp    [esp+44h+var_24]
0x8D75BB: cmp     ecx, edx
0x8D75BD: jnb     short loc_8D75E1
0x8D75BF: mov     ecx, [ebp+1A4h]
0x8D75C5: mov     dword ptr [ecx], offset aStcalcaabbs; "StCalcAabbs"
0x8D75CB: rdtsc
0x8D75CD: mov     [esp+44h+var_28], eax
0x8D75D1: mov     edx, [esp+44h+var_28]
0x8D75D5: mov     [ecx+4], edx
0x8D75D8: add     ecx, 0Ch
0x8D75DB: mov     [ebp+1A4h], ecx
0x8D75E1: mov     esi, [esp+44h+arg_0]
0x8D75E5: lea     eax, [ebx-1]
0x8D75E8: test    eax, eax
0x8D75EA: jl      short loc_8D7619
0x8D75EC: mov     ebx, [esp+44h+var_34]
0x8D75F0: sub     ebx, esi
0x8D75F2: lea     ebp, [eax+1]
0x8D75F5: mov     eax, [esi]
0x8D75F7: add     eax, 14h
0x8D75FA: lea     ecx, [eax+14h]
0x8D75FD: mov     [ebx+esi], ecx
0x8D7600: mov     ecx, [eax]
0x8D7602: mov     eax, [eax+8]
0x8D7605: mov     edx, [ecx]
0x8D7607: push    edi
0x8D7608: push    [esp+48h+var_24]
0x8D760C: push    eax
0x8D760D: call    dword ptr [edx+0Ch]
0x8D7610: add     edi, 20h ; ' '
0x8D7613: add     esi, 4
0x8D7616: dec     ebp
0x8D7617: jnz     short loc_8D75F5
0x8D7619: mov     ecx, large fs:2Ch
0x8D7620: mov     edx, ds:0BA9DE4h
0x8D7626: mov     eax, [ecx+edx*4]
0x8D7629: mov     ecx, [eax+1A4h]
0x8D762F: cmp     ecx, [eax+1A8h]
0x8D7635: mov     esi, [esp+44h+var_30]
0x8D7639: jnb     short loc_8D765D
0x8D763B: mov     ecx, [esi+1A4h]
0x8D7641: mov     dword ptr [ecx], offset aSt3axissweep; "St3AxisSweep"
0x8D7647: rdtsc
0x8D7649: mov     [esp+44h+arg_0], eax
0x8D764D: mov     edx, [esp+44h+arg_0]
0x8D7651: mov     [ecx+4], edx
0x8D7654: add     ecx, 0Ch
0x8D7657: mov     [esi+1A4h], ecx
0x8D765D: mov     ebp, [esp+44h+arg_8]
0x8D7661: mov     ebx, [esp+44h+var_2C]
0x8D7665: mov     ecx, [ebp+64h]
0x8D7668: mov     edi, [esp+44h+var_34]
0x8D766C: mov     eax, [ecx]
0x8D766E: lea     edx, [esp+44h+var_10]
0x8D7672: push    edx
0x8D7673: lea     edx, [esp+48h+var_20]
0x8D7677: push    edx
0x8D7678: mov     edx, [esp+4Ch+arg_4]
0x8D767C: push    edx
0x8D767D: push    ebx
0x8D767E: push    edi
0x8D767F: call    dword ptr [eax+18h]
0x8D7682: mov     eax, [esi+19Ch]
0x8D7688: test    eax, eax
0x8D768A: jnz     short loc_8D7691
0x8D768C: mov     eax, ds:0BA7D9Ch
0x8D7691: cmp     edi, [eax+28h]
0x8D7694: mov     [eax+20h], edi
0x8D7697: jnz     short loc_8D76A1
0x8D7699: mov     edx, [eax]
0x8D769B: push    edi
0x8D769C: mov     ecx, eax
0x8D769E: call    dword ptr [edx+10h]
0x8D76A1: mov     ecx, [esi+19Ch]
0x8D76A7: test    ecx, ecx
0x8D76A9: jnz     short loc_8D76B1
0x8D76AB: mov     ecx, ds:0BA7D9Ch
0x8D76B1: cmp     ebx, [ecx+28h]
0x8D76B4: mov     [ecx+20h], ebx
0x8D76B7: jnz     short loc_8D76BF
0x8D76B9: mov     eax, [ecx]
0x8D76BB: push    ebx
0x8D76BC: call    dword ptr [eax+10h]
0x8D76BF: mov     ecx, [esp+44h+var_1C]
0x8D76C3: mov     edx, [esp+44h+var_C]
0x8D76C7: add     edx, ecx
0x8D76C9: test    edx, edx
0x8D76CB: jle     loc_8D782F
0x8D76D1: mov     ecx, ds:0BA9DE4h
0x8D76D7: mov     eax, large fs:2Ch
0x8D76DD: mov     eax, [eax+ecx*4]
0x8D76E0: mov     edx, [eax+1A4h]
0x8D76E6: cmp     edx, [eax+1A8h]
0x8D76EC: jnb     short loc_8D7710
0x8D76EE: mov     ecx, [esi+1A4h]
0x8D76F4: mov     dword ptr [ecx], offset aStremovedup; "StRemoveDup"
0x8D76FA: rdtsc
0x8D76FC: mov     [esp+44h+arg_8], eax
0x8D7700: mov     eax, [esp+44h+arg_8]
0x8D7704: mov     [ecx+4], eax
0x8D7707: add     ecx, 0Ch
0x8D770A: mov     [esi+1A4h], ecx
0x8D7710: lea     ecx, [esp+44h+var_10]
0x8D7714: push    ecx
0x8D7715: lea     edx, [esp+48h+var_20]
0x8D7719: push    edx
0x8D771A: call    sub_8D84F0
0x8D771F: mov     ebx, large fs:2Ch
0x8D7726: mov     eax, ds:0BA9DE4h
0x8D772B: mov     eax, [ebx+eax*4]
0x8D772E: mov     ecx, [eax+1A4h]
0x8D7734: mov     edx, [eax+1A8h]
0x8D773A: add     esp, 8
0x8D773D: cmp     ecx, edx
0x8D773F: jnb     short loc_8D7763
0x8D7741: mov     ecx, [esi+1A4h]
0x8D7747: mov     dword ptr [ecx], offset aStremoveagt; "StRemoveAgt"
0x8D774D: rdtsc
0x8D774F: mov     [esp+44h+arg_8], eax
0x8D7753: mov     edx, [esp+44h+arg_8]
0x8D7757: mov     [ecx+4], edx
0x8D775A: add     ecx, 0Ch
0x8D775D: mov     [esi+1A4h], ecx
0x8D7763: mov     eax, [esp+44h+var_C]
0x8D7767: mov     ecx, [esp+44h+var_10]
0x8D776B: push    eax
0x8D776C: push    ecx
0x8D776D: mov     ecx, [ebp+68h]
0x8D7770: call    sub_8D83E0
0x8D7775: mov     edx, ds:0BA7D98h
0x8D777B: mov     ecx, [edx+14h]
0x8D777E: mov     eax, [edx+28h]
0x8D7781: add     eax, ecx
0x8D7783: mov     ecx, [edx+8]
0x8D7786: cmp     ecx, eax
0x8D7788: jg      short loc_8D778E
0x8D778A: xor     ecx, ecx
0x8D778C: jmp     short loc_8D7790
0x8D778E: sub     ecx, eax
0x8D7790: mov     edi, [esp+44h+var_1C]
0x8D7794: lea     eax, [edi+edi*4]
0x8D7797: shl     eax, 7
0x8D779A: cmp     eax, ecx
0x8D779C: mov     ecx, ds:0BA9DE4h
0x8D77A2: mov     eax, [ebx+ecx*4]
0x8D77A5: jle     short loc_8D77DE
0x8D77A7: mov     dword ptr [edx+4], 1
0x8D77AE: mov     edx, [eax+1A4h]
0x8D77B4: cmp     edx, [eax+1A8h]
0x8D77BA: jnb     loc_8D786E
0x8D77C0: mov     ecx, [esi+1A4h]
0x8D77C6: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D77CC: rdtsc
0x8D77CE: mov     [esp+44h+arg_8], eax
0x8D77D2: mov     eax, [esp+44h+arg_8]
0x8D77D6: mov     [ecx+4], eax
0x8D77D9: jmp     loc_8D7865
0x8D77DE: mov     edx, [eax+1A4h]
0x8D77E4: cmp     edx, [eax+1A8h]
0x8D77EA: jnb     short loc_8D7812
0x8D77EC: mov     ecx, [esi+1A4h]
0x8D77F2: mov     dword ptr [ecx], offset aStaddagt; "StAddAgt"
0x8D77F8: rdtsc
0x8D77FA: mov     [esp+44h+arg_8], eax
0x8D77FE: mov     eax, [esp+44h+arg_8]
0x8D7802: mov     [ecx+4], eax
0x8D7805: mov     edi, [esp+44h+var_1C]
0x8D7809: add     ecx, 0Ch
0x8D780C: mov     [esi+1A4h], ecx
0x8D7812: mov     eax, [ebp+78h]
0x8D7815: test    eax, eax
0x8D7817: jz      short loc_8D781E
0x8D7819: add     eax, 8
0x8D781C: jmp     short loc_8D7820
0x8D781E: xor     eax, eax
0x8D7820: mov     ecx, [esp+44h+var_20]
0x8D7824: push    eax
0x8D7825: push    edi
0x8D7826: push    ecx
0x8D7827: mov     ecx, [ebp+68h]
0x8D782A: call    sub_8D8370
0x8D782F: mov     edx, large fs:2Ch
0x8D7836: mov     eax, ds:0BA9DE4h
0x8D783B: mov     eax, [edx+eax*4]
0x8D783E: mov     ecx, [eax+1A4h]
0x8D7844: cmp     ecx, [eax+1A8h]
0x8D784A: jnb     short loc_8D786E
0x8D784C: mov     ecx, [esi+1A4h]
0x8D7852: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D7858: rdtsc
0x8D785A: mov     [esp+44h+arg_8], eax
0x8D785E: mov     edx, [esp+44h+arg_8]
0x8D7862: mov     [ecx+4], edx
0x8D7865: add     ecx, 0Ch
0x8D7868: mov     [esi+1A4h], ecx
0x8D786E: mov     ecx, [esi+19Ch]
0x8D7874: test    ecx, ecx
0x8D7876: mov     eax, [esp+44h+var_4]
0x8D787A: jnz     short loc_8D7882
0x8D787C: mov     ecx, ds:0BA7D9Ch
0x8D7882: cmp     eax, [ecx+28h]
0x8D7885: mov     [ecx+20h], eax
0x8D7888: jnz     short loc_8D7890
0x8D788A: mov     edx, [ecx]
0x8D788C: push    eax
0x8D788D: call    dword ptr [edx+10h]
0x8D7890: mov     eax, [esp+44h+var_8]
0x8D7894: test    eax, eax
0x8D7896: js      short loc_8D78BD
0x8D7898: mov     ecx, [esi+19Ch]
0x8D789E: test    ecx, ecx
0x8D78A0: jnz     short loc_8D78A8
0x8D78A2: mov     ecx, ds:0BA7D9Ch
0x8D78A8: and     eax, 3FFFFFFFh
0x8D78AD: shl     eax, 3
0x8D78B0: push    14h
0x8D78B2: push    eax
0x8D78B3: mov     eax, [esp+4Ch+var_10]
0x8D78B7: push    eax
0x8D78B8: call    sub_8A75D0
0x8D78BD: mov     ecx, [esi+19Ch]
0x8D78C3: test    ecx, ecx
0x8D78C5: mov     eax, [esp+44h+var_14]
0x8D78C9: jnz     short loc_8D78D1
0x8D78CB: mov     ecx, ds:0BA7D9Ch
0x8D78D1: cmp     eax, [ecx+28h]
0x8D78D4: mov     [ecx+20h], eax
0x8D78D7: jnz     short loc_8D78DF
0x8D78D9: mov     edx, [ecx]
0x8D78DB: push    eax
0x8D78DC: call    dword ptr [edx+10h]
0x8D78DF: mov     eax, [esp+44h+var_18]
0x8D78E3: test    eax, eax
0x8D78E5: js      short loc_8D790E
0x8D78E7: mov     esi, [esi+19Ch]
0x8D78ED: test    esi, esi
0x8D78EF: mov     ecx, esi
0x8D78F1: jnz     short loc_8D78F9
0x8D78F3: mov     ecx, ds:0BA7D9Ch
0x8D78F9: and     eax, 3FFFFFFFh
0x8D78FE: shl     eax, 3
0x8D7901: push    14h
0x8D7903: push    eax
0x8D7904: mov     eax, [esp+4Ch+var_20]
0x8D7908: push    eax
0x8D7909: call    sub_8A75D0
0x8D790E: pop     edi
0x8D790F: pop     esi
0x8D7910: pop     ebp
0x8D7911: pop     ebx
0x8D7912: add     esp, 34h
0x8D7915: retn
