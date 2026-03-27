0x8F06C0: push    esi
0x8F06C1: mov     esi, ecx
0x8F06C3: call    sub_8F0540
0x8F06C8: test    [esp+4+arg_0], 1
0x8F06CD: jz      short loc_8F06E2
0x8F06CF: movzx   edx, word ptr [esi+4]
0x8F06D3: mov     ecx, ds:0BA7D98h
0x8F06D9: mov     eax, [ecx]
0x8F06DB: push    24h ; '$'
0x8F06DD: push    edx
0x8F06DE: push    esi
0x8F06DF: call    dword ptr [eax+14h]
0x8F06E2: mov     eax, esi
0x8F06E4: pop     esi
0x8F06E5: retn    4
