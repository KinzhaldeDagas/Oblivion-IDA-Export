0x687060: push    ebp
0x687061: mov     ebp, esp
0x687063: and     esp, 0FFFFFFF0h
0x687066: push    0FFFFFFFFh
0x687068: push    offset SEH_687060
0x68706D: mov     eax, large fs:0
0x687073: push    eax
0x687074: sub     esp, 428h
0x68707A: mov     eax, ds:0B30AACh
0x68707F: xor     eax, esp
0x687081: mov     [esp+434h+var_14], eax
0x687088: push    ebx
0x687089: push    esi
0x68708A: push    edi
0x68708B: mov     eax, ds:0B30AACh
0x687090: xor     eax, esp
0x687092: push    eax
0x687093: lea     eax, [esp+444h+var_C]
0x68709A: mov     large fs:0, eax
0x6870A0: cmp     byte ptr ds:0B3C089h, 0
0x6870A7: mov     ecx, [ebp+arg_0]; this
0x6870AA: mov     edi, [ebp+arg_4]
0x6870AD: mov     eax, [ebp+arg_8]
0x6870B0: mov     [esp+444h+var_404], ecx
0x6870B4: mov     [esp+444h+var_3E4], edi
0x6870B8: mov     [esp+444h+var_3E8], eax
0x6870BC: jnz     loc_68784D
0x6870C2: cmp     [ebp+arg_C], 0
0x6870C6: jnz     short loc_6870D5
0x6870C8: cmp     byte ptr ds:0B15824h, 0
0x6870CF: mov     [ebp+arg_C], 0
0x6870D3: jz      short loc_6870D9
0x6870D5: mov     [ebp+arg_C], 1
0x6870D9: test    ecx, ecx
0x6870DB: jz      loc_68784D
0x6870E1: call    MobileObject_GetCharProxy
0x6870E6: mov     ebx, eax
0x6870E8: test    ebx, ebx
0x6870EA: mov     [esp+444h+var_408], ebx
0x6870EE: jz      loc_68784D
0x6870F4: mov     ecx, [ebx+8]
0x6870F7: test    ecx, ecx
0x6870F9: jz      short loc_687102
0x6870FB: call    sub_8AC0C0
0x687100: jmp     short loc_687104
0x687102: xor     eax, eax
0x687104: mov     eax, [eax+8]
0x687107: test    eax, eax
0x687109: jz      short loc_687113
0x68710B: mov     esi, [eax+2B0h]
0x687111: jmp     short loc_687115
0x687113: xor     esi, esi
0x687115: test    esi, esi
0x687117: mov     eax, [ebx+368h]
0x68711D: jz      loc_68784D
0x687123: test    eax, eax
0x687125: jz      loc_68784D
0x68712B: fld     dword ptr [ebx+248h]
0x687131: movaps  xmm0, xmmword ptr [eax+30h]
0x687135: movaps  xmm1, xmmword ptr [eax+20h]
0x687139: fld     qword ptr ds:0A372E0h
0x68713F: fmul    st(1), st
0x687141: movaps  xmm2, xmm0
0x687144: movaps  xmm3, xmm1
0x687147: fxch    st(1)
0x687149: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x68714D: fstp    [esp+444h+a2]
0x687151: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x687155: subss   xmm2, xmm3
0x687159: movss   dword ptr [esp+444h+var_350], xmm2
0x687162: fld     dword ptr [esp+444h+var_350]
0x687169: fmul    st, st(1)
0x68716B: shufps  xmm1, xmm1, 55h ; 'U'
0x68716F: shufps  xmm0, xmm0, 55h ; 'U'
0x687173: subss   xmm0, xmm1
0x687177: fstp    [esp+444h+var_40C]
0x68717B: movss   dword ptr [esp+444h+var_350], xmm0
0x687184: fld     [esp+444h+var_40C]
0x687188: lea     ecx, [esp+444h+var_428]
0x68718C: fadd    [esp+444h+a2]
0x687190: push    ecx
0x687191: mov     ecx, ebx
0x687193: fstp    [esp+448h+var_3D4]
0x687197: fmul    dword ptr [esp+448h+var_350]
0x68719E: fstp    [esp+448h+var_40C]
0x6871A2: fld     [esp+448h+var_40C]
0x6871A6: fmul    qword ptr ds:0A74D10h
0x6871AC: fstp    [esp+448h+var_40C]
0x6871B0: call    sub_57E270
0x6871B5: mov     eax, [esp+444h+var_3E8]
0x6871B9: fld     dword ptr [eax]
0x6871BB: mov     ebx, [esp+444h+var_428]
0x6871BF: fsub    dword ptr [edi]
0x6871C1: and     ebx, 0FFFFFFDBh
0x6871C4: lea     ecx, [esp+444h+var_400]
0x6871C8: or      ebx, 1Bh
0x6871CB: fstp    [esp+444h+var_3E0]
0x6871CF: fld     dword ptr [eax+4]
0x6871D2: fsub    dword ptr [edi+4]
0x6871D5: fstp    [esp+444h+var_3DC]
0x6871D9: fld     dword ptr [eax+8]
0x6871DC: fsub    dword ptr [edi+8]
0x6871DF: fstp    [esp+444h+var_3D8]
0x6871E3: fld     [esp+444h+var_3E0]
0x6871E7: fld     st
0x6871E9: fld     qword ptr ds:0A39088h
0x6871EF: fmul    st(1), st
0x6871F1: fxch    st(1)
0x6871F3: fstp    dword ptr [esp+444h+var_350]
0x6871FA: fld     [esp+444h+var_3DC]
0x6871FE: fld     st
0x687200: fmul    st, st(2)
0x687202: fstp    dword ptr [esp+444h+var_350+4]
0x687209: fld     [esp+444h+var_3D8]
0x68720D: fmulp   st(2), st
0x68720F: fxch    st(1)
0x687211: fstp    dword ptr [esp+444h+var_350+8]
0x687218: fld     st(1)
0x68721A: fchs
0x68721C: fstp    [esp+444h+var_428]
0x687220: fst     [esp+444h+var_400]
0x687224: fld     [esp+444h+var_428]
0x687228: fstp    [esp+444h+var_3FC]
0x68722C: fldz
0x68722E: fst     [esp+444h+var_3F8]
0x687232: fxch    st(1)
0x687234: fchs
0x687236: fstp    [esp+444h+var_3F4]
0x68723A: fxch    st(1)
0x68723C: fstp    [esp+444h+var_3F0]
0x687240: fstp    [esp+444h+var_3EC]
0x687244: call    sub_43F350
0x687249: fstp    st
0x68724B: lea     ecx, [esp+444h+var_3F4]
0x68724F: call    sub_43F350
0x687254: fstp    st
0x687256: push    offset sub_4F5E80
0x68725B: push    6
0x68725D: push    30h ; '0'
0x68725F: lea     edx, [esp+450h+var_2E0]
0x687266: push    edx
0x687267: call    sub_401080
0x68726C: fld     [esp+444h+var_3D4]
0x687270: fld     [esp+444h+var_40C]
0x687274: xor     edi, edi
0x687276: fld     [esp+444h+var_3F8]
0x68727A: fld     [esp+444h+var_3FC]
0x68727E: fld     [esp+444h+var_3EC]
0x687282: fld1
0x687284: fld     qword ptr ds:0A39088h
0x68728A: fld     [esp+444h+a2]
0x68728E: jmp     short loc_6872AA
0x687290: fld     [esp+444h+var_3FC]
0x687294: fld     [esp+444h+var_3F8]
0x687298: fld     [esp+444h+var_3EC]
0x68729C: fxch    st(4)
0x68729E: fxch    st(6)
0x6872A0: fxch    st(1)
0x6872A2: fxch    st(5)
0x6872A4: fxch    st(2)
0x6872A6: fxch    st(4)
0x6872A8: fxch    st(3)
0x6872AA: cmp     edi, 5; switch 6 cases
0x6872AD: mov     eax, [esp+444h+var_3E4]
0x6872B1: mov     ecx, [eax]
0x6872B3: mov     edx, [eax+4]
0x6872B6: mov     eax, [eax+8]
0x6872B9: mov     [esp+444h+var_41C], ecx
0x6872BD: mov     [esp+444h+var_418], edx
0x6872C1: mov     [esp+444h+var_414], eax
0x6872C5: ja      def_6872CB
0x6872CB: jmp     ds:jpt_6872CB[edi*4]; switch jump
0x6872D2: fstp    st(5); jumptable 006872CB case 0
0x6872D4: fstp    st(3)
0x6872D6: fstp    st(1)
0x6872D8: fld     [esp+444h+var_414]
0x6872DC: faddp   st(3), st
0x6872DE: fxch    st(2)
0x6872E0: fstp    [esp+444h+var_414]
0x6872E4: fxch    st(1)
0x6872E6: fld     [esp+444h+var_41C]
0x6872EA: mov     ecx, [esp+444h+var_404]
0x6872EE: fld     st
0x6872F0: lea     eax, [edi+edi*2]
0x6872F3: fmul    st, st(3)
0x6872F5: shl     eax, 4
0x6872F8: cmp     ds:0B333B4h, ecx
0x6872FE: mov     [esp+eax+444h+var_2BC], ebx
0x687305: fstp    dword ptr [esp+444h+var_340]
0x68730C: fld     [esp+444h+var_418]
0x687310: fld     st
0x687312: fmul    st, st(4)
0x687314: fstp    dword ptr [esp+444h+var_340+4]
0x68731B: fld     [esp+444h+var_414]
0x68731F: fld     st
0x687321: fmul    st, st(5)
0x687323: fstp    dword ptr [esp+444h+var_340+8]
0x68732A: movaps  xmm0, [esp+444h+var_340]
0x687332: movaps  [esp+eax+444h+var_2E0], xmm0
0x68733A: addps   xmm0, [esp+444h+var_350]
0x687342: movaps  [esp+eax+444h+var_2D0], xmm0
0x68734A: jnz     loc_6876CB
0x687350: cmp     [ebp+arg_C], 0
0x687354: jz      loc_6876CB
0x68735A: fstp    st(5)
0x68735C: lea     edx, [esp+444h+var_3B4]
0x687363: fstp    st(5)
0x687365: push    edx
0x687366: fstp    st(2)
0x687368: lea     eax, [esp+448h+var_3D0]
0x68736C: fldz
0x68736E: push    eax
0x68736F: fst     [esp+44Ch+var_3B4]
0x687376: lea     ecx, [esp+44Ch+var_3C4]
0x68737D: fst     [esp+44Ch+var_3AC]
0x687384: push    ecx
0x687385: fst     [esp+450h+var_3A8]
0x68738C: lea     edx, [esp+450h+var_41C]
0x687390: fxch    st(1)
0x687392: push    edx
0x687393: fst     [esp+454h+var_3B0]
0x68739A: fld     [esp+454h+var_3E0]
0x68739E: faddp   st(3), st
0x6873A0: fxch    st(2)
0x6873A2: fstp    [esp+454h+var_424]
0x6873A6: fld     [esp+454h+var_3DC]
0x6873AA: faddp   st(4), st
0x6873AC: fxch    st(3)
0x6873AE: fstp    [esp+454h+var_420]
0x6873B2: fld     [esp+454h+var_3D8]
0x6873B6: faddp   st(2), st
0x6873B8: fxch    st(1)
0x6873BA: fstp    [esp+454h+var_428]
0x6873BE: fld     [esp+454h+var_424]
0x6873C2: fstp    [esp+454h+var_3D0]
0x6873C9: fld     [esp+454h+var_420]
0x6873CD: fstp    [esp+454h+var_3CC]
0x6873D4: fld     [esp+454h+var_428]
0x6873D8: fstp    [esp+454h+var_3C8]
0x6873DF: fstp    [esp+454h+var_3C4]
0x6873E6: fst     [esp+454h+var_3C0]
0x6873ED: fst     [esp+454h+var_3BC]
0x6873F4: fstp    [esp+454h+var_3B8]
0x6873FB: call    sub_47F070
0x687400: add     esp, 10h
0x687403: mov     [esp+444h+var_428], eax
0x687407: call    sub_4E70B0
0x68740C: mov     ecx, [esp+444h+var_428]; this
0x687410: push    eax; a2
0x687411: call    sub_405680
0x687416: fld     dword ptr ds:0A3D8F0h
0x68741C: mov     eax, [esp+444h+var_428]
0x687420: push    ecx
0x687421: mov     ecx, ds:0B333A0h
0x687427: fstp    [esp+448h+var_448]; float
0x68742A: push    eax; int
0x68742B: call    sub_440E60
0x687430: fld     [esp+444h+var_3D4]
0x687434: fld     qword ptr ds:0A39088h
0x68743A: fld1
0x68743C: fld     [esp+444h+var_40C]
0x687440: fld     [esp+444h+a2]
0x687444: jmp     loc_6876DD
0x687449: fstp    st; jumptable 006872CB case 1
0x68744B: fstp    st(4)
0x68744D: fstp    st(2)
0x68744F: fstp    st
0x687451: fld     st(3)
0x687453: fmul    qword ptr ds:0A2FAA0h
0x687459: fadd    [esp+444h+var_414]
0x68745D: fstp    [esp+444h+var_414]
0x687461: jmp     loc_6872E6
0x687466: fstp    st(3); jumptable 006872CB case 2
0x687468: fld     [esp+444h+var_414]
0x68746C: faddp   st(3), st
0x68746E: fxch    st(2)
0x687470: fstp    [esp+444h+var_414]
0x687474: fld     [esp+444h+var_400]
0x687478: fmul    st, st(5)
0x68747A: fstp    [esp+444h+var_428]
0x68747E: fld     st(4)
0x687480: fmulp   st(3), st
0x687482: fxch    st(2)
0x687484: fstp    [esp+444h+var_420]
0x687488: fld     st(3)
0x68748A: fmulp   st(3), st
0x68748C: fxch    st(2)
0x68748E: fstp    [esp+444h+var_424]
0x687492: fld     [esp+444h+var_428]
0x687496: fadd    [esp+444h+var_41C]
0x68749A: fstp    [esp+444h+var_428]
0x68749E: fld     [esp+444h+var_418]
0x6874A2: fadd    [esp+444h+var_420]
0x6874A6: fstp    [esp+444h+var_420]
0x6874AA: fld     [esp+444h+var_424]
0x6874AE: fadd    [esp+444h+var_414]
0x6874B2: fstp    [esp+444h+var_424]
0x6874B6: fld     [esp+444h+var_428]
0x6874BA: fstp    [esp+444h+var_398]
0x6874C1: mov     ecx, [esp+444h+var_398]
0x6874C8: fld     [esp+444h+var_420]
0x6874CC: mov     [esp+444h+var_41C], ecx
0x6874D0: fstp    [esp+444h+var_394]
0x6874D7: mov     edx, [esp+444h+var_394]
0x6874DE: fld     [esp+444h+var_424]
0x6874E2: mov     [esp+444h+var_418], edx
0x6874E6: fstp    [esp+444h+var_390]
0x6874ED: mov     eax, [esp+444h+var_390]
0x6874F4: mov     [esp+444h+var_414], eax
0x6874F8: jmp     loc_6872E6
0x6874FD: fstp    st(5); jumptable 006872CB case 3
0x6874FF: fstp    st(3)
0x687501: fld     [esp+444h+var_414]
0x687505: faddp   st(4), st
0x687507: fxch    st(3)
0x687509: fstp    [esp+444h+var_414]
0x68750D: fld     [esp+444h+var_3F4]
0x687511: fmul    st, st(4)
0x687513: fstp    [esp+444h+var_424]
0x687517: fld     [esp+444h+var_3F0]
0x68751B: fmul    st, st(4)
0x68751D: fstp    [esp+444h+var_420]
0x687521: fmul    st, st(3)
0x687523: fstp    [esp+444h+var_428]
0x687527: fld     [esp+444h+var_424]
0x68752B: fadd    [esp+444h+var_41C]
0x68752F: fstp    [esp+444h+var_424]
0x687533: fld     [esp+444h+var_418]
0x687537: fadd    [esp+444h+var_420]
0x68753B: fstp    [esp+444h+var_420]
0x68753F: fld     [esp+444h+var_428]
0x687543: fadd    [esp+444h+var_414]
0x687547: fstp    [esp+444h+var_428]
0x68754B: fld     [esp+444h+var_424]
0x68754F: fstp    [esp+444h+var_380]
0x687556: mov     ecx, [esp+444h+var_380]
0x68755D: fld     [esp+444h+var_420]
0x687561: mov     [esp+444h+var_41C], ecx
0x687565: fstp    [esp+444h+var_37C]
0x68756C: mov     edx, [esp+444h+var_37C]
0x687573: fld     [esp+444h+var_428]
0x687577: mov     [esp+444h+var_418], edx
0x68757B: fstp    [esp+444h+var_378]
0x687582: mov     eax, [esp+444h+var_378]
0x687589: mov     [esp+444h+var_414], eax
0x68758D: jmp     loc_6872E4
0x687592: fstp    st; jumptable 006872CB case 4
0x687594: fstp    st(2)
0x687596: fld     [esp+444h+var_414]
0x68759A: fadd    st, st(6)
0x68759C: fstp    [esp+444h+var_414]
0x6875A0: fld     [esp+444h+var_400]
0x6875A4: fmul    st, st(5)
0x6875A6: fstp    [esp+444h+var_424]
0x6875AA: fld     st(4)
0x6875AC: fmulp   st(3), st
0x6875AE: fxch    st(2)
0x6875B0: fstp    [esp+444h+var_420]
0x6875B4: fld     st(3)
0x6875B6: fmulp   st(3), st
0x6875B8: fxch    st(2)
0x6875BA: fstp    [esp+444h+var_428]
0x6875BE: fld     [esp+444h+var_424]
0x6875C2: fadd    [esp+444h+var_41C]
0x6875C6: fstp    [esp+444h+var_424]
0x6875CA: fld     [esp+444h+var_418]
0x6875CE: fadd    [esp+444h+var_420]
0x6875D2: fstp    [esp+444h+var_420]
0x6875D6: fld     [esp+444h+var_428]
0x6875DA: fadd    [esp+444h+var_414]
0x6875DE: fstp    [esp+444h+var_428]
0x6875E2: fld     [esp+444h+var_424]
0x6875E6: fstp    [esp+444h+var_3A4]
0x6875ED: mov     ecx, [esp+444h+var_3A4]
0x6875F4: fld     [esp+444h+var_420]
0x6875F8: mov     [esp+444h+var_41C], ecx
0x6875FC: fstp    [esp+444h+var_3A0]
0x687603: mov     edx, [esp+444h+var_3A0]
0x68760A: fld     [esp+444h+var_428]
0x68760E: mov     [esp+444h+var_418], edx
0x687612: fstp    [esp+444h+var_39C]
0x687619: mov     eax, [esp+444h+var_39C]
0x687620: mov     [esp+444h+var_414], eax
0x687624: jmp     loc_6872E6
0x687629: fstp    st; jumptable 006872CB case 5
0x68762B: fstp    st(4)
0x68762D: fstp    st(2)
0x68762F: fld     [esp+444h+var_414]
0x687633: fadd    st, st(5)
0x687635: fstp    [esp+444h+var_414]
0x687639: fld     [esp+444h+var_3F4]
0x68763D: fmul    st, st(4)
0x68763F: fstp    [esp+444h+var_424]
0x687643: fld     [esp+444h+var_3F0]
0x687647: fmul    st, st(4)
0x687649: fstp    [esp+444h+var_420]
0x68764D: fmul    st, st(3)
0x68764F: fstp    [esp+444h+var_428]
0x687653: fld     [esp+444h+var_424]
0x687657: fadd    [esp+444h+var_41C]
0x68765B: fstp    [esp+444h+var_424]
0x68765F: fld     [esp+444h+var_418]
0x687663: fadd    [esp+444h+var_420]
0x687667: fstp    [esp+444h+var_420]
0x68766B: fld     [esp+444h+var_428]
0x68766F: fadd    [esp+444h+var_414]
0x687673: fstp    [esp+444h+var_428]
0x687677: fld     [esp+444h+var_424]
0x68767B: fstp    [esp+444h+var_38C]
0x687682: mov     ecx, [esp+444h+var_38C]
0x687689: fld     [esp+444h+var_420]
0x68768D: mov     [esp+444h+var_41C], ecx
0x687691: fstp    [esp+444h+var_388]
0x687698: mov     edx, [esp+444h+var_388]
0x68769F: fld     [esp+444h+var_428]
0x6876A3: mov     [esp+444h+var_418], edx
0x6876A7: fstp    [esp+444h+var_384]
0x6876AE: mov     eax, [esp+444h+var_384]
0x6876B5: mov     [esp+444h+var_414], eax
0x6876B9: jmp     loc_6872E6
