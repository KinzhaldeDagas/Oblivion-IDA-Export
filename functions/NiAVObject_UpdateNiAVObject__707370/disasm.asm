0x707370: fld     [esp+arg_0]
0x707374: push    esi
0x707375: mov     esi, ecx
0x707377: mov     ecx, [esp+4+arg_4]
0x70737B: mov     eax, [esi]
0x70737D: mov     edx, [eax+60h]
0x707380: push    ecx
0x707381: push    ecx
0x707382: mov     ecx, esi
0x707384: fstp    [esp+0Ch+var_C]
0x707387: call    edx
0x707389: cmp     dword ptr [esi+1Ch], 0
0x70738D: jz      short loc_70739C
0x70738F: mov     ecx, [esi+1Ch]
0x707392: mov     eax, [ecx]
0x707394: mov     edx, [eax+94h]
0x70739A: call    edx
0x70739C: pop     esi
0x70739D: retn    8
