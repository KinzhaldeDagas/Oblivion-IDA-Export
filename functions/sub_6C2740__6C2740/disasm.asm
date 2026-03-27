0x6C2740: sub     esp, 0Ch
0x6C2743: mov     ecx, [esp+0Ch+arg_4]
0x6C2747: fld     dword ptr [ecx+4]
0x6C274A: mov     eax, [esp+0Ch+arg_8]
0x6C274E: fsub    dword ptr [eax+4]
0x6C2751: fstp    [esp+0Ch+var_C]
0x6C2754: fld     dword ptr [ecx+8]
0x6C2757: fsub    dword ptr [eax+8]
0x6C275A: fstp    [esp+0Ch+var_8]
0x6C275E: mov     edx, [esp+0Ch+var_8]
0x6C2762: fld     dword ptr [ecx+0Ch]
0x6C2765: mov     ecx, [esp+0Ch+var_C]
0x6C2768: fsub    dword ptr [eax+0Ch]
0x6C276B: mov     eax, [esp+0Ch+arg_C]
0x6C276F: mov     [eax], ecx
0x6C2771: mov     [eax+4], edx
0x6C2774: fstp    [esp+0Ch+var_4]
0x6C2778: mov     ecx, [esp+0Ch+var_4]
0x6C277C: mov     [eax+8], ecx
0x6C277F: add     esp, 0Ch
0x6C2782: retn
