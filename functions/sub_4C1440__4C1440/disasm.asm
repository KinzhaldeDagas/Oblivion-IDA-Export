0x4C1440: mov     eax, [ecx+4]
0x4C1443: imul    eax, [esp+arg_0]
0x4C1448: add     eax, [ecx]
0x4C144A: cmp     byte ptr [ecx+8], 0
0x4C144E: jz      short loc_4C14A9
0x4C1450: mov     cl, [eax+1]
0x4C1453: mov     dl, [eax]
0x4C1455: push    ebx
0x4C1456: mov     bl, [eax+3]
0x4C1459: movzx   eax, byte ptr [eax+2]
0x4C145D: mov     [esp+4+arg_0], eax
0x4C1461: mov     eax, [esp+4+arg_4]
0x4C1465: movzx   ecx, cl
0x4C1468: fild    [esp+4+arg_0]
0x4C146C: fld     qword ptr ds:0A3DDD8h
0x4C1472: mov     [esp+4+arg_4], ecx
0x4C1476: fdiv    st(1), st
0x4C1478: movzx   edx, dl
0x4C147B: movzx   ecx, bl
0x4C147E: pop     ebx
0x4C147F: fxch    st(1)
0x4C1481: fstp    dword ptr [eax]
0x4C1483: fild    [esp+arg_4]
0x4C1487: mov     [esp+arg_4], edx
0x4C148B: fdiv    st, st(1)
0x4C148D: fstp    dword ptr [eax+4]
0x4C1490: fild    [esp+arg_4]
0x4C1494: mov     [esp+arg_4], ecx
0x4C1498: fdiv    st, st(1)
0x4C149A: fstp    dword ptr [eax+8]
0x4C149D: fild    [esp+arg_4]
0x4C14A1: fdivrp  st(1), st
0x4C14A3: fstp    dword ptr [eax+0Ch]
0x4C14A6: retn    8
0x4C14A9: mov     edx, [eax]
0x4C14AB: mov     ecx, [esp+arg_4]
0x4C14AF: mov     [ecx], edx
0x4C14B1: mov     edx, [eax+4]
0x4C14B4: mov     [ecx+4], edx
0x4C14B7: mov     edx, [eax+8]
0x4C14BA: mov     [ecx+8], edx
0x4C14BD: mov     eax, [eax+0Ch]
0x4C14C0: mov     [ecx+0Ch], eax
0x4C14C3: retn    8
