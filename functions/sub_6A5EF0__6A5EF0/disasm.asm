0x6A5EF0: push    ebp
0x6A5EF1: mov     ebp, esp
0x6A5EF3: and     esp, 0FFFFFFF0h
0x6A5EF6: push    0FFFFFFFFh
0x6A5EF8: push    offset SEH_6A5EF0
0x6A5EFD: mov     eax, large fs:0
0x6A5F03: push    eax
0x6A5F04: sub     esp, 4A8h
0x6A5F0A: mov     eax, ds:0B30AACh
0x6A5F0F: xor     eax, esp
0x6A5F11: mov     [esp+4B4h+var_14], eax
0x6A5F18: push    ebx
0x6A5F19: push    esi
0x6A5F1A: push    edi
0x6A5F1B: mov     eax, ds:0B30AACh
0x6A5F20: xor     eax, esp
0x6A5F22: push    eax
0x6A5F23: lea     eax, [esp+4C4h+var_C]
0x6A5F2A: mov     large fs:0, eax
0x6A5F30: mov     esi, [ebp+arg_4]
0x6A5F33: mov     edi, ecx
0x6A5F35: mov     ecx, [edi+20h]; this
0x6A5F38: xor     ebx, ebx
0x6A5F3A: cmp     ecx, ebx
0x6A5F3C: jz      short loc_6A5F49
0x6A5F3E: call    MagicTarget_GetParentActor
0x6A5F43: mov     [esp+4C4h+var_4A0], eax
0x6A5F47: jmp     short loc_6A5F4D
0x6A5F49: mov     [esp+4C4h+var_4A0], ebx
0x6A5F4D: mov     edi, [edi+38h]
0x6A5F50: push    ebx; int
0x6A5F51: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x6A5F56: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A5F5B: push    ebx; int
0x6A5F5C: push    edi; void *
0x6A5F5D: call    OblivionDynamicCast
0x6A5F62: push    eax
0x6A5F63: call    sub_46D5C0
0x6A5F68: fstp    [esp+4DCh+var_4A8]
0x6A5F6C: fld     dword ptr ds:0A56670h
0x6A5F72: add     esp, 18h
0x6A5F75: fcom    [esp+4C4h+var_4A8]
0x6A5F79: fnstsw  ax
0x6A5F7B: test    ah, 41h
0x6A5F7E: jnz     short loc_6A5F86
0x6A5F80: fstp    [esp+4C4h+var_4A8]
0x6A5F84: jmp     short loc_6A5F88
0x6A5F86: fstp    st
0x6A5F88: push    14h; Size
0x6A5F8A: call    FormHeapAlloc
0x6A5F8F: add     esp, 4
0x6A5F92: mov     [esp+4C4h+var_4A4], eax
0x6A5F96: cmp     eax, ebx
0x6A5F98: mov     [esp+4C4h+var_4], ebx
0x6A5F9F: jz      short loc_6A5FC4
0x6A5FA1: fld     [esp+4C4h+var_4A8]
0x6A5FA5: push    1; float
0x6A5FA7: fmul    qword ptr ds:0A2FAA0h
0x6A5FAD: push    ecx
0x6A5FAE: mov     ecx, eax
0x6A5FB0: fstp    [esp+4CCh+var_4AC]
0x6A5FB4: fld     [esp+4CCh+var_4AC]
0x6A5FB8: fstp    [esp+4CCh+var_4CC]; float
0x6A5FBB: call    sub_532090
0x6A5FC0: mov     edi, eax
0x6A5FC2: jmp     short loc_6A5FC6
0x6A5FC4: xor     edi, edi
0x6A5FC6: lea     ecx, [esp+4C4h+var_470]
0x6A5FCA: call    sub_532250
0x6A5FCF: cmp     edi, ebx
0x6A5FD1: mov     [esp+4C4h+var_4], 1
0x6A5FDC: mov     [esp+4C4h+var_470], 1Bh
0x6A5FE4: jz      short loc_6A5FEF
0x6A5FE6: mov     eax, [edi+8]
0x6A5FE9: mov     [esp+4C4h+var_46C], eax
0x6A5FED: jmp     short loc_6A5FF3
0x6A5FEF: mov     [esp+4C4h+var_46C], ebx
0x6A5FF3: fldz
0x6A5FF5: lea     ecx, [esp+4C4h+var_470]
0x6A5FF9: fst     [esp+4C4h+var_44C]
0x6A5FFD: push    ecx
0x6A5FFE: fst     [esp+4C8h+var_448]
0x6A6005: lea     ecx, [esp+4C8h+var_490]
0x6A6009: fst     [esp+4C8h+var_444]
0x6A6010: fst     [esp+4C8h+var_440]
0x6A6017: fst     [esp+4C8h+var_438]
0x6A601E: fst     [esp+4C8h+var_434]
0x6A6025: fst     [esp+4C8h+var_430]
0x6A602C: fst     [esp+4C8h+var_42C]
0x6A6033: fst     [esp+4C8h+var_424]
0x6A603A: fld1
0x6A603C: fst     [esp+4C8h+var_450]
0x6A6040: fst     [esp+4C8h+var_43C]
0x6A6047: fstp    [esp+4C8h+var_428]
0x6A604E: fst     [esp+4C8h+var_420]
0x6A6055: fst     [esp+4C8h+var_41C]
0x6A605C: fst     [esp+4C8h+var_418]
0x6A6063: fstp    [esp+4C8h+var_414]
0x6A606A: call    sub_531FC0
0x6A606F: mov     ecx, [esp+4C4h+var_4A0]; this
0x6A6073: mov     byte ptr [esp+4C4h+var_4], 2
0x6A607B: call    TESObjectREFR_GetParentCell
0x6A6080: test    eax, eax
0x6A6082: jz      short loc_6A60B5
0x6A6084: mov     ecx, [esp+4C4h+var_4A0]; this
0x6A6088: call    TESObjectREFR_GetParentCell
0x6A608D: mov     ebx, eax
0x6A608F: mov     ecx, ebx; this
0x6A6091: call    TESObjectCELL_IsInterior
0x6A6096: test    al, al
0x6A6098: jz      short loc_6A60A4
0x6A609A: lea     ecx, [ebx+28h]
0x6A609D: call    sub_424180
0x6A60A2: jmp     short loc_6A60A9
0x6A60A4: mov     eax, ds:0B35C24h
0x6A60A9: push    eax
0x6A60AA: lea     ecx, [esp+4C8h+var_490]
0x6A60AE: call    sub_89F470
0x6A60B3: xor     ebx, ebx
0x6A60B5: fld     dword ptr ds:0A76BA0h
0x6A60BB: mov     ecx, offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x6A60C0: lea     edx, [esp+4C4h+var_340]
0x6A60C7: fst     [esp+4C4h+var_35C]
0x6A60CE: mov     eax, 80000008h
0x6A60D3: mov     [esp+4C4h+var_360], ecx
0x6A60DA: mov     [esp+4C4h+var_350], edx
0x6A60E1: mov     [esp+4C4h+var_348], eax
0x6A60E8: mov     [esp+4C4h+var_34C], ebx
0x6A60EF: fstp    [esp+4C4h+var_1BC]
0x6A60F6: mov     [esp+4C4h+var_1C0], ecx
0x6A60FD: lea     ecx, [esp+4C4h+var_1A0]
0x6A6104: mov     [esp+4C4h+var_1B0], ecx
0x6A610B: mov     [esp+4C4h+var_1A8], eax
0x6A6112: mov     [esp+4C4h+var_1AC], ebx
0x6A6119: fld     dword ptr ds:0A76B9Ch
0x6A611F: fst     [esp+4C4h+var_3F0]
0x6A6126: mov     eax, [esp+4C4h+var_488]
0x6A612A: test    eax, eax
0x6A612C: fstp    [esp+4C4h+var_3EC]
0x6A6133: fld     [esp+4C4h+var_4A8]
0x6A6137: mov     byte ptr [esp+4C4h+var_4], 4
0x6A613F: fmul    qword ptr ds:0A2FAA0h
0x6A6145: mov     ebx, eax
0x6A6147: fadd    qword ptr ds:0A3F3E8h
0x6A614D: fstp    [esp+4C4h+var_4AC]
0x6A6151: fld     [esp+4C4h+var_4AC]
0x6A6155: fst     [esp+4C4h+a2.z]
0x6A6159: fld     dword ptr [esi]
0x6A615B: fldz
0x6A615D: fadd    st(1), st
0x6A615F: fxch    st(1)
0x6A6161: fstp    [esp+4C4h+var_4AC]
0x6A6165: fld     [esp+4C4h+var_4AC]
0x6A6169: fst     [esp+4C4h+var_4A8]
0x6A616D: fld     dword ptr [esi+4]
0x6A6170: faddp   st(2), st
0x6A6172: fxch    st(1)
0x6A6174: fstp    [esp+4C4h+var_4AC]
0x6A6178: fld     [esp+4C4h+var_4AC]
0x6A617C: fst     [esp+4C4h+var_4AC]
0x6A6180: fld     [esp+4C4h+a2.z]
0x6A6184: fadd    dword ptr [esi+8]
0x6A6187: fstp    [esp+4C4h+var_4A4]
0x6A618B: fld     [esp+4C4h+var_4A8]
0x6A618F: fld     qword ptr ds:0A39088h
0x6A6195: fmul    st(1), st
0x6A6197: fxch    st(1)
0x6A6199: fstp    [esp+4C4h+var_410]
0x6A61A0: fld     [esp+4C4h+var_4AC]
0x6A61A4: fmul    st, st(1)
0x6A61A6: fstp    [esp+4C4h+var_40C]
0x6A61AD: fld     [esp+4C4h+var_4A4]
0x6A61B1: fmul    st, st(1)
0x6A61B3: fstp    [esp+4C4h+var_408]
0x6A61BA: fxch    st(3)
0x6A61BC: fstp    [esp+4C4h+a2.z]
0x6A61C0: fxch    st(1)
0x6A61C2: fstp    [esp+4C4h+var_4A4]
0x6A61C6: fstp    [esp+4C4h+var_4AC]
0x6A61CA: fld     [esp+4C4h+a2.z]
0x6A61CE: fadd    dword ptr [esi+8]
0x6A61D1: fstp    [esp+4C4h+var_4A8]
0x6A61D5: fld     [esp+4C4h+var_4A4]
0x6A61D9: fmul    st, st(1)
0x6A61DB: fstp    [esp+4C4h+var_400]
0x6A61E2: fld     [esp+4C4h+var_4AC]
0x6A61E6: fmul    st, st(1)
0x6A61E8: fstp    [esp+4C4h+var_3FC]
0x6A61EF: fmul    [esp+4C4h+var_4A8]
0x6A61F3: fstp    [esp+4C4h+var_3F8]
0x6A61FA: jz      short loc_6A6237
0x6A61FC: lea     ecx, [esp+4C4h+var_490]
0x6A6200: call    sub_89F570
0x6A6205: mov     edx, [ebx]
0x6A6207: mov     edx, [edx+30h]
0x6A620A: lea     eax, [esp+4C4h+var_360]
0x6A6211: push    eax
0x6A6212: lea     ecx, [esp+4C8h+var_1C0]
0x6A6219: push    ecx
0x6A621A: lea     eax, [esp+4CCh+var_400]
0x6A6221: push    eax
0x6A6222: lea     ecx, [esp+4D0h+var_410]
0x6A6229: push    ecx
0x6A622A: mov     ecx, ebx
0x6A622C: call    edx
0x6A622E: lea     ecx, [esp+4C4h+var_490]
0x6A6232: call    sub_89F570
0x6A6237: cmp     [esp+4C4h+var_34C], 0
0x6A623F: lea     ecx, [esp+4C4h+var_490]
0x6A6243: setnle  al
0x6A6246: test    al, al
0x6A6248: jz      loc_6A62EC
0x6A624E: call    sub_8AECA0
0x6A6253: test    edi, edi
0x6A6255: jz      short loc_6A6261
0x6A6257: mov     eax, [edi]
0x6A6259: mov     edx, [eax]
0x6A625B: push    1
0x6A625D: mov     ecx, edi
0x6A625F: call    edx
0x6A6261: lea     ecx, [esp+4C4h+var_1C0]; this
0x6A6268: mov     byte ptr [esp+4C4h+var_4], 3
0x6A6270: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6275: lea     ecx, [esp+4C4h+var_360]; this
0x6A627C: mov     byte ptr [esp+4C4h+var_4], 2
0x6A6284: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6289: lea     ecx, [esp+4C4h+var_490]; this
0x6A628D: mov     byte ptr [esp+4C4h+var_4], 1
0x6A6295: call    ??1bhkSimpleShapePhantom@@UAE@XZ; bhkSimpleShapePhantom::~bhkSimpleShapePhantom(void)
0x6A629A: mov     eax, [esp+4C4h+var_45C]
0x6A629E: test    eax, eax
0x6A62A0: mov     [esp+4C4h+var_4], 0FFFFFFFFh
0x6A62AB: js      short loc_6A62E5
0x6A62AD: mov     ecx, ds:0BA9DE4h
0x6A62B3: mov     edx, large fs:2Ch
0x6A62BA: mov     ecx, [edx+ecx*4]
0x6A62BD: mov     ecx, [ecx+19Ch]
0x6A62C3: test    ecx, ecx
0x6A62C5: jnz     short loc_6A62CD
0x6A62C7: mov     ecx, ds:0BA7D9Ch
0x6A62CD: mov     edx, [esp+4C4h+var_464]
0x6A62D1: and     eax, 3FFFFFFFh
0x6A62D6: add     eax, eax
0x6A62D8: add     eax, eax
0x6A62DA: push    14h
0x6A62DC: add     eax, eax
0x6A62DE: push    eax
0x6A62DF: push    edx
0x6A62E0: call    sub_8A75D0
0x6A62E5: xor     al, al
0x6A62E7: jmp     loc_6A649D
0x6A62EC: call    sub_8AECA0
0x6A62F1: xor     ebx, ebx
0x6A62F3: cmp     edi, ebx
0x6A62F5: jz      short loc_6A6301
0x6A62F7: mov     eax, [edi]
0x6A62F9: mov     edx, [eax]
0x6A62FB: push    1
0x6A62FD: mov     ecx, edi
0x6A62FF: call    edx
0x6A6301: fldz
0x6A6303: mov     edi, [esp+4C4h+var_4A0]
0x6A6307: push    ecx
0x6A6308: fstp    [esp+4C8h+var_4C8]; float
0x6A630B: mov     ecx, edi; this
0x6A630D: call    TESObjectREFR_GetParentCell
0x6A6312: push    eax; int
0x6A6313: push    esi; int
0x6A6314: mov     ecx, edi
0x6A6316: call    Actor_IsUnderwater??
0x6A631B: test    al, al
0x6A631D: jz      short loc_6A6373
0x6A631F: mov     byte ptr [esp+4C4h+var_4], 3
0x6A6327: lea     ecx, [esp+4C4h+var_1C0]; this
0x6A632E: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6333: lea     ecx, [esp+4C4h+var_360]; this
0x6A633A: mov     byte ptr [esp+4C4h+var_4], 2
0x6A6342: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6347: lea     ecx, [esp+4C4h+var_490]; this
0x6A634B: mov     byte ptr [esp+4C4h+var_4], 1
0x6A6353: call    ??1bhkSimpleShapePhantom@@UAE@XZ; bhkSimpleShapePhantom::~bhkSimpleShapePhantom(void)
0x6A6358: lea     ecx, [esp+4C4h+var_470]
0x6A635C: mov     [esp+4C4h+var_4], 0FFFFFFFFh
0x6A6367: call    sub_8A5090
0x6A636C: xor     al, al
0x6A636E: jmp     loc_6A649D
0x6A6373: fld1
0x6A6375: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x6A637C: fstp    [esp+4C4h+var_3E0.WorldRayCastOutput.HitFraction]
0x6A6383: mov     [esp+4C4h+var_3E0.WorldRayCastInput.EnableShapeCollectionFilter], bl
0x6A638A: mov     [esp+4C4h+var_3E0.WorldRayCastOutput.RootCollidable], ebx
0x6A6391: mov     [esp+4C4h+var_3E0.BroadPhaseAabbCache], ebx
0x6A6398: mov     [esp+4C4h+var_3E0.RayHitCollector1], ebx
0x6A639F: mov     [esp+4C4h+var_3E0.RayHitCollector2], ebx
0x6A63A6: movaps  xmmword ptr [esp+4C4h+var_3E0.unk60.x], xmm0
0x6A63AE: mov     [esp+4C4h+var_3E0.WorldRayCastInput.FilterInfo], 1Bh
0x6A63B9: mov     eax, [edi]
0x6A63BB: mov     edx, [eax+174h]
0x6A63C1: mov     ecx, edi
0x6A63C3: call    edx
0x6A63C5: mov     ecx, [eax]
0x6A63C7: mov     edx, [eax+4]
0x6A63CA: mov     eax, [eax+8]
0x6A63CD: mov     [esp+4C4h+var_474], eax
0x6A63D1: fld     [esp+4C4h+var_474]
0x6A63D5: fld     qword ptr ds:0A4D910h
0x6A63DB: mov     eax, [esi+8]
0x6A63DE: fadd    st(1), st
0x6A63E0: mov     [esp+4C4h+var_47C], ecx
0x6A63E4: mov     ecx, [esi]
0x6A63E6: fxch    st(1)
0x6A63E8: mov     [esp+4C4h+a2.x], ecx
0x6A63EC: fstp    [esp+4C4h+var_474]
0x6A63F0: mov     [esp+4C4h+a2.z], eax
0x6A63F4: lea     ecx, [esp+4C4h+var_47C]
0x6A63F8: fadd    [esp+4C4h+a2.z]
0x6A63FC: mov     [esp+4C4h+var_478], edx
0x6A6400: mov     edx, [esi+4]
0x6A6403: push    ecx
0x6A6404: lea     ecx, [esp+4C8h+var_3E0]
0x6A640B: fstp    [esp+4C8h+a2.z]
0x6A640F: mov     [esp+4C8h+a2.y], edx
0x6A6413: call    bhkWorldRayCastData__SetCastInputFrom
0x6A6418: lea     edx, [esp+4C4h+a2]
0x6A641C: push    edx; a2
0x6A641D: lea     ecx, [esp+4C8h+var_3E0]; this
0x6A6424: call    bhkWorldRayCastData__SetCastInputTo
0x6A6429: mov     ecx, ds:0B333A0h; this
0x6A642F: lea     eax, [esp+4C4h+var_3E0]
0x6A6436: push    eax; a2
0x6A6437: call    TES__CastRay
0x6A643C: cmp     [esp+4C4h+var_3E0.WorldRayCastOutput.RootCollidable], ebx
0x6A6443: mov     byte ptr [esp+4C4h+var_4], 3
0x6A644B: setnz   al
0x6A644E: test    al, al
0x6A6450: lea     ecx, [esp+4C4h+var_1C0]; this
0x6A6457: jnz     loc_6A632E
0x6A645D: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6462: lea     ecx, [esp+4C4h+var_360]; this
0x6A6469: mov     byte ptr [esp+4C4h+var_4], 2
0x6A6471: call    ??1hkAllCdPointCollector@@UAE@XZ; hkAllCdPointCollector::~hkAllCdPointCollector(void)
0x6A6476: lea     ecx, [esp+4C4h+var_490]; this
0x6A647A: mov     byte ptr [esp+4C4h+var_4], 1
0x6A6482: call    ??1bhkSimpleShapePhantom@@UAE@XZ; bhkSimpleShapePhantom::~bhkSimpleShapePhantom(void)
0x6A6487: lea     ecx, [esp+4C4h+var_470]
0x6A648B: mov     [esp+4C4h+var_4], 0FFFFFFFFh
0x6A6496: call    sub_8A5090
0x6A649B: mov     al, 1
0x6A649D: mov     ecx, dword ptr [esp+4C4h+var_C]
0x6A64A4: mov     large fs:0, ecx
0x6A64AB: pop     ecx
0x6A64AC: pop     edi
0x6A64AD: pop     esi
0x6A64AE: pop     ebx
0x6A64AF: mov     ecx, [esp+4B4h+var_14]
0x6A64B6: xor     ecx, esp
0x6A64B8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6A64BD: mov     esp, ebp
0x6A64BF: pop     ebp
0x6A64C0: retn    8
