0x707580: cmp     [esp+arg_4], 0
0x707585: push    esi
0x707586: mov     esi, ecx
0x707588: jz      short loc_707599
0x70758A: fld     [esp+4+arg_0]
0x70758E: push    1; char
0x707590: push    ecx
0x707591: fstp    [esp+0Ch+var_C]; float
0x707594: call    sub_47C930
0x707599: mov     eax, [esi]
0x70759B: mov     edx, [eax+74h]
0x70759E: mov     ecx, esi
0x7075A0: call    edx
0x7075A2: mov     eax, [esi]
0x7075A4: mov     edx, [eax+78h]
0x7075A7: mov     ecx, esi
0x7075A9: call    edx
0x7075AB: pop     esi
0x7075AC: retn    8
