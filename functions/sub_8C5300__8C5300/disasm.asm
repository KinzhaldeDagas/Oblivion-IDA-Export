0x8C5300: push    ecx
0x8C5301: push    esi
0x8C5302: mov     esi, ecx
0x8C5304: mov     eax, [esi]
0x8C5306: mov     edx, [eax+74h]
0x8C5309: lea     ecx, [esp+8+var_1]
0x8C530D: push    ecx
0x8C530E: mov     ecx, esi
0x8C5310: call    edx
0x8C5312: test    eax, eax
0x8C5314: mov     ecx, [esp+8+arg_4]
0x8C5318: jz      short loc_8C532C
0x8C531A: fld     dword ptr [ecx+10h]
0x8C531D: fstp    dword ptr [eax+10h]
0x8C5320: fld     dword ptr [ecx+14h]
0x8C5323: fstp    dword ptr [eax+14h]
0x8C5326: fld     dword ptr [ecx+18h]
0x8C5329: fstp    dword ptr [eax+18h]
0x8C532C: mov     eax, [esp+8+arg_0]
0x8C5330: push    ecx
0x8C5331: push    eax
0x8C5332: mov     ecx, esi
0x8C5334: call    sub_8A2670
0x8C5339: pop     esi
0x8C533A: pop     ecx
0x8C533B: retn    8
