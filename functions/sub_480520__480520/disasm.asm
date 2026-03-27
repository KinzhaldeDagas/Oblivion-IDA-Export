0x480520: sub     esp, 0Ch
0x480523: mov     eax, [esp+0Ch+arg_0]
0x480527: mov     ecx, [esp+0Ch+arg_4]
0x48052B: fld     dword ptr [eax]
0x48052D: fsub    dword ptr [ecx]
0x48052F: push    ecx
0x480530: fstp    [esp+10h+var_C]
0x480534: fld     dword ptr [eax+4]
0x480537: fsub    dword ptr [ecx+4]
0x48053A: fstp    [esp+10h+var_8]
0x48053E: fld     dword ptr [eax+8]
0x480541: lea     eax, [esp+10h+var_C]
0x480545: fsub    dword ptr [ecx+8]
0x480548: fstp    [esp+10h+var_4]
0x48054C: fld     [esp+10h+arg_8]
0x480550: fstp    [esp+10h+var_10]; float
0x480553: push    eax; int
0x480554: call    sub_47F6F0
0x480559: add     esp, 14h
0x48055C: retn
