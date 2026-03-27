0x579320: push    1; arg1
0x579322: push    0; canCreate
0x579324: call    InterfaceManager_GetSingleton
0x579329: add     esp, 8
0x57932C: test    eax, eax
0x57932E: jz      short locret_579367
0x579330: push    1; arg1
0x579332: push    0; canCreate
0x579334: call    InterfaceManager_GetSingleton
0x579339: add     esp, 8
0x57933C: cmp     dword ptr [eax+1Ch], 0
0x579340: jz      short locret_579367
0x579342: fld     [esp+arg_4]
0x579346: sub     esp, 8
0x579349: fstp    [esp+8+var_4]; float
0x57934D: fld     [esp+8+arg_0]
0x579351: fstp    [esp+8+var_8]; float
0x579354: push    1; arg1
0x579356: push    0; canCreate
0x579358: call    InterfaceManager_GetSingleton
0x57935D: add     esp, 8
0x579360: mov     ecx, eax
0x579362: call    sub_57F490
0x579367: retn
