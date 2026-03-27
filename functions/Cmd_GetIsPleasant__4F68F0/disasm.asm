0x4F68F0: call    Sky_CreateOrGetGlobalObject
0x4F68F5: fldz
0x4F68F7: mov     ecx, [eax+10h]
0x4F68FA: test    ecx, ecx
0x4F68FC: jz      short loc_4F690C
0x4F68FE: test    byte ptr [ecx+53h], 1
0x4F6902: jz      short loc_4F690C
0x4F6904: fld     dword ptr [eax+0D8h]
0x4F690A: jmp     short loc_4F690E
0x4F690C: fld     st
0x4F690E: mov     edx, [esp+arg_C]
0x4F6912: fst     qword ptr [edx]
0x4F6914: mov     ecx, [eax+14h]
0x4F6917: test    ecx, ecx
0x4F6919: jz      short loc_4F692F
0x4F691B: test    byte ptr [ecx+53h], 1
0x4F691F: jz      short loc_4F692F
0x4F6921: fstp    st(1)
0x4F6923: fld     dword ptr [eax+0D8h]
0x4F6929: fld1
0x4F692B: fsubrp  st(1), st
0x4F692D: jmp     short loc_4F6931
0x4F692F: fxch    st(1)
0x4F6931: faddp   st(1), st
0x4F6933: fst     qword ptr [edx]
0x4F6935: cmp     byte ptr ds:0B361ACh, 0
0x4F693C: jz      short loc_4F6954
0x4F693E: sub     esp, 8
0x4F6941: fstp    [esp+8+var_8]
0x4F6944: push    offset aGetispleasant0; "GetIsPleasant >> %0.2f"
0x4F6949: call    Interface_ConsolePrint
0x4F694E: add     esp, 0Ch
0x4F6951: mov     al, 1
0x4F6953: retn
0x4F6954: fstp    st
0x4F6956: mov     al, 1
0x4F6958: retn
