0x8C6450: push    ecx
0x8C6451: push    esi
0x8C6452: mov     esi, ecx
0x8C6454: mov     eax, [esi]
0x8C6456: mov     edx, [eax+74h]
0x8C6459: lea     ecx, [esp+8+var_1]
0x8C645D: push    ecx
0x8C645E: mov     ecx, esi
0x8C6460: call    edx
0x8C6462: test    eax, eax
0x8C6464: mov     ecx, [esp+8+arg_4]
0x8C6468: jz      short loc_8C6481
0x8C646A: fld     dword ptr [ecx+10h]
0x8C646D: fstp    dword ptr [eax+20h]
0x8C6470: fld     dword ptr [ecx+14h]
0x8C6473: fstp    dword ptr [eax+24h]
0x8C6476: fld     dword ptr [ecx+18h]
0x8C6479: fstp    dword ptr [eax+28h]
0x8C647C: fldz
0x8C647E: fstp    dword ptr [eax+2Ch]
0x8C6481: mov     eax, [esp+8+arg_0]
0x8C6485: push    ecx
0x8C6486: push    eax
0x8C6487: mov     ecx, esi
0x8C6489: call    sub_8A2670
0x8C648E: pop     esi
0x8C648F: pop     ecx
0x8C6490: retn    8
