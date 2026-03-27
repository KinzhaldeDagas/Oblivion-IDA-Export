0x8B89C0: mov     eax, [esp+arg_14]
0x8B89C4: push    esi
0x8B89C5: push    0
0x8B89C7: push    eax
0x8B89C8: mov     esi, ecx
0x8B89CA: call    sub_8F5750
0x8B89CF: mov     ecx, [esp+4+arg_0]
0x8B89D3: mov     edx, [esp+4+arg_4]
0x8B89D7: mov     eax, [esp+4+arg_8]
0x8B89DB: mov     dword ptr [esi], offset off_A98060
0x8B89E1: movaps  xmm0, xmmword ptr [ecx]
0x8B89E4: mov     ecx, [esp+4+arg_C]
0x8B89E8: movaps  xmmword ptr [esi+20h], xmm0
0x8B89EC: movaps  xmm0, xmmword ptr [edx]
0x8B89EF: mov     edx, [esp+4+arg_10]
0x8B89F3: movaps  xmmword ptr [esi+30h], xmm0
0x8B89F7: mov     [esi+40h], eax
0x8B89FA: mov     [esi+44h], ecx
0x8B89FD: mov     [esi+4Ch], edx
0x8B8A00: mov     dword ptr [esi+48h], 437A0000h
0x8B8A07: mov     eax, esi
0x8B8A09: pop     esi
0x8B8A0A: retn    18h
