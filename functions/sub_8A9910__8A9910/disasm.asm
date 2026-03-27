0x8A9910: push    esi
0x8A9911: mov     esi, ecx
0x8A9913: call    sub_8A9830
0x8A9918: test    [esp+4+arg_0], 1
0x8A991D: jz      short loc_8A9932
0x8A991F: movzx   edx, word ptr [esi+4]
0x8A9923: mov     ecx, ds:0BA7D98h
0x8A9929: mov     eax, [ecx]
0x8A992B: push    2Ah ; '*'
0x8A992D: push    edx
0x8A992E: push    esi
0x8A992F: call    dword ptr [eax+14h]
0x8A9932: mov     eax, esi
0x8A9934: pop     esi
0x8A9935: retn    4
