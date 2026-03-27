0x69C250: fld     [esp+arg_0]
0x69C254: sub     esp, 38h
0x69C257: fcomp   qword ptr ds:0A2FCC8h
0x69C25D: push    ebx
0x69C25E: push    ebp
0x69C25F: push    esi
0x69C260: push    edi
0x69C261: fnstsw  ax
0x69C263: mov     esi, ecx
0x69C265: test    ah, 1
0x69C268: jnz     short loc_69C276
0x69C26A: mov     eax, [esi]
0x69C26C: mov     edx, [eax+8Ch]
0x69C272: push    1
0x69C274: call    edx
0x69C276: fldz
0x69C278: fcomp   [esp+48h+arg_0]
0x69C27C: fnstsw  ax
0x69C27E: test    ah, 41h
0x69C281: jp      loc_69C5EE
0x69C287: cmp     dword ptr [esi+88h], 0
0x69C28E: jnz     loc_69C47E
0x69C294: mov     eax, [esi+8]
0x69C297: shr     eax, 5
0x69C29A: test    al, 1
0x69C29C: jnz     loc_69C5EE
0x69C2A2: mov     ecx, esi; this
0x69C2A4: call    MobileObject_GetCharProxy
0x69C2A9: fld     dword ptr [eax+318h]
0x69C2AF: mov     edx, [esi]
0x69C2B1: fstp    [esp+48h+var_38]
0x69C2B5: fld     [esp+48h+var_38]
0x69C2B9: mov     eax, [edx+174h]
0x69C2BF: fmul    qword ptr ds:0A372E0h
0x69C2C5: mov     ecx, esi
0x69C2C7: fstp    [esp+48h+var_38]
0x69C2CB: fld     [esp+48h+var_38]
0x69C2CF: fstp    [esp+48h+var_38]
0x69C2D3: call    eax
0x69C2D5: fld     dword ptr [eax+8]
0x69C2D8: fld     [esp+3Ch+var_2C]
0x69C2DC: fcompp
0x69C2DE: fnstsw  ax
0x69C2E0: test    ah, 1
0x69C2E3: jnz     short loc_69C316
0x69C2E5: mov     edi, [esi]
0x69C2E7: mov     edx, [edi+174h]
0x69C2ED: mov     ecx, esi
0x69C2EF: call    edx
0x69C2F1: mov     edx, [eax]
0x69C2F3: push    1
0x69C2F5: push    0
0x69C2F7: push    0
0x69C2F9: sub     esp, 0Ch
0x69C2FC: mov     ecx, esp
0x69C2FE: mov     [ecx], edx
0x69C300: mov     edx, [eax+4]
0x69C303: mov     eax, [eax+8]
0x69C306: mov     [ecx+4], edx
0x69C309: mov     edx, [edi+208h]
0x69C30F: mov     [ecx+8], eax
0x69C312: mov     ecx, esi
0x69C314: call    edx
0x69C316: fldz
0x69C318: mov     ecx, esi; this
0x69C31A: fst     [esp+3Ch+var_C]
0x69C31E: fld     dword ptr [esi+5Ch]
0x69C321: fld     [esp+3Ch+arg_C]
0x69C325: fld     st
0x69C327: fmulp   st(2), st
0x69C329: fxch    st(1)
0x69C32B: fstp    [esp+3Ch+var_8]
0x69C32F: fxch    st(1)
0x69C331: fstp    [esp+3Ch+var_4]
0x69C335: fmul    dword ptr ds:0B37F10h
0x69C33B: fld1
0x69C33D: fsubrp  st(1), st
0x69C33F: fstp    [esp+3Ch+var_2C]
0x69C343: call    MobileObject_GetCharProxy
0x69C348: fld     [esp+3Ch+var_2C]
0x69C34C: mov     ecx, esi
0x69C34E: fstp    dword ptr [eax+324h]
0x69C354: mov     eax, [esi]
0x69C356: mov     edx, [eax+174h]
0x69C35C: call    edx
0x69C35E: fld     [esp+3Ch+arg_C]
0x69C362: mov     ecx, [eax]
0x69C364: mov     edx, [eax+4]
0x69C367: mov     eax, [eax+8]
0x69C36A: mov     [esp+3Ch+var_10], eax
0x69C36E: push    0Fh
0x69C370: lea     eax, [esp+40h+var_C]
0x69C374: mov     [esp+40h+var_14], edx
0x69C378: mov     edx, [esi]
0x69C37A: mov     edx, [edx+1B4h]
0x69C380: push    eax
0x69C381: push    ecx
0x69C382: mov     [esp+48h+var_18], ecx
0x69C386: fstp    [esp+48h+var_48]
0x69C389: mov     ecx, esi
0x69C38B: call    edx
0x69C38D: mov     eax, [esi]
0x69C38F: mov     edx, [eax+210h]
0x69C395: mov     ecx, esi
0x69C397: call    edx
0x69C399: test    al, al
0x69C39B: jz      loc_69C47E
0x69C3A1: mov     eax, [esi]
0x69C3A3: mov     edx, [eax+174h]
0x69C3A9: mov     ecx, esi
0x69C3AB: call    edx
0x69C3AD: mov     edi, [eax]
0x69C3AF: mov     ebx, [eax+4]
0x69C3B2: mov     ebp, [eax+8]
0x69C3B5: mov     eax, [esi]
0x69C3B7: mov     edx, [eax+154h]
0x69C3BD: mov     ecx, esi
0x69C3BF: mov     [esp+48h+var_30], edi
0x69C3C3: mov     [esp+48h+var_2C], ebx
0x69C3C7: mov     [esp+48h+var_28], ebp
0x69C3CB: call    edx
0x69C3CD: fld     [esp+48h+var_30]
0x69C3D1: fsub    [esp+48h+var_24]
0x69C3D5: add     eax, 54h ; 'T'
0x69C3D8: mov     [eax], edi
0x69C3DA: mov     [eax+4], ebx
0x69C3DD: fstp    [esp+48h+var_C]
0x69C3E1: lea     ecx, [esp+48h+var_C]
0x69C3E5: fld     [esp+48h+var_2C]
0x69C3E9: mov     [eax+8], ebp
0x69C3EC: fsub    [esp+48h+var_20]
0x69C3F0: fstp    [esp+48h+var_8]
0x69C3F4: fld     [esp+48h+var_28]
0x69C3F8: fsub    [esp+48h+var_1C]
0x69C3FC: fstp    [esp+48h+var_4]
0x69C400: call    sub_404C90
0x69C405: fstp    [esp+48h+var_38]
0x69C409: fld     dword ptr [esi+60h]
0x69C40C: fadd    [esp+48h+var_38]
0x69C410: fstp    [esp+48h+var_34]
0x69C414: fld     [esp+48h+var_34]
0x69C418: fst     dword ptr [esi+60h]
0x69C41B: fld     dword ptr ds:0B37E88h
0x69C421: fcompp
0x69C423: fnstsw  ax
0x69C425: test    ah, 5
0x69C428: jp      short loc_69C438
0x69C42A: mov     eax, [esi]
0x69C42C: mov     edx, [eax+8Ch]
0x69C432: push    1
0x69C434: mov     ecx, esi
0x69C436: call    edx
0x69C438: fld     [esp+48h+var_38]
0x69C43C: fdiv    [esp+48h+arg_0]
0x69C440: fcomp   qword ptr ds:0A3F3F0h
0x69C446: fnstsw  ax
0x69C448: test    ah, 5
0x69C44B: jp      short loc_69C47E
0x69C44D: mov     ecx, ds:0B3F9A8h
0x69C453: mov     edx, [esi]
0x69C455: mov     edx, [edx+208h]
0x69C45B: push    0
0x69C45D: push    0
0x69C45F: push    0
0x69C461: sub     esp, 0Ch
0x69C464: mov     eax, esp
0x69C466: mov     [eax], ecx
0x69C468: mov     ecx, ds:0B3F9ACh
0x69C46E: mov     [eax+4], ecx
0x69C471: mov     ecx, ds:0B3F9B0h
0x69C477: mov     [eax+8], ecx
0x69C47A: mov     ecx, esi
0x69C47C: call    edx
0x69C47E: fld     dword ptr [esi+7Ch]
0x69C481: fstp    [esp+48h+var_34]
0x69C485: fld     dword ptr [esi+7Ch]
0x69C488: fld     [esp+48h+arg_0]
0x69C48C: fld     st
0x69C48E: faddp   st(2), st
0x69C490: fxch    st(1)
0x69C492: fstp    [esp+48h+arg_0]
0x69C496: fld     [esp+48h+arg_0]
0x69C49A: fst     dword ptr [esi+7Ch]
0x69C49D: fld     dword ptr [esi+80h]
0x69C4A3: fcompp
0x69C4A5: fnstsw  ax
0x69C4A7: test    ah, 5
0x69C4AA: jp      short loc_69C4C6
0x69C4AC: mov     eax, [esi]
0x69C4AE: fstp    st
0x69C4B0: mov     edx, [eax+8Ch]
0x69C4B6: push    1
0x69C4B8: mov     ecx, esi
0x69C4BA: call    edx
0x69C4BC: pop     edi
0x69C4BD: pop     esi
0x69C4BE: pop     ebp
0x69C4BF: pop     ebx
0x69C4C0: add     esp, 38h
0x69C4C3: retn    4
0x69C4C6: mov     ecx, [esi+98h]
0x69C4CC: test    ecx, ecx
0x69C4CE: jz      short loc_69C4DB
0x69C4D0: push    ecx
0x69C4D1: fstp    dword ptr [esp+4Ch+var_50+4]; float
0x69C4D4: call    MagicCaster_CastingVFX_UpdateTimes?
0x69C4D9: jmp     short loc_69C4DD
0x69C4DB: fstp    st
0x69C4DD: mov     ecx, [esi+90h]
0x69C4E3: test    ecx, ecx
0x69C4E5: jz      short loc_69C529
0x69C4E7: fld     dword ptr [esi+80h]
0x69C4ED: fmul    qword ptr ds:0A2FAA0h
0x69C4F3: fstp    [esp+48h+arg_0]
0x69C4F7: fld     dword ptr [esi+7Ch]
0x69C4FA: fld     [esp+48h+arg_0]
0x69C4FE: fcom    st(1)
0x69C500: fnstsw  ax
0x69C502: fstp    st(1)
0x69C504: test    ah, 5
0x69C507: jp      short loc_69C527
0x69C509: fld     dword ptr [esi+7Ch]
0x69C50C: push    ecx
0x69C50D: fsub    st, st(1)
0x69C50F: fdivrp  st(1), st
0x69C511: fld1
0x69C513: fsubrp  st(1), st
0x69C515: fstp    [esp+4Ch+arg_0]
0x69C519: fld     [esp+4Ch+arg_0]
0x69C51D: fstp    dword ptr [esp+4Ch+var_50+4]; float
0x69C520: call    sub_6B7280
0x69C525: jmp     short loc_69C529
0x69C527: fstp    st
0x69C529: fld     [esp+48h+var_34]
0x69C52D: sub     esp, 8
0x69C530: fdiv    dword ptr ds:0B37F18h
0x69C536: fstp    [esp+50h+arg_0]
0x69C53A: fld     [esp+50h+arg_0]
0x69C53E: fstp    [esp+50h+var_50]; double
0x69C541: call    _floor
0x69C546: fstp    [esp+50h+arg_0]
0x69C54A: fld     [esp+50h+arg_0]
0x69C54E: call    Double_To_SInt32
0x69C553: fld     dword ptr [esi+7Ch]
0x69C556: fdiv    dword ptr ds:0B37F18h
0x69C55C: mov     edi, eax
0x69C55E: fstp    [esp+50h+arg_0]
0x69C562: fld     [esp+50h+arg_0]
0x69C566: fstp    [esp+50h+var_50]; double
0x69C569: call    _floor
0x69C56E: fstp    [esp+50h+arg_0]
0x69C572: fld     [esp+50h+arg_0]
0x69C576: add     esp, 8
0x69C579: call    Double_To_SInt32
0x69C57E: cmp     edi, eax
0x69C580: jz      short loc_69C5EE
0x69C582: fld     dword ptr [esi+80h]
0x69C588: fsub    dword ptr [esi+7Ch]
0x69C58B: fdiv    dword ptr [esi+80h]
0x69C591: fstp    [esp+48h+arg_0]
0x69C595: fldz
0x69C597: fcomp   [esp+48h+arg_0]
0x69C59B: fnstsw  ax
0x69C59D: test    ah, 5
0x69C5A0: jp      short loc_69C5EE
0x69C5A2: mov     eax, [esi]
0x69C5A4: mov     edx, [eax+174h]
0x69C5AA: mov     edi, [esi+6Ch]
0x69C5AD: mov     ebx, [esi+68h]
0x69C5B0: mov     ecx, esi
0x69C5B2: call    edx
0x69C5B4: fld1
0x69C5B6: mov     edx, [eax]
0x69C5B8: sub     esp, 8
0x69C5BB: fstp    dword ptr [esp+50h+var_50+4]; float
0x69C5BF: fld     [esp+50h+arg_0]
0x69C5C3: fstp    dword ptr [esp+50h+var_50]; float
0x69C5C6: push    0; int
0x69C5C8: push    0; int
0x69C5CA: push    esi; int
0x69C5CB: sub     esp, 0Ch
0x69C5CE: mov     ecx, esp
0x69C5D0: mov     [ecx], edx
0x69C5D2: mov     edx, [eax+4]
0x69C5D5: mov     eax, [eax+8]
0x69C5D8: mov     [ecx+4], edx
0x69C5DB: mov     [ecx+8], eax
0x69C5DE: mov     ecx, esi; this
0x69C5E0: call    TESObjectREFR_GetParentCell
0x69C5E5: push    eax; int
0x69C5E6: push    edi; int
0x69C5E7: mov     ecx, ebx
0x69C5E9: call    MagicCaster_TargetEffectHit??
0x69C5EE: pop     edi
0x69C5EF: pop     esi
0x69C5F0: pop     ebp
0x69C5F1: pop     ebx
0x69C5F2: add     esp, 38h
0x69C5F5: retn    4
