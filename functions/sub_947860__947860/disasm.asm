0x947860: mov     ecx, ds:0BA7D98h
0x947866: mov     eax, [ecx]
0x947868: push    32h ; '2'
0x94786A: push    24h ; '$'
0x94786C: call    dword ptr [eax+10h]
0x94786F: mov     ecx, eax
0x947871: mov     word ptr [eax+4], 24h ; '$'
0x947877: call    sub_9477C0
0x94787C: test    eax, eax
0x94787E: jz      short loc_947884
0x947880: add     eax, 8
0x947883: retn
0x947884: xor     eax, eax
0x947886: retn
