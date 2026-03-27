0x5744E0: push    0FFFFFFFFh
0x5744E2: push    offset SEH_5744E0
0x5744E7: mov     eax, large fs:0
0x5744ED: push    eax
0x5744EE: sub     esp, 41Ch
0x5744F4: mov     eax, ds:0B30AACh
0x5744F9: xor     eax, esp
0x5744FB: mov     [esp+428h+var_10], eax
0x574502: push    ebx
0x574503: push    ebp
0x574504: push    esi
0x574505: push    edi
0x574506: mov     eax, ds:0B30AACh
0x57450B: xor     eax, esp
0x57450D: push    eax
0x57450E: lea     eax, [esp+43Ch+var_C]
0x574515: mov     large fs:0, eax
0x57451B: mov     esi, ecx
0x57451D: movzx   eax, word ptr [esi]
0x574520: xor     ebx, ebx
0x574522: cmp     ax, bx
0x574525: jnz     loc_574A11
0x57452B: mov     eax, [esi+4]
0x57452E: cmp     eax, ebx
0x574530: jz      loc_574A11
0x574536: push    80h ; '€'
0x57453B: push    2800h
0x574540: push    ebx
0x574541: push    eax
0x574542: call    sub_431130
0x574547: mov     edi, eax
0x574549: add     esp, 10h
0x57454C: cmp     edi, ebx
0x57454E: jz      loc_574A5F
0x574554: cmp     [edi+24h], bl
0x574557: jz      loc_574A5F
0x57455D: push    3928h; Size
0x574562: call    FormHeapAlloc
0x574567: mov     [esi+38h], eax
0x57456A: mov     eax, [edi]
0x57456C: mov     edx, [eax+1Ch]
0x57456F: add     esp, 4
0x574572: mov     ecx, edi
0x574574: call    edx
0x574576: push    eax
0x574577: mov     eax, [esi+38h]
0x57457A: push    eax
0x57457B: mov     ecx, edi
0x57457D: call    ReadFile??
0x574582: mov     edx, [edi]
0x574584: mov     eax, [edx]
0x574586: push    1
0x574588: mov     ecx, edi
0x57458A: call    eax
0x57458C: fldz
0x57458E: mov     edx, [esi+38h]
0x574591: fst     dword ptr [esi+2Ch]
0x574594: fst     [esp+43Ch+var_428]
0x574598: lea     ecx, [edx+150h]
0x57459E: fst     dword ptr [esi+30h]
0x5745A1: mov     edi, 40h ; '@'
0x5745A6: fld     [esp+43Ch+var_428]
0x5745AA: fld     dword ptr [edx]
0x5745AC: fsub    dword ptr [ecx+0Ch]
0x5745AF: fstp    [esp+43Ch+var_424]
0x5745B3: fld     [esp+43Ch+var_424]
0x5745B7: fadd    dword ptr [ecx]
0x5745B9: fstp    [esp+43Ch+var_428]
0x5745BD: fld     dword ptr [esi+2Ch]
0x5745C0: fld     [esp+43Ch+var_428]
0x5745C4: fcom    st(1)
0x5745C6: fnstsw  ax
0x5745C8: fstp    st(1)
0x5745CA: test    ah, 5
0x5745CD: jp      short loc_5745D4
0x5745CF: fstp    st
0x5745D1: fld     dword ptr [esi+2Ch]
0x5745D4: fstp    [esp+43Ch+var_428]
0x5745D8: fld     [esp+43Ch+var_428]
0x5745DC: fst     dword ptr [esi+2Ch]
0x5745DF: fld     dword ptr [ecx]
0x5745E1: fcom    st(2)
0x5745E3: fnstsw  ax
0x5745E5: test    ah, 5
0x5745E8: jnp     short loc_5745F8
0x5745EA: fstp    st(2)
0x5745EC: fld     dword ptr [ecx]
0x5745EE: fstp    [esp+43Ch+var_428]
0x5745F2: fld     [esp+43Ch+var_428]
0x5745F6: fxch    st(2)
0x5745F8: fld     dword ptr [esi+30h]
0x5745FB: fld     dword ptr [ecx+0Ch]
0x5745FE: fsubrp  st(2), st
0x574600: fcom    st(1)
0x574602: fnstsw  ax
0x574604: test    ah, 5
0x574607: jp      short loc_57460D
0x574609: fstp    st(1)
0x57460B: jmp     short loc_57460F
0x57460D: fstp    st
0x57460F: fstp    [esp+43Ch+var_428]
0x574613: fld     [esp+43Ch+var_428]
0x574617: fst     dword ptr [esi+30h]
0x57461A: fld     dword ptr [edx]
0x57461C: fsub    dword ptr [ecx+44h]
0x57461F: fstp    [esp+43Ch+var_424]
0x574623: fld     [esp+43Ch+var_424]
0x574627: fadd    dword ptr [ecx+38h]
0x57462A: fstp    [esp+43Ch+var_428]
0x57462E: fld     [esp+43Ch+var_428]
0x574632: fcom    st(2)
0x574634: fnstsw  ax
0x574636: test    ah, 5
0x574639: jnp     short loc_574679
0x57463B: fstp    st(2)
0x57463D: fxch    st(1)
0x57463F: fstp    [esp+43Ch+var_428]
0x574643: fld     [esp+43Ch+var_428]
0x574647: fxch    st(1)
0x574649: fxch    st(1)
0x57464B: fst     dword ptr [esi+2Ch]
0x57464E: fld     dword ptr [ecx+38h]
0x574651: fcom    st(3)
0x574653: fnstsw  ax
0x574655: test    ah, 5
0x574658: jnp     short loc_574669
0x57465A: fstp    st(3)
0x57465C: fld     dword ptr [ecx+38h]
0x57465F: fstp    [esp+43Ch+var_428]
0x574663: fld     [esp+43Ch+var_428]
0x574667: fxch    st(3)
0x574669: fsubr   dword ptr [ecx+44h]
0x57466C: fcom    st(2)
0x57466E: fnstsw  ax
0x574670: test    ah, 41h
0x574673: jnz     short loc_57467D
0x574675: fstp    st
0x574677: jmp     short loc_57467F
0x574679: fstp    st
0x57467B: jmp     short loc_574649
0x57467D: fstp    st(2)
0x57467F: fxch    st(1)
0x574681: fstp    [esp+43Ch+var_428]
0x574685: fld     [esp+43Ch+var_428]
0x574689: fst     dword ptr [esi+30h]
0x57468C: fld     dword ptr [edx]
0x57468E: fsub    dword ptr [ecx+7Ch]
0x574691: fstp    [esp+43Ch+var_424]
0x574695: fld     [esp+43Ch+var_424]
0x574699: fadd    dword ptr [ecx+70h]
0x57469C: fstp    [esp+43Ch+var_428]
0x5746A0: fld     [esp+43Ch+var_428]
0x5746A4: fcom    st(2)
0x5746A6: fnstsw  ax
0x5746A8: test    ah, 5
0x5746AB: jnp     short loc_5746EB
0x5746AD: fstp    st(2)
0x5746AF: fxch    st(1)
0x5746B1: fstp    [esp+43Ch+var_428]
0x5746B5: fld     [esp+43Ch+var_428]
0x5746B9: fxch    st(1)
0x5746BB: fxch    st(1)
0x5746BD: fst     dword ptr [esi+2Ch]
0x5746C0: fld     dword ptr [ecx+70h]
0x5746C3: fcom    st(3)
0x5746C5: fnstsw  ax
0x5746C7: test    ah, 5
0x5746CA: jnp     short loc_5746DB
0x5746CC: fstp    st(3)
0x5746CE: fld     dword ptr [ecx+70h]
0x5746D1: fstp    [esp+43Ch+var_428]
0x5746D5: fld     [esp+43Ch+var_428]
0x5746D9: fxch    st(3)
0x5746DB: fsubr   dword ptr [ecx+7Ch]
0x5746DE: fcom    st(2)
0x5746E0: fnstsw  ax
0x5746E2: test    ah, 41h
0x5746E5: jnz     short loc_5746EF
0x5746E7: fstp    st
0x5746E9: jmp     short loc_5746F1
0x5746EB: fstp    st
0x5746ED: jmp     short loc_5746BB
0x5746EF: fstp    st(2)
0x5746F1: fxch    st(1)
0x5746F3: fstp    [esp+43Ch+var_428]
0x5746F7: fld     [esp+43Ch+var_428]
0x5746FB: fst     dword ptr [esi+30h]
0x5746FE: fld     dword ptr [edx]
0x574700: fsub    dword ptr [ecx+0B4h]
0x574706: fstp    [esp+43Ch+var_424]
0x57470A: fld     [esp+43Ch+var_424]
0x57470E: fadd    dword ptr [ecx+0A8h]
0x574714: fstp    [esp+43Ch+var_428]
0x574718: fld     [esp+43Ch+var_428]
0x57471C: fcom    st(2)
0x57471E: fnstsw  ax
0x574720: test    ah, 5
0x574723: jnp     short loc_57476C
0x574725: fstp    st(2)
0x574727: fxch    st(1)
0x574729: fstp    [esp+43Ch+var_428]
0x57472D: fld     [esp+43Ch+var_428]
0x574731: fxch    st(1)
0x574733: fxch    st(1)
0x574735: fstp    dword ptr [esi+2Ch]
0x574738: fld     dword ptr [ecx+0A8h]
0x57473E: fcom    st(2)
0x574740: fnstsw  ax
0x574742: test    ah, 5
0x574745: jnp     short loc_574759
0x574747: fstp    st(2)
0x574749: fld     dword ptr [ecx+0A8h]
0x57474F: fstp    [esp+43Ch+var_428]
0x574753: fld     [esp+43Ch+var_428]
0x574757: fxch    st(2)
0x574759: fsubr   dword ptr [ecx+0B4h]
0x57475F: fcom    st(1)
0x574761: fnstsw  ax
0x574763: test    ah, 41h
0x574766: jnz     short loc_574770
0x574768: fstp    st
0x57476A: jmp     short loc_574772
0x57476C: fstp    st
0x57476E: jmp     short loc_574733
0x574770: fstp    st(1)
0x574772: add     ecx, 0E0h ; 'à'
0x574778: fstp    dword ptr [esi+30h]
0x57477B: sub     edi, 1
0x57477E: jnz     loc_5745AA
0x574784: fld     dword ptr [edx+84Ch]
0x57478A: fstp    [esp+43Ch+var_424]
0x57478E: fld     dword ptr [edx+858h]
0x574794: fstp    dword ptr [edx+84Ch]
0x57479A: mov     ecx, [esi+38h]
0x57479D: fld     [esp+43Ch+var_424]
0x5747A1: fstp    dword ptr [ecx+858h]
0x5747A7: mov     edx, [esi+38h]
0x5747AA: fst     dword ptr [edx+850h]
0x5747B0: mov     eax, [esi+38h]
0x5747B3: fld     st
0x5747B5: fld     dword ptr [esi+30h]
0x5747B8: fadd    st, st(1)
0x5747BA: fstp    [esp+43Ch+var_424]
0x5747BE: fld     [esp+43Ch+var_424]
0x5747C2: fstp    dword ptr [eax+85Ch]
0x5747C8: mov     eax, [esi+38h]
0x5747CB: fld     dword ptr [eax+1C6Ch]
0x5747D1: fstp    dword ptr [eax+1D14h]
0x5747D7: mov     eax, [esi+38h]
0x5747DA: fld     dword ptr [eax+1C74h]
0x5747E0: fstp    dword ptr [eax+1D1Ch]
0x5747E6: mov     eax, [esi+38h]
0x5747E9: fld     dword ptr [eax+1C78h]
0x5747EF: fstp    dword ptr [eax+1D20h]
0x5747F5: mov     eax, [esi+38h]
0x5747F8: fld     dword ptr [eax+1C70h]
0x5747FE: fstp    dword ptr [eax+1D18h]
0x574804: mov     eax, [esi+38h]
0x574807: fld     dword ptr [eax+1C7Ch]
0x57480D: fstp    dword ptr [eax+1D24h]
0x574813: mov     ecx, [esi+38h]
0x574816: fxch    st(2)
0x574818: fst     dword ptr [ecx+14Ch]
0x57481E: mov     edx, [esi+38h]
0x574821: fst     dword ptr [edx+158h]
0x574827: mov     eax, [esi+38h]
0x57482A: fxch    st(1)
0x57482C: fstp    dword ptr [eax+150h]
0x574832: mov     ecx, [esi+38h]
0x574835: fld     dword ptr [esi+30h]
0x574838: faddp   st(2), st
0x57483A: fxch    st(1)
0x57483C: fstp    [esp+43Ch+var_424]
0x574840: fld     [esp+43Ch+var_424]
0x574844: fstp    dword ptr [ecx+15Ch]
0x57484A: mov     edx, [esi+38h]
0x57484D: fst     dword ptr [edx+12Ch]
0x574853: mov     eax, [esi+38h]
0x574856: fst     dword ptr [eax+134h]
0x57485C: mov     ecx, [esi+38h]
0x57485F: fst     dword ptr [ecx+13Ch]
0x574865: mov     edx, [esi+38h]
0x574868: fst     dword ptr [edx+144h]
0x57486E: mov     eax, [esi+38h]
0x574871: fst     dword ptr [eax+130h]
0x574877: mov     ecx, [esi+38h]
0x57487A: fst     dword ptr [ecx+138h]
0x574880: mov     edx, [esi+38h]
0x574883: fst     dword ptr [edx+140h]
0x574889: mov     eax, [esi+38h]
0x57488C: fstp    dword ptr [eax+148h]
0x574892: mov     ecx, [esi+38h]
0x574895: mov     eax, [ecx+4]
0x574898: cmp     eax, 8
0x57489B: jle     short loc_5748B6
0x57489D: mov     edx, [esi+4]
0x5748A0: push    eax
0x5748A1: push    8
0x5748A3: push    edx; ArgList
0x5748A4: push    offset aTooManyFontTex; "Too many font textures for %s.\nMax tex"...
0x5748A9: call    PrintError
0x5748AE: add     esp, 10h
0x5748B1: jmp     loc_574A15
0x5748B6: cmp     eax, ebx
0x5748B8: mov     [esp+43Ch+var_428], ebx
0x5748BC: jle     loc_574A11
0x5748C2: lea     eax, [esi+0Ch]
0x5748C5: mov     [esp+43Ch+var_424], eax
0x5748C9: mov     ecx, [esi+38h]
0x5748CC: lea     edx, [ebx+ecx+0Ch]
0x5748D0: push    edx
0x5748D1: push    offset aDataFonts; "Data\\Fonts"
0x5748D6: lea     eax, [esp+444h+ArgList]
0x5748DA: push    offset aSS_tex; "%s\\%s.tex"
0x5748DF: push    eax
0x5748E0: call    __sprintf
0x5748E5: push    80h ; '€'
0x5748EA: push    2800h
0x5748EF: xor     ebp, ebp
0x5748F1: lea     ecx, [esp+454h+ArgList]
0x5748F5: push    ebp
0x5748F6: push    ecx
0x5748F7: call    sub_431130
0x5748FC: mov     edi, eax
0x5748FE: add     esp, 20h
0x574901: cmp     edi, ebp
0x574903: jz      loc_574A3D
0x574909: cmp     byte ptr [edi+24h], 0
0x57490D: jz      loc_574A3D
0x574913: mov     ecx, [edi+4]
0x574916: push    1
0x574918: lea     edx, [esp+440h+var_420]
0x57491C: push    edx
0x57491D: push    8
0x57491F: lea     eax, [esp+448h+var_418]
0x574923: push    eax
0x574924: push    edi
0x574925: mov     [esp+450h+var_420], 1
0x57492D: call    ecx
0x57492F: push    70h ; 'p'; Size
0x574931: call    FormHeapAlloc
0x574936: add     esp, 18h
0x574939: mov     [esp+43Ch+var_41C], eax
0x57493D: cmp     eax, ebp
0x57493F: mov     [esp+43Ch+var_4], ebp
0x574946: jz      short loc_574964
0x574948: mov     edx, [esp+43Ch+var_414]
0x57494C: mov     ecx, [esp+43Ch+var_418]
0x574950: push    1
0x574952: push    1
0x574954: push    offset unk_B25E00
0x574959: push    edx
0x57495A: push    ecx
0x57495B: mov     ecx, eax
0x57495D: call    NiPixelData__NiPixelData
0x574962: mov     ebp, eax
0x574964: mov     eax, [esp+43Ch+var_418]
0x574968: imul    eax, [esp+43Ch+var_414]
0x57496D: mov     edx, [ebp+5Ch]
0x574970: mov     ecx, [edx]
0x574972: add     ecx, [ebp+50h]
0x574975: push    1
0x574977: add     eax, eax
0x574979: lea     edx, [esp+440h+var_41C]
0x57497D: push    edx
0x57497E: add     eax, eax
0x574980: push    eax
0x574981: mov     eax, [edi+4]
0x574984: push    ecx
0x574985: push    edi
0x574986: mov     [esp+450h+var_4], 0FFFFFFFFh
0x574991: mov     [esp+450h+var_41C], 1
0x574999: call    eax
0x57499B: push    30h ; '0'; Size
0x57499D: call    FormHeapAlloc
0x5749A2: add     esp, 18h
0x5749A5: mov     [esp+43Ch+var_420], eax
0x5749A9: test    eax, eax
0x5749AB: mov     [esp+43Ch+var_4], 1
0x5749B6: jz      short loc_5749C4
0x5749B8: push    ebp
0x5749B9: mov     ecx, eax
0x5749BB: call    sub_704800
0x5749C0: mov     ebp, eax
0x5749C2: jmp     short loc_5749C6
0x5749C4: xor     ebp, ebp
0x5749C6: push    1; a2
0x5749C8: mov     ecx, ebp; this
0x5749CA: mov     [esp+440h+var_4], 0FFFFFFFFh
0x5749D5: call    sub_405900
0x5749DA: push    ebp; a2
0x5749DB: mov     ebp, [esp+440h+var_424]
0x5749DF: mov     ecx, ebp; this
0x5749E1: call    NiSmartPointer_Set??
0x5749E6: mov     edx, [edi]
0x5749E8: mov     eax, [edx]
0x5749EA: push    1
0x5749EC: mov     ecx, edi
0x5749EE: call    eax
0x5749F0: mov     eax, [esp+43Ch+var_428]
0x5749F4: mov     ecx, [esi+38h]
0x5749F7: add     eax, 1
0x5749FA: add     ebp, 4
0x5749FD: add     ebx, 24h ; '$'
0x574A00: cmp     eax, [ecx+4]
0x574A03: mov     [esp+43Ch+var_428], eax
0x574A07: mov     [esp+43Ch+var_424], ebp
0x574A0B: jl      loc_5748C9
0x574A11: add     word ptr [esi], 1
0x574A15: mov     ecx, dword ptr [esp+43Ch+var_C]
0x574A1C: mov     large fs:0, ecx
0x574A23: pop     ecx
0x574A24: pop     edi
0x574A25: pop     esi
0x574A26: pop     ebp
0x574A27: pop     ebx
0x574A28: mov     ecx, [esp+428h+var_10]
0x574A2F: xor     ecx, esp
0x574A31: call    @__security_check_cookie@4; __security_check_cookie(x)
0x574A36: add     esp, 428h
0x574A3C: retn
0x574A3D: lea     edx, [esp+43Ch+ArgList]
0x574A41: push    edx; ArgList
0x574A42: push    offset aFontFileNotFou; "Font file not found: %S. \n"
0x574A47: call    PrintError
0x574A4C: add     esp, 8
0x574A4F: cmp     edi, ebp
0x574A51: jz      short loc_574A15
0x574A53: mov     eax, [edi]
0x574A55: mov     edx, [eax]
0x574A57: push    1
0x574A59: mov     ecx, edi
0x574A5B: call    edx
0x574A5D: jmp     short loc_574A15
0x574A5F: mov     eax, [esi+4]
0x574A62: push    eax; ArgList
0x574A63: push    offset aFontFileNotF_0; "Font file not found: %s. \n"
0x574A68: call    PrintError
0x574A6D: add     esp, 8
0x574A70: cmp     edi, ebx
0x574A72: jz      short loc_574A15
0x574A74: mov     edx, [edi]
0x574A76: mov     eax, [edx]
0x574A78: push    1
0x574A7A: mov     ecx, edi
0x574A7C: call    eax
0x574A7E: jmp     short loc_574A15
