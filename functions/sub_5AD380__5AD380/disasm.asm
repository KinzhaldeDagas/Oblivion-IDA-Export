0x5AD380: mov     eax, [esp+arg_0]
0x5AD384: fld     dword ptr [eax]
0x5AD386: xor     edx, edx
0x5AD388: fstp    dword ptr ds:0B3B3DCh
0x5AD38E: fld     dword ptr [eax]
0x5AD390: mov     [ecx+2Ch], edx
0x5AD393: fadd    qword ptr ds:0A2FC68h
0x5AD399: fstp    [esp+arg_0]
0x5AD39D: fld     dword ptr [eax+4]
0x5AD3A0: fstp    dword ptr ds:0B3B3E0h
0x5AD3A6: fld     dword ptr [eax+4]
0x5AD3A9: mov     [ecx+30h], edx
0x5AD3AC: fadd    [esp+arg_0]
0x5AD3B0: fstp    [esp+arg_0]
0x5AD3B4: fld     dword ptr [eax+8]
0x5AD3B7: fstp    dword ptr ds:0B3B3E4h
0x5AD3BD: fld     dword ptr [eax+8]
0x5AD3C0: mov     [ecx+34h], edx
0x5AD3C3: fadd    [esp+arg_0]
0x5AD3C7: fstp    [esp+arg_0]
0x5AD3CB: fld     dword ptr [eax+0Ch]
0x5AD3CE: fstp    dword ptr ds:0B3B3E8h
0x5AD3D4: fld     dword ptr [eax+0Ch]
0x5AD3D7: mov     [ecx+38h], edx
0x5AD3DA: fadd    [esp+arg_0]
0x5AD3DE: fstp    [esp+arg_0]
0x5AD3E2: fld1
0x5AD3E4: fld     [esp+arg_0]
0x5AD3E8: fucom   st(1)
0x5AD3EA: fnstsw  ax
0x5AD3EC: fstp    st(1)
0x5AD3EE: test    ah, 44h
0x5AD3F1: jnp     short loc_5AD409
0x5AD3F3: sub     esp, 8
0x5AD3F6: fstp    qword ptr [esp+8+ArgList]; ArgList
0x5AD3F9: push    offset aTotalValueOf_0; "Total value of [LoadingBar] percentages"...
0x5AD3FE: call    PrintError
0x5AD403: add     esp, 0Ch
0x5AD406: retn    4
0x5AD409: fstp    st
0x5AD40B: retn    4
