0x80DDA0: sub     esp, 0C0h
0x80DDA6: push    esi
0x80DDA7: mov     esi, [esp+0C4h+arg_18]
0x80DDAE: push    edi
0x80DDAF: mov     edi, ecx
0x80DDB1: mov     ecx, [edi+14h]
0x80DDB4: push    0
0x80DDB6: push    esi
0x80DDB7: call    sub_765480
0x80DDBC: fld     dword ptr [esi+30h]
0x80DDBF: fmul    dword ptr [esi]
0x80DDC1: lea     eax, [esp+0C8h+var_8C]
0x80DDC5: push    eax
0x80DDC6: push    0
0x80DDC8: fstp    [esp+0D0h+var_8C]
0x80DDCC: lea     ecx, [esp+0D0h+var_40]
0x80DDD3: fld     dword ptr [esi+0Ch]
0x80DDD6: push    ecx
0x80DDD7: fmul    dword ptr [esi+30h]
0x80DDDA: fstp    [esp+0D4h+var_88]
0x80DDDE: fld     dword ptr [esi+18h]
0x80DDE1: fmul    dword ptr [esi+30h]
0x80DDE4: fstp    [esp+0D4h+var_84]
0x80DDE8: fld     dword ptr [esi+4]
0x80DDEB: fmul    dword ptr [esi+30h]
0x80DDEE: fstp    [esp+0D4h+var_7C]
0x80DDF2: fld     dword ptr [esi+10h]
0x80DDF5: fmul    dword ptr [esi+30h]
0x80DDF8: fstp    [esp+0D4h+var_78]
0x80DDFC: fld     dword ptr [esi+1Ch]
0x80DDFF: fmul    dword ptr [esi+30h]
0x80DE02: fstp    [esp+0D4h+var_74]
0x80DE06: fld     dword ptr [esi+8]
0x80DE09: fmul    dword ptr [esi+30h]
0x80DE0C: fstp    [esp+0D4h+var_6C]
0x80DE10: fld     dword ptr [esi+14h]
0x80DE13: fmul    dword ptr [esi+30h]
0x80DE16: fstp    [esp+0D4h+var_68]
0x80DE1A: fld     dword ptr [esi+20h]
0x80DE1D: fmul    dword ptr [esi+30h]
0x80DE20: fstp    [esp+0D4h+var_64]
0x80DE24: fld     dword ptr [esi+24h]
0x80DE27: fstp    [esp+0D4h+var_5C]
0x80DE2B: fld     dword ptr [esi+28h]
0x80DE2E: fstp    [esp+0D4h+var_58]
0x80DE32: fld     dword ptr [esi+2Ch]
0x80DE35: fstp    [esp+0D4h+var_54]
0x80DE3C: fldz
0x80DE3E: fst     [esp+0D4h+var_80]
0x80DE42: fst     [esp+0D4h+var_70]
0x80DE46: fstp    [esp+0D4h+var_60]
0x80DE4A: fld1
0x80DE4C: fstp    [esp+0D4h+var_50]
0x80DE53: call    D3DXMatrixInverse_0
0x80DE58: fld     dword ptr ds:0B465A8h
0x80DE5E: fchs
0x80DE60: lea     edx, [esp+0C8h+var_40]
0x80DE67: fstp    [esp+0C8h+var_B0]
0x80DE6B: push    edx
0x80DE6C: fld     dword ptr ds:0B465ACh
0x80DE72: lea     eax, [esp+0CCh+var_B0]
0x80DE76: fchs
0x80DE78: push    eax
0x80DE79: fstp    [esp+0D0h+var_AC]
0x80DE7D: lea     ecx, [esp+0D0h+var_4C]
0x80DE84: fld     dword ptr ds:0B465B0h
0x80DE8A: push    ecx
0x80DE8B: fchs
0x80DE8D: fstp    [esp+0D4h+var_A8]
0x80DE91: call    D3DXVec3TransformNormal_0
0x80DE96: lea     edx, [esp+0C8h+var_4C]
0x80DE9A: push    edx
0x80DE9B: lea     eax, [esp+0CCh+var_B0]
0x80DE9F: push    eax
0x80DEA0: call    D3DXVec3Normalize_0
0x80DEA5: fld     [esp+0C8h+var_B0]
0x80DEA9: fstp    [esp+0C8h+var_C0]
0x80DEAD: fld     [esp+0C8h+var_AC]
0x80DEB1: fstp    [esp+0C8h+var_BC]
0x80DEB5: fld     [esp+0C8h+var_A8]
0x80DEB9: fstp    [esp+0C8h+var_B8]
0x80DEBD: fldz
0x80DEBF: mov     ecx, [esp+0C8h+var_C0]
0x80DEC3: fstp    [esp+0C8h+var_B4]
0x80DEC7: mov     edx, [esp+0C8h+var_BC]
0x80DECB: mov     eax, [esp+0C8h+var_B8]
0x80DECF: mov     [edi+0A8h], ecx
0x80DED5: mov     ecx, [esp+0C8h+var_B4]
0x80DED9: mov     [edi+0ACh], edx
0x80DEDF: mov     [edi+0B0h], eax
0x80DEE5: mov     [edi+0B4h], ecx
0x80DEEB: fld     dword ptr ds:0B46528h
0x80DEF1: fstp    [esp+0C8h+var_98]
0x80DEF5: lea     edx, [esp+0C8h+var_40]
0x80DEFC: fld     dword ptr ds:0B4652Ch
0x80DF02: push    edx
0x80DF03: lea     eax, [esp+0CCh+var_98]
0x80DF07: fstp    [esp+0CCh+var_94]
0x80DF0B: fld     dword ptr ds:0B46530h
0x80DF11: push    eax
0x80DF12: lea     ecx, [esp+0D0h+var_A4]
0x80DF16: fstp    [esp+0D0h+var_90]
0x80DF1A: push    ecx
0x80DF1B: call    D3DXVec3TransformCoord_0
0x80DF20: fld     [esp+0C8h+var_A4]
0x80DF24: fstp    [esp+0C8h+var_C0]
0x80DF28: mov     edx, [esp+0C8h+var_C0]
0x80DF2C: fld     [esp+0C8h+var_A0]
0x80DF30: mov     [edi+98h], edx
0x80DF36: fstp    [esp+0C8h+var_BC]
0x80DF3A: mov     eax, [esp+0C8h+var_BC]
0x80DF3E: fld     [esp+0C8h+var_9C]
0x80DF42: mov     [edi+9Ch], eax
0x80DF48: fstp    [esp+0C8h+var_B8]
0x80DF4C: mov     ecx, [esp+0C8h+var_B8]
0x80DF50: fld1
0x80DF52: mov     [edi+0A0h], ecx
0x80DF58: fstp    [esp+0C8h+var_B4]
0x80DF5C: xor     eax, eax
0x80DF5E: mov     edx, [esp+0C8h+var_B4]
0x80DF62: mov     [edi+0A4h], edx
0x80DF68: pop     edi
0x80DF69: pop     esi
0x80DF6A: add     esp, 0C0h
0x80DF70: retn    20h ; ' '
