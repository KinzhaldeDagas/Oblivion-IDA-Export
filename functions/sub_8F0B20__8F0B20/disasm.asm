0x8F0B20: fld     [esp+arg_4]
0x8F0B24: push    esi
0x8F0B25: mov     esi, [esp+4+arg_8]
0x8F0B29: mov     eax, ecx
0x8F0B2B: mov     ecx, [eax+10h]
0x8F0B2E: fadd    dword ptr [eax+14h]
0x8F0B31: mov     eax, [esp+4+arg_0]
0x8F0B35: mov     edx, [ecx]
0x8F0B37: push    esi
0x8F0B38: push    ecx
0x8F0B39: fstp    [esp+0Ch+var_C]
0x8F0B3C: push    eax
0x8F0B3D: call    dword ptr [edx+0Ch]
0x8F0B40: pop     esi
0x8F0B41: retn    0Ch
