0x612F50: sub     esp, 4Ch
0x612F53: push    esi
0x612F54: mov     esi, [esp+50h+arg_4]
0x612F58: test    esi, esi
0x612F5A: jnz     short loc_612F63
0x612F5C: fldz
0x612F5E: pop     esi
0x612F5F: add     esp, 4Ch
0x612F62: retn
0x612F63: push    edi
0x612F64: mov     edi, [esp+54h+arg_0]
0x612F68: push    0
0x612F6A: push    esi
0x612F6B: mov     ecx, edi
0x612F6D: call    TesObjectREF_GetDistance
0x612F72: fstp    [esp+54h+arg_4]
0x612F76: fld     [esp+54h+arg_4]
0x612F7A: fcom    qword ptr ds:0A3A5B0h
0x612F80: fnstsw  ax
0x612F82: test    ah, 44h
0x612F85: jnp     loc_6131C5
0x612F8B: mov     eax, [edi]
0x612F8D: fstp    st
0x612F8F: mov     edx, [eax+190h]
0x612F95: mov     ecx, edi
0x612F97: call    edx
0x612F99: test    al, al
0x612F9B: jz      loc_61314C
0x612FA1: mov     eax, [esi]
0x612FA3: mov     edx, [eax+190h]
0x612FA9: mov     ecx, esi
0x612FAB: call    edx
0x612FAD: test    al, al
0x612FAF: jz      loc_61314C
0x612FB5: push    ebx
0x612FB6: mov     ecx, edi
0x612FB8: call    Actor_IsSwimming
0x612FBD: test    al, al
0x612FBF: jz      short loc_612FD0
0x612FC1: mov     ecx, esi
0x612FC3: call    Actor_IsSwimming
0x612FC8: test    al, al
0x612FCA: jz      short loc_612FD0
0x612FCC: mov     bl, 1
0x612FCE: jmp     short loc_612FD2
0x612FD0: xor     bl, bl
0x612FD2: mov     eax, [edi]
0x612FD4: mov     edx, [eax+174h]
0x612FDA: mov     ecx, edi
0x612FDC: call    edx
0x612FDE: mov     edx, [eax+4]
0x612FE1: mov     ecx, [eax]
0x612FE3: mov     eax, [eax+8]
0x612FE6: mov     [esp+54h+var_1C], edx
0x612FEA: mov     edx, [esi]
0x612FEC: mov     [esp+54h+var_20], ecx
0x612FF0: mov     [esp+54h+var_18], eax
0x612FF4: mov     eax, [edx+174h]
0x612FFA: mov     ecx, esi
0x612FFC: call    eax
0x612FFE: mov     ecx, [eax]
0x613000: mov     edx, [eax+4]
0x613003: mov     dword ptr [esp+54h+var_3C+4], ecx
0x613007: mov     ecx, [eax+8]
0x61300A: mov     [esp+54h+var_34], edx
0x61300E: mov     edx, [eax]
0x613010: mov     dword ptr [esp+54h+var_30], ecx
0x613014: mov     ecx, [eax+4]
0x613017: mov     [esp+54h+var_14], edx
0x61301B: mov     edx, [eax+8]
0x61301E: test    bl, bl
0x613020: mov     [esp+54h+var_10], ecx
0x613024: mov     [esp+54h+var_C], edx
0x613028: pop     ebx
0x613029: jnz     short loc_613069
0x61302B: cmp     [esp+50h+arg_C], 0
0x613030: jz      loc_61314C
0x613036: mov     ecx, offset fAICombatSlopeDifference
0x61303B: call    GameSetting_GetSafeFloatPointer
0x613040: fld     [esp+50h+var_18]
0x613044: fsub    [esp+50h+var_C]
0x613048: fstp    dword ptr [esp+50h+var_48]
0x61304C: fld     dword ptr [esp+50h+var_48]
0x613050: fabs
0x613052: fstp    dword ptr [esp+50h+var_48]
0x613056: fld     dword ptr [esp+50h+var_48]
0x61305A: fld     dword ptr [eax]
0x61305C: fcompp
0x61305E: fnstsw  ax
0x613060: test    ah, 41h
0x613063: jp      loc_61314C
0x613069: mov     eax, [edi]
0x61306B: mov     edx, [eax+15Ch]
0x613071: lea     ecx, [esp+50h+var_30+4]
0x613075: push    ecx
0x613076: mov     ecx, edi
0x613078: call    edx
0x61307A: fld     dword ptr [eax+8]
0x61307D: fadd    [esp+50h+var_18]
0x613081: mov     eax, [edi]
0x613083: mov     edx, [eax+158h]
0x613089: lea     ecx, [esp+50h+var_30+4]
0x61308D: push    ecx
0x61308E: fstp    dword ptr [esp+54h+var_48]
0x613092: mov     ecx, edi
0x613094: call    edx
0x613096: fld     dword ptr [eax+8]
0x613099: fadd    [esp+50h+var_18]
0x61309D: mov     eax, [esi]
0x61309F: mov     edx, [eax+15Ch]
0x6130A5: lea     ecx, [esp+50h+var_48+4]
0x6130A9: push    ecx
0x6130AA: fstp    dword ptr [esp+54h+var_30+4]
0x6130AE: mov     ecx, esi
0x6130B0: call    edx
0x6130B2: fld     dword ptr [eax+8]
0x6130B5: fadd    dword ptr [esp+50h+var_30]
0x6130B9: mov     eax, [esi]
0x6130BB: mov     edx, [eax+158h]
0x6130C1: lea     ecx, [esp+50h+var_8]
0x6130C5: push    ecx
0x6130C6: fstp    dword ptr [esp+54h+var_48+4]
0x6130CA: mov     ecx, esi
0x6130CC: call    edx
0x6130CE: fld     dword ptr [eax+8]
0x6130D1: fadd    dword ptr [esp+50h+var_30]
0x6130D5: fstp    dword ptr [esp+50h+var_3C+4]
0x6130D9: fld     dword ptr [esp+50h+var_48]
0x6130DD: fld     dword ptr [esp+50h+var_48+4]
0x6130E1: fcom    st(1)
0x6130E3: fnstsw  ax
0x6130E5: fld     dword ptr [esp+50h+var_3C+4]
0x6130E9: test    ah, 1
0x6130EC: jnz     short loc_61312C
0x6130EE: fcom    st(2)
0x6130F0: fnstsw  ax
0x6130F2: fstp    st(2)
0x6130F4: test    ah, 41h
0x6130F7: jp      short loc_61312E
0x6130F9: fstp    st
0x6130FB: fstp    st
0x6130FD: fld     [esp+50h+var_20]
0x613101: lea     ecx, [esp+50h+var_30+4]
0x613105: fsub    [esp+50h+var_14]
0x613109: fstp    dword ptr [esp+50h+var_30+4]
0x61310D: fld     [esp+50h+var_1C]
0x613111: fsub    [esp+50h+var_10]
0x613115: fstp    [esp+50h+var_28]
0x613119: fldz
0x61311B: fsubr   st, st
0x61311D: fstp    [esp+50h+var_24]
0x613121: call    sub_404C90
0x613126: fstp    dword ptr [esp+50h+arg_8]
0x61312A: jmp     short loc_61314C
0x61312C: fstp    st(2)
0x61312E: fld     dword ptr [esp+50h+var_30+4]
0x613132: fcom    st(1)
0x613134: fnstsw  ax
0x613136: fstp    st(1)
0x613138: test    ah, 41h
0x61313B: jp      short loc_613148
0x61313D: fcompp
0x61313F: fnstsw  ax
0x613141: test    ah, 1
0x613144: jnz     short loc_61314C
0x613146: jmp     short loc_6130FD
0x613148: fstp    st
0x61314A: fstp    st
0x61314C: mov     eax, [esi]
0x61314E: mov     edx, [eax+15Ch]
0x613154: lea     ecx, [esp+50h+var_8]
0x613158: push    ecx
0x613159: mov     ecx, esi
0x61315B: call    edx
0x61315D: fld     dword ptr [eax+4]
0x613160: mov     eax, [esi]
0x613162: fstp    [esp+54h+var_30]
0x613166: mov     edx, [eax+0ECh]
0x61316C: mov     ecx, esi
0x61316E: call    edx
0x613170: fmul    [esp+54h+var_30]
0x613174: mov     eax, [edi]
0x613176: mov     edx, [eax+15Ch]
0x61317C: lea     ecx, [esp+54h+var_18]
0x613180: fstp    [esp+54h+var_3C]
0x613184: push    ecx
0x613185: mov     ecx, edi
0x613187: call    edx
0x613189: fld     dword ptr [eax+4]
0x61318C: mov     eax, [edi]
0x61318E: fstp    [esp+54h+var_30]
0x613192: fld     [esp+54h+arg_4]
0x613196: mov     edx, [eax+0ECh]
0x61319C: mov     ecx, edi
0x61319E: fstp    [esp+54h+var_48]
0x6131A2: call    edx
0x6131A4: fmul    [esp+54h+var_30]
0x6131A8: fadd    [esp+54h+var_3C]
0x6131AC: call    Double_To_SInt32
0x6131B1: mov     [esp+54h+arg_4], eax
0x6131B5: fild    [esp+54h+arg_4]
0x6131B9: fsubr   [esp+54h+var_48]
0x6131BD: fstp    [esp+54h+arg_4]
0x6131C1: fld     [esp+54h+arg_4]
0x6131C5: pop     edi
0x6131C6: pop     esi
0x6131C7: add     esp, 4Ch
0x6131CA: retn
