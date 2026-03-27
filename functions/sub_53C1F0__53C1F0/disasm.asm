0x53C1F0: fld     [esp+arg_4]
0x53C1F4: sub     esp, 88h
0x53C1FA: push    ebx
0x53C1FB: push    ebp
0x53C1FC: push    esi
0x53C1FD: push    edi
0x53C1FE: mov     edi, [esp+98h+arg_0]
0x53C205: push    ecx
0x53C206: fstp    [esp+9Ch+var_9C]
0x53C209: push    edi
0x53C20A: mov     ebp, ecx
0x53C20C: call    nullsub_returnVoid_2arg
0x53C211: fld     dword ptr [ebp+78h]
0x53C214: fcomp   qword ptr ds:0A3A5B0h
0x53C21A: fnstsw  ax
0x53C21C: test    ah, 44h
0x53C21F: jp      short loc_53C22F
0x53C221: fldz
0x53C223: fstp    dword ptr [ebp+78h]
0x53C226: fld     dword ptr ds:0A430CCh
0x53C22C: fstp    dword ptr [ebp+74h]
0x53C22F: mov     ecx, ds:0B33B00h
0x53C235: call    sub_45A500
0x53C23A: test    al, al
0x53C23C: mov     ebx, 1
0x53C241: jz      short loc_53C275
0x53C243: mov     ecx, offset TimeGlobals
0x53C248: call    TimeGlobals_GetGameDaysPassed
0x53C24D: sub     eax, ebx
0x53C24F: test    eax, eax
0x53C251: mov     [esp+98h+var_84], eax
0x53C255: fild    [esp+98h+var_84]
0x53C259: jge     short loc_53C261
0x53C25B: fadd    dword ptr ds:0A2FC78h
0x53C261: fmul    qword ptr ds:0A2F920h
0x53C267: fchs
0x53C269: fstp    dword ptr [ebp+78h]
0x53C26C: fld     dword ptr ds:0A430CCh
0x53C272: fstp    dword ptr [ebp+74h]
0x53C275: fld     dword ptr [edi+0D0h]
0x53C27B: fsub    dword ptr [ebp+78h]
0x53C27E: fstp    [esp+98h+var_88]
0x53C282: fldz
0x53C284: fld     [esp+98h+var_88]
0x53C288: fcom    st(1)
0x53C28A: fnstsw  ax
0x53C28C: test    ah, 5
0x53C28F: jp      short loc_53C29F
0x53C291: fadd    qword ptr ds:0A2F920h
0x53C297: fstp    [esp+98h+var_88]
0x53C29B: fld     [esp+98h+var_88]
0x53C29F: fld     dword ptr [ebp+64h]
0x53C2A2: fmul    qword ptr ds:0A2FCC8h
0x53C2A8: fmulp   st(1), st
0x53C2AA: fadd    dword ptr [ebp+74h]
0x53C2AD: fstp    [esp+98h+var_80]
0x53C2B1: fld     [esp+98h+var_80]
0x53C2B5: fst     dword ptr [ebp+74h]
0x53C2B8: fcomp   st(1)
0x53C2BA: fnstsw  ax
0x53C2BC: fld     qword ptr ds:0A56CA0h
0x53C2C2: test    ah, 5
0x53C2C5: jnp     short loc_53C2CD
0x53C2C7: fstp    st(1)
0x53C2C9: jmp     short loc_53C2E3
0x53C2CB: fxch    st(1)
0x53C2CD: fld     dword ptr [ebp+74h]
0x53C2D0: fadd    st, st(1)
0x53C2D2: fstp    dword ptr [ebp+74h]
0x53C2D5: fxch    st(1)
0x53C2D7: fcom    dword ptr [ebp+74h]
0x53C2DA: fnstsw  ax
0x53C2DC: test    ah, 41h
0x53C2DF: jz      short loc_53C2CB
0x53C2E1: fstp    st
0x53C2E3: fld     dword ptr ds:0A4D020h
0x53C2E9: fcom    dword ptr [ebp+74h]
0x53C2EC: fnstsw  ax
0x53C2EE: test    ah, 41h
0x53C2F1: jp      short loc_53C305
0x53C2F3: fld     dword ptr [ebp+74h]
0x53C2F6: fsub    st, st(2)
0x53C2F8: fstp    dword ptr [ebp+74h]
0x53C2FB: fcom    dword ptr [ebp+74h]
0x53C2FE: fnstsw  ax
0x53C300: test    ah, 41h
0x53C303: jnp     short loc_53C2F3
0x53C305: fstp    st
0x53C307: mov     ecx, ebp
0x53C309: fstp    st
0x53C30B: fld     dword ptr [edi+0D0h]
0x53C311: fstp    dword ptr [ebp+78h]
0x53C314: call    sub_53C030
0x53C319: fstp    [esp+98h+var_80]
0x53C31D: call    sub_53C100
0x53C322: mov     eax, [edi+24h]
0x53C325: fstp    [esp+98h+var_88]
0x53C329: fld     dword ptr [eax+0Ch]
0x53C32C: fstp    [esp+98h+var_84]
0x53C330: fld     [esp+98h+var_88]
0x53C334: fld     [esp+98h+var_84]
0x53C338: fcom    st(1)
0x53C33A: fnstsw  ax
0x53C33C: fstp    st(1)
0x53C33E: test    ah, 41h
0x53C341: jz      short loc_53C349
0x53C343: fstp    [esp+98h+var_88]
0x53C347: jmp     short loc_53C34B
0x53C349: fstp    st
0x53C34B: mov     eax, [ebp+70h]
0x53C34E: cmp     eax, 2
0x53C351: jz      short loc_53C36F
0x53C353: cmp     eax, ebx
0x53C355: jnz     short loc_53C3BC
0x53C357: fldz
0x53C359: fcom    [esp+98h+var_80]
0x53C35D: fnstsw  ax
0x53C35F: test    ah, 1
0x53C362: jnz     short loc_53C3BA
0x53C364: fcomp   [esp+98h+var_88]
0x53C368: fnstsw  ax
0x53C36A: test    ah, 1
0x53C36D: jnz     short loc_53C3BC
0x53C36F: xor     esi, esi
0x53C371: call    Sky_CreateOrGetGlobalObject
0x53C376: cmp     ebp, [eax+30h]
0x53C379: jnz     short loc_53C382
0x53C37B: mov     esi, offset sub_540E90
0x53C380: jmp     short loc_53C391
0x53C382: call    Sky_CreateOrGetGlobalObject
0x53C387: cmp     ebp, [eax+34h]
0x53C38A: jnz     short loc_53C391
0x53C38C: mov     esi, offset sub_540EC0
0x53C391: cmp     dword ptr [ebp+70h], 2
0x53C395: mov     edx, ds:0B365BCh
0x53C39B: mov     eax, [ebp+edx*8+18h]
0x53C39F: setz    cl
0x53C3A2: push    ecx
0x53C3A3: mov     ecx, [ebp+10h]
0x53C3A6: push    esi
0x53C3A7: push    eax
0x53C3A8: push    ecx
0x53C3A9: call    sub_53FBE0
0x53C3AE: add     esp, 10h
0x53C3B1: mov     dword ptr [ebp+70h], 0
0x53C3B8: jmp     short loc_53C3BC
0x53C3BA: fstp    st
0x53C3BC: mov     eax, [edi+0DCh]
0x53C3C2: cmp     eax, 3
0x53C3C5: jz      short loc_53C3D0
0x53C3C7: cmp     eax, 2
0x53C3CA: jnz     loc_53C5C5
0x53C3D0: mov     eax, [ebp+4]
0x53C3D3: mov     dl, [eax+18h]
0x53C3D6: shr     dl, 5
0x53C3D9: test    bl, dl
0x53C3DB: jnz     short loc_53C3EE
0x53C3DD: or      [eax+18h], bx
0x53C3E1: pop     edi
0x53C3E2: pop     esi
0x53C3E3: pop     ebp
0x53C3E4: pop     ebx
0x53C3E5: add     esp, 88h
0x53C3EB: retn    8
0x53C3EE: fld     dword ptr [ebp+74h]
0x53C3F1: push    ecx
0x53C3F2: fchs
0x53C3F4: lea     ecx, [esp+9Ch+var_6C]
0x53C3F8: fmul    qword ptr ds:0A31C78h
0x53C3FE: fstp    [esp+9Ch+var_84]
0x53C402: fld     [esp+9Ch+var_84]
0x53C406: fstp    [esp+9Ch+var_9C]; float
0x53C409: call    NiMatrix33_InitRotationTransposedTransform???
0x53C40E: fld     dword ptr [ebp+68h]
0x53C411: push    ecx
0x53C412: fmul    qword ptr ds:0A31C78h
0x53C418: lea     ecx, [esp+9Ch+var_48]
0x53C41C: fstp    [esp+9Ch+var_84]
0x53C420: fld     [esp+9Ch+var_84]
0x53C424: fstp    [esp+9Ch+var_9C]; float
0x53C427: call    NiMatrix33_InitRotationTransform
0x53C42C: mov     edi, [ebp+4]
0x53C42F: lea     eax, [esp+98h+var_48]
0x53C433: push    eax
0x53C434: lea     ecx, [esp+9Ch+var_24]
0x53C438: push    ecx
0x53C439: lea     ecx, [esp+0A0h+var_6C]
0x53C43D: call    NiMAtrix33_Multiply
0x53C442: fldz
0x53C444: fld     [esp+98h+var_80]
0x53C448: mov     esi, eax
0x53C44A: fcom    st(1)
0x53C44C: add     edi, 30h ; '0'
0x53C44F: mov     ecx, 9
0x53C454: rep movsd
0x53C456: fnstsw  ax
0x53C458: test    ah, 41h
0x53C45B: jp      short loc_53C484
0x53C45D: fxch    st(1)
0x53C45F: fcom    [esp+98h+var_88]
0x53C463: fnstsw  ax
0x53C465: test    ah, 1
0x53C468: jnz     short loc_53C482
0x53C46A: mov     ebp, [ebp+4]
0x53C46D: fstp    st
0x53C46F: or      [ebp+18h], bx
0x53C473: fstp    st
0x53C475: pop     edi
0x53C476: pop     esi
0x53C477: pop     ebp
0x53C478: pop     ebx
0x53C479: add     esp, 88h
0x53C47F: retn    8
0x53C482: fxch    st(1)
0x53C484: mov     eax, [ebp+4]
0x53C487: fcomp   st(1)
0x53C489: mov     esi, 0FFFEh
0x53C48E: and     [eax+18h], si
0x53C492: fnstsw  ax
0x53C494: test    ah, 41h
0x53C497: jnp     loc_53C5B2
0x53C49D: mov     edx, [ebp+10h]
0x53C4A0: mov     al, [edx+18h]
0x53C4A3: shr     al, 5
0x53C4A6: test    bl, al
0x53C4A8: jz      loc_53C5B2
0x53C4AE: mov     eax, [ebp+8]
0x53C4B1: fstp    st
0x53C4B3: and     [eax+18h], si
0x53C4B7: mov     ecx, [ebp+10h]
0x53C4BA: push    4
0x53C4BC: call    NiNode_GetNiPropertyByID
0x53C4C1: test    eax, eax
0x53C4C3: jz      short loc_53C4FB
0x53C4C5: mov     ecx, [ebp+10h]
0x53C4C8: push    4
0x53C4CA: call    NiNode_GetNiPropertyByID
0x53C4CF: mov     edx, [eax]
0x53C4D1: mov     ecx, eax
0x53C4D3: mov     eax, [edx+54h]
0x53C4D6: call    eax
0x53C4D8: xor     ecx, ecx
0x53C4DA: cmp     eax, 0Bh
0x53C4DD: setz    cl
0x53C4E0: mov     eax, ecx
0x53C4E2: test    eax, eax
0x53C4E4: jz      short loc_53C4FB
0x53C4E6: mov     ecx, [ebp+10h]
0x53C4E9: push    4
0x53C4EB: call    NiNode_GetNiPropertyByID
0x53C4F0: test    eax, eax
0x53C4F2: jz      short loc_53C4FB
0x53C4F4: fld     [esp+98h+var_80]
0x53C4F8: fstp    dword ptr [eax+78h]
0x53C4FB: fldz
0x53C4FD: fcomp   [esp+98h+var_88]
0x53C501: fnstsw  ax
0x53C503: test    ah, 1
0x53C506: jz      loc_53C5BE
0x53C50C: mov     edx, [ebp+14h]
0x53C50F: mov     al, [edx+18h]
0x53C512: shr     al, 5
0x53C515: test    bl, al
0x53C517: jz      loc_53C5BE
0x53C51D: mov     eax, [ebp+0Ch]
0x53C520: and     [eax+18h], si
0x53C524: mov     ecx, [ebp+14h]
0x53C527: push    4
0x53C529: call    NiNode_GetNiPropertyByID
0x53C52E: test    eax, eax
0x53C530: jz      loc_53C5C5
0x53C536: mov     ecx, [ebp+14h]
0x53C539: push    4
0x53C53B: call    NiNode_GetNiPropertyByID
0x53C540: mov     edx, [eax]
0x53C542: mov     ecx, eax
0x53C544: mov     eax, [edx+54h]
0x53C547: call    eax
0x53C549: xor     ecx, ecx
0x53C54B: cmp     eax, 0Bh
0x53C54E: setz    cl
0x53C551: mov     eax, ecx
0x53C553: test    eax, eax
0x53C555: jz      short loc_53C5C5
0x53C557: mov     ecx, [ebp+14h]
0x53C55A: push    4
0x53C55C: call    NiNode_GetNiPropertyByID
0x53C561: test    eax, eax
0x53C563: jz      short loc_53C5C5
0x53C565: mov     ecx, [esp+98h+arg_0]
0x53C56C: fld     dword ptr [ecx+3Ch]
0x53C56F: pop     edi
0x53C570: fstp    [esp+94h+var_7C]
0x53C574: mov     edx, [esp+94h+var_7C]
0x53C578: fld     dword ptr [ecx+40h]
0x53C57B: pop     esi
0x53C57C: fstp    [esp+90h+var_78]
0x53C580: pop     ebp
0x53C581: fld     dword ptr [ecx+44h]
0x53C584: mov     ecx, [esp+8Ch+var_78]
0x53C588: fstp    [esp+8Ch+var_74]
0x53C58C: mov     [eax+6Ch], edx
0x53C58F: fld     [esp+8Ch+var_88]
0x53C593: mov     edx, [esp+8Ch+var_74]
0x53C597: mov     [eax+70h], ecx
0x53C59A: fstp    [esp+8Ch+var_70]
0x53C59E: mov     ecx, [esp+8Ch+var_70]
0x53C5A2: mov     [eax+74h], edx
0x53C5A5: mov     [eax+78h], ecx
0x53C5A8: pop     ebx
0x53C5A9: add     esp, 88h
0x53C5AF: retn    8
0x53C5B2: mov     eax, [ebp+8]
0x53C5B5: or      [eax+18h], bx
0x53C5B9: jmp     loc_53C4FD
0x53C5BE: mov     ebp, [ebp+0Ch]
0x53C5C1: or      [ebp+18h], bx
0x53C5C5: pop     edi
0x53C5C6: pop     esi
0x53C5C7: pop     ebp
0x53C5C8: pop     ebx
0x53C5C9: add     esp, 88h
0x53C5CF: retn    8
