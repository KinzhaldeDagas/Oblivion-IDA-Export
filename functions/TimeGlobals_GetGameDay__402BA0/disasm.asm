0x402BA0: push    ecx
0x402BA1: mov     eax, [ecx+8]
0x402BA4: test    eax, eax
0x402BA6: jz      short loc_402BB9
0x402BA8: fld     dword ptr [eax+24h]
0x402BAB: fstp    [esp+4+var_4]
0x402BAE: fld     [esp+4+var_4]
0x402BB1: add     esp, 4
0x402BB4: jmp     Double_To_SInt32
0x402BB9: fld     ds:flt_A2F944
0x402BBF: fstp    [esp+4+var_4]
0x402BC2: fld     [esp+4+var_4]
0x402BC5: add     esp, 4
0x402BC8: jmp     Double_To_SInt32
