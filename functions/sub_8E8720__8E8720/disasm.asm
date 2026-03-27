0x8E8720: push    esi
0x8E8721: mov     esi, ecx
0x8E8723: mov     dword ptr [esi], offset off_A9ABC4
0x8E8729: call    sub_8E8A10
0x8E872E: test    [esp+4+arg_0], 1
0x8E8733: jz      short loc_8E8748
0x8E8735: movzx   edx, word ptr [esi+4]
0x8E8739: mov     ecx, ds:0BA7D98h
0x8E873F: mov     eax, [ecx]
0x8E8741: push    24h ; '$'
0x8E8743: push    edx
0x8E8744: push    esi
0x8E8745: call    dword ptr [eax+14h]
0x8E8748: mov     eax, esi
0x8E874A: pop     esi
0x8E874B: retn    4
