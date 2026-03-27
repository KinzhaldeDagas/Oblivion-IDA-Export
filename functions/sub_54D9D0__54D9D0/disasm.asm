0x54D9D0: mov     ecx, [esp+arg_4]
0x54D9D4: test    ecx, ecx
0x54D9D6: jbe     short locret_54DA06
0x54D9D8: mov     edx, [esp+arg_8]
0x54D9DC: mov     eax, [esp+arg_0]
0x54D9E0: push    esi
0x54D9E1: test    eax, eax
0x54D9E3: jz      short loc_54D9FB
0x54D9E5: mov     esi, [edx]
0x54D9E7: mov     [eax], esi
0x54D9E9: mov     esi, [edx+4]
0x54D9EC: mov     [eax+4], esi
0x54D9EF: mov     esi, [edx+8]
0x54D9F2: mov     [eax+8], esi
0x54D9F5: mov     esi, [edx+0Ch]
0x54D9F8: mov     [eax+0Ch], esi
0x54D9FB: sub     ecx, 1
0x54D9FE: add     eax, 10h
0x54DA01: test    ecx, ecx
0x54DA03: ja      short loc_54D9E1
0x54DA05: pop     esi
0x54DA06: retn
