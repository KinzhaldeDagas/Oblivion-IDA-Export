0x6CB3C0: sub     esp, 14h
0x6CB3C3: fld     dword ptr ds:0A7DEB4h
0x6CB3C9: push    esi
0x6CB3CA: fchs
0x6CB3CC: mov     esi, ecx
0x6CB3CE: fstp    [esp+18h+var_14]
0x6CB3D2: push    edi
0x6CB3D3: fld     dword ptr [esi+1Ch]
0x6CB3D6: mov     edi, [esp+1Ch+arg_0]
0x6CB3DA: fld     [esp+1Ch+var_14]
0x6CB3DE: fld     st
0x6CB3E0: fucomp  st(2)
0x6CB3E2: fnstsw  ax
0x6CB3E4: fstp    st(1)
0x6CB3E6: test    ah, 44h
0x6CB3E9: jnp     short loc_6CB428
0x6CB3EB: fstp    st
0x6CB3ED: sub     esp, 8
0x6CB3F0: fld     dword ptr [esi+1Ch]
0x6CB3F3: fld1
0x6CB3F5: fdivrp  st(1), st
0x6CB3F7: fstp    [esp+24h+arg_0]
0x6CB3FB: fld     [esp+24h+arg_0]
0x6CB3FF: fstp    [esp+24h+X]; X
0x6CB402: call    __isnan
0x6CB407: add     esp, 8
0x6CB40A: test    eax, eax
0x6CB40C: jnz     short loc_6CB42B
0x6CB40E: fld     [esp+1Ch+arg_0]
0x6CB412: sub     esp, 8
0x6CB415: fstp    [esp+24h+X]; X
0x6CB418: call    __finite
0x6CB41D: add     esp, 8
0x6CB420: test    eax, eax
0x6CB422: jz      short loc_6CB42B
0x6CB424: fld     [esp+1Ch+arg_0]
0x6CB428: fstp    dword ptr [edi+1Ch]
0x6CB42B: fld     dword ptr ds:0A7DEB4h
0x6CB431: fchs
0x6CB433: fstp    [esp+1Ch+var_14]
0x6CB437: fld     dword ptr [esi+10h]
0x6CB43A: fld     [esp+1Ch+var_14]
0x6CB43E: fld     st
0x6CB440: fucomp  st(2)
0x6CB442: fnstsw  ax
0x6CB444: fstp    st(1)
0x6CB446: test    ah, 44h
0x6CB449: jp      short loc_6CB450
0x6CB44B: fstp    dword ptr [edi+10h]
0x6CB44E: jmp     short loc_6CB46B
0x6CB450: lea     eax, [esi+0Ch]
0x6CB453: fstp    st
0x6CB455: push    eax
0x6CB456: lea     ecx, [esp+20h+var_10]
0x6CB45A: push    ecx
0x6CB45B: call    sub_714D80
0x6CB460: add     esp, 8
0x6CB463: push    eax
0x6CB464: mov     ecx, edi
0x6CB466: call    sub_471430
0x6CB46B: fld     dword ptr ds:0A7DEB4h
0x6CB471: fchs
0x6CB473: fstp    [esp+1Ch+var_14]
0x6CB477: fld     dword ptr [esi]
0x6CB479: fld     [esp+1Ch+var_14]
0x6CB47D: fld     st
0x6CB47F: fucomp  st(2)
0x6CB481: fnstsw  ax
0x6CB483: fstp    st(1)
0x6CB485: test    ah, 44h
0x6CB488: jp      short loc_6CB494
0x6CB48A: fstp    dword ptr [edi]
0x6CB48C: pop     edi
0x6CB48D: pop     esi
0x6CB48E: add     esp, 14h
0x6CB491: retn    4
0x6CB494: fstp    st
0x6CB496: lea     edx, [esp+1Ch+var_10]
0x6CB49A: fld     dword ptr [esi]
0x6CB49C: push    edx
0x6CB49D: fchs
0x6CB49F: mov     ecx, edi
0x6CB4A1: fstp    [esp+20h+var_10]
0x6CB4A5: fld     dword ptr [esi+4]
0x6CB4A8: fchs
0x6CB4AA: fstp    [esp+20h+var_C]
0x6CB4AE: fld     dword ptr [esi+8]
0x6CB4B1: fchs
0x6CB4B3: fstp    [esp+20h+var_8]
0x6CB4B7: call    sub_471390
0x6CB4BC: pop     edi
0x6CB4BD: pop     esi
0x6CB4BE: add     esp, 14h
0x6CB4C1: retn    4
