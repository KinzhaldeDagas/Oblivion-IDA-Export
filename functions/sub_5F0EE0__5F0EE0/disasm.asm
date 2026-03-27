0x5F0EE0: push    ebp
0x5F0EE1: mov     ebp, esp
0x5F0EE3: and     esp, 0FFFFFFF0h
0x5F0EE6: sub     esp, 54h
0x5F0EE9: mov     eax, ds:0B30AACh
0x5F0EEE: xor     eax, esp
0x5F0EF0: mov     [esp+54h+var_4], eax
0x5F0EF4: push    ebx
0x5F0EF5: push    esi
0x5F0EF6: push    edi
0x5F0EF7: mov     edi, [ebp+arg_0]
0x5F0EFA: test    edi, edi
0x5F0EFC: mov     esi, ecx
0x5F0EFE: jz      loc_5F10CA
0x5F0F04: mov     eax, [edi]
0x5F0F06: mov     edx, [eax+170h]
0x5F0F0C: mov     ecx, edi
0x5F0F0E: call    edx
0x5F0F10: cmp     byte ptr [eax+4], 24h ; '$'
0x5F0F14: jnz     short loc_5F0F2A
0x5F0F16: mov     eax, [edi]
0x5F0F18: mov     edx, [eax+278h]
0x5F0F1E: mov     ecx, edi
0x5F0F20: call    edx
0x5F0F22: test    al, al
0x5F0F24: jz      loc_5F10CA
0x5F0F2A: mov     ebx, [edi+3Ch]
0x5F0F2D: test    ebx, ebx
0x5F0F2F: jz      loc_5F10CA
0x5F0F35: mov     eax, [esi]
0x5F0F37: mov     edx, [eax+154h]
0x5F0F3D: mov     ecx, esi
0x5F0F3F: call    edx
0x5F0F41: test    eax, eax
0x5F0F43: mov     ecx, ds:0B3F9A8h
0x5F0F49: mov     edx, ds:0B3F9ACh
0x5F0F4F: mov     edi, ds:0B3F9B0h
0x5F0F55: mov     dword ptr [esp+60h+var_48], ecx
0x5F0F59: mov     dword ptr [esp+60h+var_48+4], edx
0x5F0F5D: mov     [esp+60h+var_40], edi
0x5F0F61: mov     dword ptr [esp+60h+var_54], ecx
0x5F0F65: mov     dword ptr [esp+60h+var_54+4], edx
0x5F0F69: mov     [esp+60h+var_4C], edi
0x5F0F6D: jz      short loc_5F0FCD
0x5F0F6F: mov     ecx, [esi+58h]
0x5F0F72: lea     edi, [eax+64h]
0x5F0F75: mov     eax, [ecx]
0x5F0F77: mov     edx, [eax+310h]
0x5F0F7D: call    edx
0x5F0F7F: push    eax
0x5F0F80: lea     eax, [esp+64h+a2]
0x5F0F84: push    eax
0x5F0F85: mov     ecx, edi
0x5F0F87: call    sub_53D4B0
0x5F0F8C: mov     ecx, [eax]
0x5F0F8E: mov     edx, [eax+4]
0x5F0F91: mov     eax, [eax+8]
0x5F0F94: mov     dword ptr [esp+60h+var_48], ecx
0x5F0F98: lea     ecx, [esp+60h+a2]
0x5F0F9C: push    ecx; a2
0x5F0F9D: mov     ecx, esi; this
0x5F0F9F: mov     dword ptr [esp+64h+var_48+4], edx
0x5F0FA3: mov     [esp+64h+var_40], eax
0x5F0FA7: call    sub_5E6A40
0x5F0FAC: push    eax
0x5F0FAD: lea     edx, [esp+64h+var_2C]
0x5F0FB1: push    edx
0x5F0FB2: mov     ecx, edi
0x5F0FB4: call    sub_53D4B0
0x5F0FB9: mov     ecx, [eax]
0x5F0FBB: mov     edx, [eax+4]
0x5F0FBE: mov     eax, [eax+8]
0x5F0FC1: mov     dword ptr [esp+60h+var_54], ecx
0x5F0FC5: mov     dword ptr [esp+60h+var_54+4], edx
0x5F0FC9: mov     [esp+60h+var_4C], eax
0x5F0FCD: fld     dword ptr [esp+60h+var_48]
0x5F0FD1: fsub    dword ptr [esp+60h+var_54]
0x5F0FD5: fstp    [esp+60h+a2]
0x5F0FD9: mov     ecx, [esp+60h+a2]
0x5F0FDD: fld     dword ptr [esp+60h+var_48+4]
0x5F0FE1: mov     dword ptr [esp+60h+var_54], ecx
0x5F0FE5: fsub    dword ptr [esp+60h+var_54+4]
0x5F0FE9: lea     ecx, [esp+60h+var_54]
0x5F0FED: fstp    [esp+60h+var_38]
0x5F0FF1: mov     edx, [esp+60h+var_38]
0x5F0FF5: fld     [esp+60h+var_40]
0x5F0FF9: mov     dword ptr [esp+60h+var_54+4], edx
0x5F0FFD: fsub    [esp+60h+var_4C]
0x5F1001: fstp    [esp+60h+var_34]
0x5F1005: mov     eax, [esp+60h+var_34]
0x5F1009: mov     [esp+60h+var_4C], eax
0x5F100D: call    sub_43F350
0x5F1012: fstp    st
0x5F1014: fld     dword ptr [esp+60h+var_54]
0x5F1018: push    ecx
0x5F1019: fld     qword ptr ds:0A30F70h
0x5F101F: fmul    st(1), st
0x5F1021: fxch    st(1)
0x5F1023: fstp    dword ptr [esp+64h+var_54]
0x5F1027: fld     dword ptr [esp+64h+var_54+4]
0x5F102B: fmul    st, st(1)
0x5F102D: fstp    dword ptr [esp+64h+var_54+4]
0x5F1031: fmul    [esp+64h+var_4C]
0x5F1035: fstp    [esp+64h+var_4C]
0x5F1039: fld     dword ptr [esp+64h+var_48]
0x5F103D: fadd    dword ptr [esp+64h+var_54]
0x5F1041: fstp    dword ptr [esp+64h+var_54]
0x5F1045: fld     dword ptr [esp+64h+var_54+4]
0x5F1049: fadd    dword ptr [esp+64h+var_48+4]
0x5F104D: fstp    dword ptr [esp+64h+var_54+4]
0x5F1051: fld     [esp+64h+var_4C]
0x5F1055: fadd    [esp+64h+var_40]
0x5F1059: fstp    [esp+64h+var_4C]
0x5F105D: fld     [ebp+arg_4]
0x5F1060: fstp    [esp+64h+var_64]; float
0x5F1063: call    sub_547770
0x5F1068: push    ebx
0x5F1069: fstp    [esp+68h+var_30]
0x5F106D: call    sub_8B8700
0x5F1072: push    0; a4
0x5F1074: push    1; a3
0x5F1076: push    1; a2
0x5F1078: push    ebx; a1
0x5F1079: call    sub_88D070
0x5F107E: fldz
0x5F1080: add     esp, 18h
0x5F1083: push    0; a3
0x5F1085: push    ecx
0x5F1086: mov     ecx, ebx; this
0x5F1088: fstp    [esp+68h+var_68]; a2
0x5F108B: call    NiAVObject_UpdateNiAVObject
0x5F1090: fld     dword ptr [esp+60h+var_54]
0x5F1094: fld     qword ptr ds:0A39088h
0x5F109A: push    ecx
0x5F109B: fmul    st(1), st
0x5F109D: lea     ecx, [esp+64h+var_20]
0x5F10A1: fxch    st(1)
0x5F10A3: fstp    [esp+64h+var_20]
0x5F10A7: fld     dword ptr [esp+64h+var_54+4]
0x5F10AB: fmul    st, st(1)
0x5F10AD: fstp    [esp+64h+var_1C]
0x5F10B1: fmul    [esp+64h+var_4C]
0x5F10B5: fstp    [esp+64h+var_18]
0x5F10B9: fld     [esp+64h+var_30]
0x5F10BD: fstp    [esp+64h+var_64]; float
0x5F10C0: push    ecx; int
0x5F10C1: push    ebx; int
0x5F10C2: call    sub_5364B0
0x5F10C7: add     esp, 0Ch
0x5F10CA: mov     ecx, [esp+60h+var_4]
0x5F10CE: pop     edi
0x5F10CF: pop     esi
0x5F10D0: pop     ebx
0x5F10D1: xor     ecx, esp
0x5F10D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F10D8: mov     esp, ebp
0x5F10DA: pop     ebp
0x5F10DB: retn    8
