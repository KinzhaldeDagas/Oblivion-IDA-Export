0x710030: mov     eax, [esp+arg_0]
0x710034: push    esi
0x710035: push    edi
0x710036: mov     esi, ecx
0x710038: mov     ecx, 9
0x71003D: mov     edi, eax
0x71003F: rep movsd
0x710041: fld     dword ptr [eax]
0x710043: mov     ecx, [esp+8+arg_4]
0x710047: pop     edi
0x710048: pop     esi
0x710049: fsub    dword ptr [ecx]
0x71004B: fstp    dword ptr [eax]
0x71004D: fld     dword ptr [eax+4]
0x710050: fsub    dword ptr [ecx+4]
0x710053: fstp    dword ptr [eax+4]
0x710056: fld     dword ptr [eax+8]
0x710059: fsub    dword ptr [ecx+8]
0x71005C: fstp    dword ptr [eax+8]
0x71005F: fld     dword ptr [eax+0Ch]
0x710062: fsub    dword ptr [ecx+0Ch]
0x710065: fstp    dword ptr [eax+0Ch]
0x710068: fld     dword ptr [eax+10h]
0x71006B: fsub    dword ptr [ecx+10h]
0x71006E: fstp    dword ptr [eax+10h]
0x710071: fld     dword ptr [eax+14h]
0x710074: fsub    dword ptr [ecx+14h]
0x710077: fstp    dword ptr [eax+14h]
0x71007A: fld     dword ptr [eax+18h]
0x71007D: fsub    dword ptr [ecx+18h]
0x710080: fstp    dword ptr [eax+18h]
0x710083: fld     dword ptr [eax+1Ch]
0x710086: fsub    dword ptr [ecx+1Ch]
0x710089: fstp    dword ptr [eax+1Ch]
0x71008C: fld     dword ptr [eax+20h]
0x71008F: fsub    dword ptr [ecx+20h]
0x710092: fstp    dword ptr [eax+20h]
0x710095: retn    8
