0x97AEC0: sub     esp, 18h
0x97AEC3: push    esi
0x97AEC4: push    edi
0x97AEC5: mov     edi, [esp+20h+arg_0]
0x97AEC9: mov     esi, ecx
0x97AECB: push    esi
0x97AECC: lea     eax, [esp+24h+var_C]
0x97AED0: push    eax
0x97AED1: mov     ecx, edi
0x97AED3: call    sub_7101F0
0x97AED8: fld     dword ptr [edi+30h]
0x97AEDB: fstp    [esp+20h+arg_0]
0x97AEDF: fld     dword ptr [eax]
0x97AEE1: fld     [esp+20h+arg_0]
0x97AEE5: fld     st
0x97AEE7: fmulp   st(2), st
0x97AEE9: fxch    st(1)
0x97AEEB: fstp    [esp+20h+var_18]
0x97AEEF: fld     dword ptr [eax+4]
0x97AEF2: fmul    st, st(1)
0x97AEF4: fstp    [esp+20h+var_14]
0x97AEF8: fmul    dword ptr [eax+8]
0x97AEFB: fstp    [esp+20h+var_10]
0x97AEFF: fld     dword ptr [edi+24h]
0x97AF02: fadd    [esp+20h+var_18]
0x97AF06: fstp    [esp+20h+var_C]
0x97AF0A: mov     ecx, [esp+20h+var_C]
0x97AF0E: fld     dword ptr [edi+28h]
0x97AF11: fadd    [esp+20h+var_14]
0x97AF15: fstp    [esp+20h+var_8]
0x97AF19: mov     edx, [esp+20h+var_8]
0x97AF1D: fld     dword ptr [edi+2Ch]
0x97AF20: mov     [esi+3Ch], ecx
0x97AF23: fadd    [esp+20h+var_10]
0x97AF27: mov     [esi+40h], edx
0x97AF2A: lea     ecx, [esi+0Ch]
0x97AF2D: push    ecx
0x97AF2E: fstp    [esp+24h+var_4]
0x97AF32: mov     eax, [esp+24h+var_4]
0x97AF36: lea     edx, [esp+24h+var_C]
0x97AF3A: push    edx
0x97AF3B: mov     ecx, edi
0x97AF3D: mov     [esi+44h], eax
0x97AF40: call    sub_7101F0
0x97AF45: mov     ecx, [eax]
0x97AF47: mov     [esi+48h], ecx
0x97AF4A: mov     edx, [eax+4]
0x97AF4D: mov     [esi+4Ch], edx
0x97AF50: mov     eax, [eax+8]
0x97AF53: lea     ecx, [esi+18h]
0x97AF56: push    ecx
0x97AF57: lea     edx, [esp+24h+var_C]
0x97AF5B: push    edx
0x97AF5C: mov     ecx, edi
0x97AF5E: mov     [esi+50h], eax
0x97AF61: call    sub_7101F0
0x97AF66: mov     ecx, [eax]
0x97AF68: mov     [esi+54h], ecx
0x97AF6B: mov     edx, [eax+4]
0x97AF6E: mov     [esi+58h], edx
0x97AF71: mov     eax, [eax+8]
0x97AF74: lea     ecx, [esi+24h]
0x97AF77: push    ecx
0x97AF78: lea     edx, [esp+24h+var_C]
0x97AF7C: push    edx
0x97AF7D: mov     ecx, edi
0x97AF7F: mov     [esi+5Ch], eax
0x97AF82: call    sub_7101F0
0x97AF87: fld     dword ptr [esi+30h]
0x97AF8A: mov     ecx, [eax]
0x97AF8C: mov     [esi+60h], ecx
0x97AF8F: mov     edx, [eax+4]
0x97AF92: mov     [esi+64h], edx
0x97AF95: mov     eax, [eax+8]
0x97AF98: mov     [esi+68h], eax
0x97AF9B: fmul    dword ptr [edi+30h]
0x97AF9E: fstp    dword ptr [esi+6Ch]
0x97AFA1: fld     dword ptr [esi+34h]
0x97AFA4: fmul    dword ptr [edi+30h]
0x97AFA7: fstp    dword ptr [esi+70h]
0x97AFAA: fld     dword ptr [esi+38h]
0x97AFAD: fmul    dword ptr [edi+30h]
0x97AFB0: pop     edi
0x97AFB1: fstp    dword ptr [esi+74h]
0x97AFB4: pop     esi
0x97AFB5: add     esp, 18h
0x97AFB8: retn    4
