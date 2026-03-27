0x787070: mov     eax, [ecx+34h]
0x787073: fld     [esp+arg_0]
0x787077: sub     esp, 0Ch
0x78707A: test    eax, eax
0x78707C: jz      short loc_787095
0x78707E: fstp    dword ptr [eax+4]
0x787081: fld     [esp+0Ch+arg_4]
0x787085: fstp    dword ptr [eax+8]
0x787088: fld     [esp+0Ch+arg_8]
0x78708C: fstp    dword ptr [eax+0Ch]
0x78708F: add     esp, 0Ch
0x787092: retn    0Ch
0x787095: mov     eax, [ecx]
0x787097: fstp    [esp+0Ch+var_C]
0x78709A: fld     [esp+0Ch+arg_4]
0x78709E: mov     ecx, [esp+0Ch+var_C]
0x7870A1: fstp    [esp+0Ch+var_8]
0x7870A5: mov     edx, [esp+0Ch+var_8]
0x7870A9: fld     [esp+0Ch+arg_8]
0x7870AD: add     eax, 4
0x7870B0: mov     [eax], ecx
0x7870B2: fstp    [esp+0Ch+var_4]
0x7870B6: mov     ecx, [esp+0Ch+var_4]
0x7870BA: mov     [eax+4], edx
0x7870BD: mov     [eax+8], ecx
0x7870C0: add     esp, 0Ch
0x7870C3: retn    0Ch
