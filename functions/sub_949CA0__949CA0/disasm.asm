0x949CA0: push    ebp
0x949CA1: mov     ebp, esp
0x949CA3: mov     eax, ecx
0x949CA5: mov     word ptr [eax+6], 1
0x949CAB: mov     dword ptr [eax+50h], 0
0x949CB2: mov     dword ptr [eax+54h], 2
0x949CB9: xorps   xmm0, xmm0
0x949CBC: movaps  xmmword ptr [eax+10h], xmm0
0x949CC0: movaps  xmmword ptr [eax+20h], xmm0
0x949CC4: movaps  xmmword ptr [eax+30h], xmm0
0x949CC8: mov     ecx, 3F800000h
0x949CCD: mov     [eax+10h], ecx
0x949CD0: mov     [eax+24h], ecx
0x949CD3: mov     [eax+38h], ecx
0x949CD6: mov     ecx, [ebp+arg_0]
0x949CD9: movaps  xmmword ptr [eax+40h], xmm0
0x949CDD: mov     dword ptr [eax], offset off_A9D378
0x949CE3: movaps  xmm0, xmmword ptr [ecx]
0x949CE6: movaps  xmmword ptr [eax+60h], xmm0
0x949CEA: movaps  xmm0, xmmword ptr [ecx]
0x949CED: and     esp, 0FFFFFFF0h
0x949CF0: movaps  xmmword ptr [eax+60h], xmm0
0x949CF4: mov     esp, ebp
0x949CF6: pop     ebp
0x949CF7: retn    4
