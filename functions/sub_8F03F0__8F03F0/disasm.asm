0x8F03F0: mov     edx, [esp+arg_4]
0x8F03F4: fld     dword ptr [edx+14h]
0x8F03F7: fcomp   dword ptr [ecx+4]
0x8F03FA: fnstsw  ax
0x8F03FC: test    ah, 5
0x8F03FF: jp      short locret_8F0422
0x8F0401: mov     eax, [edx+14h]
0x8F0404: mov     [ecx+4], eax
0x8F0407: mov     eax, [ecx+0Ch]
0x8F040A: movaps  xmm0, xmmword ptr [edx]
0x8F040D: movaps  xmmword ptr [eax], xmm0
0x8F0410: push    esi
0x8F0411: mov     esi, [edx+10h]
0x8F0414: mov     [eax+10h], esi
0x8F0417: mov     edx, [edx+14h]
0x8F041A: mov     [eax+14h], edx
0x8F041D: mov     byte ptr [ecx+8], 1
0x8F0421: pop     esi
0x8F0422: retn    8
