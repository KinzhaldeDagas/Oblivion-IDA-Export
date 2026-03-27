0x8993A0: push    esi
0x8993A1: mov     esi, ecx
0x8993A3: call    sub_8DA1D0
0x8993A8: test    [esp+4+arg_0], 1
0x8993AD: jz      short loc_8993C2
0x8993AF: movzx   edx, word ptr [esi+4]
0x8993B3: mov     ecx, ds:0BA7D98h
0x8993B9: mov     eax, [ecx]
0x8993BB: push    24h ; '$'
0x8993BD: push    edx
0x8993BE: push    esi
0x8993BF: call    dword ptr [eax+14h]
0x8993C2: mov     eax, esi
0x8993C4: pop     esi
0x8993C5: retn    4
