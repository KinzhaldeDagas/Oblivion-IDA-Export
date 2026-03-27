0x65A650: push    ecx
0x65A651: fld     dword ptr ds:0A73504h
0x65A657: push    edi
0x65A658: mov     edi, ecx
0x65A65A: fstp    [esp+8+var_4]
0x65A65E: mov     eax, [edi]
0x65A660: mov     edx, [eax+190h]
0x65A666: call    edx
0x65A668: test    al, al
0x65A66A: jz      short loc_65A6C3
0x65A66C: push    esi
0x65A66D: push    0; int
0x65A66F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65A674: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65A679: push    0; int
0x65A67B: push    edi; void *
0x65A67C: call    OblivionDynamicCast
0x65A681: mov     esi, eax
0x65A683: mov     eax, [esi]
0x65A685: mov     edx, [eax+380h]
0x65A68B: add     esp, 14h
0x65A68E: mov     ecx, esi
0x65A690: call    edx
0x65A692: test    eax, eax
0x65A694: jz      short loc_65A69E
0x65A696: fld     dword ptr ds:0B36C20h
0x65A69C: jmp     short loc_65A6B8
0x65A69E: mov     eax, [esi]
0x65A6A0: mov     edx, [eax+18Ch]
0x65A6A6: mov     ecx, esi
0x65A6A8: call    edx
0x65A6AA: add     eax, 0FFFFFFFFh
0x65A6AD: cmp     eax, 4
0x65A6B0: ja      short loc_65A6C2
0x65A6B2: fld     dword ptr ds:0B36C28h
0x65A6B8: fmul    qword ptr ds:0A31C78h
0x65A6BE: fstp    [esp+0Ch+var_4]
0x65A6C2: pop     esi
0x65A6C3: fld     dword ptr ds:0A73500h
0x65A6C9: fld     [esp+8+arg_0]
0x65A6CD: fcom    st(1)
0x65A6CF: fnstsw  ax
0x65A6D1: test    ah, 5
0x65A6D4: jnp     short loc_65A6F7
0x65A6D6: fstp    st(1)
0x65A6D8: fld     [esp+8+var_4]
0x65A6DC: fcom    st(1)
0x65A6DE: fnstsw  ax
0x65A6E0: test    ah, 5
0x65A6E3: jp      short loc_65A6F7
0x65A6E5: push    ecx
0x65A6E6: fstp    st(1)
0x65A6E8: mov     ecx, edi
0x65A6EA: fstp    [esp+0Ch+var_C]; float
0x65A6ED: call    sub_4D89D0
0x65A6F2: pop     edi
0x65A6F3: pop     ecx
0x65A6F4: retn    4
0x65A6F7: push    ecx
0x65A6F8: fstp    st
0x65A6FA: mov     ecx, edi
0x65A6FC: fstp    [esp+0Ch+var_C]; float
0x65A6FF: call    sub_4D89D0
0x65A704: pop     edi
0x65A705: pop     ecx
0x65A706: retn    4
