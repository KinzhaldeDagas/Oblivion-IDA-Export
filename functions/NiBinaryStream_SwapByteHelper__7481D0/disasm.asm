0x7481D0: push    esi
0x7481D1: mov     esi, [esp+4+arg_4]
0x7481D5: test    esi, esi
0x7481D7: jbe     short loc_74821A
0x7481D9: mov     eax, [esp+4+arg_0]
0x7481DD: lea     ecx, [ecx+0]
0x7481E0: movzx   edx, byte ptr [eax+7]
0x7481E4: mov     cl, [eax]
0x7481E6: mov     [eax], dl
0x7481E8: mov     [eax+7], cl
0x7481EB: movzx   edx, byte ptr [eax+6]
0x7481EF: mov     cl, [eax+1]
0x7481F2: mov     [eax+1], dl
0x7481F5: mov     [eax+6], cl
0x7481F8: movzx   edx, byte ptr [eax+5]
0x7481FC: mov     cl, [eax+2]
0x7481FF: mov     [eax+2], dl
0x748202: mov     [eax+5], cl
0x748205: movzx   edx, byte ptr [eax+4]
0x748209: mov     cl, [eax+3]
0x74820C: mov     [eax+3], dl
0x74820F: mov     [eax+4], cl
0x748212: add     eax, 8
0x748215: sub     esi, 1
0x748218: jnz     short loc_7481E0
0x74821A: pop     esi
0x74821B: retn
