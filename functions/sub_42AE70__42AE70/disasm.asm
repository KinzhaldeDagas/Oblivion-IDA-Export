0x42AE70: mov     eax, ecx
0x42AE72: mov     ecx, [esp+arg_0]
0x42AE76: test    ecx, ecx
0x42AE78: mov     byte ptr [eax+4], 1Eh
0x42AE7C: mov     dword ptr [eax+8], 0
0x42AE83: mov     dword ptr [eax], offset ??_7ExtraPackageStartLocation@@6B@; const ExtraPackageStartLocation::`vftable'
0x42AE89: jnz     short loc_42AE8F
0x42AE8B: mov     ecx, [esp+arg_4]
0x42AE8F: fld     [esp+arg_C]
0x42AE93: mov     [eax+0Ch], ecx
0x42AE96: mov     ecx, [esp+arg_8]
0x42AE9A: mov     edx, [ecx]
0x42AE9C: mov     [eax+10h], edx
0x42AE9F: mov     edx, [ecx+4]
0x42AEA2: mov     [eax+14h], edx
0x42AEA5: mov     ecx, [ecx+8]
0x42AEA8: fstp    dword ptr [eax+1Ch]
0x42AEAB: mov     [eax+18h], ecx
0x42AEAE: retn    10h
