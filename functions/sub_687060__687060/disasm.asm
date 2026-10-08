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
0x6870E1: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x6870E6: mov     ebx, eax
0x6870E8: test    ebx, ebx
0x6870EA: mov     [esp+444h+slot], ebx
0x6870EE: jz      loc_68784D
0x6870F4: mov     ecx, [ebx+8]
0x6870F7: test    ecx, ecx
0x6870F9: jz      short loc_687102
0x6870FB: call    bhkCollisionWrapper_GetHavokObject; bhk collision wrapper accessor: returns stored low-level Havok object pointer at wrapper+0x30.
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
0x6871B0: call    bhkCharacterProxy_GetCollisionFilterInfo; Reads collision filter info from proxy metadata: proxy+0x364 -> +8 -> +0x14 -> +0x1C. Used to preserve actor identity in raycast filter high 16 bits.
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
0x687244: call    Vector3_NormalizeInPlace; Vector3_NormalizeInPlace. Returns original length in ST0; if length <= epsilon at 0xA372CC, zeroes xyz and returns 0. PlaceAtMe uses it to normalize the ray hit vector before scaling by hit distance.
0x687249: fstp    st
0x68724B: lea     ecx, [esp+444h+var_3F4]
0x68724F: call    Vector3_NormalizeInPlace; Vector3_NormalizeInPlace. Returns original length in ST0; if length <= epsilon at 0xA372CC, zeroes xyz and returns 0. PlaceAtMe uses it to normalize the ray hit vector before scaling by hit distance.
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
0x6872B9: mov     [esp+444h+start.x], ecx
0x6872BD: mov     [esp+444h+start.y], edx
0x6872C1: mov     [esp+444h+start.z], eax
0x6872C5: ja      def_6872CB
0x6872CB: jmp     ds:jpt_6872CB[edi*4]; switch jump
0x6872D2: fstp    st(5); jumptable 006872CB case 0
0x6872D4: fstp    st(3)
0x6872D6: fstp    st(1)
0x6872D8: fld     [esp+444h+start.z]
0x6872DC: faddp   st(3), st
0x6872DE: fxch    st(2)
0x6872E0: fstp    [esp+444h+start.z]
0x6872E4: fxch    st(1)
0x6872E6: fld     [esp+444h+start.x]
0x6872EA: mov     ecx, [esp+444h+var_404]
0x6872EE: fld     st
0x6872F0: lea     eax, [edi+edi*2]
0x6872F3: fmul    st, st(3)
0x6872F5: shl     eax, 4
0x6872F8: cmp     ds:0B333B4h, ecx
0x6872FE: mov     [esp+eax+444h+var_2BC], ebx
0x687305: fstp    dword ptr [esp+444h+var_340]
0x68730C: fld     [esp+444h+start.y]
0x687310: fld     st
0x687312: fmul    st, st(4)
0x687314: fstp    dword ptr [esp+444h+var_340+4]
0x68731B: fld     [esp+444h+start.z]
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
0x687365: push    edx; endColor
0x687366: fstp    st(2)
0x687368: lea     eax, [esp+448h+end]
0x68736C: fldz
0x68736E: push    eax; end
0x68736F: fst     [esp+44Ch+var_3B4]
0x687376: lea     ecx, [esp+44Ch+var_3C4]
0x68737D: fst     [esp+44Ch+var_3AC]
0x687384: push    ecx; startColor
0x687385: fst     [esp+450h+var_3A8]
0x68738C: lea     edx, [esp+450h+start]
0x687390: fxch    st(1)
0x687392: push    edx; start
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
0x6873C2: fstp    [esp+454h+end.x]
0x6873C9: fld     [esp+454h+var_420]
0x6873CD: fstp    [esp+454h+end.y]
0x6873D4: fld     [esp+454h+var_428]
0x6873D8: fstp    [esp+454h+end.z]
0x6873DF: fstp    [esp+454h+var_3C4]
0x6873E6: fst     [esp+454h+var_3C0]
0x6873ED: fst     [esp+454h+var_3BC]
0x6873F4: fstp    [esp+454h+var_3B8]
0x6873FB: call    NiLines_CreateSegment; Verified generic NiLines_CreateSegment: copies two endpoint positions and two per-vertex colors, supplies line flags [1,0], and returns a two-vertex NiLines segment. TESPathGrid_RebuildRenderedGraph calls it for adjacency edges.
0x687400: add     esp, 10h
0x687403: mov     [esp+444h+var_428], eax
0x687407: call    DebugRender_GetOrCreateVertexColorProperty; Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
0x68740C: mov     ecx, [esp+444h+var_428]; this
0x687410: push    eax; a2
0x687411: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
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
0x687459: fadd    [esp+444h+start.z]
0x68745D: fstp    [esp+444h+start.z]
0x687461: jmp     loc_6872E6
0x687466: fstp    st(3); jumptable 006872CB case 2
0x687468: fld     [esp+444h+start.z]
0x68746C: faddp   st(3), st
0x68746E: fxch    st(2)
0x687470: fstp    [esp+444h+start.z]
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
0x687496: fadd    [esp+444h+start.x]
0x68749A: fstp    [esp+444h+var_428]
0x68749E: fld     [esp+444h+start.y]
0x6874A2: fadd    [esp+444h+var_420]
0x6874A6: fstp    [esp+444h+var_420]
0x6874AA: fld     [esp+444h+var_424]
0x6874AE: fadd    [esp+444h+start.z]
0x6874B2: fstp    [esp+444h+var_424]
0x6874B6: fld     [esp+444h+var_428]
0x6874BA: fstp    [esp+444h+var_398]
0x6874C1: mov     ecx, [esp+444h+var_398]
0x6874C8: fld     [esp+444h+var_420]
0x6874CC: mov     [esp+444h+start.x], ecx
0x6874D0: fstp    [esp+444h+var_394]
0x6874D7: mov     edx, [esp+444h+var_394]
0x6874DE: fld     [esp+444h+var_424]
0x6874E2: mov     [esp+444h+start.y], edx
0x6874E6: fstp    [esp+444h+var_390]
0x6874ED: mov     eax, [esp+444h+var_390]
0x6874F4: mov     [esp+444h+start.z], eax
0x6874F8: jmp     loc_6872E6
0x6874FD: fstp    st(5); jumptable 006872CB case 3
0x6874FF: fstp    st(3)
0x687501: fld     [esp+444h+start.z]
0x687505: faddp   st(4), st
0x687507: fxch    st(3)
0x687509: fstp    [esp+444h+start.z]
0x68750D: fld     [esp+444h+var_3F4]
0x687511: fmul    st, st(4)
0x687513: fstp    [esp+444h+var_424]
0x687517: fld     [esp+444h+var_3F0]
0x68751B: fmul    st, st(4)
0x68751D: fstp    [esp+444h+var_420]
0x687521: fmul    st, st(3)
0x687523: fstp    [esp+444h+var_428]
0x687527: fld     [esp+444h+var_424]
0x68752B: fadd    [esp+444h+start.x]
0x68752F: fstp    [esp+444h+var_424]
0x687533: fld     [esp+444h+start.y]
0x687537: fadd    [esp+444h+var_420]
0x68753B: fstp    [esp+444h+var_420]
0x68753F: fld     [esp+444h+var_428]
0x687543: fadd    [esp+444h+start.z]
0x687547: fstp    [esp+444h+var_428]
0x68754B: fld     [esp+444h+var_424]
0x68754F: fstp    [esp+444h+var_380]
0x687556: mov     ecx, [esp+444h+var_380]
0x68755D: fld     [esp+444h+var_420]
0x687561: mov     [esp+444h+start.x], ecx
0x687565: fstp    [esp+444h+var_37C]
0x68756C: mov     edx, [esp+444h+var_37C]
0x687573: fld     [esp+444h+var_428]
0x687577: mov     [esp+444h+start.y], edx
0x68757B: fstp    [esp+444h+var_378]
0x687582: mov     eax, [esp+444h+var_378]
0x687589: mov     [esp+444h+start.z], eax
0x68758D: jmp     loc_6872E4
0x687592: fstp    st; jumptable 006872CB case 4
0x687594: fstp    st(2)
0x687596: fld     [esp+444h+start.z]
0x68759A: fadd    st, st(6)
0x68759C: fstp    [esp+444h+start.z]
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
0x6875C2: fadd    [esp+444h+start.x]
0x6875C6: fstp    [esp+444h+var_424]
0x6875CA: fld     [esp+444h+start.y]
0x6875CE: fadd    [esp+444h+var_420]
0x6875D2: fstp    [esp+444h+var_420]
0x6875D6: fld     [esp+444h+var_428]
0x6875DA: fadd    [esp+444h+start.z]
0x6875DE: fstp    [esp+444h+var_428]
0x6875E2: fld     [esp+444h+var_424]
0x6875E6: fstp    [esp+444h+var_3A4]
0x6875ED: mov     ecx, [esp+444h+var_3A4]
0x6875F4: fld     [esp+444h+var_420]
0x6875F8: mov     [esp+444h+start.x], ecx
0x6875FC: fstp    [esp+444h+var_3A0]
0x687603: mov     edx, [esp+444h+var_3A0]
0x68760A: fld     [esp+444h+var_428]
0x68760E: mov     [esp+444h+start.y], edx
0x687612: fstp    [esp+444h+var_39C]
0x687619: mov     eax, [esp+444h+var_39C]
0x687620: mov     [esp+444h+start.z], eax
0x687624: jmp     loc_6872E6
0x687629: fstp    st; jumptable 006872CB case 5
0x68762B: fstp    st(4)
0x68762D: fstp    st(2)
0x68762F: fld     [esp+444h+start.z]
0x687633: fadd    st, st(5)
0x687635: fstp    [esp+444h+start.z]
0x687639: fld     [esp+444h+var_3F4]
0x68763D: fmul    st, st(4)
0x68763F: fstp    [esp+444h+var_424]
0x687643: fld     [esp+444h+var_3F0]
0x687647: fmul    st, st(4)
0x687649: fstp    [esp+444h+var_420]
0x68764D: fmul    st, st(3)
0x68764F: fstp    [esp+444h+var_428]
0x687653: fld     [esp+444h+var_424]
0x687657: fadd    [esp+444h+start.x]
0x68765B: fstp    [esp+444h+var_424]
0x68765F: fld     [esp+444h+start.y]
0x687663: fadd    [esp+444h+var_420]
0x687667: fstp    [esp+444h+var_420]
0x68766B: fld     [esp+444h+var_428]
0x68766F: fadd    [esp+444h+start.z]
0x687673: fstp    [esp+444h+var_428]
0x687677: fld     [esp+444h+var_424]
0x68767B: fstp    [esp+444h+var_38C]
0x687682: mov     ecx, [esp+444h+var_38C]
0x687689: fld     [esp+444h+var_420]
0x68768D: mov     [esp+444h+start.x], ecx
0x687691: fstp    [esp+444h+var_388]
0x687698: mov     edx, [esp+444h+var_388]
0x68769F: fld     [esp+444h+var_428]
0x6876A3: mov     [esp+444h+start.y], edx
0x6876A7: fstp    [esp+444h+var_384]
0x6876AE: mov     eax, [esp+444h+var_384]
0x6876B5: mov     [esp+444h+start.z], eax
0x6876B9: jmp     loc_6872E6
0x683C10: mov     dword ptr [ecx], offset ??_7hkBroadPhaseCastCollector@@6B@; const hkBroadPhaseCastCollector::`vftable'
0x683C16: retn
0x6876CB: fstp    st(2)
0x6876CD: fstp    st
0x6876CF: fstp    st
0x6876D1: fld     [esp+444h+a2]
0x6876D5: fxch    st(2)
0x6876D7: fxch    st(3)
0x6876D9: fxch    st(1)
0x6876DB: fxch    st(2)
0x6876DD: add     edi, 1
0x6876E0: cmp     edi, 6
0x6876E3: jl      loc_687290
0x6876E9: fstp    st(1)
0x6876EB: xor     ebx, ebx
0x6876ED: fstp    st(1)
0x6876EF: mov     [esp+444h+var_330], offset ??_7hkWorldRayCaster@@6B@; const hkWorldRayCaster::`vftable'
0x6876FA: fstp    st
0x6876FC: mov     [esp+444h+var_2F0], ebx
0x687703: fstp    st(1)
0x687705: mov     [esp+444h+var_2EC], ebx
0x68770C: fstp    st
0x68770E: lea     ecx, [esp+444h+var_1C0]
0x687715: mov     [esp+444h+var_4], ebx
0x68771C: call    sub_538C00
0x687721: mov     edx, [esi]
0x687723: mov     eax, [edx+58h]
0x687726: mov     ecx, esi
0x687728: mov     byte ptr [esp+444h+var_4], 1
0x687730: call    eax
0x687732: mov     edx, [esi]
0x687734: mov     eax, [edx+58h]
0x687737: mov     ecx, esi
0x687739: call    eax
0x68773B: mov     edx, [esi]
0x68773D: mov     edi, [eax+78h]
0x687740: mov     eax, [edx+58h]
0x687743: mov     ecx, esi
0x687745: call    eax
0x687747: mov     eax, [eax+64h]
0x68774A: push    ebx
0x68774B: lea     ecx, [esp+448h+var_1C0]
0x687752: push    ecx
0x687753: push    edi
0x687754: push    5
0x687756: lea     edx, [esp+454h+var_2E0]
0x68775D: push    edx
0x68775E: push    eax
0x68775F: lea     ecx, [esp+45Ch+var_330]
0x687766: call    sub_8BA2C0
0x68776B: mov     eax, [esi]
0x68776D: mov     edx, [eax+58h]
0x687770: mov     ecx, esi
0x687772: call    edx
0x687774: mov     ecx, [esp+444h+var_1AC]
0x68777B: cmp     ecx, ebx
0x68777D: jz      loc_687839
0x687783: mov     eax, [esp+444h+slot]
0x687787: mov     eax, [eax+364h]
0x68778D: cmp     eax, ebx
0x68778F: jz      short loc_6877AE
0x687791: mov     eax, [eax+8]
0x687794: cmp     eax, ebx
0x687796: jz      short loc_6877A7
0x687798: add     eax, 14h
0x68779B: cmp     eax, ebx
0x68779D: jz      short loc_6877A7
0x68779F: mov     eax, [eax+1Ch]
0x6877A2: shr     eax, 10h
0x6877A5: jmp     short loc_6877B0
0x6877A7: xor     eax, eax
0x6877A9: shr     eax, 10h
0x6877AC: jmp     short loc_6877B0
0x6877AE: xor     eax, eax
0x6877B0: shl     eax, 10h
0x6877B3: or      eax, 1Bh
0x6877B6: xor     esi, esi
0x6877B8: cmp     ecx, ebx
0x6877BA: mov     [esp+444h+slot], eax
0x6877BE: mov     [esp+444h+var_404], ecx
0x6877C2: jle     short loc_687839
0x6877C4: jmp     short loc_6877D0
0x6877D0: mov     ecx, [esp+444h+var_1B0]
0x6877D7: mov     edi, [ecx+ebx+20h]
0x6877DB: test    edi, edi
0x6877DD: mov     [esp+444h+var_424], edi
0x6877E1: jz      short loc_68782D
0x6877E3: mov     ecx, [edi+1Ch]
0x6877E6: mov     eax, ecx
0x6877E8: and     eax, 3Fh
0x6877EB: sub     eax, 0Ch
0x6877EE: jz      short loc_68780A
0x6877F0: sub     eax, 2
0x6877F3: jz      short loc_68780A
0x6877F5: sub     eax, 2
0x6877F8: jz      short loc_68780A
0x6877FA: mov     edx, [esp+444h+slot]
0x6877FE: push    edx
0x6877FF: push    ecx
0x687800: call    sub_8A7F70
0x687805: add     esp, 8
0x687808: jmp     short loc_687829
0x68780A: push    edi
0x68780B: call    sub_4806E0
0x687810: push    eax
0x687811: call    sub_4DC270; NiAVObject -> owning TES reference resolver. Walks up NiNode parents and extra data to recover TESObjectREFR/Player. Climb probe can use this on TES::CastRay return to reject self and dynamic actors.
0x687816: add     esp, 8
0x687819: test    eax, eax
0x68781B: jz      short loc_68782D
0x68781D: mov     edx, [eax]
0x68781F: mov     ecx, eax
0x687821: mov     eax, [edx+88h]
0x687827: call    eax
0x687829: test    al, al
0x68782B: jnz     short loc_687873
0x68782D: add     esi, 1
0x687830: add     ebx, 30h ; '0'
0x687833: cmp     esi, [esp+444h+var_404]
0x687837: jl      short loc_6877D0
0x687839: lea     ecx, [esp+444h+var_1C0]
0x687840: mov     byte ptr [esp+444h+var_4], 0
0x687848: call    sub_538C80
0x68784D: xor     al, al
0x68784F: mov     ecx, [esp+444h+var_C]
0x687856: mov     large fs:0, ecx
0x68785D: pop     ecx
0x68785E: pop     edi
0x68785F: pop     esi
0x687860: pop     ebx
0x687861: mov     ecx, [esp+434h+var_14]
0x687868: xor     ecx, esp
0x68786A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x68786F: mov     esp, ebp
0x687871: pop     ebp
0x687872: retn
0x687873: cmp     [ebp+arg_C], 0
0x687877: jz      loc_687A60
0x68787D: fld1
0x68787F: mov     edx, [esp+444h+var_3E8]
0x687883: fst     [esp+444h+var_3C4]
0x68788A: lea     ecx, [esp+444h+var_3C4]
0x687891: fldz
0x687893: push    ecx; endColor
0x687894: mov     ecx, [esp+448h+var_3E4]
0x687898: fst     [esp+448h+var_3C0]
0x68789F: fst     [esp+448h+var_3BC]
0x6878A6: push    edx; end
0x6878A7: fst     [esp+44Ch+var_3B8]
0x6878AE: lea     eax, [esp+44Ch+var_3B4]
0x6878B5: fst     [esp+44Ch+var_3B0]
0x6878BC: push    eax; startColor
0x6878BD: fst     [esp+450h+var_3AC]
0x6878C4: push    ecx; start
0x6878C5: fstp    [esp+454h+var_3A8]
0x6878CC: fstp    [esp+454h+var_3B4]
0x6878D3: call    NiLines_CreateSegment; Verified generic NiLines_CreateSegment: copies two endpoint positions and two per-vertex colors, supplies line flags [1,0], and returns a two-vertex NiLines segment. TESPathGrid_RebuildRenderedGraph calls it for adjacency edges.
0x6878D8: add     esp, 10h
0x6878DB: mov     esi, eax
0x6878DD: call    DebugRender_GetOrCreateVertexColorProperty; Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
0x6878E2: push    eax; a2
0x6878E3: mov     ecx, esi; this
0x6878E5: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x6878EA: fld     dword ptr ds:0A3D8F0h
0x6878F0: push    ecx
0x6878F1: mov     ecx, ds:0B333A0h
0x6878F7: fstp    [esp+448h+var_448]; float
0x6878FA: push    esi; int
0x6878FB: call    sub_440E60
0x687900: mov     eax, [edi]
0x687902: test    eax, eax
0x687904: jz      short loc_68790B
0x687906: mov     esi, [eax+8]
0x687909: jmp     short loc_68790D
0x68790B: xor     esi, esi
0x68790D: test    esi, esi
0x68790F: jz      loc_687A60
0x687915: push    0DCh ; 'Ü'; Size
0x68791A: call    FormHeapAlloc
0x68791F: add     esp, 4
0x687922: mov     [esp+444h+slot], eax
0x687926: test    eax, eax
0x687928: mov     byte ptr [esp+444h+var_4], 2
0x687930: jz      short loc_68793F
0x687932: push    0
0x687934: mov     ecx, eax; this
0x687936: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68793B: mov     ebx, eax
0x68793D: jmp     short loc_687941
0x68793F: xor     ebx, ebx
0x687941: mov     edx, [esi]
0x687943: mov     eax, [edx+90h]
0x687949: push    ebx
0x68794A: mov     ecx, esi
0x68794C: mov     byte ptr [esp+448h+var_4], 1
0x687954: call    eax
0x687956: push    1Ch; Size
0x687958: call    FormHeapAlloc
0x68795D: mov     esi, eax
0x68795F: add     esp, 4
0x687962: mov     [esp+444h+slot], esi
0x687966: test    esi, esi
0x687968: mov     byte ptr [esp+444h+var_4], 3
0x687970: jz      short loc_68798B
0x687972: mov     ecx, esi; this
0x687974: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x687979: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x68797F: mov     word ptr [esi+18h], 0
0x687985: mov     [esp+444h+a2], esi
0x687989: jmp     short loc_687997
0x68798B: mov     [esp+444h+a2], 0
0x687993: mov     esi, [esp+444h+a2]
0x687997: test    esi, esi
0x687999: mov     [esp+444h+slot], esi
0x68799D: jz      short loc_6879A9
0x68799F: lea     ecx, [esi+4]
0x6879A2: push    ecx; lpAddend
0x6879A3: call    dword ptr ds:0A28078h
0x6879A9: or      word ptr [esi+18h], 1
0x6879AE: mov     edi, [edi+8]
0x6879B1: lea     edx, [esp+444h+var_374]
0x6879B8: push    edi
0x6879B9: push    edx
0x6879BA: mov     byte ptr [esp+44Ch+var_4], 4
0x6879C2: call    sub_607740
0x6879C7: mov     eax, [esp+44Ch+var_424]
0x6879CB: lea     edi, [ebx+30h]
0x6879CE: mov     ecx, 9
0x6879D3: lea     esi, [esp+44Ch+var_374]
0x6879DA: rep movsd
0x6879DC: mov     eax, [eax+8]
0x6879DF: add     eax, 30h ; '0'
0x6879E2: push    eax
0x6879E3: lea     ecx, [esp+450h+end]
0x6879EA: push    ecx
0x6879EB: call    HavokVector_ToWorldVector; TES4 authoritative: converts Havok-unit vector to TES/world units using dbl_A372E0 (inverse hkFactor).
0x6879F0: mov     edx, [esp+454h+end.x]
0x6879F7: mov     eax, [esp+454h+end.y]
0x6879FE: mov     ecx, [esp+454h+end.z]
0x687A05: mov     [ebx+54h], edx
0x687A08: mov     [ebx+58h], eax
0x687A0B: add     esp, 10h
0x687A0E: mov     [ebx+5Ch], ecx
0x687A11: call    DebugRender_GetOrCreateVertexColorProperty; Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
0x687A16: push    eax; a2
0x687A17: mov     ecx, ebx; this
0x687A19: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x687A1E: mov     esi, [esp+444h+a2]
0x687A22: push    esi; a2
0x687A23: mov     ecx, ebx; this
0x687A25: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x687A2A: fld     dword ptr ds:0A3D8F0h
0x687A30: push    ecx
0x687A31: mov     ecx, ds:0B333A0h
0x687A37: fstp    [esp+448h+var_448]; float
0x687A3A: push    ebx; int
0x687A3B: call    sub_440E60
0x687A40: lea     edx, [esi+4]
0x687A43: push    edx; lpAddend
0x687A44: mov     byte ptr [esp+448h+var_4], 1
0x687A4C: call    dword ptr ds:0A2807Ch
0x687A52: test    eax, eax
0x687A54: jnz     short loc_687A60
0x687A56: mov     eax, [esi]
0x687A58: mov     edx, [eax]
0x687A5A: push    1
0x687A5C: mov     ecx, esi
0x687A5E: call    edx
0x687A60: lea     ecx, [esp+444h+var_1C0]
0x687A67: mov     byte ptr [esp+444h+var_4], 0
0x687A6F: call    sub_538C80
0x687A74: mov     al, 1
0x687A76: jmp     loc_68784F
0x9C4FB0: lea     ecx, [ebp+var_330]
0x9C4FB6: jmp     loc_683C10
0x9C4FBB: lea     ecx, [ebp+var_1C0]
0x9C4FC1: jmp     sub_538C80
0x9C4FC6: mov     eax, [ebp+slot]
0x9C4FCC: push    eax
0x9C4FCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C4FD2: pop     ecx
0x9C4FD3: retn
0x9C4FD4: mov     eax, [ebp+slot]
0x9C4FDA: push    eax
0x9C4FDB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C4FE0: pop     ecx
0x9C4FE1: retn
0x9C4FE2: lea     ecx, [ebp+slot]; slot
0x9C4FE8: jmp     NiPointerSlot_Release
0x9C4FED: mov     edx, [esp-4+arg_4]
0x9C4FF1: lea     eax, [edx-434h]
0x9C4FF7: mov     ecx, [edx-438h]
0x9C4FFD: xor     ecx, eax
0x9C4FFF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5004: add     eax, 0Ch
0x9C5007: mov     ecx, [edx-8]
0x9C500A: xor     ecx, eax
0x9C500C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5011: mov     eax, offset stru_AED814
0x9C5016: jmp     ___CxxFrameHandler3
