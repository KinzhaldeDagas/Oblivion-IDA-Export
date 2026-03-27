0x66D120: push    ebp
0x66D121: mov     ebp, esp
0x66D123: and     esp, 0FFFFFFF0h
0x66D126: push    0FFFFFFFFh
0x66D128: push    offset SEH_66D120
0x66D12D: mov     eax, large fs:0
0x66D133: push    eax
0x66D134: sub     esp, 168h
0x66D13A: mov     eax, ds:0B30AACh
0x66D13F: xor     eax, esp
0x66D141: mov     [esp+174h+var_14], eax
0x66D148: push    ebx
0x66D149: push    esi
0x66D14A: push    edi
0x66D14B: mov     eax, ds:0B30AACh
0x66D150: xor     eax, esp
0x66D152: push    eax
0x66D153: lea     eax, [esp+184h+var_C]
0x66D15A: mov     large fs:0, eax
0x66D160: cmp     byte ptr ds:0B14EA0h, 0
0x66D167: mov     edi, [ebp+arg_0]
0x66D16A: mov     esi, ecx
0x66D16C: jnz     short loc_66D194
0x66D16E: mov     eax, [edi]
0x66D170: mov     edx, [eax+190h]
0x66D176: mov     ecx, edi
0x66D178: call    edx
0x66D17A: test    al, al
0x66D17C: jz      short loc_66D194
0x66D17E: mov     eax, [edi]
0x66D180: mov     edx, [eax+198h]
0x66D186: push    0
0x66D188: mov     ecx, edi
0x66D18A: call    edx
0x66D18C: test    al, al
0x66D18E: jz      loc_66D8FB
0x66D194: test    edi, edi
0x66D196: jz      loc_66D8FB
0x66D19C: mov     ecx, edi; this
0x66D19E: call    TESObjectREFR_GetParentCell
0x66D1A3: test    eax, eax
0x66D1A5: jz      loc_66D8FB
0x66D1AB: mov     eax, [edi]
0x66D1AD: mov     edx, [eax+154h]
0x66D1B3: mov     ecx, edi
0x66D1B5: call    edx
0x66D1B7: mov     ebx, eax
0x66D1B9: push    ebx
0x66D1BA: call    sub_4803C0
0x66D1BF: add     esp, 4
0x66D1C2: test    eax, eax
0x66D1C4: mov     [esp+184h+var_150], eax
0x66D1C8: jz      loc_66D8DC
0x66D1CE: push    ebx
0x66D1CF: call    sub_6FA970
0x66D1D4: add     esp, 4
0x66D1D7: test    eax, eax
0x66D1D9: jz      short loc_66D1E3
0x66D1DB: mov     eax, [eax+0Ch]
0x66D1DE: and     eax, 8
0x66D1E1: jnz     short loc_66D1F8
0x66D1E3: mov     eax, [edi]
0x66D1E5: mov     edx, [eax+190h]
0x66D1EB: mov     ecx, edi
0x66D1ED: call    edx
0x66D1EF: test    al, al
0x66D1F1: mov     byte ptr [esp+184h+var_168+3], 0
0x66D1F6: jz      short loc_66D1FD
0x66D1F8: mov     byte ptr [esp+184h+var_168+3], 1
0x66D1FD: mov     eax, [ebp+arg_4]
0x66D200: fld     [ebp+arg_8]
0x66D203: lea     ecx, [esp+184h+var_130]
0x66D207: fstp    dword ptr [esi+584h]
0x66D20D: mov     [esi+578h], edi
0x66D213: mov     [esi+57Ch], eax
0x66D219: call    sub_47F9F0
0x66D21E: fldz
0x66D220: cmp     byte ptr [esp+184h+var_168+3], 0
0x66D225: fstp    [esp+184h+var_14C]
0x66D229: lea     edx, [esp+184h+var_C0]
0x66D230: jz      short loc_66D243
0x66D232: lea     ecx, [esp+184h+var_14C]
0x66D236: push    ecx
0x66D237: push    edx
0x66D238: push    ebx
0x66D239: call    sub_8A4000
0x66D23E: add     esp, 0Ch
0x66D241: jmp     short loc_66D25F
0x66D243: mov     ecx, [esp+184h+var_150]
0x66D247: mov     eax, [ecx]
0x66D249: mov     eax, [eax+0A8h]
0x66D24F: push    edx
0x66D250: call    eax
0x66D252: mov     ecx, [esp+184h+var_150]
0x66D256: call    sub_47DE30
0x66D25B: fstp    [esp+184h+var_14C]
0x66D25F: lea     ecx, [esp+184h+var_13C]
0x66D263: push    ecx
0x66D264: lea     edx, [esp+188h+var_148]
0x66D268: push    edx
0x66D269: mov     ecx, esi
0x66D26B: call    sub_5F11F0
0x66D270: mov     ecx, edi; this
0x66D272: call    TESObjectREFR_GetParentCell
0x66D277: mov     edi, eax
0x66D279: mov     ecx, edi; this
0x66D27B: call    TESObjectCELL_IsInterior
0x66D280: test    al, al
0x66D282: jz      short loc_66D290
0x66D284: lea     ecx, [edi+28h]
0x66D287: call    sub_424180
0x66D28C: mov     edi, eax
0x66D28E: jmp     short loc_66D296
0x66D290: mov     edi, ds:0B35C24h
0x66D296: cmp     dword ptr [esi+57Ch], 1
0x66D29D: jnz     loc_66D4BC
0x66D2A3: test    edi, edi
0x66D2A5: jz      loc_66D4BC
0x66D2AB: call    sub_5796F0
0x66D2B0: test    al, al
0x66D2B2: jz      loc_66D361
0x66D2B8: cmp     dword ptr ds:0B365A8h, 0
0x66D2BF: jz      loc_66D361
0x66D2C5: lea     eax, [esp+184h+var_F8+8]
0x66D2CC: push    eax
0x66D2CD: call    sub_579640
0x66D2D2: mov     ecx, ds:0B33B00h
0x66D2D8: add     esp, 4
0x66D2DB: call    sub_45A500
0x66D2E0: test    al, al
0x66D2E2: jnz     short loc_66D338
0x66D2E4: fld     dword ptr [esp+184h+var_F8+8]
0x66D2EB: lea     ecx, [esp+184h+var_15C]
0x66D2EF: fsub    [esp+184h+var_148]
0x66D2F3: fstp    [esp+184h+var_160]
0x66D2F7: fld     dword ptr [esp+184h+var_F8+0Ch]
0x66D2FE: fsub    [esp+184h+var_144]
0x66D302: fstp    [esp+184h+var_164]
0x66D306: fld     dword ptr [esp+184h+var_E8]
0x66D30D: fsub    [esp+184h+var_140]
0x66D311: fstp    [esp+184h+var_16C]
0x66D315: fld     [esp+184h+var_160]
0x66D319: fstp    [esp+184h+var_15C]
0x66D31D: fld     [esp+184h+var_164]
0x66D321: fstp    [esp+184h+var_158]
0x66D325: fld     [esp+184h+var_16C]
0x66D329: fstp    [esp+184h+var_154]
0x66D32D: call    sub_404C90
0x66D332: fstp    dword ptr [esi+584h]
0x66D338: lea     ecx, [esp+184h+var_F8+8]
0x66D33F: push    ecx
0x66D340: lea     ecx, [esp+188h+var_110]
0x66D344: call    sub_47DD50
0x66D349: mov     eax, ds:0B365A8h
0x66D34E: test    eax, eax
0x66D350: jz      short loc_66D35A
0x66D352: mov     eax, [eax+8]
0x66D355: jmp     loc_66D5C0
0x66D35A: xor     eax, eax
0x66D35C: jmp     loc_66D5C0
0x66D361: lea     ecx, [esp+184h+var_A0]
0x66D368: call    bhkWorldRayCastData__Init
0x66D36D: lea     edx, [esp+184h+var_16C]
0x66D371: push    edx
0x66D372: mov     ecx, esi
0x66D374: call    sub_65ABE0
0x66D379: movzx   eax, word ptr [eax+2]
0x66D37D: shl     eax, 10h
0x66D380: or      eax, 19h
0x66D383: mov     [esp+184h+var_7C], eax
0x66D38A: lea     eax, [esp+184h+var_148]
0x66D38E: push    eax
0x66D38F: lea     ecx, [esp+188h+var_A0]
0x66D396: call    bhkWorldRayCastData__SetCastInputFrom
0x66D39B: lea     ecx, [esp+184h+var_15C]
0x66D39F: fld     dword ptr [esi+584h]
0x66D3A5: push    ecx
0x66D3A6: fstp    [esp+188h+var_16C]
0x66D3AA: lea     ecx, [esp+188h+var_A0]
0x66D3B1: fld     [esp+188h+var_13C]
0x66D3B5: fld     [esp+188h+var_16C]
0x66D3B9: fld     st
0x66D3BB: fmulp   st(2), st
0x66D3BD: fxch    st(1)
0x66D3BF: fstp    [esp+188h+var_16C]
0x66D3C3: fld     [esp+188h+var_138]
0x66D3C7: fmul    st, st(1)
0x66D3C9: fstp    [esp+188h+var_160]
0x66D3CD: fmul    [esp+188h+var_134]
0x66D3D1: fstp    [esp+188h+var_164]
0x66D3D5: fld     [esp+188h+var_16C]
0x66D3D9: fstp    [esp+188h+var_15C]
0x66D3DD: fld     [esp+188h+var_160]
0x66D3E1: fstp    [esp+188h+var_158]
0x66D3E5: fld     [esp+188h+var_164]
0x66D3E9: fstp    [esp+188h+var_154]
0x66D3ED: call    sub_663FF0
0x66D3F2: mov     edx, [edi]
0x66D3F4: mov     edx, [edx+88h]
0x66D3FA: lea     eax, [esp+184h+var_A0]
0x66D401: push    eax
0x66D402: mov     ecx, edi
0x66D404: call    edx
0x66D406: test    al, al
0x66D408: jz      loc_66D4BC
0x66D40E: lea     ecx, [esp+184h+var_A0]
0x66D415: call    sub_889CD0
0x66D41A: test    eax, eax
0x66D41C: jz      loc_66D4BC
0x66D422: fld     [esp+184h+var_5C]
0x66D429: mov     [esp+184h+var_12C], eax
0x66D42D: fmul    dword ptr [esi+584h]
0x66D433: lea     eax, [esp+184h+var_15C]
0x66D437: push    eax
0x66D438: lea     ecx, [esp+188h+var_110]
0x66D43C: fstp    [esp+188h+var_16C]
0x66D440: fld     [esp+188h+var_16C]
0x66D444: fst     dword ptr [esi+584h]
0x66D44A: fstp    [esp+188h+var_16C]
0x66D44E: fld     [esp+188h+var_13C]
0x66D452: fld     [esp+188h+var_16C]
0x66D456: fld     st
0x66D458: fmulp   st(2), st
0x66D45A: fxch    st(1)
0x66D45C: fstp    [esp+188h+var_16C]
0x66D460: fld     [esp+188h+var_138]
0x66D464: fmul    st, st(1)
0x66D466: fstp    [esp+188h+var_160]
0x66D46A: fmul    [esp+188h+var_134]
0x66D46E: fstp    [esp+188h+var_164]
0x66D472: fld     [esp+188h+var_148]
0x66D476: fadd    [esp+188h+var_16C]
0x66D47A: fstp    [esp+188h+var_16C]
0x66D47E: fld     [esp+188h+var_144]
0x66D482: fadd    [esp+188h+var_160]
0x66D486: fstp    [esp+188h+var_160]
0x66D48A: fld     [esp+188h+var_140]
0x66D48E: fadd    [esp+188h+var_164]
0x66D492: fstp    [esp+188h+var_164]
0x66D496: fld     [esp+188h+var_16C]
0x66D49A: fstp    [esp+188h+var_15C]
0x66D49E: fld     [esp+188h+var_160]
0x66D4A2: fstp    [esp+188h+var_158]
0x66D4A6: fld     [esp+188h+var_164]
0x66D4AA: fstp    [esp+188h+var_154]
0x66D4AE: call    sub_47DD50
0x66D4B3: mov     eax, [esp+184h+var_12C]
0x66D4B7: jmp     loc_66D5C4
0x66D4BC: lea     ecx, [esp+184h+var_C0]
0x66D4C3: push    ecx
0x66D4C4: lea     ecx, [esp+188h+var_110]
0x66D4C8: call    sub_47DCD0
0x66D4CD: cmp     byte ptr [esp+184h+var_168+3], 0
0x66D4D2: jz      short loc_66D540
0x66D4D4: push    offset dword_B258E8
0x66D4D9: lea     edx, [esp+188h+var_15C]
0x66D4DD: push    edx
0x66D4DE: lea     ecx, [ebx+64h]
0x66D4E1: call    sub_7101F0
0x66D4E6: fld     dword ptr [eax]
0x66D4E8: fstp    dword ptr [esp+184h+var_E8+8]
0x66D4EF: lea     ecx, [esp+184h+var_110]
0x66D4F3: fld     dword ptr [eax+4]
0x66D4F6: fstp    dword ptr [esp+184h+var_E8+0Ch]
0x66D4FD: fld     dword ptr [eax+8]
0x66D500: lea     eax, [esp+184h+var_F8+8]
0x66D507: push    eax
0x66D508: fstp    [esp+188h+var_D8]
0x66D50F: call    sub_47F950
0x66D514: movaps  xmm0, [esp+184h+var_F8+8]
0x66D51C: movaps  xmm1, [esp+184h+var_E8+8]
0x66D524: lea     ecx, [esp+184h+var_F8+8]
0x66D52B: push    ecx
0x66D52C: addps   xmm0, xmm1
0x66D52F: lea     ecx, [esp+188h+var_110]
0x66D533: movaps  [esp+188h+var_F8+8], xmm0
0x66D53B: call    sub_47DCD0
0x66D540: mov     ecx, ds:0B33B00h
0x66D546: call    sub_45A500
0x66D54B: test    al, al
0x66D54D: jnz     short loc_66D5B9
0x66D54F: lea     edx, [esp+184h+var_F8+8]
0x66D556: push    edx
0x66D557: lea     ecx, [esp+188h+var_110]
0x66D55B: call    sub_47F950
0x66D560: push    eax
0x66D561: lea     eax, [esp+188h+var_15C]
0x66D565: push    eax
0x66D566: call    sub_43F3E0
0x66D56B: fld     [esp+18Ch+var_15C]
0x66D56F: fsub    [esp+18Ch+var_148]
0x66D573: add     esp, 8
0x66D576: lea     ecx, [esp+184h+var_15C]
0x66D57A: fstp    [esp+184h+var_16C]
0x66D57E: fld     [esp+184h+var_158]
0x66D582: fsub    [esp+184h+var_144]
0x66D586: fstp    [esp+184h+var_160]
0x66D58A: fld     [esp+184h+var_154]
0x66D58E: fsub    [esp+184h+var_140]
0x66D592: fstp    [esp+184h+var_164]
0x66D596: fld     [esp+184h+var_16C]
0x66D59A: fstp    [esp+184h+var_15C]
0x66D59E: fld     [esp+184h+var_160]
0x66D5A2: fstp    [esp+184h+var_158]
0x66D5A6: fld     [esp+184h+var_164]
0x66D5AA: fstp    [esp+184h+var_154]
0x66D5AE: call    sub_404C90
0x66D5B3: fstp    dword ptr [esi+584h]
0x66D5B9: mov     ecx, [esp+184h+var_150]
0x66D5BD: mov     eax, [ecx+8]
0x66D5C0: mov     [esp+184h+var_12C], eax
0x66D5C4: cmp     dword ptr [eax+8], 0
0x66D5C8: mov     ebx, eax
0x66D5CA: jz      loc_66D8D3
0x66D5D0: mov     ecx, [eax+50h]
0x66D5D3: mov     edx, [ecx]
0x66D5D5: lea     edi, [eax+50h]
0x66D5D8: mov     eax, [edx+8]
0x66D5DB: call    eax
0x66D5DD: cmp     eax, 7
0x66D5E0: jz      loc_66D8D3
0x66D5E6: mov     ecx, [edi]
0x66D5E8: mov     edx, [ecx]
0x66D5EA: mov     eax, [edx+8]
0x66D5ED: call    eax
0x66D5EF: cmp     eax, 6
0x66D5F2: jz      loc_66D8D3
0x66D5F8: mov     ecx, esi; this
0x66D5FA: call    MobileObject_GetCharProxy
0x66D5FF: test    eax, eax
0x66D601: jz      short loc_66D649
0x66D603: mov     ecx, eax
0x66D605: call    sub_8913C0
0x66D60A: fstp    [esp+184h+var_16C]
0x66D60E: fld     [esp+184h+var_16C]
0x66D612: fmul    qword ptr ds:0A372E0h
0x66D618: fstp    [esp+184h+var_16C]
0x66D61C: fld     [esp+184h+var_16C]
0x66D620: fadd    qword ptr ds:0A3F3F0h
0x66D626: fstp    [esp+184h+var_16C]
0x66D62A: fld     dword ptr [esi+584h]
0x66D630: fld     [esp+184h+var_16C]
0x66D634: fcom    st(1)
0x66D636: fnstsw  ax
0x66D638: fstp    st(1)
0x66D63A: test    ah, 41h
0x66D63D: jnz     short loc_66D647
0x66D63F: fstp    dword ptr [esi+584h]
0x66D645: jmp     short loc_66D649
0x66D647: fstp    st
0x66D649: cmp     dword ptr [esi+57Ch], 3
0x66D650: jnz     loc_66D6F1
0x66D656: cmp     byte ptr [esp+184h+var_168+3], 0
0x66D65B: jz      short loc_66D6A7
0x66D65D: mov     ecx, offset fMagicTelekinesisComplexSpringDamping
0x66D662: call    GameSetting_GetSafeFloatPointer
0x66D667: fld     dword ptr [eax]
0x66D669: mov     ecx, offset fMagicTelekinesisComplexSpringElasticit
0x66D66E: fstp    [esp+184h+var_100]
0x66D675: call    GameSetting_GetSafeFloatPointer
0x66D67A: fld     dword ptr [eax]
0x66D67C: mov     ecx, offset fMagicTelekinesisComplexObjectDamping
0x66D681: fstp    [esp+184h+var_FC]
0x66D688: call    GameSetting_GetSafeFloatPointer
0x66D68D: fld     dword ptr [eax]
0x66D68F: mov     ecx, offset fMagicTelekinesisComplexMaxForce
0x66D694: fstp    dword ptr [esp+184h+var_F8+4]
0x66D69B: call    GameSetting_GetSafeFloatPointer
0x66D6A0: fld     dword ptr [eax]
0x66D6A2: jmp     loc_66D7C5
0x66D6A7: mov     ecx, offset fMagicTelekinesisSpringDamping
0x66D6AC: call    GameSetting_GetSafeFloatPointer
0x66D6B1: fld     dword ptr [eax]
0x66D6B3: mov     ecx, offset fMagicTelekinesisSpringElasticity
0x66D6B8: fstp    [esp+184h+var_100]
0x66D6BF: call    GameSetting_GetSafeFloatPointer
0x66D6C4: fld     dword ptr [eax]
0x66D6C6: mov     ecx, offset fMagicTelekinesisObjectDamping
0x66D6CB: fstp    [esp+184h+var_FC]
0x66D6D2: call    GameSetting_GetSafeFloatPointer
0x66D6D7: fld     dword ptr [eax]
0x66D6D9: mov     ecx, offset fMagicTelekinesisMaxForce
0x66D6DE: fstp    dword ptr [esp+184h+var_F8+4]
0x66D6E5: call    GameSetting_GetSafeFloatPointer
0x66D6EA: fld     dword ptr [eax]
0x66D6EC: jmp     loc_66D7C5
0x66D6F1: mov     ecx, [esi+578h]
0x66D6F7: fld1
0x66D6F9: mov     edx, [ecx]
0x66D6FB: fst     [esp+184h+var_164]
0x66D6FF: mov     eax, [edx+190h]
0x66D705: fstp    [esp+184h+var_160]
0x66D709: call    eax
0x66D70B: test    al, al
0x66D70D: jz      short loc_66D764
0x66D70F: mov     ecx, [edi]
0x66D711: call    sub_89DA90
0x66D716: fstp    [esp+184h+var_16C]
0x66D71A: fldz
0x66D71C: fld     [esp+184h+var_16C]
0x66D720: fcom    st(1)
0x66D722: fnstsw  ax
0x66D724: fstp    st(1)
0x66D726: test    ah, 41h
0x66D729: jnz     short loc_66D753
0x66D72B: fld     [esp+184h+var_14C]
0x66D72F: fcom    st(1)
0x66D731: fnstsw  ax
0x66D733: test    ah, 41h
0x66D736: jnz     short loc_66D751
0x66D738: fdivp   st(1), st
0x66D73A: push    ebx
0x66D73B: fld1
0x66D73D: fsubrp  st(1), st
0x66D73F: fstp    [esp+188h+var_164]
0x66D743: call    sub_536460
0x66D748: fmul    [esp+188h+var_164]
0x66D74C: add     esp, 4
0x66D74F: jmp     short loc_66D78C
0x66D751: fstp    st(1)
0x66D753: push    ebx
0x66D754: fstp    st
0x66D756: call    sub_536460
0x66D75B: fmul    [esp+188h+var_164]
0x66D75F: add     esp, 4
0x66D762: jmp     short loc_66D78C
0x66D764: lea     ecx, [esp+184h+var_150]
0x66D768: push    ecx
0x66D769: mov     ecx, [esp+188h+var_150]
0x66D76D: call    sub_497340
0x66D772: mov     edx, [eax]
0x66D774: and     edx, 3Fh
0x66D777: cmp     dl, 0Eh
0x66D77A: jnz     short loc_66D790
0x66D77C: fld     dword ptr ds:0A2FAACh
0x66D782: fstp    [esp+184h+var_160]
0x66D786: fld     dword ptr ds:0A3D65Ch
0x66D78C: fstp    [esp+184h+var_164]
0x66D790: fld     dword ptr ds:0A3D65Ch
0x66D796: fstp    [esp+184h+var_100]
0x66D79D: fld     [esp+184h+var_160]
0x66D7A1: fmul    qword ptr ds:0A38538h
0x66D7A7: fstp    [esp+184h+var_FC]
0x66D7AE: fld     dword ptr ds:0A41328h
0x66D7B4: fstp    dword ptr [esp+184h+var_F8+4]
0x66D7BB: fld     [esp+184h+var_164]
0x66D7BF: fmul    qword ptr ds:0A2FC70h
0x66D7C5: lea     eax, [esp+184h+var_D8+8]
0x66D7CC: fstp    dword ptr [esp+184h+var_F8]
0x66D7D3: push    eax
0x66D7D4: lea     ecx, [esp+188h+var_110]
0x66D7D8: call    sub_47F950
0x66D7DD: mov     eax, [edi]
0x66D7DF: movaps  xmm0, xmmword ptr [eax+40h]
0x66D7E3: movaps  xmm1, xmmword ptr [esp+184h+var_D8+8]
0x66D7EB: subps   xmm1, xmm0
0x66D7EE: movaps  xmmword ptr [esp+184h+var_D8+8], xmm1
0x66D7F6: mov     eax, [edi]
0x66D7F8: lea     ecx, [esp+184h+var_D8+8]
0x66D7FF: push    ecx
0x66D800: add     eax, 10h
0x66D803: push    eax
0x66D804: lea     edx, [esp+18Ch+var_B0]
0x66D80B: push    edx
0x66D80C: lea     ecx, [esp+190h+var_120]
0x66D810: call    sub_47F950
0x66D815: mov     ecx, eax
0x66D817: call    sub_88FD90
0x66D81C: lea     eax, [esp+184h+var_B0]
0x66D823: push    eax
0x66D824: lea     ecx, [esp+188h+var_120]
0x66D828: call    sub_47DCD0
0x66D82D: mov     ecx, [esi+578h]; this
0x66D833: call    TESObjectREFR_GetParentCell
0x66D838: mov     ecx, eax
0x66D83A: call    sub_4440C0
0x66D83F: test    eax, eax
0x66D841: jz      short loc_66D84C
0x66D843: mov     edx, [eax]
0x66D845: mov     ecx, eax
0x66D847: mov     eax, [edx+58h]
0x66D84A: call    eax
0x66D84C: push    10h; Size
0x66D84E: call    FormHeapAlloc
0x66D853: add     esp, 4
0x66D856: mov     [esp+184h+var_16C], eax
0x66D85A: test    eax, eax
0x66D85C: mov     [esp+184h+var_4], 0
0x66D867: jz      short loc_66D877
0x66D869: lea     ecx, [esp+184h+var_130]
0x66D86D: push    ecx
0x66D86E: mov     ecx, eax
0x66D870: call    sub_47DE90
0x66D875: jmp     short loc_66D879
0x66D877: xor     eax, eax
0x66D879: lea     edi, [esi+574h]
0x66D87F: push    eax; a2
0x66D880: mov     ecx, edi; this
0x66D882: mov     [esp+188h+var_4], 0FFFFFFFFh
0x66D88D: call    NiSmartPointer_Set??
0x66D892: mov     ebx, [edi]
0x66D894: mov     edi, [ebx]
0x66D896: mov     ecx, [esi+578h]; this
0x66D89C: add     edi, 5Ch ; '\'
0x66D89F: call    TESObjectREFR_GetParentCell
0x66D8A4: mov     ecx, eax
0x66D8A6: call    sub_4440C0
0x66D8AB: mov     edx, [edi]
0x66D8AD: push    eax
0x66D8AE: mov     ecx, ebx
0x66D8B0: call    edx
0x66D8B2: mov     ecx, [esi+578h]; this
0x66D8B8: call    TESObjectREFR_GetParentCell
0x66D8BD: mov     ecx, eax
0x66D8BF: call    sub_4440C0
0x66D8C4: test    eax, eax
0x66D8C6: jz      short loc_66D8FB
0x66D8C8: mov     edx, [eax]
0x66D8CA: mov     ecx, eax
0x66D8CC: mov     eax, [edx+58h]
0x66D8CF: call    eax
0x66D8D1: jmp     short loc_66D8FB
0x66D8D3: mov     ecx, esi
0x66D8D5: call    sub_66A670
0x66D8DA: jmp     short loc_66D8FB
0x66D8DC: mov     eax, 2
0x66D8E1: cmp     [ebp+arg_4], eax
0x66D8E4: jnz     short loc_66D8FB
0x66D8E6: fld     [ebp+arg_8]
0x66D8E9: mov     [esi+578h], edi
0x66D8EF: fstp    dword ptr [esi+584h]
0x66D8F5: mov     [esi+57Ch], eax
0x66D8FB: mov     ecx, [esp+184h+var_C]
0x66D902: mov     large fs:0, ecx
0x66D909: pop     ecx
0x66D90A: pop     edi
0x66D90B: pop     esi
0x66D90C: pop     ebx
0x66D90D: mov     ecx, [esp+174h+var_14]
0x66D914: xor     ecx, esp
0x66D916: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66D91B: mov     esp, ebp
0x66D91D: pop     ebp
0x66D91E: retn    0Ch
