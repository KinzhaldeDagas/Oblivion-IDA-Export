0x958020: sub     esp, 24h
0x958023: push    esi
0x958024: push    edi
0x958025: mov     edi, [esp+2Ch+arg_0]
0x958029: push    edi
0x95802A: mov     esi, ecx
0x95802C: call    sub_957E90
0x958031: fstp    [esp+2Ch+var_20]
0x958035: mov     eax, [esi]
0x958037: push    edi
0x958038: mov     ecx, esi
0x95803A: call    dword ptr [eax+10h]
0x95803D: mov     ecx, [edi+2Ch]
0x958040: sub     ecx, [edi+28h]
0x958043: cmp     ecx, 10h
0x958046: jge     short loc_95805F
0x958048: fld     dword ptr [esi+18h]
0x95804B: pop     edi
0x95804C: fmul    dword ptr ds:0AA357Ch
0x958052: pop     esi
0x958053: faddp   st(1), st
0x958055: fadd    [esp+24h+var_20]
0x958059: add     esp, 24h
0x95805C: retn    4
0x95805F: fld     dword ptr ds:0A2FAA8h
0x958065: pop     edi
0x958066: faddp   st(1), st
0x958068: pop     esi
0x958069: fadd    [esp+24h+var_20]
0x95806D: add     esp, 24h
0x958070: retn    4
