0x4D7A20: fld     [esp+arg_C]; TESObjectREFR wrapper records package start location from worldspace/cell, position XYZ, and rotZ into ExtraPackageStartLocation.
0x4D7A24: mov     eax, [esp+arg_8]
0x4D7A28: mov     edx, [esp+arg_4]
0x4D7A2C: push    ecx
0x4D7A2D: fstp    [esp+4+var_4]; float
0x4D7A30: push    eax; int
0x4D7A31: mov     eax, [esp+8+arg_0]
0x4D7A35: push    edx; int
0x4D7A36: push    eax; int
0x4D7A37: add     ecx, 44h ; 'D'
0x4D7A3A: call    ExtraDataList_SetStartLocation; ExtraPackageStartLocation setter: first creation stores selected location FormID, XYZ, and rotZ; updating an extant singleton replaces only location/XYZ and preserves existing rotZ.
0x4D7A3F: retn    10h
