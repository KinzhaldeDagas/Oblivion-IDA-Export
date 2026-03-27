0x402BD0: push    ecx
0x402BD1: mov     eax, [ecx+0Ch]
0x402BD4: test    eax, eax
0x402BD6: jz      short loc_402BE3
0x402BD8: fld     dword ptr [eax+24h]
0x402BDB: fstp    [esp+4+var_4]
0x402BDE: fld     [esp+4+var_4]
0x402BE1: pop     ecx
0x402BE2: retn
0x402BE3: fld     ds:flt_A2F918
0x402BE9: fstp    [esp+4+var_4]
0x402BEC: fld     [esp+4+var_4]
0x402BEF: pop     ecx
0x402BF0: retn
