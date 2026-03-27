0x942E60: push    esi
0x942E61: mov     esi, ecx
0x942E63: mov     ecx, [esi+8]
0x942E66: mov     dword ptr [esi], offset off_AA2444
0x942E6C: cmp     word ptr [ecx+4], 0
0x942E71: jz      short loc_942E84
0x942E73: dec     word ptr [ecx+6]
0x942E77: cmp     word ptr [ecx+6], 0
0x942E7C: jnz     short loc_942E84
0x942E7E: mov     eax, [ecx]
0x942E80: push    1
0x942E82: call    dword ptr [eax]
0x942E84: push    edi
0x942E85: mov     edi, [esi+0Ch]
0x942E88: test    edi, edi
0x942E8A: jz      short loc_942EA3
0x942E8C: mov     ecx, edi
0x942E8E: call    sub_8B0E60
0x942E93: mov     ecx, ds:0BA7D98h
0x942E99: mov     edx, [ecx]
0x942E9B: push    5
0x942E9D: push    0Ch
0x942E9F: push    edi
0x942EA0: call    dword ptr [edx+14h]
0x942EA3: test    [esp+8+arg_0], 1
0x942EA8: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x942EAE: pop     edi
0x942EAF: jz      short loc_942EC4
0x942EB1: movzx   edx, word ptr [esi+4]
0x942EB5: mov     ecx, ds:0BA7D98h
0x942EBB: mov     eax, [ecx]
0x942EBD: push    6
0x942EBF: push    edx
0x942EC0: push    esi
0x942EC1: call    dword ptr [eax+14h]
0x942EC4: mov     eax, esi
0x942EC6: pop     esi
0x942EC7: retn    4
