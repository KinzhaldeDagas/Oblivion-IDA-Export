0x8E8B50: mov     eax, [esp+arg_0]
0x8E8B54: push    esi
0x8E8B55: mov     esi, ecx
0x8E8B57: mov     ecx, [esp+4+arg_4]
0x8E8B5B: mov     [esi+0Ch], eax
0x8E8B5E: mov     word ptr [esi+6], 1
0x8E8B64: mov     dword ptr [esi+8], 0
0x8E8B6B: mov     dword ptr [esi], offset off_A9ACB0
0x8E8B71: movaps  xmm0, xmmword ptr [ecx]
0x8E8B74: lea     eax, [esi+20h]
0x8E8B77: movaps  xmmword ptr [eax], xmm0
0x8E8B7A: movaps  xmm0, xmmword ptr [ecx+10h]
0x8E8B7E: movaps  xmmword ptr [eax+10h], xmm0
0x8E8B82: movaps  xmm0, xmmword ptr [ecx+20h]
0x8E8B86: movaps  xmmword ptr [eax+20h], xmm0
0x8E8B8A: movaps  xmm0, xmmword ptr [ecx+30h]
0x8E8B8E: push    eax
0x8E8B8F: lea     ecx, [esi+10h]
0x8E8B92: movaps  xmmword ptr [eax+30h], xmm0
0x8E8B96: call    sub_8B1B40
0x8E8B9B: mov     eax, [esi+0Ch]
0x8E8B9E: cmp     word ptr [eax+4], 0
0x8E8BA3: jz      short loc_8E8BA9
0x8E8BA5: inc     word ptr [eax+6]
0x8E8BA9: mov     eax, esi
0x8E8BAB: pop     esi
0x8E8BAC: retn    8
