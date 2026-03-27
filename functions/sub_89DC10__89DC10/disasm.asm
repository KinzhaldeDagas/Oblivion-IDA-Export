0x89DC10: push    ebp
0x89DC11: mov     ebp, esp
0x89DC13: and     esp, 0FFFFFFF0h
0x89DC16: sub     esp, 0Ch
0x89DC19: mov     eax, [ebp+arg_4]
0x89DC1C: push    esi
0x89DC1D: mov     esi, ecx
0x89DC1F: mov     ecx, [ebp+arg_0]
0x89DC22: push    eax
0x89DC23: xorps   xmm0, xmm0
0x89DC26: push    ecx
0x89DC27: lea     ecx, [esi+10h]
0x89DC2A: mov     word ptr [esi+6], 1
0x89DC30: mov     dword ptr [esi+8], 0
0x89DC37: mov     dword ptr [esi], offset off_A96F78
0x89DC3D: movaps  xmmword ptr [esi+0D0h], xmm0
0x89DC44: movaps  xmmword ptr [esi+0E0h], xmm0
0x89DC4B: call    sub_8E7B20
0x89DC50: mov     dword ptr [esi+0C8h], 0
0x89DC5A: mov     dword ptr [esi+0CCh], 0
0x89DC64: mov     eax, esi
0x89DC66: pop     esi
0x89DC67: mov     esp, ebp
0x89DC69: pop     ebp
0x89DC6A: retn    8
