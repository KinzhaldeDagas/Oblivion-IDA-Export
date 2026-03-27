0x926E80: mov     eax, [esp+arg_0]
0x926E84: push    esi
0x926E85: push    0
0x926E87: push    eax
0x926E88: mov     esi, ecx
0x926E8A: call    sub_8F5750
0x926E8F: mov     ecx, [esp+4+arg_4]
0x926E93: mov     edx, [esp+4+arg_8]
0x926E97: mov     eax, [esp+4+arg_C]
0x926E9B: mov     dword ptr [esi], offset off_AA1858
0x926EA1: movaps  xmm0, xmmword ptr [ecx]
0x926EA4: mov     ecx, [esp+4+arg_10]
0x926EA8: movaps  xmmword ptr [esi+20h], xmm0
0x926EAC: movaps  xmm0, xmmword ptr [edx]
0x926EAF: mov     [esi+40h], eax
0x926EB2: movaps  xmmword ptr [esi+30h], xmm0
0x926EB6: mov     [esi+44h], ecx
0x926EB9: mov     eax, esi
0x926EBB: pop     esi
0x926EBC: retn    14h
