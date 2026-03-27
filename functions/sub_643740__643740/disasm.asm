0x643740: push    esi
0x643741: mov     esi, ecx
0x643743: mov     ecx, ds:0B3BF80h
0x643749: test    ecx, ecx
0x64374B: jz      short loc_64375B
0x64374D: mov     eax, [esp+4+arg_0]
0x643751: test    eax, eax
0x643753: jz      short loc_64375B
0x643755: push    eax
0x643756: call    sub_6826D0
0x64375B: mov     ecx, [esi+34h]
0x64375E: test    ecx, ecx
0x643760: jz      short loc_64376A
0x643762: mov     eax, [ecx]
0x643764: mov     edx, [eax]
0x643766: push    1
0x643768: call    edx
0x64376A: mov     dword ptr [esi+34h], 0
0x643771: pop     esi
0x643772: retn    4
