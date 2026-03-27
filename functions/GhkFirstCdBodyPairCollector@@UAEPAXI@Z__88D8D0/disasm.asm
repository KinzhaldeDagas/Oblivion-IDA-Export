0x88D8D0: test    byte ptr [esp+arg_0], 1
0x88D8D5: push    esi
0x88D8D6: mov     esi, ecx
0x88D8D8: mov     dword ptr [esi], offset ??_7hkCdBodyPairCollector@@6B@; const hkCdBodyPairCollector::`vftable'
0x88D8DE: jz      short loc_88D8F2
0x88D8E0: mov     ecx, ds:0BA7D98h
0x88D8E6: mov     eax, [ecx]
0x88D8E8: mov     edx, [eax+14h]
0x88D8EB: push    1Ch
0x88D8ED: push    8
0x88D8EF: push    esi
0x88D8F0: call    edx
0x88D8F2: mov     eax, esi
0x88D8F4: pop     esi
0x88D8F5: retn    4
