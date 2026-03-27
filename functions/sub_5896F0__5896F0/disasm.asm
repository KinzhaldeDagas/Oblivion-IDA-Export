0x5896F0: push    esi
0x5896F1: mov     esi, ecx
0x5896F3: mov     eax, [esi]
0x5896F5: mov     edx, [eax+4]
0x5896F8: call    edx
0x5896FA: mov     ecx, [esp+4+arg_0]
0x5896FE: fld     dword ptr [ecx]
0x589700: mov     dword ptr [eax+4], 0
0x589707: fstp    dword ptr [eax+8]
0x58970A: mov     edx, [esi+4]
0x58970D: mov     [eax], edx
0x58970F: mov     ecx, [esi+4]
0x589712: test    ecx, ecx
0x589714: jz      short loc_589724
0x589716: mov     [ecx+4], eax
0x589719: add     dword ptr [esi+0Ch], 1
0x58971D: mov     [esi+4], eax
0x589720: pop     esi
0x589721: retn    4
0x589724: add     dword ptr [esi+0Ch], 1
0x589728: mov     [esi+8], eax
0x58972B: mov     [esi+4], eax
0x58972E: pop     esi
0x58972F: retn    4
