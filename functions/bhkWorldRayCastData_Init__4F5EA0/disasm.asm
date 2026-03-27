0x4F5EA0: fld1
0x4F5EA2: mov     eax, ecx
0x4F5EA4: xor     ecx, ecx
0x4F5EA6: mov     [eax+20h], cl
0x4F5EA9: mov     [eax+24h], ecx
0x4F5EAC: fstp    dword ptr [eax+44h]
0x4F5EAF: mov     [eax+50h], ecx
0x4F5EB2: mov     [eax+70h], ecx
0x4F5EB5: mov     [eax+74h], ecx
0x4F5EB8: mov     [eax+78h], ecx
0x4F5EBB: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x4F5EC2: movaps  xmmword ptr [eax+60h], xmm0
0x4F5EC6: retn
