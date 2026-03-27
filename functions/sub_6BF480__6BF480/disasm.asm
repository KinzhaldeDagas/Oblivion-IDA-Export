0x6BF480: sub     esp, 0Ch
0x6BF483: mov     ecx, [esp+0Ch+arg_8]
0x6BF487: fld     dword ptr [ecx+4]
0x6BF48A: mov     eax, [esp+0Ch+arg_4]
0x6BF48E: fsub    dword ptr [eax+4]
0x6BF491: fstp    [esp+0Ch+var_C]
0x6BF494: fld     dword ptr [ecx+8]
0x6BF497: fsub    dword ptr [eax+8]
0x6BF49A: fstp    [esp+0Ch+var_8]
0x6BF49E: mov     edx, [esp+0Ch+var_8]
0x6BF4A2: fld     dword ptr [ecx+0Ch]
0x6BF4A5: mov     ecx, [esp+0Ch+var_C]
0x6BF4A8: fsub    dword ptr [eax+0Ch]
0x6BF4AB: mov     eax, [esp+0Ch+arg_C]
0x6BF4AF: mov     [eax], ecx
0x6BF4B1: mov     [eax+4], edx
0x6BF4B4: fstp    [esp+0Ch+var_4]
0x6BF4B8: mov     ecx, [esp+0Ch+var_4]
0x6BF4BC: mov     [eax+8], ecx
0x6BF4BF: add     esp, 0Ch
0x6BF4C2: retn
