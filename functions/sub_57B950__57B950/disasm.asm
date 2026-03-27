0x57B950: push    1; arg1
0x57B952: push    0; canCreate
0x57B954: call    InterfaceManager_GetSingleton
0x57B959: add     esp, 8
0x57B95C: test    eax, eax
0x57B95E: jz      short locret_57B987
0x57B960: push    1; arg1
0x57B962: push    0; canCreate
0x57B964: call    InterfaceManager_GetSingleton
0x57B969: add     esp, 8
0x57B96C: cmp     dword ptr [eax+1Ch], 0
0x57B970: jz      short locret_57B987
0x57B972: fld     [esp+arg_4]
0x57B976: mov     eax, dword ptr [esp+ArgList]
0x57B97A: push    ecx
0x57B97B: fstp    [esp+4+var_4]; float
0x57B97E: push    eax; ArgList
0x57B97F: call    sub_5ADEC0
0x57B984: add     esp, 8
0x57B987: retn
