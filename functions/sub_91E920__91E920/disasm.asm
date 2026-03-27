0x91E920: mov     ecx, ds:0BA7D98h
0x91E926: mov     eax, [ecx]
0x91E928: push    0Eh
0x91E92A: push    38h ; '8'
0x91E92C: call    dword ptr [eax+10h]
0x91E92F: mov     ecx, [esp+arg_0]
0x91E933: push    ecx
0x91E934: mov     ecx, eax
0x91E936: mov     word ptr [eax+4], 38h ; '8'
0x91E93C: call    sub_91E7B0
0x91E941: test    eax, eax
0x91E943: jz      short loc_91E949
0x91E945: add     eax, 8
0x91E948: retn
0x91E949: xor     eax, eax
0x91E94B: retn
