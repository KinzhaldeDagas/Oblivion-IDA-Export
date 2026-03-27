0x8BE3D0: push    ecx
0x8BE3D1: push    esi
0x8BE3D2: mov     esi, ecx
0x8BE3D4: mov     eax, [esi]
0x8BE3D6: mov     edx, [eax+74h]
0x8BE3D9: lea     ecx, [esp+8+var_1]
0x8BE3DD: push    ecx
0x8BE3DE: mov     ecx, esi
0x8BE3E0: call    edx
0x8BE3E2: mov     edx, [esp+8+arg_4]
0x8BE3E6: mov     ecx, eax
0x8BE3E8: test    ecx, ecx
0x8BE3EA: jz      short loc_8BE456
0x8BE3EC: fld     dword ptr [edx+10h]
0x8BE3EF: fstp    [esp+8+arg_4]
0x8BE3F3: fld1
0x8BE3F5: fld     [esp+8+arg_4]
0x8BE3F9: fucom   st(1)
0x8BE3FB: fnstsw  ax
0x8BE3FD: fstp    st(1)
0x8BE3FF: test    ah, 44h
0x8BE402: jnp     short loc_8BE454
0x8BE404: fld     dword ptr [ecx+10h]
0x8BE407: mov     eax, [esp+8+arg_0]
0x8BE40B: fmul    st, st(1)
0x8BE40D: push    edx
0x8BE40E: push    eax
0x8BE40F: fstp    dword ptr [ecx+10h]
0x8BE412: fld     dword ptr [ecx+14h]
0x8BE415: fmul    st, st(1)
0x8BE417: fstp    dword ptr [ecx+14h]
0x8BE41A: fld     dword ptr [ecx+18h]
0x8BE41D: fmul    st, st(1)
0x8BE41F: fstp    dword ptr [ecx+18h]
0x8BE422: fld     dword ptr [ecx+1Ch]
0x8BE425: fmul    st, st(1)
0x8BE427: fstp    dword ptr [ecx+1Ch]
0x8BE42A: fld     st
0x8BE42C: fmul    dword ptr [ecx+20h]
0x8BE42F: fstp    dword ptr [ecx+20h]
0x8BE432: fld     dword ptr [ecx+24h]
0x8BE435: fmul    st, st(1)
0x8BE437: fstp    dword ptr [ecx+24h]
0x8BE43A: fld     dword ptr [ecx+28h]
0x8BE43D: fmul    st, st(1)
0x8BE43F: fstp    dword ptr [ecx+28h]
0x8BE442: fmul    dword ptr [ecx+2Ch]
0x8BE445: fstp    dword ptr [ecx+2Ch]
0x8BE448: mov     ecx, esi
0x8BE44A: call    sub_89FFA0
0x8BE44F: pop     esi
0x8BE450: pop     ecx
0x8BE451: retn    8
0x8BE454: fstp    st
0x8BE456: mov     eax, [esp+8+arg_0]
0x8BE45A: push    edx
0x8BE45B: push    eax
0x8BE45C: mov     ecx, esi
0x8BE45E: call    sub_89FFA0
0x8BE463: pop     esi
0x8BE464: pop     ecx
0x8BE465: retn    8
