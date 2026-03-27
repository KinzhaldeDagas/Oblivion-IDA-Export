0x89DA50: fld     dword ptr ds:0A2FAA8h
0x89DA56: fld     [esp+arg_0]
0x89DA5A: fucompp
0x89DA5C: fnstsw  ax
0x89DA5E: test    ah, 44h
0x89DA61: jp      short loc_89DA6D
0x89DA63: mov     [esp+arg_0], 0
0x89DA6B: jmp     short loc_89DA7B
0x89DA6D: fld     dword ptr ds:0A2F948h
0x89DA73: fdiv    [esp+arg_0]
0x89DA77: fstp    [esp+arg_0]
0x89DA7B: mov     edx, [esp+arg_0]
0x89DA7F: mov     eax, [ecx]
0x89DA81: mov     [esp+arg_0], edx
0x89DA85: jmp     dword ptr [eax+24h]
