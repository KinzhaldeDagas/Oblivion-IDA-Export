0x4112E0: sub     esp, 10h
0x4112E3: mov     eax, [ecx+0DCh]
0x4112E9: fldz
0x4112EB: fst     [esp+10h+var_10]
0x4112EE: add     eax, 110h
0x4112F3: fld1
0x4112F5: mov     edx, [esp+10h+var_10]
0x4112F8: mov     [eax], edx
0x4112FA: fst     [esp+10h+var_C]
0x4112FE: fstp    [esp+10h+var_8]
0x411302: push    1; a3
0x411304: mov     edx, [esp+14h+var_C]
0x411308: mov     [eax+4], edx
0x41130B: mov     edx, [esp+14h+var_8]
0x41130F: mov     [eax+8], edx
0x411312: fstp    [esp+14h+var_4]
0x411316: mov     edx, [esp+14h+var_4]
0x41131A: mov     [eax+0Ch], edx
0x41131D: fld     dword ptr [ecx+0ECh]
0x411323: push    ecx
0x411324: fstp    [esp+18h+a2]; a2
0x411327: call    SetCameraFOV_0
0x41132C: add     esp, 10h
0x41132F: retn
