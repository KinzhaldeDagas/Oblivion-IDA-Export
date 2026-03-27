0x8DB0F0: push    esi
0x8DB0F1: mov     esi, ecx
0x8DB0F3: call    sub_8DAD30
0x8DB0F8: test    [esp+4+arg_0], 1
0x8DB0FD: jz      short loc_8DB112
0x8DB0FF: movzx   edx, word ptr [esi+4]
0x8DB103: mov     ecx, ds:0BA7D98h
0x8DB109: mov     eax, [ecx]
0x8DB10B: push    24h ; '$'
0x8DB10D: push    edx
0x8DB10E: push    esi
0x8DB10F: call    dword ptr [eax+14h]
0x8DB112: mov     eax, esi
0x8DB114: pop     esi
0x8DB115: retn    4
