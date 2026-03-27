0x411160: fld     [esp+arg_0]
0x411164: sub     esp, 24h
0x411167: cmp     byte ptr [esp+24h+arg_4], 0
0x41116C: push    esi
0x41116D: mov     esi, ecx
0x41116F: jnz     short loc_411186
0x411171: fld     dword ptr [esi+0ECh]
0x411177: fld     st(1)
0x411179: fucompp
0x41117B: fnstsw  ax
0x41117D: test    ah, 44h
0x411180: jnp     loc_4112D1
0x411186: fst     dword ptr [esi+0ECh]
0x41118C: push    0
0x41118E: fmul    ds:dbl_A31C78
0x411194: lea     ecx, [esp+2Ch+var_1C]
0x411198: fmul    ds:dbl_A2FAA0
0x41119E: fstp    [esp+2Ch+arg_4]
0x4111A2: call    NiFrustum__SetOrtho
0x4111A7: mov     ecx, esi; this
0x4111A9: call    GetFarPlane
0x4111AE: fstp    [esp+28h+var_8]
0x4111B2: fld     NearDistance
0x4111B8: mov     eax, [esi+0DCh]
0x4111BE: fstp    [esp+28h+var_C]
0x4111C2: fld     [esp+28h+var_8]
0x4111C6: fdiv    [esp+28h+var_C]
0x4111CA: fstp    [esp+28h+var_24]
0x4111CE: fld     [esp+28h+var_24]
0x4111D2: fstp    dword ptr [eax+10Ch]
0x4111D8: fild    nHeight
0x4111DE: cmp     byte ptr [esi+0E8h], 0
0x4111E5: fidiv   nWidth
0x4111EB: jz      short loc_41122A
0x4111ED: fstp    [esp+28h+var_24]
0x4111F1: fld     [esp+28h+arg_4]
0x4111F5: call    __CItan
0x4111FA: fstp    [esp+28h+arg_4]
0x4111FE: fld     [esp+28h+arg_4]
0x411202: fld     st
0x411204: fchs
0x411206: fstp    [esp+28h+arg_4]
0x41120A: fld     [esp+28h+arg_4]
0x41120E: fst     [esp+28h+var_1C]
0x411212: fxch    st(1)
0x411214: fst     [esp+28h+var_18]
0x411218: fld     [esp+28h+var_24]
0x41121C: fld     st
0x41121E: fmulp   st(3), st
0x411220: fxch    st(2)
0x411222: fstp    [esp+28h+var_10]
0x411226: fmulp   st(1), st
0x411228: jmp     short loc_411285
0x41122A: fst     [esp+28h+var_20]
0x41122E: fdivr   ds:dbl_A31C70
0x411234: fstp    [esp+28h+var_24]
0x411238: fld     [esp+28h+arg_4]
0x41123C: call    __CItan
0x411241: fstp    [esp+28h+arg_4]
0x411245: fld     [esp+28h+arg_4]
0x411249: fld     st
0x41124B: fchs
0x41124D: fstp    [esp+28h+arg_4]
0x411251: fld     [esp+28h+arg_4]
0x411255: fld     st
0x411257: fld     [esp+28h+var_24]
0x41125B: fld     st
0x41125D: fmulp   st(2), st
0x41125F: fxch    st(1)
0x411261: fstp    [esp+28h+var_1C]
0x411265: fld     st(2)
0x411267: fmul    st, st(1)
0x411269: fstp    [esp+28h+var_18]
0x41126D: fld     [esp+28h+var_20]
0x411271: fld     st
0x411273: fmulp   st(3), st
0x411275: fld     st(1)
0x411277: fmulp   st(3), st
0x411279: fxch    st(2)
0x41127B: fstp    [esp+28h+var_10]
0x41127F: fxch    st(2)
0x411281: fmulp   st(1), st
0x411283: fmulp   st(1), st
0x411285: lea     ecx, [esp+28h+var_1C]
0x411289: fstp    [esp+28h+var_14]
0x41128D: push    ecx; a2
0x41128E: mov     ecx, [esi+0DCh]; this
0x411294: call    Camera_SetFrustum
0x411299: fldz
0x41129B: push    1; a3
0x41129D: push    ecx
0x41129E: mov     ecx, [esi+0DCh]; this
0x4112A4: fstp    [esp+30h+a2]; a2
0x4112A7: call    NiAVObject_UpdateNiAVObject
0x4112AC: fld     [esp+28h+arg_0]
0x4112B0: fdiv    g_DefaulFOV
0x4112B6: mov     edx, [esi+0DCh]
0x4112BC: pop     esi
0x4112BD: fstp    [esp+24h+arg_4]
0x4112C1: fld     [esp+24h+arg_4]
0x4112C5: fstp    dword ptr [edx+120h]
0x4112CB: add     esp, 24h
0x4112CE: retn    8
0x4112D1: fstp    st
0x4112D3: pop     esi
0x4112D4: add     esp, 24h
0x4112D7: retn    8
