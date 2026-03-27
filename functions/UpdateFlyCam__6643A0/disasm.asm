0x6643A0: sub     esp, 8Ch
0x6643A6: mov     eax, ds:0B33398h
0x6643AB: push    esi
0x6643AC: push    edi
0x6643AD: mov     edi, [eax+20h]
0x6643B0: mov     esi, ecx
0x6643B2: push    1; a2
0x6643B4: mov     ecx, edi; this
0x6643B6: call    InputGlobals__GetMouseAxisMovement
0x6643BB: push    2; a2
0x6643BD: mov     ecx, edi; this
0x6643BF: mov     [esp+98h+var_7C], eax
0x6643C3: call    InputGlobals__GetMouseAxisMovement
0x6643C8: cmp     byte ptr ds:0B14F38h, 0
0x6643CF: mov     [esp+94h+var_80], eax
0x6643D3: jz      short loc_6643DB
0x6643D5: neg     eax
0x6643D7: mov     [esp+94h+var_80], eax
0x6643DB: fild    [esp+94h+var_7C]
0x6643DF: push    ecx
0x6643E0: lea     ecx, [esp+98h+var_24]
0x6643E4: fmul    dword ptr ds:0B14EE8h
0x6643EA: fadd    dword ptr [esi+74Ch]
0x6643F0: fstp    dword ptr [esi+74Ch]
0x6643F6: fild    [esp+98h+var_80]
0x6643FA: fmul    dword ptr ds:0B14EE8h
0x664400: fadd    dword ptr [esi+750h]
0x664406: fstp    dword ptr [esi+750h]
0x66440C: fld     dword ptr [esi+74Ch]
0x664412: fstp    [esp+98h+var_98]; float
0x664415: call    NiMatrix33_InitRotationTransform
0x66441A: fld     dword ptr [esi+750h]
0x664420: push    ecx
0x664421: lea     ecx, [esp+98h+var_48]
0x664425: fstp    [esp+98h+var_98]; float
0x664428: call    NiMatrix33_InitRotationTransposedTransform???
0x66442D: lea     ecx, [esp+94h+var_48]
0x664431: push    ecx
0x664432: lea     edx, [esp+98h+var_6C]
0x664436: push    edx
0x664437: lea     ecx, [esp+9Ch+var_24]
0x66443B: call    NiMAtrix33_Multiply
0x664440: mov     ecx, ds:0B3F9ACh
0x664446: mov     eax, ds:0B3F9A8h
0x66444B: mov     edx, ds:0B3F9B0h
0x664451: push    0; a3
0x664453: mov     dword ptr [esp+98h+var_8C+4], ecx
0x664457: push    0; a2
0x664459: mov     ecx, edi; this
0x66445B: mov     dword ptr [esp+9Ch+var_8C], eax
0x66445F: mov     [esp+9Ch+var_84], edx
0x664463: call    InputGlobals__QueryControlState
0x664468: test    eax, eax
0x66446A: jz      short loc_66447A
0x66446C: fld     dword ptr [esp+94h+var_8C+4]
0x664470: fadd    qword ptr ds:0A3F3E8h
0x664476: fstp    dword ptr [esp+94h+var_8C+4]
0x66447A: push    0; a3
0x66447C: push    1; a2
0x66447E: mov     ecx, edi; this
0x664480: call    InputGlobals__QueryControlState
0x664485: test    eax, eax
0x664487: jz      short loc_664497
0x664489: fld     dword ptr [esp+94h+var_8C+4]
0x66448D: fsub    qword ptr ds:0A3F3E8h
0x664493: fstp    dword ptr [esp+94h+var_8C+4]
0x664497: push    0; a3
0x664499: push    3; a2
0x66449B: mov     ecx, edi; this
0x66449D: call    InputGlobals__QueryControlState
0x6644A2: test    eax, eax
0x6644A4: jz      short loc_6644B4
0x6644A6: fld     dword ptr [esp+94h+var_8C]
0x6644AA: fadd    qword ptr ds:0A3F3E8h
0x6644B0: fstp    dword ptr [esp+94h+var_8C]
0x6644B4: push    0; a3
0x6644B6: push    2; a2
0x6644B8: mov     ecx, edi; this
0x6644BA: call    InputGlobals__QueryControlState
0x6644BF: test    eax, eax
0x6644C1: jz      short loc_6644D1
0x6644C3: fld     dword ptr [esp+94h+var_8C]
0x6644C7: fsub    qword ptr ds:0A3F3E8h
0x6644CD: fstp    dword ptr [esp+94h+var_8C]
0x6644D1: lea     eax, [esp+94h+var_8C]
0x6644D5: push    eax
0x6644D6: lea     ecx, [esp+98h+var_78]
0x6644DA: push    ecx
0x6644DB: lea     ecx, [esp+9Ch+var_6C]
0x6644DF: call    sub_7101F0
0x6644E4: fld     dword ptr [esi+754h]
0x6644EA: mov     edx, [eax]
0x6644EC: mov     dword ptr [esp+94h+var_8C], edx
0x6644F0: fadd    dword ptr [esp+94h+var_8C]
0x6644F4: mov     ecx, [eax+4]
0x6644F7: mov     dword ptr [esp+94h+var_8C+4], ecx
0x6644FB: mov     edx, [eax+8]
0x6644FE: fstp    dword ptr [esi+754h]
0x664504: fld     dword ptr [esi+758h]
0x66450A: mov     [esp+94h+var_84], edx
0x66450E: fadd    dword ptr [esp+94h+var_8C+4]
0x664512: fstp    dword ptr [esi+758h]
0x664518: fld     dword ptr [esi+75Ch]
0x66451E: fadd    [esp+94h+var_84]
0x664522: fstp    dword ptr [esi+75Ch]
0x664528: mov     eax, ds:0B333CCh
0x66452D: cmp     word ptr [eax+0B6h], 0
0x664535: ja      short loc_66453B
0x664537: xor     ecx, ecx
0x664539: jmp     short loc_664543
0x66453B: mov     ecx, [eax+0B0h]
0x664541: mov     ecx, [ecx]
0x664543: mov     edx, [esi+754h]
0x664549: mov     [ecx+54h], edx
0x66454C: mov     edx, [esi+758h]
0x664552: mov     [ecx+58h], edx
0x664555: mov     edx, [esi+75Ch]
0x66455B: mov     [ecx+5Ch], edx
0x66455E: cmp     word ptr [eax+0B6h], 0
0x664566: ja      short loc_66456C
0x664568: xor     ecx, ecx
0x66456A: jmp     short loc_664574
0x66456C: mov     ecx, [eax+0B0h]
0x664572: mov     ecx, [ecx]
0x664574: lea     edi, [ecx+30h]
0x664577: mov     ecx, 9
0x66457C: lea     esi, [esp+94h+var_6C]
0x664580: rep movsd
0x664582: cmp     word ptr [eax+0B6h], 0
0x66458A: pop     edi
0x66458B: pop     esi
0x66458C: ja      short loc_6645A3
0x66458E: fldz
0x664590: xor     ecx, ecx; this
0x664592: push    ecx; a3
0x664593: push    ecx
0x664594: fstp    [esp+94h+a2]; a2
0x664597: call    NiAVObject_UpdateNiAVObject
0x66459C: add     esp, 8Ch
0x6645A2: retn
0x6645A3: mov     edx, [eax+0B0h]
0x6645A9: fldz
0x6645AB: mov     ecx, [edx]; this
0x6645AD: push    0; a3
0x6645AF: push    ecx
0x6645B0: fstp    [esp+94h+a2]; a2
0x6645B3: call    NiAVObject_UpdateNiAVObject
0x6645B8: add     esp, 8Ch
0x6645BE: retn
