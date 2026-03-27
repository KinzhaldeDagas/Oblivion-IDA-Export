0x60E2E0: mov     eax, [ecx]
0x60E2E2: mov     edx, [eax+170h]
0x60E2E8: push    0; int
0x60E2EA: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x60E2EF: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60E2F4: push    0; int
0x60E2F6: call    edx
0x60E2F8: push    eax; void *
0x60E2F9: call    OblivionDynamicCast
0x60E2FE: fld     [esp+14h+arg_0]
0x60E302: add     esp, 10h
0x60E305: mov     ecx, eax
0x60E307: fstp    [esp+4+var_4]; float
0x60E30A: call    sub_529530
0x60E30F: retn    4
