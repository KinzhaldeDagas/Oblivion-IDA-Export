0x54B010: sub     esp, 138h
0x54B016: push    esi
0x54B017: mov     esi, ecx
0x54B019: cmp     byte ptr [esi+1DAh], 0
0x54B020: jz      short loc_54B02E
0x54B022: xor     al, al
0x54B024: pop     esi
0x54B025: add     esp, 138h
0x54B02B: retn    0Ch
0x54B02E: cmp     byte ptr [esi+1D5h], 0
0x54B035: fldz
0x54B037: fst     [esp+13Ch+var_128]
0x54B03B: push    edi
0x54B03C: fstp    [esp+140h+var_124]
0x54B040: jz      loc_54B13E
0x54B046: fld     dword ptr [esi+174h]
0x54B04C: lea     edi, [esi+170h]
0x54B052: fld     dword ptr [edi]
0x54B054: fld     dword ptr [edi+8]
0x54B057: fld     st(1)
0x54B059: fmulp   st(2), st
0x54B05B: fld     st(2)
0x54B05D: fmulp   st(3), st
0x54B05F: fxch    st(1)
0x54B061: faddp   st(2), st
0x54B063: fmul    st, st
0x54B065: faddp   st(1), st
0x54B067: fstp    [esp+140h+var_138]
0x54B06B: fld     [esp+140h+var_138]
0x54B06F: call    __CIsqrt
0x54B074: fstp    [esp+140h+var_138]
0x54B078: fld     [esp+140h+var_138]
0x54B07C: fldz
0x54B07E: fcom    st(1)
0x54B080: fnstsw  ax
0x54B082: fstp    st(1)
0x54B084: test    ah, 5
0x54B087: jp      loc_54B13C
0x54B08D: fld     dword ptr ds:0A641FCh
0x54B093: sub     esp, 0Ch
0x54B096: fstp    [esp+14Ch+var_144]; float
0x54B09A: lea     ecx, [esp+14Ch+var_120]
0x54B09E: fst     [esp+14Ch+var_148]; float
0x54B0A2: fstp    [esp+14Ch+var_14C]; float
0x54B0A5: call    sub_711580
0x54B0AA: push    edi
0x54B0AB: lea     eax, [esp+144h+var_134]
0x54B0AF: push    eax
0x54B0B0: lea     ecx, [esp+148h+var_120]
0x54B0B4: push    ecx
0x54B0B5: mov     ecx, [esp+14Ch+arg_8]
0x54B0BC: lea     edx, [esp+14Ch+var_D8]
0x54B0C0: push    edx
0x54B0C1: lea     eax, [esp+150h+var_FC]
0x54B0C5: push    eax
0x54B0C6: add     ecx, 64h ; 'd'
0x54B0C9: call    sub_7103C0
0x54B0CE: mov     ecx, eax
0x54B0D0: call    NiMAtrix33_Multiply
0x54B0D5: mov     ecx, eax
0x54B0D7: call    sub_7101F0
0x54B0DC: fld     dword ptr [esp+140h+var_134]
0x54B0E0: fld     dword ptr [esp+140h+var_134+4]
0x54B0E4: call    sub_98598A
0x54B0E9: fstp    [esp+140h+var_138]
0x54B0ED: fld     [esp+140h+var_138]
0x54B0F1: fstp    [esp+140h+var_128]
0x54B0F5: fld     dword ptr [esp+140h+var_134]
0x54B0F9: fld     dword ptr [esp+140h+var_134+4]
0x54B0FD: fld     [esp+140h+var_12C]
0x54B101: fstp    [esp+140h+var_134]
0x54B105: fmul    st, st
0x54B107: fld     st(1)
0x54B109: fmulp   st(2), st
0x54B10B: faddp   st(1), st
0x54B10D: fstp    [esp+140h+var_138]
0x54B111: fld     [esp+140h+var_138]
0x54B115: call    __CIsqrt
0x54B11A: fstp    [esp+140h+var_138]
0x54B11E: fld     [esp+140h+var_134]
0x54B122: fld     [esp+140h+var_138]
0x54B126: call    sub_98598A
0x54B12B: fstp    [esp+140h+var_138]
0x54B12F: fld     [esp+140h+var_138]
0x54B133: fstp    [esp+140h+var_124]
0x54B137: jmp     loc_54B239
0x54B13C: fstp    st
0x54B13E: fld     dword ptr ds:0A641F8h
0x54B144: push    ebx
0x54B145: push    ebp
0x54B146: sub     esp, 0Ch
0x54B149: fstp    [esp+154h+var_14C]; float
0x54B14D: lea     ecx, [esp+154h+var_120]
0x54B151: fld     dword ptr ds:0A641F4h
0x54B157: fstp    [esp+154h+var_150]; float
0x54B15B: fld     dword ptr ds:0A641F0h
0x54B161: fstp    [esp+154h+var_154]; float
0x54B164: call    sub_711580
0x54B169: mov     ecx, [esp+148h+arg_4]
0x54B170: mov     eax, [ecx+1Ch]
0x54B173: mov     ecx, [eax+1Ch]
0x54B176: mov     edx, [ecx+1Ch]
0x54B179: mov     edi, [edx+1Ch]
0x54B17C: mov     ebx, [edi+1Ch]
0x54B17F: mov     ebp, [ebx+1Ch]
0x54B182: mov     [esp+148h+var_138], ebp
0x54B186: mov     ebp, [esp+148h+arg_4]
0x54B18D: add     ebp, 30h ; '0'
0x54B190: push    ebp
0x54B191: add     ecx, 30h ; '0'
0x54B194: lea     ebp, [esp+14Ch+var_FC]
0x54B198: push    ebp
0x54B199: push    ecx
0x54B19A: lea     ecx, [esp+154h+var_24]
0x54B1A1: push    ecx
0x54B1A2: add     eax, 30h ; '0'
0x54B1A5: push    eax
0x54B1A6: lea     eax, [esp+15Ch+var_90]
0x54B1AD: push    eax
0x54B1AE: add     edx, 30h ; '0'
0x54B1B1: push    edx
0x54B1B2: lea     ecx, [esp+164h+var_48]
0x54B1B9: push    ecx
0x54B1BA: mov     ecx, [esp+168h+var_138]
0x54B1BE: add     edi, 30h ; '0'
0x54B1C1: push    edi
0x54B1C2: lea     edx, [esp+16Ch+var_6C]
0x54B1C9: push    edx
0x54B1CA: add     ebx, 30h ; '0'
0x54B1CD: push    ebx
0x54B1CE: lea     eax, [esp+174h+var_B4]
0x54B1D5: push    eax
0x54B1D6: add     ecx, 30h ; '0'
0x54B1D9: call    NiMAtrix33_Multiply
0x54B1DE: mov     ecx, eax
0x54B1E0: call    NiMAtrix33_Multiply
0x54B1E5: mov     ecx, eax
0x54B1E7: call    NiMAtrix33_Multiply
0x54B1EC: mov     ecx, eax
0x54B1EE: call    NiMAtrix33_Multiply
0x54B1F3: mov     ecx, eax
0x54B1F5: call    NiMAtrix33_Multiply
0x54B1FA: mov     ecx, eax
0x54B1FC: call    NiMAtrix33_Multiply
0x54B201: lea     ecx, [esp+148h+var_B4]
0x54B208: push    ecx
0x54B209: lea     ecx, [esp+14Ch+var_120]
0x54B20D: call    sub_7103C0
0x54B212: push    eax
0x54B213: lea     edx, [esp+14Ch+var_D8]
0x54B217: push    edx
0x54B218: mov     ecx, ebp
0x54B21A: call    NiMAtrix33_Multiply
0x54B21F: lea     eax, [esp+148h+var_124]
0x54B223: push    eax
0x54B224: lea     ecx, [esp+14Ch+var_134]
0x54B228: push    ecx
0x54B229: lea     edx, [esp+150h+var_128]
0x54B22D: push    edx
0x54B22E: lea     ecx, [esp+154h+var_D8]
0x54B232: call    sub_711440
0x54B237: pop     ebp
0x54B238: pop     ebx
0x54B239: fld     [esp+140h+var_128]
0x54B23D: pop     edi
0x54B23E: fst     dword ptr [esi+19Ch]
0x54B244: fld     [esp+13Ch+var_124]
0x54B248: fst     dword ptr [esi+1A0h]
0x54B24E: fld     dword ptr [esi+184h]
0x54B254: fsubrp  st(2), st
0x54B256: fxch    st(1)
0x54B258: fstp    [esp+13Ch+var_138]
0x54B25C: fld     [esp+13Ch+var_138]
0x54B260: fabs
0x54B262: fstp    [esp+13Ch+var_138]
0x54B266: fld     [esp+13Ch+var_138]
0x54B26A: fstp    dword ptr [esp+13Ch+var_134]
0x54B26E: fsubr   dword ptr [esi+188h]
0x54B274: fstp    [esp+13Ch+var_138]
0x54B278: fld     [esp+13Ch+var_138]
0x54B27C: fabs
0x54B27E: fstp    [esp+13Ch+var_138]
0x54B282: fld     [esp+13Ch+var_138]
0x54B286: fstp    [esp+13Ch+var_138]
0x54B28A: fld     dword ptr [esp+13Ch+var_134]
0x54B28E: fld     [esp+13Ch+var_138]
0x54B292: fcom    st(1)
0x54B294: fnstsw  ax
0x54B296: fld     dword ptr ds:0B39AF0h
0x54B29C: test    ah, 5
0x54B29F: jp      short loc_54B2C1
0x54B2A1: fstp    dword ptr [esi+1A4h]
0x54B2A7: fld     dword ptr [esi+1A4h]
0x54B2AD: fdivp   st(2), st
0x54B2AF: fxch    st(1)
0x54B2B1: fstp    dword ptr [esp+13Ch+var_134]
0x54B2B5: fdiv    dword ptr [esp+13Ch+var_134]
0x54B2B9: fstp    dword ptr [esi+1A8h]
0x54B2BF: jmp     short loc_54B2DB
0x54B2C1: fstp    dword ptr [esi+1A8h]
0x54B2C7: fdiv    dword ptr [esi+1A8h]
0x54B2CD: fstp    dword ptr [esp+13Ch+var_134]
0x54B2D1: fdiv    dword ptr [esp+13Ch+var_134]
0x54B2D5: fstp    dword ptr [esi+1A4h]
0x54B2DB: lea     eax, [esp+13Ch+var_134]
0x54B2DF: push    eax
0x54B2E0: lea     ecx, [esp+140h+var_138]
0x54B2E4: push    ecx
0x54B2E5: call    sub_54A450
0x54B2EA: fld     dword ptr [esp+144h+var_134]
0x54B2EE: fld     st
0x54B2F0: add     esp, 8
0x54B2F3: cmp     byte ptr [esi+198h], 0
0x54B2FA: fld     dword ptr [esi+184h]
0x54B300: fabs
0x54B302: fstp    dword ptr [esp+13Ch+var_134]
0x54B306: fsub    dword ptr [esp+13Ch+var_134]
0x54B30A: fstp    dword ptr [esp+13Ch+var_134]
0x54B30E: fdivr   dword ptr [esp+13Ch+var_134]
0x54B312: fld1
0x54B314: fsubrp  st(1), st
0x54B316: fmul    qword ptr ds:0A56E18h
0x54B31C: fadd    qword ptr ds:0A432F0h
0x54B322: fmul    dword ptr ds:0B39AF0h
0x54B328: fstp    dword ptr [esi+1ACh]
0x54B32E: fld     [esp+13Ch+var_128]
0x54B332: jz      short loc_54B35F
0x54B334: fld     st
0x54B336: fabs
0x54B338: fstp    dword ptr [esp+13Ch+var_134]
0x54B33C: fld     dword ptr [esp+13Ch+var_134]
0x54B340: fcomp   qword ptr ds:0A4D918h
0x54B346: fnstsw  ax
0x54B348: test    ah, 41h
0x54B34B: jnz     short loc_54B35F
0x54B34D: fld     qword ptr ds:0A31C70h
0x54B353: fmul    st, st(1)
0x54B355: fstp    dword ptr [esi+1B0h]
0x54B35B: fldz
0x54B35D: jmp     short loc_54B367
0x54B35F: fldz
0x54B361: fst     dword ptr [esi+1B0h]
0x54B367: cmp     byte ptr [esi+1D4h], 0
0x54B36E: fst     dword ptr [esi+1B4h]
0x54B374: fxch    st(1)
0x54B376: fst     dword ptr [esi+1B8h]
0x54B37C: fld     [esp+13Ch+var_124]
0x54B380: fst     dword ptr [esi+1BCh]
0x54B386: jz      short loc_54B3CB
0x54B388: fxch    st(1)
0x54B38A: mov     byte ptr [esi+1D4h], 0
0x54B391: fst     dword ptr [esi+184h]
0x54B397: mov     al, 1
0x54B399: fxch    st(1)
0x54B39B: fst     dword ptr [esi+188h]
0x54B3A1: fld     dword ptr [esi+1B0h]
0x54B3A7: fstp    dword ptr [esi+17Ch]
0x54B3AD: fxch    st(2)
0x54B3AF: fstp    dword ptr [esi+180h]
0x54B3B5: fstp    dword ptr [esi+18Ch]
0x54B3BB: fstp    dword ptr [esi+190h]
0x54B3C1: pop     esi
0x54B3C2: add     esp, 138h
0x54B3C8: retn    0Ch
0x54B3CB: fstp    st
0x54B3CD: mov     al, 1
0x54B3CF: fstp    st
0x54B3D1: pop     esi
0x54B3D2: fstp    st
0x54B3D4: add     esp, 138h
0x54B3DA: retn    0Ch
