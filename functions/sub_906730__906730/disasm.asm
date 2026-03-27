0x906730: push    ebp
0x906731: mov     ebp, esp
0x906733: and     esp, 0FFFFFFF0h
0x906736: sub     esp, 10h
0x906739: mov     eax, ecx
0x90673B: mov     ecx, [ebp+arg_0]
0x90673E: mov     [eax+8], ecx
0x906741: mov     word ptr [eax+6], 1
0x906747: mov     dword ptr [eax], offset off_A9BE50
0x90674D: xor     ecx, ecx
0x90674F: mov     [esp+10h+var_4], 7F7FFFFFh
0x906757: movss   xmm0, [esp+10h+var_4]
0x90675D: mov     [eax+0Ch], ecx
0x906760: mov     [eax+10h], ecx
0x906763: mov     dword ptr [eax+14h], 80000000h
0x90676A: shufps  xmm0, xmm0, 0
0x90676E: movaps  xmmword ptr [eax+30h], xmm0
0x906772: movaps  xmmword ptr [eax+20h], xmm0
0x906776: mov     esp, ebp
0x906778: pop     ebp
0x906779: retn    4
