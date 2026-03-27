0x6AE4B0: push    0FFFFFFFFh
0x6AE4B2: push    offset SEH_6AE4B0
0x6AE4B7: mov     eax, large fs:0
0x6AE4BD: push    eax
0x6AE4BE: sub     esp, 0Ch
0x6AE4C1: push    ebx
0x6AE4C2: push    ebp
0x6AE4C3: push    esi
0x6AE4C4: push    edi
0x6AE4C5: mov     eax, ds:0B30AACh
0x6AE4CA: xor     eax, esp
0x6AE4CC: push    eax
0x6AE4CD: lea     eax, [esp+2Ch+var_C]
0x6AE4D1: mov     large fs:0, eax
0x6AE4D7: mov     ebp, ecx
0x6AE4D9: cmp     byte ptr ds:0B16178h, 0
0x6AE4E0: jz      loc_6AE706
0x6AE4E6: mov     edi, [esp+2Ch+arg_C]
0x6AE4EA: test    edi, edi
0x6AE4EC: jz      loc_6AE706
0x6AE4F2: mov     eax, [edi+38h]
0x6AE4F5: mov     ecx, [edi+40h]
0x6AE4F8: mov     [esp+2Ch+var_18], eax
0x6AE4FC: mov     eax, [edi+3Ch]
0x6AE4FF: mov     [esp+2Ch+var_10], ecx
0x6AE503: mov     cl, byte ptr [esp+2Ch+arg_14]
0x6AE507: mov     ebx, eax
0x6AE509: and     ebx, 10h
0x6AE50C: test    cl, cl
0x6AE50E: mov     [esp+2Ch+var_14], eax
0x6AE512: jz      short loc_6AE525
0x6AE514: mov     esi, [ebp+0B4h]
0x6AE51A: lea     edx, [esi+1]
0x6AE51D: mov     [ebp+0B4h], edx
0x6AE523: jmp     short loc_6AE529
0x6AE525: mov     esi, [esp+2Ch+arg_10]
0x6AE529: and     eax, 40h
0x6AE52C: mov     [esp+2Ch+arg_C], eax
0x6AE530: jz      short loc_6AE537
0x6AE532: or      ebx, 1
0x6AE535: jmp     short loc_6AE53A
0x6AE537: or      ebx, 2
0x6AE53A: cmp     byte ptr [esp+2Ch+arg_18], 0
0x6AE53F: jz      short loc_6AE547
0x6AE541: or      ebx, 2000h
0x6AE547: xor     eax, eax
0x6AE549: test    cl, cl
0x6AE54B: mov     [esp+2Ch+arg_18], eax
0x6AE54F: jnz     short loc_6AE571
0x6AE551: mov     ecx, [ebp+300h]
0x6AE557: mov     [esp+2Ch+arg_14], eax
0x6AE55B: lea     eax, [esp+2Ch+arg_14]
0x6AE55F: push    eax
0x6AE560: push    esi
0x6AE561: call    NiTMap_GetAt
0x6AE566: cmp     [esp+2Ch+arg_14], 0
0x6AE56B: jnz     loc_6AE706
0x6AE571: mov     eax, [edi+28h]
0x6AE574: test    eax, eax
0x6AE576: jnz     short loc_6AE57D
0x6AE578: mov     eax, offset EmptyString
0x6AE57D: push    esi
0x6AE57E: push    ebx
0x6AE57F: push    eax
0x6AE580: lea     ecx, [esp+38h+arg_18]
0x6AE584: push    ecx
0x6AE585: mov     ecx, ebp
0x6AE587: call    sub_6AC610
0x6AE58C: test    eax, eax
0x6AE58E: jnz     loc_6AE706
0x6AE594: mov     esi, [esp+2Ch+arg_18]
0x6AE598: mov     eax, [esi+0Ch]
0x6AE59B: push    eax; ArgList
0x6AE59C: push    esi; int
0x6AE59D: mov     ecx, ebp
0x6AE59F: call    sub_6ACCA0
0x6AE5A4: movzx   edx, byte ptr [edi+43h]
0x6AE5A8: mov     [esp+2Ch+arg_14], edx
0x6AE5AC: push    ecx
0x6AE5AD: fild    [esp+30h+arg_14]
0x6AE5B1: mov     ecx, esi
0x6AE5B3: fld     qword ptr ds:0A771C8h
0x6AE5B9: fmul    st(1), st
0x6AE5BB: fxch    st(1)
0x6AE5BD: fstp    [esp+30h+arg_14]
0x6AE5C1: fld     [esp+30h+arg_14]
0x6AE5C5: fstp    dword ptr [esi+2Ch]
0x6AE5C8: movzx   eax, byte ptr [edi+42h]
0x6AE5CC: mov     [esp+30h+arg_14], eax
0x6AE5D0: fild    [esp+30h+arg_14]
0x6AE5D4: fmulp   st(1), st
0x6AE5D6: fstp    [esp+30h+arg_14]
0x6AE5DA: fld     [esp+30h+arg_14]
0x6AE5DE: fstp    dword ptr [esi+30h]
0x6AE5E1: movzx   eax, word ptr [edi+40h]
0x6AE5E5: fld     dword ptr [esi+3Ch]
0x6AE5E8: mov     [esi+44h], ax
0x6AE5EC: fstp    [esp+30h+var_30]; float
0x6AE5EF: call    sub_6B6F20
0x6AE5F4: push    ecx
0x6AE5F5: fld1
0x6AE5F7: mov     ecx, esi
0x6AE5F9: fstp    [esp+30h+var_30]; float
0x6AE5FC: call    sub_6B6F20
0x6AE601: cmp     [esp+2Ch+arg_C], 0
0x6AE606: jnz     short loc_6AE667
0x6AE608: mov     al, [edi+39h]
0x6AE60B: mov     cl, [edi+38h]
0x6AE60E: movzx   edx, al
0x6AE611: imul    edx, 64h ; 'd'
0x6AE614: movzx   eax, cl
0x6AE617: mov     [esp+2Ch+arg_14], edx
0x6AE61B: sub     esp, 8
0x6AE61E: fild    [esp+34h+arg_14]
0x6AE622: lea     eax, [eax+eax*4]
0x6AE625: mov     [esp+34h+arg_14], eax
0x6AE629: mov     ecx, esi
0x6AE62B: fstp    [esp+34h+var_30]; float
0x6AE62F: fild    [esp+34h+arg_14]
0x6AE633: fstp    [esp+34h+var_34]; float
0x6AE636: call    sub_6B6C60
0x6AE63B: fld     [esp+2Ch+arg_8]
0x6AE63F: sub     esp, 0Ch
0x6AE642: fstp    [esp+38h+var_30]; float
0x6AE646: mov     ecx, esi
0x6AE648: fld     [esp+38h+arg_4]
0x6AE64C: fstp    [esp+38h+var_34]; float
0x6AE650: fld     [esp+38h+arg_0]
0x6AE654: fstp    [esp+38h+var_38]; float
0x6AE657: call    sub_6B6BE0
0x6AE65C: mov     eax, [ebp+78h]
0x6AE65F: mov     ecx, [eax]
0x6AE661: mov     edx, [ecx+44h]
0x6AE664: push    eax
0x6AE665: call    edx
0x6AE667: mov     ecx, [edi+3Ch]
0x6AE66A: mov     eax, [edi+38h]
0x6AE66D: mov     edx, [edi+40h]
0x6AE670: shr     eax, 10h
0x6AE673: test    byte ptr [esp+2Ch+var_14], 1
0x6AE678: mov     [esp+2Ch+arg_4], ecx
0x6AE67C: push    ecx
0x6AE67D: mov     [esp+30h+arg_8], edx
0x6AE681: movsx   eax, al
0x6AE684: mov     ecx, esi
0x6AE686: jz      short loc_6AE6A6
0x6AE688: mov     [esp+30h+arg_14], eax
0x6AE68C: fild    [esp+30h+arg_14]
0x6AE690: fdiv    qword ptr ds:0A37478h
0x6AE696: fadd    qword ptr ds:0A2F928h
0x6AE69C: fstp    [esp+30h+arg_14]
0x6AE6A0: fld     [esp+30h+arg_14]
0x6AE6A4: jmp     short loc_6AE6C2
0x6AE6A6: mov     [esp+30h+arg_14], eax
0x6AE6AA: fild    [esp+30h+arg_14]
0x6AE6AE: fdiv    qword ptr ds:0A37478h
0x6AE6B4: fadd    qword ptr ds:0A2F928h
0x6AE6BA: fstp    [esp+30h+arg_14]
0x6AE6BE: fld     [esp+30h+arg_14]
0x6AE6C2: fstp    [esp+30h+var_30]; float
0x6AE6C5: call    sub_6B6B20
0x6AE6CA: mov     eax, [esi+0Ch]
0x6AE6CD: shr     ebx, 4
0x6AE6D0: and     ebx, 0FFFFFF01h
0x6AE6D6: push    ebx
0x6AE6D7: push    eax
0x6AE6D8: mov     ecx, ebp
0x6AE6DA: call    sub_6AB540
0x6AE6DF: push    4; Size
0x6AE6E1: call    FormHeapAlloc
0x6AE6E6: add     esp, 4
0x6AE6E9: mov     [esp+2Ch+arg_14], eax
0x6AE6ED: test    eax, eax
0x6AE6EF: mov     [esp+2Ch+var_4], 0
0x6AE6F7: jz      short loc_6AE706
0x6AE6F9: mov     esi, [esi+0Ch]
0x6AE6FC: push    esi
0x6AE6FD: mov     ecx, eax
0x6AE6FF: call    unknown_libname_1
0x6AE704: jmp     short loc_6AE708
0x6AE706: xor     eax, eax
0x6AE708: mov     ecx, [esp+2Ch+var_C]
0x6AE70C: mov     large fs:0, ecx
0x6AE713: pop     ecx
0x6AE714: pop     edi
0x6AE715: pop     esi
0x6AE716: pop     ebp
0x6AE717: pop     ebx
0x6AE718: add     esp, 18h
0x6AE71B: retn    1Ch
