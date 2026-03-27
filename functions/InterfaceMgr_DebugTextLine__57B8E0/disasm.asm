0x57B8E0: push    1; arg1
0x57B8E2: push    0; canCreate
0x57B8E4: call    InterfaceManager_GetSingleton
0x57B8E9: add     esp, 8
0x57B8EC: test    eax, eax
0x57B8EE: jz      short loc_57B941
0x57B8F0: push    1; arg1
0x57B8F2: push    0; canCreate
0x57B8F4: call    InterfaceManager_GetSingleton
0x57B8F9: add     esp, 8
0x57B8FC: cmp     dword ptr [eax+1Ch], 0
0x57B900: jz      short loc_57B941
0x57B902: fld     dword ptr ds:0A30634h
0x57B908: mov     eax, [esp+arg_10]
0x57B90C: mov     edx, [esp+arg_0]
0x57B910: push    0; int
0x57B912: push    ecx
0x57B913: mov     ecx, [esp+8+arg_C]
0x57B917: fstp    [esp+8+var_8]; float
0x57B91A: fld     [esp+8+arg_8]
0x57B91E: push    eax; int
0x57B91F: push    ecx; int
0x57B920: sub     esp, 8
0x57B923: fstp    [esp+18h+var_14]; float
0x57B927: fld     [esp+18h+arg_4]
0x57B92B: fstp    [esp+18h+var_18]; float
0x57B92E: push    edx; int
0x57B92F: push    1
0x57B931: call    sub_571F90
0x57B936: add     esp, 4
0x57B939: mov     ecx, eax
0x57B93B: call    sub_5723E0
0x57B940: retn
0x57B941: xor     eax, eax
0x57B943: retn
