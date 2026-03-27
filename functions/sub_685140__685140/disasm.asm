0x685140: sub     esp, 38h
0x685143: push    ebx
0x685144: push    ebp
0x685145: push    esi
0x685146: push    edi
0x685147: mov     edi, [esp+48h+arg_0]
0x68514B: test    edi, edi
0x68514D: mov     ebp, ecx
0x68514F: jz      loc_685523
0x685155: fldz
0x685157: fcomp   [esp+48h+arg_4]
0x68515B: fnstsw  ax
0x68515D: test    ah, 1
0x685160: jz      loc_685523
0x685166: mov     ecx, edi
0x685168: call    IsWeaponReady
0x68516D: test    al, al
0x68516F: jz      loc_685523
0x685175: mov     eax, [edi]
0x685177: mov     edx, [eax+380h]
0x68517D: mov     ecx, edi
0x68517F: call    edx
0x685181: test    eax, eax
0x685183: jz      short loc_6851A0
0x685185: mov     eax, [edi]
0x685187: mov     edx, [eax+380h]
0x68518D: mov     ecx, edi
0x68518F: call    edx
0x685191: mov     ecx, eax
0x685193: call    IsWeaponReady
0x685198: test    al, al
0x68519A: jz      loc_685523
0x6851A0: mov     ecx, edi; this
0x6851A2: call    TESObjectREFR_GetParentCell
0x6851A7: test    eax, eax
0x6851A9: jnz     short loc_6851C5
0x6851AB: fld     [esp+48h+arg_4]
0x6851AF: push    ecx
0x6851B0: fstp    [esp+4Ch+a4]; float
0x6851B3: push    edi; Concurrency::details::SchedulerBase *
0x6851B4: mov     ecx, ebp
0x6851B6: call    sub_68A300
0x6851BB: pop     edi
0x6851BC: pop     esi
0x6851BD: pop     ebp
0x6851BE: pop     ebx
0x6851BF: add     esp, 38h
0x6851C2: retn    8
0x6851C5: mov     ecx, edi
0x6851C7: call    sub_5E65B0
0x6851CC: fstp    [esp+48h+var_34]
0x6851D0: mov     eax, [edi]
0x6851D2: fld     [esp+48h+arg_4]
0x6851D6: mov     edx, [eax+174h]
0x6851DC: fstp    [esp+48h+arg_4]
0x6851E0: mov     ecx, edi
0x6851E2: call    edx
0x6851E4: mov     ecx, [eax]
0x6851E6: mov     edx, [eax+4]
0x6851E9: mov     eax, [eax+8]
0x6851EC: mov     [esp+48h+a2], ecx
0x6851F0: lea     ebx, [ebp+14h]
0x6851F3: mov     ecx, ebx
0x6851F5: mov     [esp+48h+var_2C], edx
0x6851F9: mov     [esp+48h+var_28], eax
0x6851FD: call    sub_42B410
0x685202: mov     esi, eax
0x685204: test    esi, esi
0x685206: jz      loc_685471
0x68520C: mov     ecx, esi
0x68520E: call    sub_6899C0
0x685213: fld     [esp+48h+a2]
0x685217: fsub    dword ptr [eax]
0x685219: fstp    [esp+48h+var_24]
0x68521D: fld     [esp+48h+var_2C]
0x685221: fsub    dword ptr [eax+4]
0x685224: fstp    [esp+48h+var_20]
0x685228: fld     [esp+48h+var_28]
0x68522C: fsub    dword ptr [eax+8]
0x68522F: fstp    [esp+48h+var_1C]
0x685233: fld     [esp+48h+var_20]
0x685237: fld     [esp+48h+var_24]
0x68523B: fld     [esp+48h+var_1C]
0x68523F: fld     st(1)
0x685241: fmulp   st(2), st
0x685243: fld     st(2)
0x685245: fmulp   st(3), st
0x685247: fxch    st(1)
0x685249: faddp   st(2), st
0x68524B: fmul    st, st
0x68524D: faddp   st(1), st
0x68524F: fstp    [esp+48h+arg_0]
0x685253: fld     [esp+48h+arg_0]
0x685257: call    __CIsqrt
0x68525C: fstp    [esp+48h+arg_0]
0x685260: fld     [esp+48h+arg_0]
0x685264: mov     ecx, esi
0x685266: fstp    [esp+48h+var_38]
0x68526A: fld     [esp+48h+var_38]
0x68526E: fdiv    [esp+48h+var_34]
0x685272: fstp    [esp+48h+arg_0]
0x685276: fld     [esp+48h+arg_4]
0x68527A: fld     [esp+48h+arg_0]
0x68527E: fcomp   st(1)
0x685280: fnstsw  ax
0x685282: test    ah, 5
0x685285: jp      loc_68537C
0x68528B: fstp    st
0x68528D: call    sub_6899C0
0x685292: mov     ecx, [eax]
0x685294: mov     edx, [eax+4]
0x685297: mov     eax, [eax+8]
0x68529A: mov     [esp+48h+a2], ecx
0x68529E: push    esi
0x68529F: mov     ecx, ebx
0x6852A1: mov     [esp+4Ch+var_2C], edx
0x6852A5: mov     [esp+4Ch+var_28], eax
0x6852A9: call    sub_68C170
0x6852AE: mov     ecx, ebx
0x6852B0: call    sub_42B410
0x6852B5: fld     [esp+48h+arg_4]
0x6852B9: fsub    [esp+48h+arg_0]
0x6852BD: mov     esi, eax
0x6852BF: test    esi, esi
0x6852C1: fstp    [esp+48h+arg_4]
0x6852C5: jnz     loc_685366
0x6852CB: push    edi
0x6852CC: mov     ecx, ebp
0x6852CE: call    sub_68B4F0
0x6852D3: mov     ecx, ebx
0x6852D5: call    sub_42B410
0x6852DA: mov     esi, eax
0x6852DC: test    esi, esi
0x6852DE: jnz     loc_685366
0x6852E4: mov     ecx, ebp
0x6852E6: call    sub_68A140
0x6852EB: test    al, al
0x6852ED: jz      short loc_685366
0x6852EF: mov     ecx, ebp
0x6852F1: call    sub_6899D0
0x6852F6: fstp    [esp+48h+arg_0]
0x6852FA: fldz
0x6852FC: fld     [esp+48h+arg_0]
0x685300: fcom    st(1)
0x685302: fnstsw  ax
0x685304: fstp    st(1)
0x685306: test    ah, 41h
0x685309: jnz     short loc_685364
0x68530B: fld     [esp+48h+var_38]
0x68530F: fcom    st(1)
0x685311: fnstsw  ax
0x685313: fstp    st(1)
0x685315: test    ah, 5
0x685318: jp      short loc_685320
0x68531A: fstp    [esp+48h+arg_0]
0x68531E: jmp     short loc_685322
0x685320: fstp    st
0x685322: lea     ecx, [esp+48h+var_24]
0x685326: call    sub_43F350
0x68532B: fstp    st
0x68532D: fld     [esp+48h+arg_0]
0x685331: push    ecx
0x685332: lea     ecx, [esp+4Ch+var_24]
0x685336: fstp    [esp+4Ch+a4]; float
0x685339: call    NiPoint3__MutliplyByValue
0x68533E: fld     [esp+48h+var_24]
0x685342: fadd    [esp+48h+a2]
0x685346: fstp    [esp+48h+a2]
0x68534A: fld     [esp+48h+var_20]
0x68534E: fadd    [esp+48h+var_2C]
0x685352: fstp    [esp+48h+var_2C]
0x685356: fld     [esp+48h+var_1C]
0x68535A: fadd    [esp+48h+var_28]
0x68535E: fstp    [esp+48h+var_28]
0x685362: jmp     short loc_685366
0x685364: fstp    st
0x685366: fldz
0x685368: fcomp   [esp+48h+arg_4]
0x68536C: fnstsw  ax
0x68536E: test    ah, 44h
0x685371: jp      loc_685204
0x685377: jmp     loc_685471
0x68537C: fstp    [esp+48h+arg_0]
0x685380: fldz
0x685382: fstp    [esp+48h+arg_4]
0x685386: call    sub_6899C0
0x68538B: fld     dword ptr [eax]
0x68538D: fsub    [esp+48h+a2]
0x685391: lea     ecx, [esp+48h+var_24]
0x685395: fstp    [esp+48h+var_24]
0x685399: fld     dword ptr [eax+4]
0x68539C: fsub    [esp+48h+var_2C]
0x6853A0: fstp    [esp+48h+var_20]
0x6853A4: fld     dword ptr [eax+8]
0x6853A7: fsub    [esp+48h+var_28]
0x6853AB: fstp    [esp+48h+var_1C]
0x6853AF: call    sub_43F350
0x6853B4: fstp    st
0x6853B6: fld     [esp+48h+var_24]
0x6853BA: fld     [esp+48h+var_34]
0x6853BE: fld     st
0x6853C0: fmulp   st(2), st
0x6853C2: fxch    st(1)
0x6853C4: fstp    [esp+48h+var_18]
0x6853C8: fld     [esp+48h+var_20]
0x6853CC: fmul    st, st(1)
0x6853CE: fstp    [esp+48h+var_14]
0x6853D2: fmul    [esp+48h+var_1C]
0x6853D6: fstp    [esp+48h+var_10]
0x6853DA: fld     [esp+48h+var_18]
0x6853DE: fld     [esp+48h+arg_0]
0x6853E2: fld     st
0x6853E4: fmulp   st(2), st
0x6853E6: fxch    st(1)
0x6853E8: fstp    [esp+48h+var_C]
0x6853EC: fld     [esp+48h+var_14]
0x6853F0: fmul    st, st(1)
0x6853F2: fstp    [esp+48h+var_8]
0x6853F6: fmul    [esp+48h+var_10]
0x6853FA: fstp    [esp+48h+var_4]
0x6853FE: fld     [esp+48h+var_C]
0x685402: fadd    [esp+48h+a2]
0x685406: fstp    [esp+48h+var_18]
0x68540A: mov     ecx, [esp+48h+var_18]
0x68540E: fld     [esp+48h+var_8]
0x685412: mov     [esp+48h+a2], ecx
0x685416: fadd    [esp+48h+var_2C]
0x68541A: fstp    [esp+48h+var_14]
0x68541E: mov     edx, [esp+48h+var_14]
0x685422: fld     [esp+48h+var_4]
0x685426: mov     [esp+48h+var_2C], edx
0x68542A: fadd    [esp+48h+var_28]
0x68542E: fstp    [esp+48h+var_10]
0x685432: mov     eax, [esp+48h+var_10]
0x685436: fld     dword ptr [edi+20h]
0x685439: mov     [esp+48h+var_28], eax
0x68543D: fcomp   qword ptr ds:0A3A5B0h
0x685443: fnstsw  ax
0x685445: test    ah, 44h
0x685448: jnp     short loc_685463
0x68544A: mov     ebx, [edi]
0x68544C: lea     ecx, [esp+48h+var_24]
0x685450: push    ecx
0x685451: call    sub_683CB0
0x685456: fstp    [esp+4Ch+a4]; a4
0x685459: mov     edx, [ebx+1E8h]
0x68545F: mov     ecx, edi
0x685461: call    edx
0x685463: fld     dword ptr ds:0A32048h
0x685469: fstp    dword ptr [ebp+1Ch]
0x68546C: fldz
0x68546E: fstp    dword ptr [ebp+24h]
0x685471: mov     ecx, [esp+48h+a2]
0x685475: mov     edx, [esp+48h+var_2C]
0x685479: sub     esp, 0Ch
0x68547C: mov     eax, esp
0x68547E: mov     [eax], ecx
0x685480: mov     ecx, [esp+54h+var_28]
0x685484: mov     [eax+4], edx
0x685487: mov     [eax+8], ecx
0x68548A: mov     ecx, edi; this
0x68548C: call    TESObjectREFR_SetPosition
0x685491: mov     edx, [edi]
0x685493: mov     eax, [edx+380h]
0x685499: mov     ecx, edi
0x68549B: call    eax
0x68549D: mov     ebx, eax
0x68549F: test    ebx, ebx
0x6854A1: jz      short loc_6854DA
0x6854A3: mov     ecx, [esp+48h+a2]
0x6854A7: mov     edx, [esp+48h+var_2C]
0x6854AB: sub     esp, 0Ch
0x6854AE: mov     eax, esp
0x6854B0: mov     [eax], ecx
0x6854B2: mov     ecx, [esp+54h+var_28]
0x6854B6: mov     [eax+4], edx
0x6854B9: mov     [eax+8], ecx
0x6854BC: mov     ecx, ebx; this
0x6854BE: call    TESObjectREFR_SetPosition
0x6854C3: mov     ecx, ebx; this
0x6854C5: call    MobileObject_GetCharProxy
0x6854CA: test    eax, eax
0x6854CC: jz      short loc_6854DA
0x6854CE: lea     edx, [esp+48h+a2]
0x6854D2: push    edx; a2
0x6854D3: mov     ecx, eax; this
0x6854D5: call    sub_452A10
0x6854DA: mov     ecx, edi; this
0x6854DC: call    MobileObject_GetCharProxy
0x6854E1: test    eax, eax
0x6854E3: jz      short loc_6854F1
0x6854E5: lea     ecx, [esp+48h+a2]
0x6854E9: push    ecx; a2
0x6854EA: mov     ecx, eax; this
0x6854EC: call    sub_452A10
0x6854F1: test    esi, esi
0x6854F3: jnz     short loc_685515
0x6854F5: mov     edx, [edi]
0x6854F7: mov     eax, [edx+180h]
0x6854FD: push    1
0x6854FF: mov     ecx, edi
0x685501: call    eax
0x685503: test    byte ptr [ebp+2Ch], 80h
0x685507: jz      short loc_685515
0x685509: mov     edx, [ebp+0]
0x68550C: mov     eax, [edx+30h]
0x68550F: push    1
0x685511: mov     ecx, ebp
0x685513: call    eax
0x685515: fld     [esp+48h+arg_4]
0x685519: pop     edi
0x68551A: pop     esi
0x68551B: pop     ebp
0x68551C: pop     ebx
0x68551D: add     esp, 38h
0x685520: retn    8
0x685523: fldz
0x685525: pop     edi
0x685526: pop     esi
0x685527: pop     ebp
0x685528: pop     ebx
0x685529: add     esp, 38h
0x68552C: retn    8
