0x4C9AE0: push    esi
0x4C9AE1: mov     esi, ecx
0x4C9AE3: test    byte ptr [esi+24h], 1
0x4C9AE7: jnz     short loc_4C9B06
0x4C9AE9: mov     ecx, [esi+40h]
0x4C9AEC: push    edi
0x4C9AED: mov     edi, [esp+8+arg_0]
0x4C9AF1: cmp     ecx, edi
0x4C9AF3: jz      short loc_4C9B05
0x4C9AF5: test    ecx, ecx
0x4C9AF7: jz      short loc_4C9B02
0x4C9AF9: mov     eax, [ecx]
0x4C9AFB: mov     edx, [eax+10h]
0x4C9AFE: push    1
0x4C9B00: call    edx
0x4C9B02: mov     [esi+40h], edi
0x4C9B05: pop     edi
0x4C9B06: pop     esi
0x4C9B07: retn    4
