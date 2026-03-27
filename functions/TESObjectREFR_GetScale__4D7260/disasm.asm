0x4D7260: push    ecx
0x4D7261: push    esi
0x4D7262: mov     esi, ecx
0x4D7264: mov     eax, [esi]
0x4D7266: fld     dword ptr [esi+38h]
0x4D7269: mov     edx, [eax+170h]
0x4D726F: fstp    [esp+8+var_4]
0x4D7273: call    edx
0x4D7275: test    eax, eax
0x4D7277: jz      short loc_4D72A5
0x4D7279: mov     eax, [esi]
0x4D727B: mov     edx, [eax+170h]
0x4D7281: mov     ecx, esi
0x4D7283: call    edx
0x4D7285: cmp     byte ptr [eax+4], 24h ; '$'
0x4D7289: jnz     short loc_4D72A5
0x4D728B: mov     eax, [esi]
0x4D728D: mov     edx, [eax+170h]
0x4D7293: mov     ecx, esi
0x4D7295: call    edx
0x4D7297: fld     dword ptr [eax+114h]
0x4D729D: fmul    [esp+8+var_4]
0x4D72A1: fstp    [esp+8+var_4]
0x4D72A5: fld     [esp+8+var_4]
0x4D72A9: pop     esi
0x4D72AA: pop     ecx
0x4D72AB: retn
