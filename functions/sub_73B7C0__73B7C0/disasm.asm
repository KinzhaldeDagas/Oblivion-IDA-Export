0x73B7C0: sub     esp, 94h
0x73B7C6: push    ebx
0x73B7C7: mov     ebx, ecx
0x73B7C9: mov     eax, [ebx+14Ch]
0x73B7CF: cmp     eax, 2
0x73B7D2: jnz     loc_73B87F
0x73B7D8: fld     dword ptr ds:0A3D65Ch
0x73B7DE: fst     dword ptr [ebx+134h]
0x73B7E4: fstp    dword ptr [ebx+130h]
0x73B7EA: fldz
0x73B7EC: fst     dword ptr [ebx+138h]
0x73B7F2: fld     dword ptr [ebx+68h]
0x73B7F5: fstp    [esp+98h+var_94]
0x73B7F9: fld     dword ptr [ebx+6Ch]
0x73B7FC: fld     qword ptr ds:0A2FAA0h
0x73B802: fmul    st(1), st
0x73B804: fxch    st(1)
0x73B806: fstp    dword ptr [ebx+10Ch]
0x73B80C: fld     [esp+98h+var_94]
0x73B810: fld     qword ptr ds:0A7CDE0h
0x73B816: fmul    st(1), st
0x73B818: fxch    st(1)
0x73B81A: fstp    dword ptr [ebx+118h]
0x73B820: fxch    st(2)
0x73B822: fst     dword ptr [ebx+124h]
0x73B828: fld     dword ptr [ebx+74h]
0x73B82B: fstp    [esp+98h+var_94]
0x73B82F: fld     dword ptr [ebx+78h]
0x73B832: fmul    st, st(2)
0x73B834: fstp    dword ptr [ebx+110h]
0x73B83A: fld     [esp+98h+var_94]
0x73B83E: fmul    st, st(3)
0x73B840: fstp    dword ptr [ebx+11Ch]
0x73B846: fst     dword ptr [ebx+128h]
0x73B84C: fld     dword ptr [ebx+80h]
0x73B852: fstp    [esp+98h+var_94]
0x73B856: fld     dword ptr [ebx+84h]
0x73B85C: fmulp   st(2), st
0x73B85E: fxch    st(1)
0x73B860: fstp    dword ptr [ebx+114h]
0x73B866: fld     [esp+98h+var_94]
0x73B86A: fmulp   st(2), st
0x73B86C: fxch    st(1)
0x73B86E: fstp    dword ptr [ebx+120h]
0x73B874: fstp    dword ptr [ebx+12Ch]
0x73B87A: jmp     loc_73B983
0x73B87F: cmp     eax, 3
0x73B882: push    esi
0x73B883: push    edi
0x73B884: jz      loc_73B940
0x73B88A: cmp     eax, 4
0x73B88D: jz      loc_73B940
0x73B893: fld     dword ptr [ebx+94h]
0x73B899: push    ecx
0x73B89A: fld1
0x73B89C: lea     eax, [esp+0A4h+var_24]
0x73B8A3: fdivrp  st(1), st
0x73B8A5: lea     ecx, [esp+0A4h+var_6C]
0x73B8A9: fstp    [esp+0A4h+var_94]
0x73B8AD: fld     [esp+0A4h+var_94]
0x73B8B1: fstp    [esp+0A4h+var_A4]; float
0x73B8B4: push    eax; int
0x73B8B5: push    ecx
0x73B8B6: lea     ecx, [ebx+64h]
0x73B8B9: call    sub_710400
0x73B8BE: push    eax
0x73B8BF: lea     edx, [esp+0ACh+var_48]
0x73B8C3: push    edx
0x73B8C4: lea     ecx, [ebx+0DCh]
0x73B8CA: call    NiMAtrix33_Multiply
0x73B8CF: mov     ecx, eax
0x73B8D1: call    sub_710190
0x73B8D6: lea     edx, [ebx+10Ch]
0x73B8DC: mov     esi, eax
0x73B8DE: mov     edi, edx
0x73B8E0: mov     ecx, 9
0x73B8E5: rep movsd
0x73B8E7: lea     eax, [ebx+88h]
0x73B8ED: push    eax
0x73B8EE: lea     ecx, [esp+0A4h+var_78]
0x73B8F2: push    ecx
0x73B8F3: mov     ecx, edx
0x73B8F5: call    sub_7101F0
0x73B8FA: fld     dword ptr [ebx+100h]
0x73B900: fsub    dword ptr [eax]
0x73B902: fstp    [esp+0A0h+var_84]
0x73B906: mov     edx, [esp+0A0h+var_84]
0x73B90A: fld     dword ptr [ebx+104h]
0x73B910: fsub    dword ptr [eax+4]
0x73B913: fstp    [esp+0A0h+var_80]
0x73B917: fld     dword ptr [ebx+108h]
0x73B91D: fsub    dword ptr [eax+8]
0x73B920: mov     eax, [esp+0A0h+var_80]
0x73B924: mov     [ebx+130h], edx
0x73B92A: mov     [ebx+134h], eax
0x73B930: fstp    [esp+0A0h+var_7C]
0x73B934: mov     ecx, [esp+0A0h+var_7C]
0x73B938: mov     [ebx+138h], ecx
0x73B93E: jmp     short loc_73B981
0x73B940: fldz
0x73B942: lea     edx, [esp+0A0h+var_48]
0x73B946: fst     dword ptr [ebx+138h]
0x73B94C: push    edx
0x73B94D: fst     dword ptr [ebx+134h]
0x73B953: lea     ecx, [ebx+64h]
0x73B956: fstp    dword ptr [ebx+130h]
0x73B95C: call    sub_710400
0x73B961: push    eax
0x73B962: lea     eax, [esp+0A4h+var_6C]
0x73B966: push    eax
0x73B967: lea     ecx, [ebx+0DCh]
0x73B96D: call    NiMAtrix33_Multiply
0x73B972: lea     edi, [ebx+10Ch]
0x73B978: mov     ecx, 9
0x73B97D: mov     esi, eax
0x73B97F: rep movsd
0x73B981: pop     edi
0x73B982: pop     esi
0x73B983: lea     ecx, [ebx+154h]
0x73B989: push    ecx
0x73B98A: lea     edx, [esp+9Ch+var_90]
0x73B98E: push    edx
0x73B98F: lea     ecx, [ebx+64h]
0x73B992: call    sub_7101F0
0x73B997: fld     dword ptr [ebx+8Ch]
0x73B99D: fmul    [esp+98h+var_8C]
0x73B9A1: mov     eax, [esp+98h+var_90]
0x73B9A5: fld     dword ptr [ebx+88h]
0x73B9AB: mov     ecx, [esp+98h+var_8C]
0x73B9AF: fmul    [esp+98h+var_90]
0x73B9B3: mov     edx, [esp+98h+var_88]
0x73B9B7: faddp   st(1), st
0x73B9B9: fld     dword ptr [ebx+90h]
0x73B9BF: add     dword ptr [ebx+0B8h], 1
0x73B9C6: fmul    [esp+98h+var_88]
0x73B9CA: mov     [ebx+164h], eax
0x73B9D0: mov     [ebx+168h], ecx
0x73B9D6: mov     [ebx+16Ch], edx
0x73B9DC: faddp   st(1), st
0x73B9DE: fstp    [esp+98h+var_94]
0x73B9E2: fld     [esp+98h+var_94]
0x73B9E6: fld     dword ptr [ebx+160h]
0x73B9EC: fmul    dword ptr [ebx+94h]
0x73B9F2: faddp   st(1), st
0x73B9F4: fstp    [esp+98h+var_94]
0x73B9F8: fld     [esp+98h+var_94]
0x73B9FC: fstp    dword ptr [ebx+170h]
0x73BA02: pop     ebx
0x73BA03: add     esp, 94h
0x73BA09: retn
