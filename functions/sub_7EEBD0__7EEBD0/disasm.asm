0x7EEBD0: sub     esp, 94h
0x7EEBD6: push    ebx
0x7EEBD7: push    esi
0x7EEBD8: mov     esi, [esp+9Ch+arg_18]
0x7EEBDF: mov     ebx, ecx
0x7EEBE1: mov     ecx, [ebx+14h]
0x7EEBE4: push    0
0x7EEBE6: push    esi
0x7EEBE7: call    sub_765480
0x7EEBEC: fldz
0x7EEBEE: fst     [esp+9Ch+var_3C]
0x7EEBF2: lea     eax, [esp+9Ch+var_34]
0x7EEBF6: fst     [esp+9Ch+var_40]
0x7EEBFA: push    eax
0x7EEBFB: fst     [esp+0A0h+var_44]
0x7EEBFF: mov     ecx, esi
0x7EEC01: fst     [esp+0A0h+var_48]
0x7EEC05: fst     [esp+0A0h+var_50]
0x7EEC09: fst     [esp+0A0h+var_54]
0x7EEC0D: fst     [esp+0A0h+var_58]
0x7EEC11: fst     [esp+0A0h+var_5C]
0x7EEC15: fst     [esp+0A0h+var_64]
0x7EEC19: fst     [esp+0A0h+var_68]
0x7EEC1D: fst     [esp+0A0h+var_6C]
0x7EEC21: fstp    [esp+0A0h+var_70]
0x7EEC25: fld1
0x7EEC27: fst     [esp+0A0h+var_38]
0x7EEC2B: fst     [esp+0A0h+var_4C]
0x7EEC2F: fst     [esp+0A0h+var_60]
0x7EEC33: fstp    [esp+0A0h+var_74]
0x7EEC37: call    sub_718A80
0x7EEC3C: fld     [esp+9Ch+var_34]
0x7EEC40: fld     [esp+9Ch+var_4]
0x7EEC47: mov     ecx, ds:0B46658h
0x7EEC4D: fld     st
0x7EEC4F: mov     edx, ds:0B4665Ch
0x7EEC55: fmulp   st(2), st
0x7EEC57: mov     eax, ds:0B46660h
0x7EEC5C: fxch    st(1)
0x7EEC5E: mov     [esp+9Ch+var_88], ecx
0x7EEC62: mov     ecx, ds:0B46664h
0x7EEC68: mov     [esp+9Ch+var_84], edx
0x7EEC6C: fstp    [esp+9Ch+var_74]
0x7EEC70: mov     [esp+9Ch+var_80], eax
0x7EEC74: fld     [esp+9Ch+var_28]
0x7EEC78: mov     [esp+9Ch+var_7C], ecx
0x7EEC7C: fmul    st, st(1)
0x7EEC7E: fstp    [esp+9Ch+var_70]
0x7EEC82: fld     [esp+9Ch+var_1C]
0x7EEC89: fmul    st, st(1)
0x7EEC8B: fstp    [esp+9Ch+var_6C]
0x7EEC8F: fld     [esp+9Ch+var_30]
0x7EEC93: fmul    st, st(1)
0x7EEC95: fstp    [esp+9Ch+var_64]
0x7EEC99: fld     [esp+9Ch+var_24]
0x7EEC9D: fmul    st, st(1)
0x7EEC9F: fstp    [esp+9Ch+var_60]
0x7EECA3: fld     [esp+9Ch+var_18]
0x7EECAA: fmul    st, st(1)
0x7EECAC: fstp    [esp+9Ch+var_5C]
0x7EECB0: fld     [esp+9Ch+var_2C]
0x7EECB4: fmul    st, st(1)
0x7EECB6: fstp    [esp+9Ch+var_54]
0x7EECBA: fld     [esp+9Ch+var_20]
0x7EECBE: fmul    st, st(1)
0x7EECC0: fstp    [esp+9Ch+var_50]
0x7EECC4: fmul    [esp+9Ch+var_14]
0x7EECCB: fstp    [esp+9Ch+var_4C]
0x7EECCF: fld     [esp+9Ch+var_10]
0x7EECD6: fstp    [esp+9Ch+var_44]
0x7EECDA: fld     [esp+9Ch+var_C]
0x7EECE1: fstp    [esp+9Ch+var_40]
0x7EECE5: fld     [esp+9Ch+var_8]
0x7EECEC: fstp    [esp+9Ch+var_3C]
0x7EECF0: fld1
0x7EECF2: fstp    [esp+9Ch+var_38]
0x7EECF6: fld     [esp+9Ch+var_88]
0x7EECFA: fstp    [esp+9Ch+var_94]
0x7EECFE: fld     [esp+9Ch+var_84]
0x7EED02: fstp    [esp+9Ch+var_90]
0x7EED06: fld     [esp+9Ch+var_80]
0x7EED0A: fstp    [esp+9Ch+var_8C]
0x7EED0E: lea     edx, [esp+9Ch+var_74]
0x7EED12: push    edx
0x7EED13: lea     eax, [esp+0A0h+var_94]
0x7EED17: push    eax
0x7EED18: lea     ecx, [esp+0A4h+var_88]
0x7EED1C: push    ecx
0x7EED1D: call    D3DXVec3TransformCoord_0
0x7EED22: fld     [esp+9Ch+var_88]
0x7EED26: fstp    [esp+9Ch+var_94]
0x7EED2A: mov     edx, [esp+9Ch+var_94]
0x7EED2E: fld     [esp+9Ch+var_84]
0x7EED32: mov     ds:0B46710h, edx
0x7EED38: fstp    [esp+9Ch+var_90]
0x7EED3C: mov     eax, [esp+9Ch+var_90]
0x7EED40: fld     [esp+9Ch+var_80]
0x7EED44: mov     ds:0B46714h, eax
0x7EED49: mov     eax, ds:0B43124h
0x7EED4E: fstp    [esp+9Ch+var_8C]
0x7EED52: mov     ecx, [esp+9Ch+var_8C]
0x7EED56: mov     ds:0B46718h, ecx
0x7EED5C: fld     dword ptr [eax+68h]
0x7EED5F: fstp    [esp+9Ch+var_94]
0x7EED63: mov     edx, [esp+9Ch+var_94]
0x7EED67: fld     dword ptr [eax+74h]
0x7EED6A: fstp    [esp+9Ch+var_90]
0x7EED6E: fld     dword ptr [eax+80h]
0x7EED74: mov     eax, [esp+9Ch+var_90]
0x7EED78: fstp    [esp+9Ch+var_8C]
0x7EED7C: mov     ecx, [esp+9Ch+var_8C]
0x7EED80: mov     ds:0B466F8h, edx
0x7EED86: mov     edx, [esp+9Ch+arg_10]
0x7EED8D: mov     ds:0B466FCh, eax
0x7EED92: mov     ds:0B46700h, ecx
0x7EED98: mov     esi, [edx+18h]
0x7EED9B: test    esi, esi
0x7EED9D: jnz     short loc_7EEDA3
0x7EED9F: xor     eax, eax
0x7EEDA1: jmp     short loc_7EEDB6
0x7EEDA3: mov     eax, [esi]
0x7EEDA5: mov     edx, [eax+54h]
0x7EEDA8: mov     ecx, esi
0x7EEDAA: call    edx
0x7EEDAC: xor     ecx, ecx
0x7EEDAE: cmp     eax, 0Fh
0x7EEDB1: setz    cl
0x7EEDB4: mov     eax, ecx
0x7EEDB6: neg     eax
0x7EEDB8: sbb     eax, eax
0x7EEDBA: and     eax, esi
0x7EEDBC: jz      short loc_7EEE2E
0x7EEDBE: mov     eax, [eax+1Ch]
0x7EEDC1: shr     eax, 1Ch
0x7EEDC4: movzx   edx, al
0x7EEDC7: push    edx
0x7EEDC8: call    GetShadowSceneNode
0x7EEDCD: add     esp, 4
0x7EEDD0: lea     ecx, [esp+9Ch+var_78]
0x7EEDD4: push    ecx
0x7EEDD5: mov     ecx, [eax+118h]
0x7EEDDB: call    sub_405AD0
0x7EEDE0: mov     esi, [eax]
0x7EEDE2: mov     eax, [esp+9Ch+var_78]
0x7EEDE6: test    eax, eax
0x7EEDE8: jz      short loc_7EEE0A
0x7EEDEA: push    edi
0x7EEDEB: mov     edi, eax
0x7EEDED: add     eax, 4
0x7EEDF0: push    eax; lpAddend
0x7EEDF1: call    dword ptr ds:0A2807Ch
0x7EEDF7: test    eax, eax
0x7EEDF9: jnz     short loc_7EEE09
0x7EEDFB: test    edi, edi
0x7EEDFD: jz      short loc_7EEE09
0x7EEDFF: mov     edx, [edi]
0x7EEE01: mov     eax, [edx]
0x7EEE03: push    1
0x7EEE05: mov     ecx, edi
0x7EEE07: call    eax
0x7EEE09: pop     edi
0x7EEE0A: test    esi, esi
0x7EEE0C: jz      short loc_7EEE2E
0x7EEE0E: mov     edx, [esi+0E0h]
0x7EEE14: lea     eax, [esi+0E0h]
0x7EEE1A: lea     ecx, [ebx+0B0h]
0x7EEE20: mov     [ecx], edx
0x7EEE22: mov     edx, [eax+4]
0x7EEE25: mov     [ecx+4], edx
0x7EEE28: mov     eax, [eax+8]
0x7EEE2B: mov     [ecx+8], eax
0x7EEE2E: pop     esi
0x7EEE2F: xor     eax, eax
0x7EEE31: pop     ebx
0x7EEE32: add     esp, 94h
0x7EEE38: retn    20h ; ' '
