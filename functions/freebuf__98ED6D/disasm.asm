0x98ED6D: push    esi
0x98ED6E: mov     esi, [esp+4+arg_0]
0x98ED72: mov     eax, [esi+0Ch]
0x98ED75: test    al, 83h
0x98ED77: jz      short loc_98ED97
0x98ED79: test    al, 8
0x98ED7B: jz      short loc_98ED97
0x98ED7D: push    dword ptr [esi+8]; Memory
0x98ED80: call    _free
0x98ED85: and     dword ptr [esi+0Ch], 0FFFFFBF7h
0x98ED8C: xor     eax, eax
0x98ED8E: pop     ecx
0x98ED8F: mov     [esi], eax
0x98ED91: mov     [esi+8], eax
0x98ED94: mov     [esi+4], eax
0x98ED97: pop     esi
0x98ED98: retn
