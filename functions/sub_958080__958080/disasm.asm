0x958080: sub     esp, 24h
0x958083: push    esi
0x958084: mov     esi, [esp+28h+arg_0]
0x958088: push    edi
0x958089: push    esi
0x95808A: mov     edi, ecx
0x95808C: call    sub_957F30
0x958091: fstp    [esp+2Ch+var_18]
0x958095: push    esi
0x958096: mov     ecx, edi
0x958098: call    sub_957E30
0x95809D: fild    dword ptr [esi+30h]
0x9580A0: fmul    dword ptr [esi+1Ch]
0x9580A3: fmul    dword ptr [edi+8]
0x9580A6: fmul    dword ptr ds:0A31E2Ch
0x9580AC: fld     dword ptr [esi+38h]
0x9580AF: fsub    dword ptr [esi+20h]
0x9580B2: fmul    dword ptr [esi+10h]
0x9580B5: fmul    dword ptr [edi+0Ch]
0x9580B8: pop     edi
0x9580B9: pop     esi
0x9580BA: fadd    st, st(1)
0x9580BC: faddp   st(2), st
0x9580BE: fxch    st(1)
0x9580C0: fadd    [esp+24h+var_18]
0x9580C4: fstp    st(1)
0x9580C6: add     esp, 24h
0x9580C9: retn    4
