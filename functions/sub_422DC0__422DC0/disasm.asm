0x422DC0: push    ecx
0x422DC1: fldz
0x422DC3: push    5Ch ; '\'; a2
0x422DC5: fstp    [esp+8+var_4]
0x422DC9: call    BaseExtraList_GetExtraData
0x422DCE: test    eax, eax
0x422DD0: jz      short loc_422DD8
0x422DD2: fld     dword ptr [eax+0Ch]
0x422DD5: fstp    [esp+4+var_4]
0x422DD8: fld     [esp+4+var_4]
0x422DDB: pop     ecx
0x422DDC: retn
