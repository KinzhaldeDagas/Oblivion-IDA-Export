0x769B10: mov     eax, [ecx+904h]
0x769B16: mov     edx, [eax+4]
0x769B19: push    esi
0x769B1A: lea     esi, [ecx+904h]
0x769B20: mov     ecx, esi
0x769B22: call    edx
0x769B24: mov     ecx, [esp+4+arg_0]
0x769B28: mov     [eax+8], ecx
0x769B2B: mov     dword ptr [eax+4], 0
0x769B32: mov     edx, [esi+4]
0x769B35: mov     [eax], edx
0x769B37: mov     ecx, [esi+4]
0x769B3A: test    ecx, ecx
0x769B3C: jz      short loc_769B4C
0x769B3E: mov     [ecx+4], eax
0x769B41: add     dword ptr [esi+0Ch], 1
0x769B45: mov     [esi+4], eax
0x769B48: pop     esi
0x769B49: retn    4
0x769B4C: add     dword ptr [esi+0Ch], 1
0x769B50: mov     [esi+8], eax
0x769B53: mov     [esi+4], eax
0x769B56: pop     esi
0x769B57: retn    4
