0x778CF0: push    ebx
0x778CF1: push    esi
0x778CF2: push    1Ch; Size
0x778CF4: call    FormHeapAlloc
0x778CF9: mov     esi, eax
0x778CFB: xor     ebx, ebx
0x778CFD: add     esp, 4
0x778D00: cmp     esi, ebx
0x778D02: jz      short loc_778D25
0x778D04: mov     ecx, esi
0x778D06: call    NiGeometryGroupManager__NiGeometryGrouypManager
0x778D0B: mov     dword ptr [esi], offset ??_7NiD3DGeometryGroupManager@@6B@; const NiD3DGeometryGroupManager::`vftable'
0x778D11: mov     [esi+4], ebx
0x778D14: mov     [esi+8], ebx
0x778D17: mov     [esi+0Ch], ebx
0x778D1A: mov     [esi+10h], ebx
0x778D1D: mov     [esi+14h], ebx
0x778D20: mov     [esi+18h], bl
0x778D23: jmp     short loc_778D27
0x778D25: xor     esi, esi
0x778D27: mov     eax, [esp+8+arg_0]
0x778D2B: mov     [esi+10h], eax
0x778D2E: mov     ecx, [eax]
0x778D30: mov     edx, [ecx+4]
0x778D33: push    eax
0x778D34: call    edx
0x778D36: mov     eax, [esp+8+arg_4]
0x778D3A: mov     [esi+14h], eax
0x778D3D: mov     eax, esi
0x778D3F: pop     esi
0x778D40: pop     ebx
0x778D41: retn
