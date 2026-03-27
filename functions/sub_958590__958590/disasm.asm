0x958590: push    ebp
0x958591: mov     ebp, esp
0x958593: mov     edx, [ebp+arg_4]
0x958596: mov     eax, ecx
0x958598: mov     dword ptr [eax+50h], 0
0x95859F: mov     ecx, 1
0x9585A4: mov     [eax+6], cx
0x9585A8: mov     [eax+54h], ecx
0x9585AB: xorps   xmm0, xmm0
0x9585AE: movaps  xmmword ptr [eax+10h], xmm0
0x9585B2: movaps  xmmword ptr [eax+20h], xmm0
0x9585B6: movaps  xmmword ptr [eax+30h], xmm0
0x9585BA: mov     ecx, 3F800000h
0x9585BF: mov     [eax+10h], ecx
0x9585C2: mov     [eax+24h], ecx
0x9585C5: mov     [eax+38h], ecx
0x9585C8: mov     ecx, [ebp+arg_0]
0x9585CB: movaps  xmmword ptr [eax+40h], xmm0
0x9585CF: mov     dword ptr [eax], offset ??_7MobileObject@@6B@; const MobileObject::`vftable'
0x9585D5: movaps  xmm0, xmmword ptr [ecx]
0x9585D8: mov     ecx, [ebp+arg_8]
0x9585DB: movaps  xmmword ptr [eax+60h], xmm0
0x9585DF: and     esp, 0FFFFFFF0h
0x9585E2: mov     [eax+70h], edx
0x9585E5: mov     [eax+74h], ecx
0x9585E8: mov     esp, ebp
0x9585EA: pop     ebp
0x9585EB: retn    0Ch
