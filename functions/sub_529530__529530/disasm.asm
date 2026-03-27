0x529530: push    0FFFFFFFFh
0x529532: push    offset SEH_529530
0x529537: mov     eax, large fs:0
0x52953D: push    eax
0x52953E: sub     esp, 130h
0x529544: push    ebx
0x529545: push    ebp
0x529546: push    esi
0x529547: push    edi
0x529548: mov     eax, ds:0B30AACh
0x52954D: xor     eax, esp
0x52954F: push    eax
0x529550: lea     eax, [esp+150h+var_C]
0x529557: mov     large fs:0, eax
0x52955D: mov     esi, ecx
0x52955F: mov     ebx, ds:0B36308h
0x529565: test    ebx, ebx
0x529567: jz      loc_529725
0x52956D: lea     ebp, [esi+168h]
0x529573: push    ebp
0x529574: add     ebx, 29Ch
0x52957A: call    sub_552880
0x52957F: fld     [esp+154h+arg_0]
0x529586: fldz
0x529588: add     esp, 4
0x52958B: fsub    st(1), st
0x52958D: xor     edi, edi
0x52958F: fsubr   qword ptr ds:0A309F0h
0x529595: fdivp   st(1), st
0x529597: fstp    [esp+150h+var_138]
0x52959B: jmp     short loc_5295A0
0x52959D: align 10h
0x5295A0: push    edi
0x5295A1: push    0
0x5295A3: push    1
0x5295A5: push    ebx
0x5295A6: call    sub_5538F0
0x5295AB: fstp    [esp+160h+var_13C]
0x5295AF: fld     [esp+160h+var_13C]
0x5295B3: add     esp, 0Ch
0x5295B6: fldz
0x5295B8: fsub    st(1), st
0x5295BA: fxch    st(1)
0x5295BC: fmul    [esp+154h+var_138]
0x5295C0: faddp   st(1), st
0x5295C2: fstp    [esp+154h+var_13C]
0x5295C6: fld     [esp+154h+var_13C]
0x5295CA: fstp    [esp+154h+var_154]; float
0x5295CD: push    edi; int
0x5295CE: push    0; int
0x5295D0: push    1; int
0x5295D2: push    ebp; int
0x5295D3: call    sub_5539E0
0x5295D8: add     edi, 1
0x5295DB: add     esp, 14h
0x5295DE: cmp     edi, 1Fh
0x5295E1: jl      short loc_5295A0
0x5295E3: push    offset sub_43ACE0; a5
0x5295E8: push    offset sub_43EB30; a4
0x5295ED: push    4; size
0x5295EF: push    18h; a2
0x5295F1: lea     eax, [esp+160h+a1]
0x5295F5: push    eax; a1
0x5295F6: call    ArrayConstructor
0x5295FB: lea     ecx, [esp+150h+a1]
0x5295FF: push    ecx
0x529600: mov     ecx, esi
0x529602: mov     [esp+154h+var_4], 0
0x52960D: call    sub_5221C0
0x529612: push    0
0x529614: lea     edx, [esp+154h+a1]
0x529618: push    0
0x52961A: push    edx
0x52961B: call    BSFaceGen_GetAge
0x529620: fstp    [esp+15Ch+var_13C]
0x529624: fld     [esp+15Ch+arg_0]
0x52962B: add     esp, 0Ch
0x52962E: fdiv    qword ptr ds:0A309F0h
0x529634: fimul   dword ptr ds:0B362DCh
0x52963A: fadd    [esp+150h+var_13C]
0x52963E: call    Double_To_SInt32
0x529643: push    eax
0x529644: mov     ecx, esi
0x529646: call    TESNPC_SetFaceGenAge
0x52964B: lea     ecx, [esp+150h+var_D0]
0x529652: call    FaceGenHeadParameters_Ctor
0x529657: mov     ecx, [esi+0E8h]
0x52965D: lea     eax, [esp+150h+var_D0]
0x529664: push    eax
0x529665: push    esi
0x529666: mov     byte ptr [esp+158h+var_4], 1
0x52966E: call    TESRace_GetFaceGenHeadParameters
0x529673: mov     eax, [esi+1D4h]
0x529679: lea     ecx, [esp+150h+var_D0]
0x529680: push    ecx
0x529681: push    eax
0x529682: call    BSFaceGen_DoSomethingWithFaceGenNode
0x529687: mov     eax, [esi+1D8h]
0x52968D: lea     edx, [esp+158h+var_D0]
0x529694: push    edx
0x529695: push    eax
0x529696: call    BSFaceGen_DoSomethingWithFaceGenNode
0x52969B: fldz
0x52969D: fcomp   [esp+160h+arg_0]
0x5296A4: add     esp, 10h
0x5296A7: fnstsw  ax
0x5296A9: test    ah, 5
0x5296AC: jp      short loc_5296BE
0x5296AE: mov     eax, ds:0B36308h
0x5296B3: add     eax, 0A8h ; '¨'
0x5296B8: jz      short loc_5296CC
0x5296BA: mov     eax, [eax]
0x5296BC: jmp     short loc_5296C4
0x5296BE: mov     eax, [esi+1D0h]
0x5296C4: push    eax
0x5296C5: mov     ecx, esi
0x5296C7: call    sub_5263B0
0x5296CC: mov     esi, [esi+1D4h]
0x5296D2: test    esi, esi
0x5296D4: jz      short loc_5296F3
0x5296D6: mov     eax, [esi]
0x5296D8: mov     edx, [eax+9Ch]
0x5296DE: mov     ecx, esi
0x5296E0: call    edx
0x5296E2: test    eax, eax
0x5296E4: jz      short loc_5296F3
0x5296E6: fld     [esp+150h+arg_0]
0x5296ED: fstp    dword ptr [eax+1DCh]
0x5296F3: lea     ecx, [esp+150h+var_D0]
0x5296FA: mov     byte ptr [esp+150h+var_4], 0
0x529702: call    FaceGenHeadParameters_Dtor
0x529707: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x52970C: push    4; int
0x52970E: push    18h; unsigned int
0x529710: lea     eax, [esp+15Ch+a1]
0x529714: push    eax; void *
0x529715: mov     [esp+160h+var_4], 0FFFFFFFFh
0x529720: call    $LN21
0x529725: mov     ecx, [esp+150h+var_C]
0x52972C: mov     large fs:0, ecx
0x529733: pop     ecx
0x529734: pop     edi
0x529735: pop     esi
0x529736: pop     ebp
0x529737: pop     ebx
0x529738: add     esp, 13Ch
0x52973E: retn    4
