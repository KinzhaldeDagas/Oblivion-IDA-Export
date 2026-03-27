0x6B7360: mov     eax, ecx
0x6B7362: mov     ecx, ds:0B3C214h
0x6B7368: test    ecx, ecx
0x6B736A: jz      short loc_6B7391
0x6B736C: fld     [esp+arg_8]
0x6B7370: mov     eax, [eax]
0x6B7372: sub     esp, 0Ch
0x6B7375: fstp    [esp+0Ch+var_4]; float
0x6B7379: fld     [esp+0Ch+arg_4]
0x6B737D: fstp    [esp+0Ch+var_8]; float
0x6B7381: fld     [esp+0Ch+arg_0]
0x6B7385: fstp    [esp+0Ch+var_C]; float
0x6B7388: push    eax; int
0x6B7389: call    sub_6ACBF0
0x6B738E: retn    0Ch
0x6B7391: mov     eax, 80004005h
0x6B7396: retn    0Ch
