0x918F80: push    esi
0x918F81: mov     esi, ecx
0x918F83: mov     eax, [esi+2Ch]
0x918F86: test    eax, eax
0x918F88: jz      short loc_918FC7
0x918F8A: mov     ecx, [eax+8]
0x918F8D: test    ecx, ecx
0x918F8F: jz      short loc_918FA5
0x918F91: mov     ecx, [esi+28h]
0x918F94: push    eax
0x918F95: call    sub_89CCC0
0x918F9A: mov     eax, [esi+2Ch]
0x918F9D: mov     ecx, [eax+18h]
0x918FA0: call    sub_8A6410
0x918FA5: mov     ecx, [esi+2Ch]
0x918FA8: cmp     word ptr [ecx+4], 0
0x918FAD: jz      short loc_918FC0
0x918FAF: dec     word ptr [ecx+6]
0x918FB3: cmp     word ptr [ecx+6], 0
0x918FB8: jnz     short loc_918FC0
0x918FBA: mov     edx, [ecx]
0x918FBC: push    1
0x918FBE: call    dword ptr [edx]
0x918FC0: mov     dword ptr [esi+2Ch], 0
0x918FC7: mov     dword ptr [esi+28h], 0
0x918FCE: pop     esi
0x918FCF: retn
