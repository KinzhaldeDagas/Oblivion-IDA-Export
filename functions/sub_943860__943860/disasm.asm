0x943860: mov     eax, [esp+arg_0]
0x943864: mov     edx, [eax]
0x943866: mov     [ecx+30h], edx
0x943869: mov     edx, [eax+4]
0x94386C: mov     [ecx+34h], edx
0x94386F: mov     edx, [eax+8]
0x943872: mov     [ecx+38h], edx
0x943875: movaps  xmm0, xmmword ptr [eax+10h]
0x943879: movaps  xmmword ptr [ecx+40h], xmm0
0x94387D: mov     eax, [eax+20h]
0x943880: mov     [ecx+50h], eax
0x943883: retn    4
