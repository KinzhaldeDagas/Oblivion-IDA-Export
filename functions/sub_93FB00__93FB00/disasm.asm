0x93FB00: mov     al, [ecx+8]
0x93FB03: test    al, al
0x93FB05: mov     edx, [esp+arg_0]
0x93FB09: jz      short loc_93FB18
0x93FB0B: fld     dword ptr [edx+1Ch]
0x93FB0E: fcomp   dword ptr [ecx+2Ch]
0x93FB11: fnstsw  ax
0x93FB13: test    ah, 5
0x93FB16: jp      short locret_93FB31
0x93FB18: mov     byte ptr [ecx+8], 1
0x93FB1C: movaps  xmm0, xmmword ptr [edx]
0x93FB1F: movaps  xmmword ptr [ecx+10h], xmm0
0x93FB23: movaps  xmm0, xmmword ptr [edx+10h]
0x93FB27: movaps  xmmword ptr [ecx+20h], xmm0
0x93FB2B: mov     eax, [edx+1Ch]
0x93FB2E: mov     [ecx+4], eax
0x93FB31: retn    4
