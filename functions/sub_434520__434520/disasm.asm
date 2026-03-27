0x434520: mov     eax, dword ptr [esp+arg_0]
0x434524: push    esi
0x434525: mov     esi, dword ptr [esp+4+arg_0+4]
0x434529: mov     edx, esi
0x43452B: mov     cl, 10h
0x43452D: call    __allshr
0x434532: mov     ecx, esi
0x434534: movzx   eax, al
0x434537: sar     ecx, 18h
0x43453A: movzx   edx, cl
0x43453D: lea     eax, [eax+eax*2]
0x434540: sar     esi, 1Fh
0x434543: add     eax, edx
0x434545: pop     esi
0x434546: retn    8
