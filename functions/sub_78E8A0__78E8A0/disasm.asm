0x78E8A0: push    ecx
0x78E8A1: fldz
0x78E8A3: mov     eax, [esp+4+arg_0]
0x78E8A7: push    ebx
0x78E8A8: fst     dword ptr [eax+10h]
0x78E8AB: push    ebp
0x78E8AC: fst     dword ptr [eax+0Ch]
0x78E8AF: mov     ebp, ecx
0x78E8B1: fst     dword ptr [eax+8]
0x78E8B4: mov     ebx, [ebp+14h]
0x78E8B7: fst     dword ptr [eax+4]
0x78E8BA: mov     ecx, ebx
0x78E8BC: fstp    dword ptr [eax]
0x78E8BE: cmp     ecx, 5
0x78E8C1: lea     edx, [eax+4]
0x78E8C4: mov     [esp+0Ch+var_4], ebp
0x78E8C8: jle     short loc_78E8CF
0x78E8CA: mov     ecx, 5
0x78E8CF: fld     [esp+0Ch+arg_4]
0x78E8D3: mov     [eax+14h], ecx
0x78E8D6: xor     ecx, ecx
0x78E8D8: cmp     ebx, 4
0x78E8DB: jl      short loc_78E92A
0x78E8DD: push    esi
0x78E8DE: fld     st
0x78E8E0: lea     esi, [ebx-4]
0x78E8E3: push    edi
0x78E8E4: lea     edi, [ebp+0Ch]
0x78E8E7: shr     esi, 2
0x78E8EA: sub     ebp, eax
0x78E8EC: add     esi, 1
0x78E8EF: lea     ecx, ds:0[esi*4]
0x78E8F6: fld     dword ptr [edi-0Ch]
0x78E8F9: add     edx, 10h
0x78E8FC: fmul    st, st(1)
0x78E8FE: add     edi, 10h
0x78E901: sub     esi, 1
0x78E904: fstp    dword ptr [edx-14h]
0x78E907: fld     dword ptr [edx+ebp-10h]
0x78E90B: fmul    st, st(1)
0x78E90D: fstp    dword ptr [edx-10h]
0x78E910: fld     dword ptr [edi-14h]
0x78E913: fmul    st, st(1)
0x78E915: fstp    dword ptr [edx-0Ch]
0x78E918: fld     dword ptr [edi-10h]
0x78E91B: fmul    st, st(1)
0x78E91D: fstp    dword ptr [edx-8]
0x78E920: jnz     short loc_78E8F6
0x78E922: mov     ebp, [esp+14h+var_4]
0x78E926: fstp    st
0x78E928: pop     edi
0x78E929: pop     esi
0x78E92A: cmp     ecx, ebx
0x78E92C: jge     short loc_78E945
0x78E92E: sub     ebp, eax
0x78E930: lea     edx, [eax+ecx*4]
0x78E933: sub     ebx, ecx
0x78E935: fld     dword ptr [edx+ebp]
0x78E938: add     edx, 4
0x78E93B: sub     ebx, 1
0x78E93E: fmul    st, st(1)
0x78E940: fstp    dword ptr [edx-4]
0x78E943: jnz     short loc_78E935
0x78E945: pop     ebp
0x78E946: fstp    st
0x78E948: pop     ebx
0x78E949: pop     ecx
0x78E94A: retn    8
