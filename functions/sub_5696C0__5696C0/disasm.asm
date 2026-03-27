0x5696C0: mov     eax, ecx
0x5696C2: mov     ecx, [esp+arg_0]
0x5696C6: mov     dl, [ecx]
0x5696C8: mov     [eax], dl
0x5696CA: mov     edx, [ecx+8]
0x5696CD: mov     [eax+4], edx
0x5696D0: movsx   edx, byte ptr [eax]
0x5696D3: cmp     edx, 5; switch 6 cases
0x5696D6: ja      short def_5696D8
0x5696D8: jmp     ds:jpt_5696D8[edx*4]; switch jump
0x5696DF: mov     ecx, [ecx+4]; jumptable 005696D8 case 1
0x5696E2: mov     [eax+8], ecx
0x5696E5: mov     dword ptr [eax+4], 0
0x5696EC: retn    4
0x5696EF: mov     edx, [ecx+4]; jumptable 005696D8 cases 0,5
0x5696F2: mov     [eax+8], edx
0x5696F5: retn    4
0x5696F8: mov     ecx, [ecx+4]; jumptable 005696D8 case 4
0x5696FB: mov     [eax+8], ecx
0x5696FE: retn    4
0x569701: mov     dword ptr [eax+8], 0; jumptable 005696D8 cases 2,3
