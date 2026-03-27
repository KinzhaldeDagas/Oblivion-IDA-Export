0x4A9930: cmp     ecx, offset dword_B35788
0x4A9936: mov     eax, [esp+arg_4]
0x4A993A: jz      short loc_4A995B
0x4A993C: mov     ecx, [esp+arg_8]
0x4A9940: cmp     eax, ecx
0x4A9942: jz      short loc_4A995B
0x4A9944: push    ecx
0x4A9945: push    eax
0x4A9946: mov     eax, [esp+8+arg_0]
0x4A994A: push    offset aDD; "%d(%d)"
0x4A994F: push    eax
0x4A9950: call    __sprintf
0x4A9955: add     esp, 10h
0x4A9958: retn    0Ch
0x4A995B: mov     ecx, [esp+arg_0]
0x4A995F: push    eax
0x4A9960: push    offset aD_0; "%d"
0x4A9965: push    ecx
0x4A9966: call    __sprintf
0x4A996B: add     esp, 0Ch
0x4A996E: retn    0Ch
