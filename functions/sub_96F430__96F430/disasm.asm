0x96F430: sub     esp, 24h
0x96F433: push    esi
0x96F434: mov     esi, ecx
0x96F436: mov     eax, [esi+38h]
0x96F439: mov     ecx, [eax+20h]
0x96F43C: add     eax, 20h ; ' '
0x96F43F: mov     [esp+28h+var_18], ecx
0x96F443: mov     edx, [eax+4]
0x96F446: mov     [esp+28h+var_14], edx
0x96F44A: mov     ecx, [eax+8]
0x96F44D: mov     [esp+28h+var_10], ecx
0x96F451: mov     edx, [eax+0Ch]
0x96F454: mov     [esp+28h+var_C], edx
0x96F458: mov     ecx, [eax+10h]
0x96F45B: mov     [esp+28h+var_8], ecx
0x96F45F: mov     edx, [eax+14h]
0x96F462: mov     eax, [esp+28h+arg_0]
0x96F466: fld     dword ptr [eax]
0x96F468: mov     [esp+28h+var_4], edx
0x96F46C: fld     [esp+28h+arg_8]
0x96F470: lea     ecx, [esp+28h+var_18]
0x96F474: fld     st
0x96F476: lea     edx, [esp+28h+var_24]
0x96F47A: fmulp   st(2), st
0x96F47C: fxch    st(1)
0x96F47E: fstp    [esp+28h+var_24]
0x96F482: fld     dword ptr [eax+4]
0x96F485: fmul    st, st(1)
0x96F487: fstp    [esp+28h+var_20]
0x96F48B: fld     dword ptr [eax+8]
0x96F48E: mov     eax, [esp+28h+arg_4]
0x96F492: fmul    st, st(1)
0x96F494: fstp    [esp+28h+var_1C]
0x96F498: fld     [esp+28h+var_24]
0x96F49C: fadd    [esp+28h+var_18]
0x96F4A0: fstp    [esp+28h+var_18]
0x96F4A4: fld     [esp+28h+var_14]
0x96F4A8: fadd    [esp+28h+var_20]
0x96F4AC: fstp    [esp+28h+var_14]
0x96F4B0: fld     [esp+28h+var_10]
0x96F4B4: fadd    [esp+28h+var_1C]
0x96F4B8: fstp    [esp+28h+var_10]
0x96F4BC: fld     dword ptr [eax]
0x96F4BE: fmul    st, st(1)
0x96F4C0: fstp    [esp+28h+var_24]
0x96F4C4: fld     dword ptr [eax+4]
0x96F4C7: fmul    st, st(1)
0x96F4C9: fstp    [esp+28h+var_20]
0x96F4CD: fmul    dword ptr [eax+8]
0x96F4D0: mov     eax, [esi+3Ch]
0x96F4D3: add     eax, 4
0x96F4D6: fstp    [esp+28h+var_1C]
0x96F4DA: fld     dword ptr [eax+4]
0x96F4DD: fadd    [esp+28h+var_20]
0x96F4E1: fstp    [esp+28h+arg_0]
0x96F4E5: fld     dword ptr [eax+8]
0x96F4E8: fadd    [esp+28h+var_1C]
0x96F4EC: fstp    [esp+28h+arg_8]
0x96F4F0: fld     dword ptr [eax]
0x96F4F2: lea     eax, [esi+44h]
0x96F4F5: fadd    [esp+28h+var_24]
0x96F4F9: push    eax
0x96F4FA: push    ecx
0x96F4FB: push    edx
0x96F4FC: fstp    [esp+34h+var_24]
0x96F500: fld     [esp+34h+arg_0]
0x96F504: fstp    [esp+34h+var_20]
0x96F508: fld     [esp+34h+arg_8]
0x96F50C: fstp    [esp+34h+var_1C]
0x96F510: call    sub_96FBB0
0x96F515: fmul    dword ptr [esi+40h]
0x96F518: add     esp, 0Ch
0x96F51B: pop     esi
0x96F51C: fsub    qword ptr ds:0A2F928h
0x96F522: fstp    [esp+24h+arg_0]
0x96F526: fld     [esp+24h+arg_0]
0x96F52A: add     esp, 24h
0x96F52D: retn    0Ch
