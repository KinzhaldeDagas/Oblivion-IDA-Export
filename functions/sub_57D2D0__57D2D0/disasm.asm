0x57D2D0: mov     eax, [esp+arg_0]
0x57D2D4: lea     edx, [eax-1]
0x57D2D7: cmp     edx, 2
0x57D2DA: ja      short loc_57D2E5
0x57D2DC: add     eax, 0FFFFFFFFh
0x57D2DF: mov     [ecx+14h], eax
0x57D2E2: retn    4
0x57D2E5: mov     dword ptr [ecx+14h], 0
0x57D2EC: retn    4
