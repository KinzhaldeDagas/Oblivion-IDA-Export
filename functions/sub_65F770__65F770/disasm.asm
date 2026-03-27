0x65F770: sub     esp, 8
0x65F773: mov     eax, ds:0B33398h
0x65F778: push    esi
0x65F779: mov     esi, ecx
0x65F77B: mov     ecx, [eax+24h]
0x65F77E: call    sub_6AC3D0
0x65F783: lea     ecx, [esi+5Ch]
0x65F786: call    MagicCaster_InitializeCasting???
0x65F78B: mov     ecx, offset TimeGlobals
0x65F790: call    sub_4029D0
0x65F795: fdivr   qword ptr ds:0A2F938h
0x65F79B: mov     ecx, offset ActorProcessManager_ptr
0x65F7A0: fstp    [esp+0Ch+var_8]
0x65F7A4: call    sub_673B00
0x65F7A9: fadd    [esp+0Ch+var_8]
0x65F7AD: push    ecx
0x65F7AE: mov     ecx, offset ActorProcessManager_ptr
0x65F7B3: fstp    [esp+10h+var_4]
0x65F7B7: fld     [esp+10h+var_4]
0x65F7BB: fstp    [esp+10h+var_10]; float
0x65F7BE: call    sub_673B10
0x65F7C3: cmp     byte ptr ds:0B14E4Ch, 0
0x65F7CA: jz      loc_65F88D
0x65F7D0: cmp     byte ptr [esi+6E5h], 0
0x65F7D7: fld     dword ptr ds:0A71E4Ch
0x65F7DD: jnz     short loc_65F83C
0x65F7DF: cmp     byte ptr ds:0B3BD98h, 0
0x65F7E6: jz      short loc_65F84A
0x65F7E8: push    1; float
0x65F7EA: push    ecx
0x65F7EB: mov     ecx, offset ActorProcessManager_ptr
0x65F7F0: fstp    [esp+14h+var_14]; float
0x65F7F3: call    sub_677EC0
0x65F7F8: fld     dword ptr ds:0A71E4Ch
0x65F7FE: push    1; float
0x65F800: push    ecx
0x65F801: mov     ecx, offset ActorProcessManager_ptr
0x65F806: fstp    [esp+14h+var_14]; float
0x65F809: call    sub_674200
0x65F80E: fld     dword ptr ds:0A71E4Ch
0x65F814: push    1; float
0x65F816: push    ecx
0x65F817: mov     ecx, offset ActorProcessManager_ptr
0x65F81C: fstp    [esp+14h+var_14]; float
0x65F81F: call    sub_673E90
0x65F824: fld     dword ptr ds:0A71E4Ch
0x65F82A: push    1; int
0x65F82C: push    ecx
0x65F82D: mov     ecx, offset ActorProcessManager_ptr
0x65F832: fstp    [esp+14h+var_14]; float
0x65F835: call    sub_673C10
0x65F83A: jmp     short loc_65F84C
0x65F83C: push    ecx
0x65F83D: lea     ecx, [esi+68h]; this
0x65F840: fstp    [esp+10h+var_10]
0x65F843: call    MagicTarget_ProcessEffects
0x65F848: jmp     short loc_65F84C
0x65F84A: fstp    st
0x65F84C: fld     dword ptr ds:0A71E4Ch
0x65F852: push    ecx
0x65F853: mov     ecx, ds:0B333C4h
0x65F859: fstp    [esp+10h+var_10]
0x65F85C: call    sub_5F2530
0x65F861: fld     dword ptr ds:0A71E4Ch
0x65F867: push    1; float
0x65F869: push    ecx
0x65F86A: mov     ecx, ds:0B333C4h
0x65F870: fstp    [esp+14h+var_14]; float
0x65F873: call    sub_5F25F0
0x65F878: fld     dword ptr ds:0A71E4Ch
0x65F87E: push    ecx
0x65F87F: mov     ecx, ds:0B333C4h
0x65F885: fstp    [esp+10h+var_10]; float
0x65F888: call    sub_5F2720
0x65F88D: fld     [esp+0Ch+var_8]
0x65F891: push    edi
0x65F892: push    ecx
0x65F893: mov     ecx, offset TimeGlobals
0x65F898: fstp    [esp+14h+var_14]; float
0x65F89B: call    sub_4029E0
0x65F8A0: fld     dword ptr ds:0B33E9Ch
0x65F8A6: push    ecx
0x65F8A7: mov     ecx, ds:0B333A0h
0x65F8AD: fstp    [esp+14h+var_14]; float
0x65F8B0: mov     ecx, [ecx+5Ch]
0x65F8B3: call    sub_542F20
0x65F8B8: mov     edi, [esi]
0x65F8BA: mov     ecx, offset ActorProcessManager_ptr
0x65F8BF: call    sub_673B00
0x65F8C4: mov     edx, [edi+368h]
0x65F8CA: push    ecx
0x65F8CB: mov     ecx, esi
0x65F8CD: fstp    [esp+14h+var_14]
0x65F8D0: call    edx
0x65F8D2: add     dword ptr [esi+590h], 0FFFFFFFFh
0x65F8D9: cmp     byte ptr [esi+594h], 0
0x65F8E0: pop     edi
0x65F8E1: jz      short loc_65F8EC
0x65F8E3: add     dword ptr [esi+6A8h], 1
0x65F8EA: jmp     short loc_65F8F3
0x65F8EC: add     dword ptr [esi+6ACh], 1
0x65F8F3: cmp     dword ptr [esi+590h], 0
0x65F8FA: jg      short loc_65F90A
0x65F8FC: mov     byte ptr ds:0B14E4Ch, 1
0x65F903: mov     byte ptr [esi+594h], 0
0x65F90A: pop     esi
0x65F90B: add     esp, 8
0x65F90E: retn
