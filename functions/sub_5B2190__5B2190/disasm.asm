0x5B2190: mov     eax, [esp+arg_0]
0x5B2194: test    eax, eax
0x5B2196: push    esi
0x5B2197: mov     esi, ecx
0x5B2199: mov     [esi], eax
0x5B219B: jz      short loc_5B21D1
0x5B219D: mov     ecx, [eax+0Ch]
0x5B21A0: mov     edx, [ecx+1Ch]
0x5B21A3: mov     ecx, [edx+58h]
0x5B21A6: shr     ecx, 8
0x5B21A9: test    cl, 1
0x5B21AC: jnz     short loc_5B21D1
0x5B21AE: fld     dword ptr [eax+18h]
0x5B21B1: fabs
0x5B21B3: fstp    [esp+4+arg_0]
0x5B21B7: fld     [esp+4+arg_0]
0x5B21BB: fstp    [esp+4+arg_0]
0x5B21BF: fld     [esp+4+arg_0]
0x5B21C3: call    Double_To_SInt32
0x5B21C8: mov     [esi+4], eax
0x5B21CB: mov     eax, esi
0x5B21CD: pop     esi
0x5B21CE: retn    4
0x5B21D1: fld     dword ptr ds:0A30634h
0x5B21D7: fstp    [esp+4+arg_0]
0x5B21DB: fld     [esp+4+arg_0]
0x5B21DF: call    Double_To_SInt32
0x5B21E4: mov     [esi+4], eax
0x5B21E7: mov     eax, esi
0x5B21E9: pop     esi
0x5B21EA: retn    4
