0x8F4080: push    ebp
0x8F4081: mov     ebp, esp
0x8F4083: mov     edx, [ebp+arg_10]
0x8F4086: mov     eax, ecx
0x8F4088: mov     word ptr [eax+6], 1
0x8F408E: mov     dword ptr [eax+50h], 0
0x8F4095: mov     dword ptr [eax+54h], 8
0x8F409C: xorps   xmm0, xmm0
0x8F409F: movaps  xmmword ptr [eax+10h], xmm0
0x8F40A3: movaps  xmmword ptr [eax+20h], xmm0
0x8F40A7: movaps  xmmword ptr [eax+30h], xmm0
0x8F40AB: mov     ecx, 3F800000h
0x8F40B0: mov     [eax+10h], ecx
0x8F40B3: mov     [eax+24h], ecx
0x8F40B6: mov     [eax+38h], ecx
0x8F40B9: mov     ecx, [ebp+arg_C]
0x8F40BC: movaps  xmmword ptr [eax+40h], xmm0
0x8F40C0: mov     [eax+84h], ecx
0x8F40C6: mov     ecx, [ebp+arg_0]
0x8F40C9: mov     [eax+88h], edx
0x8F40CF: mov     edx, [ebp+arg_4]
0x8F40D2: mov     dword ptr [eax], offset off_A9B304
0x8F40D8: movaps  xmm0, xmmword ptr [ecx]
0x8F40DB: mov     ecx, [ebp+arg_8]
0x8F40DE: movaps  xmmword ptr [eax+60h], xmm0
0x8F40E2: movaps  xmm0, xmmword ptr [edx]
0x8F40E5: and     esp, 0FFFFFFF0h
0x8F40E8: movaps  xmmword ptr [eax+70h], xmm0
0x8F40EC: mov     [eax+80h], ecx
0x8F40F2: mov     esp, ebp
0x8F40F4: pop     ebp
0x8F40F5: retn    14h
