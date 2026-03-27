0x914980: movaps  xmm0, xmmword ptr [ecx+10h]
0x914984: mov     eax, [esp+arg_0]
0x914988: movaps  xmmword ptr [eax], xmm0
0x91498B: mov     edx, [ecx+0Ch]
0x91498E: mov     [eax+0Ch], edx
0x914991: movaps  xmm0, xmmword ptr [ecx+20h]
0x914995: movaps  xmmword ptr [eax+10h], xmm0
0x914999: lea     edx, [eax+10h]
0x91499C: push    esi
0x91499D: mov     esi, [ecx+0Ch]
0x9149A0: mov     [edx+0Ch], esi
0x9149A3: movaps  xmm0, xmmword ptr [ecx+30h]
0x9149A7: add     edx, 10h
0x9149AA: movaps  xmmword ptr [edx], xmm0
0x9149AD: mov     ecx, [ecx+0Ch]
0x9149B0: mov     [edx+0Ch], ecx
0x9149B3: pop     esi
0x9149B4: retn    4
