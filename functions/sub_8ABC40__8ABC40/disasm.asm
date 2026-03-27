0x8ABC40: mov     eax, [esp+arg_0]
0x8ABC44: push    esi
0x8ABC45: push    2
0x8ABC47: push    eax
0x8ABC48: mov     esi, ecx
0x8ABC4A: call    sub_8BC8F0
0x8ABC4F: xor     eax, eax
0x8ABC51: mov     [esi+50h], eax
0x8ABC54: mov     [esi+54h], eax
0x8ABC57: mov     ecx, 80000000h
0x8ABC5C: mov     [esi+58h], ecx
0x8ABC5F: mov     [esi+5Ch], eax
0x8ABC62: mov     [esi+60h], eax
0x8ABC65: mov     [esi+64h], ecx
0x8ABC68: lea     eax, [esi+14h]
0x8ABC6B: mov     ecx, esi
0x8ABC6D: sub     ecx, eax
0x8ABC6F: mov     [eax+10h], ecx
0x8ABC72: mov     ecx, [esp+4+arg_4]
0x8ABC76: mov     dword ptr [esi], offset off_A97B90
0x8ABC7C: lea     eax, [esi+70h]
0x8ABC7F: mov     [esi+1Ch], eax
0x8ABC82: movaps  xmm0, xmmword ptr [ecx]
0x8ABC85: movaps  xmmword ptr [eax], xmm0
0x8ABC88: movaps  xmm0, xmmword ptr [ecx+10h]
0x8ABC8C: movaps  xmmword ptr [eax+10h], xmm0
0x8ABC90: movaps  xmm0, xmmword ptr [ecx+20h]
0x8ABC94: movaps  xmmword ptr [eax+20h], xmm0
0x8ABC98: movaps  xmm0, xmmword ptr [ecx+30h]
0x8ABC9C: movaps  xmmword ptr [eax+30h], xmm0
0x8ABCA0: mov     eax, esi
0x8ABCA2: pop     esi
0x8ABCA3: retn    8
