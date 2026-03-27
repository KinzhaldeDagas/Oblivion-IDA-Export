0x7791C0: push    esi
0x7791C1: mov     esi, ecx
0x7791C3: mov     eax, [esi+10h]
0x7791C6: test    eax, eax
0x7791C8: mov     dword ptr [esi], offset ??_7NiD3DShaderInterface@@6B@; const NiD3DShaderInterface::`vftable'
0x7791CE: mov     dword ptr [esi+14h], 0
0x7791D5: mov     dword ptr [esi+18h], 0
0x7791DC: jz      short loc_7791E6
0x7791DE: mov     ecx, [eax]
0x7791E0: mov     edx, [ecx+8]
0x7791E3: push    eax
0x7791E4: call    edx
0x7791E6: mov     ecx, esi
0x7791E8: mov     dword ptr [esi+10h], 0
0x7791EF: call    sub_738600
0x7791F4: test    [esp+4+arg_0], 1
0x7791F9: jz      short loc_779204
0x7791FB: push    esi
0x7791FC: call    FormHeapFree
0x779201: add     esp, 4
0x779204: mov     eax, esi
0x779206: pop     esi
0x779207: retn    4
