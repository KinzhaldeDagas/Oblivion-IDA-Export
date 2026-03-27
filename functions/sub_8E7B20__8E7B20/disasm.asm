0x8E7B20: push    ebp
0x8E7B21: mov     ebp, esp
0x8E7B23: and     esp, 0FFFFFFF0h
0x8E7B26: push    ecx
0x8E7B27: push    ebx
0x8E7B28: mov     ebx, [ebp+arg_0]
0x8E7B2B: push    esi
0x8E7B2C: push    edi
0x8E7B2D: mov     edi, [ebp+arg_4]
0x8E7B30: mov     esi, ecx
0x8E7B32: push    edi
0x8E7B33: push    ebx
0x8E7B34: lea     ecx, [esi+40h]
0x8E7B37: call    sub_8E79A0
0x8E7B3C: push    edi
0x8E7B3D: mov     ecx, esi
0x8E7B3F: call    sub_8B1DD0
0x8E7B44: movaps  xmm0, xmmword ptr [ebx]
0x8E7B47: movaps  xmmword ptr [esi+30h], xmm0
0x8E7B4B: pop     edi
0x8E7B4C: xorps   xmm0, xmm0
0x8E7B4F: movaps  xmmword ptr [esi+90h], xmm0
0x8E7B56: mov     dword ptr [esi+0A0h], 3F800000h
0x8E7B60: pop     esi
0x8E7B61: pop     ebx
0x8E7B62: mov     esp, ebp
0x8E7B64: pop     ebp
0x8E7B65: retn    8
