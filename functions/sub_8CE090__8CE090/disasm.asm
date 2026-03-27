0x8CE090: push    ebp
0x8CE091: mov     ebp, esp
0x8CE093: movaps  xmm0, xmmword ptr [ecx+10h]
0x8CE097: mov     eax, [ebp+arg_4]
0x8CE09A: mov     ecx, [ebp+arg_0]
0x8CE09D: movaps  xmmword ptr [eax], xmm0
0x8CE0A0: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8CE0A7: movaps  xmm2, xmmword ptr [ecx]
0x8CE0AA: andps   xmm2, xmm1
0x8CE0AD: xorps   xmm0, xmm2
0x8CE0B0: movmskps edx, xmm0
0x8CE0B3: and     edx, 7
0x8CE0B6: and     esp, 0FFFFFFF0h
0x8CE0B9: or      edx, 3F000000h
0x8CE0BF: movaps  xmmword ptr [eax], xmm0
0x8CE0C2: mov     [eax+0Ch], edx
0x8CE0C5: mov     esp, ebp
0x8CE0C7: pop     ebp
0x8CE0C8: retn    8
